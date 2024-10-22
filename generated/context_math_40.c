#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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
void func_5291143936(void);
void func_5291144064(void);
void func_5291143488(void);
void func_5291143760(void);
void func_5291143616(void);
void func_5291143552(void);
void func_5291144928(void);
void func_5291144256(void);
void func_5291145120(void);
void func_5291145344(void);
void func_5291145472(void);
void func_5291145664(void);
void func_5291145792(void);
void func_5291145920(void);
void func_5291146048(void);
void func_5291145600(void);
void func_5291146448(void);
void func_5291144624(void);
void func_5291145184(void);
void func_5291146768(void);
void func_5291144320(void);
void func_5291146896(void);
void func_5291147024(void);
void func_5291147184(void);
void func_5291147472(void);
void func_5291147600(void);
void func_5291147728(void);
void func_5291147856(void);
void HALT(void);
void RETURN(void);
Inst func_5291143936_op0[2] = {func_5291144928, RETURN};
Inst func_5291143936_op1[2] = {func_5291144256, RETURN};
Inst func_5291143936_op2[2] = {func_5291145120, RETURN};
Inst func_5291143936_op3[2] = {func_5291145344, RETURN};
Inst func_5291143936_op4[2] = {func_5291145472, RETURN};
Inst func_5291143936_op5[2] = {func_5291145664, RETURN};
Inst func_5291143936_op6[2] = {func_5291145792, RETURN};
Inst func_5291143936_op7[2] = {func_5291145920, RETURN};
Inst func_5291143936_op8[2] = {func_5291146048, RETURN};
Inst func_5291143936_op9[2] = {func_5291145600, RETURN};
Inst func_5291144064_op0[2] = {func_5291146448, RETURN};
Inst func_5291144064_op1[2] = {func_5291145184, RETURN};
Inst func_5291144064_op2[2] = {func_5291143552, RETURN};
Inst func_5291143488_op0[2] = {func_5291144320, RETURN};
Inst func_5291143488_op1[2] = {func_5291143760, RETURN};
Inst func_5291143760_op0[2] = {func_5291147184, RETURN};
Inst func_5291143760_op1[2] = {func_5291143936, RETURN};
Inst func_5291143616_op0[2] = {func_5291144064, HALT};
Inst func_5291143552_op0[2] = {func_5291147472, RETURN};
Inst func_5291143552_op1[2] = {func_5291147728, RETURN};
Inst func_5291143552_op2[2] = {func_5291143488, RETURN};
Inst exp_5291146448[4] = {func_5291143552, func_5291144624, func_5291144064, RETURN};
Inst exp_5291145184[4] = {func_5291143552, func_5291146768, func_5291144064, RETURN};
Inst exp_5291144320[4] = {func_5291146896, func_5291144064, func_5291147024, RETURN};
Inst exp_5291147184[3] = {func_5291143936, func_5291143760, RETURN};
Inst exp_5291147472[4] = {func_5291143488, func_5291147600, func_5291143552, RETURN};
Inst exp_5291147728[4] = {func_5291143488, func_5291147856, func_5291143552, RETURN};
void func_5291143936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5291143936_op0;
        break;
        case 1:
            PC = func_5291143936_op1;
        break;
        case 2:
            PC = func_5291143936_op2;
        break;
        case 3:
            PC = func_5291143936_op3;
        break;
        case 4:
            PC = func_5291143936_op4;
        break;
        case 5:
            PC = func_5291143936_op5;
        break;
        case 6:
            PC = func_5291143936_op6;
        break;
        case 7:
            PC = func_5291143936_op7;
        break;
        case 8:
            PC = func_5291143936_op8;
        break;
        case 9:
            PC = func_5291143936_op9;
        break;
    }
}
void func_5291144064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5291144064_op0;
        break;
        case 1:
            PC = func_5291144064_op1;
        break;
        case 2:
            PC = func_5291144064_op2;
        break;
    }
}
void func_5291143488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5291143488_op0;
        break;
        case 1:
            PC = func_5291143488_op1;
        break;
    }
}
void func_5291143760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5291143760_op0;
        break;
        case 1:
            PC = func_5291143760_op1;
        break;
    }
}
void func_5291143616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5291143616_op0;
        break;
    }
}
void func_5291143552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5291143552_op0;
        break;
        case 1:
            PC = func_5291143552_op1;
        break;
        case 2:
            PC = func_5291143552_op2;
        break;
    }
}
void func_5291144928(void) {
    extend(48);
    NEXT();
}
void func_5291144256(void) {
    extend(49);
    NEXT();
}
void func_5291145120(void) {
    extend(50);
    NEXT();
}
void func_5291145344(void) {
    extend(51);
    NEXT();
}
void func_5291145472(void) {
    extend(52);
    NEXT();
}
void func_5291145664(void) {
    extend(53);
    NEXT();
}
void func_5291145792(void) {
    extend(54);
    NEXT();
}
void func_5291145920(void) {
    extend(55);
    NEXT();
}
void func_5291146048(void) {
    extend(56);
    NEXT();
}
void func_5291145600(void) {
    extend(57);
    NEXT();
}
void func_5291146448(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291146448;
}
void func_5291144624(void) {
    extend(43);
    NEXT();
}
void func_5291145184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291145184;
}
void func_5291146768(void) {
    extend(45);
    NEXT();
}
void func_5291144320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5291144320;
}
void func_5291146896(void) {
    extend(40);
    NEXT();
}
void func_5291147024(void) {
    extend(41);
    NEXT();
}
void func_5291147184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291147184;
}
void func_5291147472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291147472;
}
void func_5291147600(void) {
    extend(42);
    NEXT();
}
void func_5291147728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291147728;
}
void func_5291147856(void) {
    extend(47);
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
    PC =func_5291143616_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 6;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
