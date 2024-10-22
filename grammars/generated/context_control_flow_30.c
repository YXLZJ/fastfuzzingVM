#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 30
typedef struct {
    char data[BUFFER_SIZE];
    unsigned top;
} Buffer;

Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    if(buffer.top < BUFFER_SIZE) { \
        buffer.data[buffer.top++] = c; \
    } \
}

#define clean() { \
    buffer.top = 0; \
}

unsigned seed;  // Random seed
unsigned branch;  // To hold branch value

typedef void (*Inst)();
Inst *PC;

// xor to get random number
#define xor(l) \
    seed ^= seed << 13; \
    seed ^= seed >> 17; \
    seed ^= seed << 5; \
    branch = seed % l

#define initStack() do { \
    stack.top = stack.frames; \
} while (0)

#define pop() (stack.top--)

#define store() do { \
    *(stack.top++) = PC; \
} while (0)

#define jmp_loop() goto LOOP

#define NEXT() PC++

// the stack from frames
typedef struct {
    Inst *frames[MAX_DEPTH];     // the first pointer of frames
    Inst **top;              // the top of stack
} Stack;

Stack stack;

bool endless = false;

bool running = true;
void func_5198878240(void);
void func_5198878608(void);
void func_5198879024(void);
void func_5198879120(void);
void func_5198878896(void);
void func_5198878816(void);
void func_5198879520(void);
void func_5198878736(void);
void func_5198879248(void);
void func_5198879776(void);
void func_5198879440(void);
void func_5198879712(void);
void func_5198880128(void);
void func_5198880496(void);
void func_5198880336(void);
void func_5198880064(void);
void func_5198880256(void);
void func_5198879312(void);
void func_5198881360(void);
void func_5198881488(void);
void func_5198881616(void);
void func_5198881744(void);
void func_5198881872(void);
void func_5198882000(void);
void func_5198882384(void);
void func_5198879968(void);
void func_5198882576(void);
void func_5198882704(void);
void func_5198882832(void);
void func_5198883024(void);
void func_5198883152(void);
void func_5198883280(void);
void func_5198883408(void);
void func_5198882960(void);
void func_5198883984(void);
void func_5198884112(void);
void func_5198881152(void);
void func_5198881280(void);
void func_5198882288(void);
void func_5198884464(void);
void func_5198884592(void);
void func_5198882128(void);
void func_5198885360(void);
void func_5198885488(void);
void func_5198880624(void);
void func_5198885136(void);
void func_5198885808(void);
void func_5198885936(void);
void func_5198886064(void);
void func_5198886192(void);
void func_5198886384(void);
void func_5198886512(void);
void func_5198886640(void);
void func_5198886768(void);
void func_5198886320(void);
void func_5198887536(void);
void func_5198884784(void);
void func_5198887360(void);
void func_5198884960(void);
void func_5198887024(void);
void func_5198887152(void);
void func_5198887664(void);
void func_5198888512(void);
void func_5198888640(void);
void func_5198887792(void);
void func_5198883472(void);
void func_5198888448(void);
void func_5198883840(void);
void HALT(void);
void RETURN(void);
Inst func_5198878240_op0[2] = {func_5198880064, RETURN};
Inst func_5198878608_op0[2] = {func_5198881360, RETURN};
Inst func_5198878608_op1[2] = {func_5198881616, RETURN};
Inst func_5198878608_op2[2] = {func_5198881872, RETURN};
Inst func_5198879024_op0[2] = {func_5198882384, RETURN};
Inst func_5198879024_op1[2] = {func_5198879968, RETURN};
Inst func_5198879024_op2[2] = {func_5198882576, RETURN};
Inst func_5198879024_op3[2] = {func_5198882704, RETURN};
Inst func_5198879024_op4[2] = {func_5198882832, RETURN};
Inst func_5198879024_op5[2] = {func_5198883024, RETURN};
Inst func_5198879024_op6[2] = {func_5198883152, RETURN};
Inst func_5198879024_op7[2] = {func_5198883280, RETURN};
Inst func_5198879024_op8[2] = {func_5198883408, RETURN};
Inst func_5198879024_op9[2] = {func_5198882960, RETURN};
Inst func_5198879120_op0[2] = {func_5198883984, RETURN};
Inst func_5198879120_op1[2] = {func_5198881152, RETURN};
Inst func_5198879120_op2[2] = {func_5198880496, RETURN};
Inst func_5198878896_op0[2] = {func_5198882288, RETURN};
Inst func_5198878896_op1[2] = {func_5198879248, RETURN};
Inst func_5198878896_op2[2] = {func_5198879520, RETURN};
Inst func_5198878816_op0[2] = {func_5198882128, RETURN};
Inst func_5198879520_op0[2] = {func_5198885136, RETURN};
Inst func_5198879520_op1[2] = {func_5198885808, RETURN};
Inst func_5198879520_op2[2] = {func_5198885936, RETURN};
Inst func_5198879520_op3[2] = {func_5198886064, RETURN};
Inst func_5198879520_op4[2] = {func_5198886192, RETURN};
Inst func_5198879520_op5[2] = {func_5198886384, RETURN};
Inst func_5198879520_op6[2] = {func_5198886512, RETURN};
Inst func_5198879520_op7[2] = {func_5198886640, RETURN};
Inst func_5198879520_op8[2] = {func_5198886768, RETURN};
Inst func_5198878736_op0[2] = {func_5198886320, RETURN};
Inst func_5198878736_op1[2] = {func_5198884784, RETURN};
Inst func_5198879248_op0[2] = {func_5198879024, RETURN};
Inst func_5198879248_op1[2] = {func_5198884960, RETURN};
Inst func_5198879776_op0[2] = {func_5198887024, RETURN};
Inst func_5198879440_op0[2] = {func_5198887664, RETURN};
Inst func_5198879712_op0[2] = {func_5198879440, HALT};
Inst func_5198880128_op0[2] = {func_5198878736, RETURN};
Inst func_5198880128_op1[2] = {func_5198880336, RETURN};
Inst func_5198880128_op2[2] = {func_5198878816, RETURN};
Inst func_5198880128_op3[2] = {func_5198878240, RETURN};
Inst func_5198880128_op4[2] = {func_5198879776, RETURN};
Inst func_5198880496_op0[2] = {func_5198888512, RETURN};
Inst func_5198880496_op1[2] = {func_5198887792, RETURN};
Inst func_5198880496_op2[2] = {func_5198878896, RETURN};
Inst func_5198880336_op0[2] = {func_5198888448, RETURN};
Inst exp_5198880064[5] = {func_5198879520, func_5198880256, func_5198879120, func_5198879312, RETURN};
Inst exp_5198881360[4] = {func_5198879120, func_5198881488, func_5198879120, RETURN};
Inst exp_5198881616[4] = {func_5198879120, func_5198881744, func_5198879120, RETURN};
Inst exp_5198881872[4] = {func_5198879120, func_5198882000, func_5198879120, RETURN};
Inst exp_5198883984[4] = {func_5198879120, func_5198884112, func_5198880496, RETURN};
Inst exp_5198881152[4] = {func_5198879120, func_5198881280, func_5198880496, RETURN};
Inst exp_5198882288[4] = {func_5198884464, func_5198879120, func_5198884592, RETURN};
Inst exp_5198882128[12] = {func_5198885360, func_5198884464, func_5198878240, func_5198879312, func_5198878608, func_5198879312, func_5198878240, func_5198884592, func_5198885488, func_5198879440, func_5198880624, RETURN};
Inst exp_5198886320[8] = {func_5198887536, func_5198884464, func_5198878608, func_5198884592, func_5198885488, func_5198879440, func_5198880624, RETURN};
Inst exp_5198884784[12] = {func_5198887536, func_5198884464, func_5198878608, func_5198884592, func_5198885488, func_5198879440, func_5198880624, func_5198887360, func_5198885488, func_5198879440, func_5198880624, RETURN};
Inst exp_5198884960[3] = {func_5198879024, func_5198879248, RETURN};
Inst exp_5198887024[6] = {func_5198887152, func_5198884464, func_5198879120, func_5198884592, func_5198879312, RETURN};
Inst exp_5198887664[3] = {func_5198880128, func_5198879440, RETURN};
Inst exp_5198888512[4] = {func_5198880496, func_5198888640, func_5198878896, RETURN};
Inst exp_5198887792[4] = {func_5198880496, func_5198883472, func_5198878896, RETURN};
Inst exp_5198888448[8] = {func_5198883840, func_5198884464, func_5198878608, func_5198884592, func_5198885488, func_5198879440, func_5198880624, RETURN};
void func_5198878240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198878240_op0;
        break;
    }
}
void func_5198878608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198878608_op0;
        break;
        case 1:
            PC = func_5198878608_op1;
        break;
        case 2:
            PC = func_5198878608_op2;
        break;
    }
}
void func_5198879024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879024_op0;
        break;
        case 1:
            PC = func_5198879024_op1;
        break;
        case 2:
            PC = func_5198879024_op2;
        break;
        case 3:
            PC = func_5198879024_op3;
        break;
        case 4:
            PC = func_5198879024_op4;
        break;
        case 5:
            PC = func_5198879024_op5;
        break;
        case 6:
            PC = func_5198879024_op6;
        break;
        case 7:
            PC = func_5198879024_op7;
        break;
        case 8:
            PC = func_5198879024_op8;
        break;
        case 9:
            PC = func_5198879024_op9;
        break;
    }
}
void func_5198879120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879120_op0;
        break;
        case 1:
            PC = func_5198879120_op1;
        break;
        case 2:
            PC = func_5198879120_op2;
        break;
    }
}
void func_5198878896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198878896_op0;
        break;
        case 1:
            PC = func_5198878896_op1;
        break;
        case 2:
            PC = func_5198878896_op2;
        break;
    }
}
void func_5198878816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198878816_op0;
        break;
    }
}
void func_5198879520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879520_op0;
        break;
        case 1:
            PC = func_5198879520_op1;
        break;
        case 2:
            PC = func_5198879520_op2;
        break;
        case 3:
            PC = func_5198879520_op3;
        break;
        case 4:
            PC = func_5198879520_op4;
        break;
        case 5:
            PC = func_5198879520_op5;
        break;
        case 6:
            PC = func_5198879520_op6;
        break;
        case 7:
            PC = func_5198879520_op7;
        break;
        case 8:
            PC = func_5198879520_op8;
        break;
    }
}
void func_5198878736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198878736_op0;
        break;
        case 1:
            PC = func_5198878736_op1;
        break;
    }
}
void func_5198879248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879248_op0;
        break;
        case 1:
            PC = func_5198879248_op1;
        break;
    }
}
void func_5198879776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879776_op0;
        break;
    }
}
void func_5198879440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879440_op0;
        break;
    }
}
void func_5198879712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198879712_op0;
        break;
    }
}
void func_5198880128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5198880128_op0;
        break;
        case 1:
            PC = func_5198880128_op1;
        break;
        case 2:
            PC = func_5198880128_op2;
        break;
        case 3:
            PC = func_5198880128_op3;
        break;
        case 4:
            PC = func_5198880128_op4;
        break;
    }
}
void func_5198880496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198880496_op0;
        break;
        case 1:
            PC = func_5198880496_op1;
        break;
        case 2:
            PC = func_5198880496_op2;
        break;
    }
}
void func_5198880336(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5198880336_op0;
        break;
    }
}
void func_5198880064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5198880064;
}
void func_5198880256(void) {
    extend(61);
    NEXT();
}
void func_5198879312(void) {
    extend(59);
    NEXT();
}
void func_5198881360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198881360;
}
void func_5198881488(void) {
    extend(62);
    NEXT();
}
void func_5198881616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198881616;
}
void func_5198881744(void) {
    extend(60);
    NEXT();
}
void func_5198881872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198881872;
}
void func_5198882000(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5198882384(void) {
    extend(48);
    NEXT();
}
void func_5198879968(void) {
    extend(49);
    NEXT();
}
void func_5198882576(void) {
    extend(50);
    NEXT();
}
void func_5198882704(void) {
    extend(51);
    NEXT();
}
void func_5198882832(void) {
    extend(52);
    NEXT();
}
void func_5198883024(void) {
    extend(53);
    NEXT();
}
void func_5198883152(void) {
    extend(54);
    NEXT();
}
void func_5198883280(void) {
    extend(55);
    NEXT();
}
void func_5198883408(void) {
    extend(56);
    NEXT();
}
void func_5198882960(void) {
    extend(57);
    NEXT();
}
void func_5198883984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198883984;
}
void func_5198884112(void) {
    extend(43);
    NEXT();
}
void func_5198881152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198881152;
}
void func_5198881280(void) {
    extend(45);
    NEXT();
}
void func_5198882288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5198882288;
}
void func_5198884464(void) {
    extend(40);
    NEXT();
}
void func_5198884592(void) {
    extend(41);
    NEXT();
}
void func_5198882128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5198882128;
}
void func_5198885360(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5198885488(void) {
    extend(123);
    NEXT();
}
void func_5198880624(void) {
    extend(125);
    NEXT();
}
void func_5198885136(void) {
    extend(105);
    NEXT();
}
void func_5198885808(void) {
    extend(106);
    NEXT();
}
void func_5198885936(void) {
    extend(107);
    NEXT();
}
void func_5198886064(void) {
    extend(120);
    NEXT();
}
void func_5198886192(void) {
    extend(121);
    NEXT();
}
void func_5198886384(void) {
    extend(122);
    NEXT();
}
void func_5198886512(void) {
    extend(97);
    NEXT();
}
void func_5198886640(void) {
    extend(98);
    NEXT();
}
void func_5198886768(void) {
    extend(99);
    NEXT();
}
void func_5198886320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5198886320;
}
void func_5198887536(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5198884784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5198884784;
}
void func_5198887360(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5198884960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5198884960;
}
void func_5198887024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5198887024;
}
void func_5198887152(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5198887664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5198887664;
}
void func_5198888512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198888512;
}
void func_5198888640(void) {
    extend(42);
    NEXT();
}
void func_5198887792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5198887792;
}
void func_5198883472(void) {
    extend(47);
    NEXT();
}
void func_5198888448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5198888448;
}
void func_5198883840(void) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    NEXT();
}
void HALT(void) {
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    running = false;
}
void RETURN(void) {
    pop();
    PC = *stack.top;
    NEXT();
}
void mainloop(void) {
    running = true;
    PC =func_5198879712_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 16;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
