# Abstract Stack Machine

An _Abstract Stack Machine_, based on principles from:

- _The Dragon Book_, Avo, Sethi, Ullman
- _The Unix Programming Environment_, Kernighan, Pike

Sample output:

```
$ ./prog
== initial state, machine at rest
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |0|
     stackp --> 0x1009d4160: |0|
		-- bottom --
	program:
		-- start --
      progp --> 0x1009d4060: |0| [NUM]
                0x1009d4070: |0| [NUM]
                0x1009d4080: |0| [NUM]
                0x1009d4090: |0| [NUM]
                0x1009d40a0: |0| [NUM]
                0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
== adding program and stack
	* exec: pushinstruction: constpush
	* instruction{type:1, u.data:10286120, u.op:0x1009cf428}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
      progp --> 0x1009d4070: |0| [NUM]
                0x1009d4080: |0| [NUM]
                0x1009d4090: |0| [NUM]
                0x1009d40a0: |0| [NUM]
                0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: 1
	* instruction{type:0, u.data:1, u.op:0x100000001}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
      progp --> 0x1009d4080: |0| [NUM]
                0x1009d4090: |0| [NUM]
                0x1009d40a0: |0| [NUM]
                0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: constpush
	* instruction{type:1, u.data:10286120, u.op:0x1009cf428}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
      progp --> 0x1009d4090: |0| [NUM]
                0x1009d40a0: |0| [NUM]
                0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: 2
	* instruction{type:0, u.data:2, u.op:0x100000002}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
      progp --> 0x1009d40a0: |0| [NUM]
                0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: add
	* instruction{type:1, u.data:10285864, u.op:0x1009cf328}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
      progp --> 0x1009d40b0: |0| [NUM]
                0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: constpush
	* instruction{type:1, u.data:10286120, u.op:0x1009cf428}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
      progp --> 0x1009d40c0: |0| [NUM]
                0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: 3
	* instruction{type:0, u.data:3, u.op:0x100000003}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
      progp --> 0x1009d40d0: |0| [NUM]
                0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: add
	* instruction{type:1, u.data:10285864, u.op:0x1009cf328}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
      progp --> 0x1009d40e0: |0| [NUM]
                0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: constpush
	* instruction{type:1, u.data:10286120, u.op:0x1009cf428}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
      progp --> 0x1009d40f0: |0| [NUM]
                0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: 1
	* instruction{type:0, u.data:1, u.op:0x1}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
      progp --> 0x1009d4100: |0| [NUM]
                0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: sub
	* instruction{type:1, u.data:10285960, u.op:0x1009cf388}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
      progp --> 0x1009d4110: |0| [NUM]
                0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: print
	* instruction{type:1, u.data:10286056, u.op:0x1009cf3e8}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
      progp --> 0x1009d4120: |0| [NUM]
                0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
	* exec: pushinstruction: stop
	* instruction{type:1, u.data:10286116, u.op:0x1009cf424}
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
== execution
step[0]:
[0] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |0|
     stackp --> 0x1009d4160: |0|
		-- bottom --
	program:
		-- start --
         pc --> 0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[0] executing: constpush
	* exec: push: 1
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |0|
        top --> 0x1009d4160: |1|
		-- bottom --
[0] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |0|
        top --> 0x1009d4160: |1|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
         pc --> 0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[1]:
[1] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |0|
        top --> 0x1009d4160: |1|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
         pc --> 0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[1] executing: constpush
	* exec: push: 2
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |2|
		0x1009d4160: |1|
		-- bottom --
[1] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |2|
		0x1009d4160: |1|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
         pc --> 0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[2]:
[2] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |2|
		0x1009d4160: |1|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
         pc --> 0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[2] executing: add
	* exec: pop: 2
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |2|
        top --> 0x1009d4160: |1|
		-- bottom --
	* exec: pop: 1
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |2|
     stackp --> 0x1009d4160: |1|
		-- bottom --
	* exec: add: 3
	* exec: push: 3
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |2|
        top --> 0x1009d4160: |3|
		-- bottom --
[2] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |2|
        top --> 0x1009d4160: |3|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
         pc --> 0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[3]:
[3] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |2|
        top --> 0x1009d4160: |3|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
         pc --> 0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[3] executing: constpush
	* exec: push: 3
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |3|
		0x1009d4160: |3|
		-- bottom --
[3] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |3|
		0x1009d4160: |3|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
         pc --> 0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[4]:
[4] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |3|
		0x1009d4160: |3|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
         pc --> 0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[4] executing: add
	* exec: pop: 3
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |3|
        top --> 0x1009d4160: |3|
		-- bottom --
	* exec: pop: 3
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |3|
     stackp --> 0x1009d4160: |3|
		-- bottom --
	* exec: add: 6
	* exec: push: 6
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |3|
        top --> 0x1009d4160: |6|
		-- bottom --
[4] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |3|
        top --> 0x1009d4160: |6|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
         pc --> 0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[5]:
[5] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |3|
        top --> 0x1009d4160: |6|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
         pc --> 0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[5] executing: constpush
	* exec: push: 1
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |1|
		0x1009d4160: |6|
		-- bottom --
[5] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |1|
		0x1009d4160: |6|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
         pc --> 0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[6]:
[6] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
     stackp --> 0x1009d4168: |0|
        top --> 0x1009d4164: |1|
		0x1009d4160: |6|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
         pc --> 0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[6] executing: sub
	* exec: pop: 1
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |1|
        top --> 0x1009d4160: |6|
		-- bottom --
	* exec: pop: 6
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |1|
     stackp --> 0x1009d4160: |6|
		-- bottom --
	* exec: sub: 5
	* exec: push: 5
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |1|
        top --> 0x1009d4160: |5|
		-- bottom --
[6] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |1|
        top --> 0x1009d4160: |5|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
         pc --> 0x1009d4100: |0x1009cf388| (sub) [OP]
                0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
step[7]:
[7] before:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
     stackp --> 0x1009d4164: |1|
        top --> 0x1009d4160: |5|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
         pc --> 0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
[7] executing: print
	* exec: pop: 5
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |1|
     stackp --> 0x1009d4160: |5|
		-- bottom --
	>>> output: 5 <<<
[7] after:
	stack:
		-- top --
		0x1009d4170: |0|
		0x1009d416c: |0|
		0x1009d4168: |0|
		0x1009d4164: |1|
     stackp --> 0x1009d4160: |5|
		-- bottom --
	program:
		-- start --
                0x1009d4060: |0x1009cf428| (constpush) [OP]
                0x1009d4070: |1| [NUM]
                0x1009d4080: |0x1009cf428| (constpush) [OP]
                0x1009d4090: |2| [NUM]
                0x1009d40a0: |0x1009cf328| (add) [OP]
                0x1009d40b0: |0x1009cf428| (constpush) [OP]
                0x1009d40c0: |3| [NUM]
                0x1009d40d0: |0x1009cf328| (add) [OP]
                0x1009d40e0: |0x1009cf428| (constpush) [OP]
                0x1009d40f0: |1| [NUM]
                0x1009d4100: |0x1009cf388| (sub) [OP]
         pc --> 0x1009d4110: |0x1009cf3e8| (print) [OP]
                0x1009d4120: |0x1009cf424| (stop) [OP]
      progp --> 0x1009d4130: |0| [NUM]
                0x1009d4140: |0| [NUM]
		-- end --
== end
```
