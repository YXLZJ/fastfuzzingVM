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
void func_5156922080(void);
void func_5156931520(void);
void func_5156931440(void);
void func_5156931360(void);
void func_5156931984(void);
void func_5156931088(void);
void func_5156932512(void);
void func_5156931280(void);
void func_5156931808(void);
void func_5156931872(void);
void func_5156932752(void);
void func_5156932880(void);
void func_5156933104(void);
void func_5156933232(void);
void func_5156933360(void);
void func_5156933728(void);
void func_5156933856(void);
void func_5156932176(void);
void func_5156934240(void);
void func_5156934368(void);
void func_5156934496(void);
void func_5156934624(void);
void func_5156934752(void);
void func_5156934912(void);
void func_5156935040(void);
void func_5156935264(void);
void func_5156935392(void);
void func_5156935520(void);
void func_5156935648(void);
void func_5156935776(void);
void func_5156935968(void);
void func_5156935200(void);
void func_5156933008(void);
void func_5156933984(void);
void func_5156934112(void);
void func_5156933552(void);
void func_5156937456(void);
void func_5156937584(void);
void func_5156937392(void);
void func_5156936624(void);
void func_5156933616(void);
void func_5156938032(void);
void func_5156938160(void);
void func_5156938288(void);
void func_5156938480(void);
void func_5156938608(void);
void func_5156938736(void);
void func_5156938864(void);
void func_5156938416(void);
void func_5156939184(void);
void func_5156939312(void);
void func_5156936448(void);
void func_5156936160(void);
void func_5156939584(void);
void func_5156939712(void);
void HALT(void);
void RETURN(void);
Inst func_5156922080_op0[2] = {func_5156933104, RETURN};
Inst func_5156931520_op0[2] = {func_5156933728, RETURN};
Inst func_5156931520_op1[2] = {func_5156932176, RETURN};
Inst func_5156931520_op2[2] = {func_5156934368, RETURN};
Inst func_5156931440_op0[2] = {func_5156934624, RETURN};
Inst func_5156931440_op1[2] = {func_5156932880, RETURN};
Inst func_5156931440_op2[2] = {func_5156934912, RETURN};
Inst func_5156931360_op0[2] = {func_5156932512, RETURN};
Inst func_5156931360_op1[2] = {func_5156931984, RETURN};
Inst func_5156931984_op0[2] = {func_5156935264, RETURN};
Inst func_5156931984_op1[2] = {func_5156935392, RETURN};
Inst func_5156931984_op2[2] = {func_5156935520, RETURN};
Inst func_5156931984_op3[2] = {func_5156935648, RETURN};
Inst func_5156931984_op4[2] = {func_5156935776, RETURN};
Inst func_5156931984_op5[2] = {func_5156935968, RETURN};
Inst func_5156931088_op0[2] = {func_5156935200, RETURN};
Inst func_5156931088_op1[2] = {func_5156937392, RETURN};
Inst func_5156932512_op0[2] = {func_5156936624, RETURN};
Inst func_5156932512_op1[2] = {func_5156933616, RETURN};
Inst func_5156932512_op2[2] = {func_5156938032, RETURN};
Inst func_5156932512_op3[2] = {func_5156938160, RETURN};
Inst func_5156932512_op4[2] = {func_5156938288, RETURN};
Inst func_5156932512_op5[2] = {func_5156938480, RETURN};
Inst func_5156932512_op6[2] = {func_5156938608, RETURN};
Inst func_5156932512_op7[2] = {func_5156938736, RETURN};
Inst func_5156932512_op8[2] = {func_5156938864, RETURN};
Inst func_5156932512_op9[2] = {func_5156938416, RETURN};
Inst func_5156931280_op0[2] = {func_5156939184, RETURN};
Inst func_5156931808_op0[2] = {func_5156931088, HALT};
Inst func_5156931872_op0[2] = {func_5156931088, RETURN};
Inst func_5156931872_op1[2] = {func_5156922080, RETURN};
Inst func_5156931872_op2[2] = {func_5156931280, RETURN};
Inst func_5156932752_op0[2] = {func_5156936448, RETURN};
Inst func_5156932752_op1[2] = {func_5156936160, RETURN};
Inst func_5156932880_op0[2] = {func_5156931360, RETURN};
Inst func_5156932880_op1[2] = {func_5156939584, RETURN};
Inst exp_5156933104[5] = {func_5156931984, func_5156933232, func_5156931440, func_5156933360, RETURN};
Inst exp_5156933728[4] = {func_5156931440, func_5156933856, func_5156931440, RETURN};
Inst exp_5156932176[4] = {func_5156931440, func_5156934240, func_5156931440, RETURN};
Inst exp_5156934368[4] = {func_5156931440, func_5156934496, func_5156931440, RETURN};
Inst exp_5156934624[4] = {func_5156932880, func_5156934752, func_5156931440, RETURN};
Inst exp_5156934912[4] = {func_5156932880, func_5156935040, func_5156931440, RETURN};
Inst exp_5156935200[12] = {func_5156933008, func_5156933984, func_5156931520, func_5156934112, func_5156933552, func_5156932752, func_5156937456, func_5156937584, func_5156933552, func_5156932752, func_5156937456, RETURN};
Inst exp_5156937392[8] = {func_5156933008, func_5156933984, func_5156931520, func_5156934112, func_5156933552, func_5156932752, func_5156937456, RETURN};
Inst exp_5156939184[6] = {func_5156939312, func_5156933984, func_5156931440, func_5156934112, func_5156933360, RETURN};
Inst exp_5156936448[3] = {func_5156931872, func_5156932752, RETURN};
Inst exp_5156936160[1] = {RETURN};
Inst exp_5156939584[4] = {func_5156931360, func_5156939712, func_5156932880, RETURN};
void func_5156922080(void) {
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
            PC = func_5156922080_op0;
        break;
    }
}
void func_5156931520(void) {
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
            PC = func_5156931520_op0;
        break;
        case 1:
            PC = func_5156931520_op1;
        break;
        case 2:
            PC = func_5156931520_op2;
        break;
    }
}
void func_5156931440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931440_op0;
        break;
        case 1:
            PC = func_5156931440_op1;
        break;
        case 2:
            PC = func_5156931440_op2;
        break;
    }
}
void func_5156931360(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931360_op0;
        break;
        case 1:
            PC = func_5156931360_op1;
        break;
    }
}
void func_5156931984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931984_op0;
        break;
        case 1:
            PC = func_5156931984_op1;
        break;
        case 2:
            PC = func_5156931984_op2;
        break;
        case 3:
            PC = func_5156931984_op3;
        break;
        case 4:
            PC = func_5156931984_op4;
        break;
        case 5:
            PC = func_5156931984_op5;
        break;
    }
}
void func_5156931088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931088_op0;
        break;
        case 1:
            PC = func_5156931088_op1;
        break;
    }
}
void func_5156932512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5156932512_op0;
        break;
        case 1:
            PC = func_5156932512_op1;
        break;
        case 2:
            PC = func_5156932512_op2;
        break;
        case 3:
            PC = func_5156932512_op3;
        break;
        case 4:
            PC = func_5156932512_op4;
        break;
        case 5:
            PC = func_5156932512_op5;
        break;
        case 6:
            PC = func_5156932512_op6;
        break;
        case 7:
            PC = func_5156932512_op7;
        break;
        case 8:
            PC = func_5156932512_op8;
        break;
        case 9:
            PC = func_5156932512_op9;
        break;
    }
}
void func_5156931280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
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
            PC = func_5156931280_op0;
        break;
    }
}
void func_5156931808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931808_op0;
        break;
    }
}
void func_5156931872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5156931872_op0;
        break;
        case 1:
            PC = func_5156931872_op1;
        break;
        case 2:
            PC = func_5156931872_op2;
        break;
    }
}
void func_5156932752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5156932752_op0;
        break;
        case 1:
            PC = func_5156932752_op1;
        break;
    }
}
void func_5156932880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5156932880_op0;
        break;
        case 1:
            PC = func_5156932880_op1;
        break;
    }
}
void func_5156933104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5156933104;
}
void func_5156933232(void) {
    extend(61);
    NEXT();
}
void func_5156933360(void) {
    extend(59);
    NEXT();
}
void func_5156933728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156933728;
}
void func_5156933856(void) {
    extend(62);
    NEXT();
}
void func_5156932176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156932176;
}
void func_5156934240(void) {
    extend(60);
    NEXT();
}
void func_5156934368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156934368;
}
void func_5156934496(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5156934624(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156934624;
}
void func_5156934752(void) {
    extend(43);
    NEXT();
}
void func_5156934912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156934912;
}
void func_5156935040(void) {
    extend(45);
    NEXT();
}
void func_5156935264(void) {
    extend(120);
    NEXT();
}
void func_5156935392(void) {
    extend(121);
    NEXT();
}
void func_5156935520(void) {
    extend(122);
    NEXT();
}
void func_5156935648(void) {
    extend(97);
    NEXT();
}
void func_5156935776(void) {
    extend(98);
    NEXT();
}
void func_5156935968(void) {
    extend(99);
    NEXT();
}
void func_5156935200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5156935200;
}
void func_5156933008(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5156933984(void) {
    extend(40);
    NEXT();
}
void func_5156934112(void) {
    extend(41);
    NEXT();
}
void func_5156933552(void) {
    extend(123);
    NEXT();
}
void func_5156937456(void) {
    extend(125);
    NEXT();
}
void func_5156937584(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5156937392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5156937392;
}
void func_5156936624(void) {
    extend(48);
    NEXT();
}
void func_5156933616(void) {
    extend(49);
    NEXT();
}
void func_5156938032(void) {
    extend(50);
    NEXT();
}
void func_5156938160(void) {
    extend(51);
    NEXT();
}
void func_5156938288(void) {
    extend(52);
    NEXT();
}
void func_5156938480(void) {
    extend(53);
    NEXT();
}
void func_5156938608(void) {
    extend(54);
    NEXT();
}
void func_5156938736(void) {
    extend(55);
    NEXT();
}
void func_5156938864(void) {
    extend(56);
    NEXT();
}
void func_5156938416(void) {
    extend(57);
    NEXT();
}
void func_5156939184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5156939184;
}
void func_5156939312(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5156936448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5156936448;
}
void func_5156936160(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5156936160;
}
void func_5156939584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5156939584;
}
void func_5156939712(void) {
    extend(42);
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
    PC =func_5156931808_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 12;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
