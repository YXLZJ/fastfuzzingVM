# Evaluating Fast VM Technics for Fuzzing.

## Instruction Set

There are five different types of instructions supported by the virtual machine.

| Instruction                      | Behavior                                                                                     |
|----------------------------------|----------------------------------------------------------------------------------------------|
| Terminals                        | Output strings to the buffer(Generated by grammar)                                                                |
| Non-terminals                    | Store the context into the calling stack; randomly choose a sub-program(sub-node in the grammar), and switch to it.(Generated by grammar) |
| Production Rules (expression)    | Store the context and push it into the calling stack; Switch to the program this production rule represents.(Generated by grammar) |
| RET                              | Pop the calling stack, re-store the program and IP                                           |
| HALT                             | Halt the virtual machine immediately                                                         |


## Threading Models 

### Direct Threading Model

In the direct threading model, each operation code directly points to its corresponding execution code. This means that when an opcode is executed, it jumps directly to the code that implements that operation.

The example of instruction Table:
``` Forth
' RET instructions 0 cells + ! 
' HALT instructions 1 cells + ! 
' func_5527066576 instructions 2 cells + ! 
' func_5527066704 instructions 3 cells + ! 
' func_5527066128 instructions 4 cells + ! 
' func_5527066400 instructions 5 cells + ! 
' func_5527066256 instructions 6 cells + ! 
' func_5527066192 instructions 7 cells + ! 
' func_5527067568 instructions 8 cells + ! 
' func_5527066896 instructions 9 cells + ! 
' func_5527067760 instructions 10 cells + ! 
' func_5527067984 instructions 11 cells + ! 
' func_5527068112 instructions 12 cells + ! 
' func_5527068304 instructions 13 cells + ! 
' func_5527068432 instructions 14 cells + ! 
' func_5527068560 instructions 15 cells + ! 
' func_5527068688 instructions 16 cells + ! 
' func_5527068240 instructions 17 cells + ! 
' func_5527069088 instructions 18 cells + ! 
' func_5527067264 instructions 19 cells + ! 
' func_5527067824 instructions 20 cells + ! 
' func_5527069408 instructions 21 cells + ! 
' func_5527066960 instructions 22 cells + ! 
' func_5527069536 instructions 23 cells + ! 
' func_5527069664 instructions 24 cells + ! 
' func_5527069824 instructions 25 cells + ! 
' func_5527070112 instructions 26 cells + ! 
' func_5527070240 instructions 27 cells + ! 
' func_5527070368 instructions 28 cells + ! 
' func_5527070496 instructions 29 cells + ! 
```

Example of terminal instrution
``` Forth
: func_94601359250096 ( -- )
    120 extend-char
    109 extend-char
    112 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    instructions ip @ @ cells + @ execute ;
```

Example of non-terminal instrution
``` Forth

create func_94601359144576_op0 2 cells allot
500 func_94601359144576_op0 0 cells + !
0 func_94601359144576_op0 1 cells + !

create func_94601359144576_op1 2 cells allot
501 func_94601359144576_op1 0 cells + !
0 func_94601359144576_op1 1 cells + !

: func_94601359144576 ( -- )
    getdepth  maxdepth @ > if
         ip @ 1 cells + ip ! \ increment the instruction pointer
         instructions ip @ @ cells + @ execute 
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        2 random
        case
            0 of
                func_94601359144576_op0 ip ! endof
            1 of
                func_94601359144576_op1 ip ! endof
        endcase
        instructions ip @ @ cells + @ execute 
    endif ; 
```

Example of production rule
``` Forth
create exp_94601359220720 3 cells allot
95 exp_94601359220720 0 cells + !
94 exp_94601359220720 1 cells + !
0 exp_94601359220720 2 cells + !
: func_94601359220720 ( -- )
    getdepth  maxdepth @ > if
        60 extend-char 
        104 extend-char 
        114 extend-char 
        62 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    instructions ip @ @ cells + @ execute 
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_94601359220720 ip !
    instructions ip @ @ cells + @ execute 
    endif ; 
```
The contol flow of the program is leaded by NETXI and SWITCH

The instruction pointer(IP) always indicate to the next instruction to be executed, to make sure the calling processing is Direct Threading Model as it may be impacted by the runtime of Forth, all instructions are generated with Continuation-Passing Style(CPS) so that making sure that Tail Call Optimization(TCO) enables if supported, instruction switching are always be executed as the last statement.

How to use
```
$ clang++ -std=c++20 -stdlib=libc++ DT_generator.cpp -o generator
./generator -path <grammar.json> -depth <depth of recursion> -o <output forth file> [--show(enable enable benchmark)]
```
C++ is used to compile grammars into virtual machine, please make sure your C++ toolchain support C++20 or above.