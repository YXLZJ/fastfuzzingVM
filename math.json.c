include random.fs
variable buffer-pos
create string-buffers 1024 1024 * chars allot

create instructions 1000 cells allot 


variable running \ the status of the program 1-> running 0-> halt
1 running !

variable ip \ init instruction pointer
0 ip !

create rstack \ Return stack for keeping return addresses 
1 cells allot
variable rsp
rstack rsp !

variable program \ the pointer to indicate the current program

: PRINT ( n -- )
  dup . ;

: add-string ( addr len -- )
    buffer-pos @
    over string-buffers + swap move
    buffer-pos @ + buffer-pos !
;

: print-strings ( -- )
    0 buffer-pos @ do
        i string-buffers + i cells + @ PRINT
    loop
    buffer-pos @ 0 buffer-pos ! ;

: extend { addr-from u }
    addr-from string-buffers buffer-pos @ chars + u move
    buffer-pos @ u  + buffer-pos ! ;

: extend-char ( n -- )
    buffer-pos @ string-buffers chars + !
    buffer-pos @ 1 + buffer-pos ! ;

: output ( -- )
    string-buffers buffer-pos @ type cr
    0 buffer-pos ! ;

: getdepth ( -- )
    rsp @ rstack - 1 cells / ;

( ------------------------------------------------- )

: HALT ( -- )
    0 running ! ;

( ------------------------------------------------- )

: RET ( -- )

    rsp @ 1 cells - rsp ! \ decrement the return stack pointer
    rsp @ @ ip ! \ pop the return address from the return stack 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ;

( ------------------------------------------------- )

variable maxdepth \ the maximum depth of the stack
1 maxdepth !

create init-program 2 cells allot 
create func_4880102032_op0 2 cells allot
create func_4880102032_op1 2 cells allot
create func_4880102032_op2 2 cells allot
create func_4880102032_op3 2 cells allot
create func_4880102032_op4 2 cells allot
create func_4880102032_op5 2 cells allot
create func_4880102032_op6 2 cells allot
create func_4880102032_op7 2 cells allot
create func_4880102032_op8 2 cells allot
create func_4880102032_op9 2 cells allot
create func_4880102160_op0 2 cells allot
create func_4880102160_op1 2 cells allot
create func_4880102160_op2 2 cells allot
create func_4880101584_op0 2 cells allot
create func_4880101584_op1 2 cells allot
create func_4880101856_op0 2 cells allot
create func_4880101856_op1 2 cells allot
create func_4880101712_op0 2 cells allot
create func_4880101648_op0 2 cells allot
create func_4880101648_op1 2 cells allot
create func_4880101648_op2 2 cells allot
create exp_4880102976 4 cells allot
create exp_4880103296 4 cells allot
create exp_4891623824 4 cells allot
create exp_4891623728 3 cells allot
create exp_4891623664 4 cells allot
create exp_4891624864 4 cells allot
( ------------------------------------------------- )

: func_4880102032 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        10 random
        case
            0 of
                func_4880102032_op0 ip ! endof
            1 of
                func_4880102032_op1 ip ! endof
            2 of
                func_4880102032_op2 ip ! endof
            3 of
                func_4880102032_op3 ip ! endof
            4 of
                func_4880102032_op4 ip ! endof
            5 of
                func_4880102032_op5 ip ! endof
            6 of
                func_4880102032_op6 ip ! endof
            7 of
                func_4880102032_op7 ip ! endof
            8 of
                func_4880102032_op8 ip ! endof
            9 of
                func_4880102032_op9 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880102160 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        3 random
        case
            0 of
                func_4880102160_op0 ip ! endof
            1 of
                func_4880102160_op1 ip ! endof
            2 of
                func_4880102160_op2 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880101584 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        2 random
        case
            0 of
                func_4880101584_op0 ip ! endof
            1 of
                func_4880101584_op1 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880101856 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        2 random
        case
            0 of
                func_4880101856_op0 ip ! endof
            1 of
                func_4880101856_op1 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880101712 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        1 random
        case
            0 of
                func_4880101712_op0 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880101648 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char
         ip @ 1 cells + ip ! \ increment the instruction pointer
    else
        ip @ 
        rsp @ ! \ push the return address to the return stack 
        rsp @ 1 cells + rsp !  \ increment the return stack pointer 
        3 random
        case
            0 of
                func_4880101648_op0 ip ! endof
            1 of
                func_4880101648_op1 ip ! endof
            2 of
                func_4880101648_op2 ip ! endof
        endcase
    endif ; 

( ------------------------------------------------- )

: func_4880103040 ( -- )
    48 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880102352 ( -- )
    49 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103232 ( -- )
    50 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103456 ( -- )
    51 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103584 ( -- )
    52 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103776 ( -- )
    53 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103904 ( -- )
    54 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880104032 ( -- )
    55 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880104160 ( -- )
    56 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103712 ( -- )
    57 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880102976 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char 
        43 extend-char 
        57 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4880102976 ip !
    endif ; 

( ------------------------------------------------- )

: func_4880102640 ( -- )
    43 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4880103296 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char 
        45 extend-char 
        57 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4880103296 ip !
    endif ; 

( ------------------------------------------------- )

: func_4880104816 ( -- )
    45 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4891623824 ( -- )
    getdepth  maxdepth @ > if
        40 extend-char 
        57 extend-char 
        41 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4891623824 ip !
    endif ; 

( ------------------------------------------------- )

: func_4891623952 ( -- )
    40 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4891624112 ( -- )
    41 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4891623728 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char 
        57 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4891623728 ip !
    endif ; 

( ------------------------------------------------- )

: func_4891623664 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char 
        42 extend-char 
        57 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4891623664 ip !
    endif ; 

( ------------------------------------------------- )

: func_4891624704 ( -- )
    42 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

( ------------------------------------------------- )

: func_4891624864 ( -- )
    getdepth  maxdepth @ > if
        57 extend-char 
        47 extend-char 
        57 extend-char 
    ip @ 1 cells + ip ! \ increment the instruction pointer
    else
    ip @ 
    rsp @ ! \ push the return address to the return stack 
    rsp @ 1 cells + rsp !  \ increment the return stack pointer 
    exp_4891624864 ip !
    endif ; 

( ------------------------------------------------- )

: func_4891624992 ( -- )
    47 extend-char
    ip @ 1 cells + ip ! \ increment the instruction pointer
    ; 

' func_4880103040 func_4880102032_op0 0 cells + !
' RET func_4880102032_op0 1 cells + !

' func_4880102352 func_4880102032_op1 0 cells + !
' RET func_4880102032_op1 1 cells + !

' func_4880103232 func_4880102032_op2 0 cells + !
' RET func_4880102032_op2 1 cells + !

' func_4880103456 func_4880102032_op3 0 cells + !
' RET func_4880102032_op3 1 cells + !

' func_4880103584 func_4880102032_op4 0 cells + !
' RET func_4880102032_op4 1 cells + !

' func_4880103776 func_4880102032_op5 0 cells + !
' RET func_4880102032_op5 1 cells + !

' func_4880103904 func_4880102032_op6 0 cells + !
' RET func_4880102032_op6 1 cells + !

' func_4880104032 func_4880102032_op7 0 cells + !
' RET func_4880102032_op7 1 cells + !

' func_4880104160 func_4880102032_op8 0 cells + !
' RET func_4880102032_op8 1 cells + !

' func_4880103712 func_4880102032_op9 0 cells + !
' RET func_4880102032_op9 1 cells + !

' func_4880102976 func_4880102160_op0 0 cells + !
' RET func_4880102160_op0 1 cells + !

' func_4880103296 func_4880102160_op1 0 cells + !
' RET func_4880102160_op1 1 cells + !

' func_4880101648 func_4880102160_op2 0 cells + !
' RET func_4880102160_op2 1 cells + !

' func_4891623824 func_4880101584_op0 0 cells + !
' RET func_4880101584_op0 1 cells + !

' func_4880101856 func_4880101584_op1 0 cells + !
' RET func_4880101584_op1 1 cells + !

' func_4891623728 func_4880101856_op0 0 cells + !
' RET func_4880101856_op0 1 cells + !

' func_4880102032 func_4880101856_op1 0 cells + !
' RET func_4880101856_op1 1 cells + !

' func_4880102160 func_4880101712_op0 0 cells + !
' RET func_4880101712_op0 1 cells + !

' func_4891623664 func_4880101648_op0 0 cells + !
' RET func_4880101648_op0 1 cells + !

' func_4891624864 func_4880101648_op1 0 cells + !
' RET func_4880101648_op1 1 cells + !

' func_4880101584 func_4880101648_op2 0 cells + !
' RET func_4880101648_op2 1 cells + !

' func_4880101648 exp_4880102976 0 cells + !
' func_4880102640 exp_4880102976 1 cells + !
' func_4880102160 exp_4880102976 2 cells + !
' RET exp_4880102976 3 cells + !
' func_4880101648 exp_4880103296 0 cells + !
' func_4880104816 exp_4880103296 1 cells + !
' func_4880102160 exp_4880103296 2 cells + !
' RET exp_4880103296 3 cells + !
' func_4891623952 exp_4891623824 0 cells + !
' func_4880102160 exp_4891623824 1 cells + !
' func_4891624112 exp_4891623824 2 cells + !
' RET exp_4891623824 3 cells + !
' func_4880102032 exp_4891623728 0 cells + !
' func_4880101856 exp_4891623728 1 cells + !
' RET exp_4891623728 2 cells + !
' func_4880101584 exp_4891623664 0 cells + !
' func_4891624704 exp_4891623664 1 cells + !
' func_4880101648 exp_4891623664 2 cells + !
' RET exp_4891623664 3 cells + !
' func_4880101584 exp_4891624864 0 cells + !
' func_4891624992 exp_4891624864 1 cells + !
' func_4880101648 exp_4891624864 2 cells + !
' RET exp_4891624864 3 cells + !
create init-program 2 cells allot 
' func_4880101712 init-program 0 cells + ! 
' HALT init-program 1 cells + ! 
: mainloop
    1 running !
    0 buffer-pos !
    begin
        running @
    while
        ip @  @ execute
    repeat
;
variable start  \ Stores the start time for performance measurement
variable sum    \ Accumulates the sum of values for throughput calculation
0 sum ! 
: exe ( -- )
    utime start !  \ Record the start time in microseconds
    0 
    begin  \ Start an infinite loop
        dup 0xffff and 0 = if  \ Check if the loop counter is a multiple of 65536
            utime start @ -  \ Calculate elapsed time in microseconds
            #1000000 um/mod nip s>f \ Convert microseconds to seconds as floating-point
            sum @ s>f  \ Convert 'sum' from integer to floating-point
            \ Check FStack before division to ensure two numbers are present
            fdepth 2 >= if
                f/  \ Calculate bytes/sec rate
                1024e f/  \ Convert to KB/s
                f. ." KB/s" cr  \ Display throughput rate
            else
                ." FStack underflow error during division" cr
            then
            utime start !  \ Update start time to current time
            0 sum !  \ Reset sum to zero
        then
        init-program ip !  \ Get the initial address of the program
        mainloop
        sum @ buffer-pos @ + sum !
        0 buffer-pos !
        1+  \ Increment the loop counter
    again ;  \ Continue looping indefinitely
exe