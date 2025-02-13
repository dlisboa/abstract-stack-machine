#include <stdio.h>
#include <stdlib.h>

// max instructions
#define NPROG 15
// max stack
#define NSTACK 5

typedef void (*op)(void);
typedef enum { NUM, OP, } type;
typedef struct instruction {
  type type;
  union {
    int data;
    op op;
  } u;
} instruction;

void die(const char* s) {
  puts(s);
  exit(1);
}

char* inspect_instruction(instruction i) {
  char* buf = malloc(sizeof(char) * 100);
  if (buf == nullptr) {
    die("out of memory");
  }
  snprintf(buf, 100, "instruction{type:%d, u.data:%d, u.op:%p}", i.type, i.u.data, (void*)i.u.op);
  return buf;
}

// program is a sequence of instructions
instruction program[NPROG] = {};
// progp points to the next free sport for code generation, starts at program[0]
instruction *progp;
// for program execution, pc points to the next instruction to execute; starts
// at program[0]
instruction *pc;

// frame is a single stack frame; in our case we only deal with ints but could
// be other types as well
typedef union frame { int val; } frame; 
// stack is a sequence of frames
frame stack[NSTACK];
// stackp points to the next free spot on the stack
frame *stackp;

void inspectstack() {
  puts("\tstack:");

  puts("\t\t-- top --");
  for (int i=NSTACK-1; i >=0; i--) {
    if (stackp == &stack[i]) {
      printf("%16s%p: |%d|\n", "stackp --> ", (void*)&stack[i].val, stack[i].val);
    } else if (stackp == &stack[i] + 1) {
      printf("%16s%p: |%d|\n", "top --> ", (void*)&stack[i].val, stack[i].val);
    } else {
      printf("\t\t%p: |%d|\n", (void*)&stack[i].val, stack[i].val);
    }
  }
  puts("\t\t-- bottom --");
}

void push(frame f) {
  if (stackp >= &stack[NSTACK]) {
    die("prog: stack overflow");
  }
  // generate frame and push it onto stack
  // can also be done with *stackp++ = f; this is more educational
  *stackp = f;
  stackp++;
  printf("\t* exec: push: %d\n", f.val);
  inspectstack();
}

frame pop() {
  if (stackp <= stack) {
    die("prog: stack underflow");
  }
  // can also be done with *--stackp; this is more educational
  stackp--;
  frame f = *stackp;

  printf("\t* exec: pop: %d\n", f.val);
  inspectstack();

  return f;
}

void add() {
  frame f1 = pop();
  frame f2 = pop();

  // reuse f1 to avoid allocating a new frame in the runtime
  f1.val = f1.val + f2.val;
  printf("\t* exec: add: %d\n", f1.val);
  push(f1);
}

void sub() {
  frame f1 = pop();
  frame f2 = pop();

  // reuse f1 to avoid allocating a new frame in the runtime
  f1.val = f2.val - f1.val;
  printf("\t* exec: sub: %d\n", f1.val);
  push(f1);
}

// pop top of the stack, prints it
void print() {
  frame f = pop();
  printf("\t>>> output: %d <<<\n", f.val);
}

// noop
void stop() {}

// uses the next instruction in the program as data; creates a frame with it and
// pushes into the stack; increments the program counter (the execute loop will
// increment once more and skip the data instruction).
void constpush() {
  if (progp >= &program[NPROG]) {
    die("program too big");
  }

  instruction* next = pc+1;
  frame f = {.val = next->u.data};
  push(f);
  pc++;
}

struct inst {
  char* name;
  op op;
} oplist[] = {
  {"add", add},
  {"sub", sub},
  {"print", print},
  {"stop", stop},
  {"constpush", constpush},
  {NULL, NULL},
};

// for printing purposes, so we can see what the current OP is
char* lookup(op fn) {
  struct inst *i;
  for (i = oplist; i->op != NULL; i++) {
    if (i->op == fn) {
      return i->name;
    }
  }
  return "<not found>";
}

// adds instruction to the beginning of program array; increments the pointer to
// next available instruction slot
void pushinstruction(char* s, instruction i) {
  void inspectprogram();
  
  if (progp >= &program[NPROG]) {
    die("program too big");
  }
  *progp++ = i;

  printf("\t* exec: pushinstruction: %s\n\t* %s\n", s, inspect_instruction(i));
  inspectprogram();
}

void printable() {
  char* arrowprogp = "progp --> ";
  char* arrowpc = "pc --> ";

  for (int i=0; i < NPROG; i++) {
    char *rest = "";
    if (progp == &program[i]) {
      rest = arrowprogp;
    }
    if (pc == &program[i]) {
      rest = arrowpc;
    }
    const char *funcname = "";

    char *typ = program[i].type == NUM ? "NUM" : "OP";
    if (program[i].type == OP) {
      funcname = lookup(program[i].u.op);
      printf("%16s%p: |%p| (%s) [%s]\n", rest, (void*)&program[i], (void*)program[i].u.op, funcname, typ);
    } else {
      printf("%16s%p: |%d| [%s]\n", rest, (void*)&program[i], program[i].u.data, typ);
    }
  }
}

void inspectprogram() {
  puts("\tprogram:");
  puts("\t\t-- start --");
  printable();
  puts("\t\t-- end --");
}

void inspectpointers() {
  puts("\tpointers:");
  printf("\t\tpc: %p\n", (void*)pc);
  printf("\t\tprogp: %p\n", (void*)progp);
  printf("\t\tprogram: %p\n", (void*)program);
  printf("\t\tstackp: %p\n", (void*)stackp);
}

void inspectmachine() {
  // inspectops();
  // inspectpointers();
  inspectstack();
  inspectprogram();
}

// starts at program[0] and executes each op of the instruction until it reaches
// a sentinel value of stop
void execute() {
  int step = 0;
  for (pc = program; pc->u.op != stop; pc++, step++) {
    printf("step[%d]:\n", step);

    printf("[%d] before:\n", step);
    inspectmachine();

    printf("[%d] executing: %s\n", step, lookup(pc->u.op));
    pc->u.op();

    printf("[%d] after:\n", step);
    inspectmachine();
  }
}

int main() {
  // init stack and program pointers
  stackp = stack;
  progp = program;

  puts("== initial state, machine at rest");
  inspectmachine();

  puts("== adding program and stack");
  // this would be part of the code generation phase of a compiler
  // program is: print(1 + 2 + 3 - 1)
  pushinstruction("constpush", (instruction){.type = OP, .u.op = constpush});
  pushinstruction("1", (instruction){.type = NUM, .u.data = 1});
  pushinstruction("constpush", (instruction){.type = OP, .u.op = constpush});
  pushinstruction("2", (instruction){.type = NUM, .u.data = 2});
  pushinstruction("add", (instruction){.type = OP, .u.op = add});
  pushinstruction("constpush", (instruction){.type = OP, .u.op = constpush});
  pushinstruction("3", (instruction){.type = NUM, .u.data = 3});
  pushinstruction("add", (instruction){.type = OP, .u.op = add});
  pushinstruction("constpush", (instruction){.type = OP, .u.op = constpush});
  pushinstruction("1", (instruction){.type = NUM, .u.data = 1});
  pushinstruction("sub", (instruction){.type = OP, .u.op = sub});
  pushinstruction("print", (instruction){.type = OP, .u.op = print});
  pushinstruction("stop", (instruction){.type = OP, .u.op = stop});

  puts("== execution");
  execute();

  puts("== end");
}
