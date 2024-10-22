#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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
void func_4821384416(void);
void func_4821384976(void);
void func_4821384784(void);
void func_4821384544(void);
void func_4821384720(void);
void func_4821385200(void);
void func_4821385328(void);
void func_4821385120(void);
void func_4821385680(void);
void func_4821386112(void);
void func_4821386048(void);
void func_4821386304(void);
void func_4821385872(void);
void func_4821386432(void);
void func_4821386896(void);
void func_4821387024(void);
void func_4821387152(void);
void func_4821385744(void);
void func_4821387536(void);
void func_4821387728(void);
void func_4821387856(void);
void func_4821387984(void);
void func_4821388112(void);
void func_4821387664(void);
void func_4821385600(void);
void func_4821388496(void);
void func_4821386640(void);
void func_4821386768(void);
void func_4821388704(void);
void func_4821388832(void);
void func_4821388960(void);
void func_4821389136(void);
void func_4821389280(void);
void func_4821387280(void);
void func_4821388624(void);
void func_4821390048(void);
void func_4821390176(void);
void func_4821390336(void);
void func_4821390464(void);
void func_4821389888(void);
void func_4821390992(void);
void func_4821391120(void);
void HALT(void);
void RETURN(void);
Inst func_4821384416_op0[2] = {func_4821386048, RETURN};
Inst func_4821384416_op1[2] = {func_4821386432, RETURN};
Inst func_4821384976_op0[2] = {func_4821386896, RETURN};
Inst func_4821384976_op1[2] = {func_4821387024, RETURN};
Inst func_4821384976_op2[2] = {func_4821387152, RETURN};
Inst func_4821384976_op3[2] = {func_4821385744, RETURN};
Inst func_4821384976_op4[2] = {func_4821387536, RETURN};
Inst func_4821384976_op5[2] = {func_4821387728, RETURN};
Inst func_4821384976_op6[2] = {func_4821387856, RETURN};
Inst func_4821384976_op7[2] = {func_4821387984, RETURN};
Inst func_4821384976_op8[2] = {func_4821388112, RETURN};
Inst func_4821384976_op9[2] = {func_4821387664, RETURN};
Inst func_4821384784_op0[2] = {func_4821385600, RETURN};
Inst func_4821384784_op1[2] = {func_4821386112, RETURN};
Inst func_4821384544_op0[2] = {func_4821386640, RETURN};
Inst func_4821384544_op1[2] = {func_4821385328, RETURN};
Inst func_4821384720_op0[2] = {func_4821384976, RETURN};
Inst func_4821384720_op1[2] = {func_4821386768, RETURN};
Inst func_4821385200_op0[2] = {func_4821388704, RETURN};
Inst func_4821385200_op1[2] = {func_4821389136, RETURN};
Inst func_4821385328_op0[2] = {func_4821389280, RETURN};
Inst func_4821385120_op0[2] = {func_4821386112, HALT};
Inst func_4821385680_op0[2] = {func_4821388624, RETURN};
Inst func_4821385680_op1[2] = {func_4821390048, RETURN};
Inst func_4821385680_op2[2] = {func_4821390176, RETURN};
Inst func_4821385680_op3[2] = {func_4821390336, RETURN};
Inst func_4821385680_op4[2] = {func_4821390464, RETURN};
Inst func_4821386112_op0[2] = {func_4821385200, RETURN};
Inst func_4821386112_op1[2] = {func_4821384416, RETURN};
Inst func_4821386112_op2[2] = {func_4821385680, RETURN};
Inst func_4821386112_op3[2] = {func_4821384720, RETURN};
Inst func_4821386112_op4[2] = {func_4821389888, RETURN};
Inst func_4821386112_op5[2] = {func_4821390992, RETURN};
Inst func_4821386112_op6[2] = {func_4821391120, RETURN};
Inst exp_4821386048[4] = {func_4821386304, func_4821384784, func_4821385872, RETURN};
Inst exp_4821386432[3] = {func_4821386304, func_4821385872, RETURN};
Inst exp_4821385600[4] = {func_4821386112, func_4821388496, func_4821384784, RETURN};
Inst exp_4821386640[4] = {func_4821385328, func_4821388496, func_4821384544, RETURN};
Inst exp_4821386768[3] = {func_4821384976, func_4821384720, RETURN};
Inst exp_4821388704[4] = {func_4821388832, func_4821384544, func_4821388960, RETURN};
Inst exp_4821389136[3] = {func_4821388832, func_4821388960, RETURN};
Inst exp_4821389280[4] = {func_4821385680, func_4821387280, func_4821386112, RETURN};
void func_4821384416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821384416_op0;
        break;
        case 1:
            PC = func_4821384416_op1;
        break;
    }
}
void func_4821384976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4821384976_op0;
        break;
        case 1:
            PC = func_4821384976_op1;
        break;
        case 2:
            PC = func_4821384976_op2;
        break;
        case 3:
            PC = func_4821384976_op3;
        break;
        case 4:
            PC = func_4821384976_op4;
        break;
        case 5:
            PC = func_4821384976_op5;
        break;
        case 6:
            PC = func_4821384976_op6;
        break;
        case 7:
            PC = func_4821384976_op7;
        break;
        case 8:
            PC = func_4821384976_op8;
        break;
        case 9:
            PC = func_4821384976_op9;
        break;
    }
}
void func_4821384784(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821384784_op0;
        break;
        case 1:
            PC = func_4821384784_op1;
        break;
    }
}
void func_4821384544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821384544_op0;
        break;
        case 1:
            PC = func_4821384544_op1;
        break;
    }
}
void func_4821384720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821384720_op0;
        break;
        case 1:
            PC = func_4821384720_op1;
        break;
    }
}
void func_4821385200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821385200_op0;
        break;
        case 1:
            PC = func_4821385200_op1;
        break;
    }
}
void func_4821385328(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821385328_op0;
        break;
    }
}
void func_4821385120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821385120_op0;
        break;
    }
}
void func_4821385680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_4821385680_op0;
        break;
        case 1:
            PC = func_4821385680_op1;
        break;
        case 2:
            PC = func_4821385680_op2;
        break;
        case 3:
            PC = func_4821385680_op3;
        break;
        case 4:
            PC = func_4821385680_op4;
        break;
    }
}
void func_4821386112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_4821386112_op0;
        break;
        case 1:
            PC = func_4821386112_op1;
        break;
        case 2:
            PC = func_4821386112_op2;
        break;
        case 3:
            PC = func_4821386112_op3;
        break;
        case 4:
            PC = func_4821386112_op4;
        break;
        case 5:
            PC = func_4821386112_op5;
        break;
        case 6:
            PC = func_4821386112_op6;
        break;
    }
}
void func_4821386048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_4821386048;
}
void func_4821386304(void) {
    extend(91);
    NEXT();
}
void func_4821385872(void) {
    extend(93);
    NEXT();
}
void func_4821386432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_4821386432;
}
void func_4821386896(void) {
    extend(48);
    NEXT();
}
void func_4821387024(void) {
    extend(49);
    NEXT();
}
void func_4821387152(void) {
    extend(50);
    NEXT();
}
void func_4821385744(void) {
    extend(51);
    NEXT();
}
void func_4821387536(void) {
    extend(52);
    NEXT();
}
void func_4821387728(void) {
    extend(53);
    NEXT();
}
void func_4821387856(void) {
    extend(54);
    NEXT();
}
void func_4821387984(void) {
    extend(55);
    NEXT();
}
void func_4821388112(void) {
    extend(56);
    NEXT();
}
void func_4821387664(void) {
    extend(57);
    NEXT();
}
void func_4821385600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_4821385600;
}
void func_4821388496(void) {
    extend(44);
    NEXT();
}
void func_4821386640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_4821386640;
}
void func_4821386768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4821386768;
}
void func_4821388704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_4821388704;
}
void func_4821388832(void) {
    extend(123);
    NEXT();
}
void func_4821388960(void) {
    extend(125);
    NEXT();
}
void func_4821389136(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_4821389136;
}
void func_4821389280(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_4821389280;
}
void func_4821387280(void) {
    extend(58);
    NEXT();
}
void func_4821388624(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_4821390048(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_4821390176(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_4821390336(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_4821390464(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_4821389888(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_4821390992(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_4821391120(void) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC =func_4821385120_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 8;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
