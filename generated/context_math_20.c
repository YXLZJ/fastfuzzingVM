#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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
void func_5636118528(void);
void func_5636118656(void);
void func_5636118080(void);
void func_5636118352(void);
void func_5636118208(void);
void func_5636118144(void);
void func_5636119520(void);
void func_5636118848(void);
void func_5636119712(void);
void func_5636119936(void);
void func_5636120064(void);
void func_5636120256(void);
void func_5636120384(void);
void func_5636120512(void);
void func_5636120640(void);
void func_5636120192(void);
void func_5636121040(void);
void func_5636119216(void);
void func_5636119776(void);
void func_5636121360(void);
void func_5636118912(void);
void func_5636121488(void);
void func_5636121616(void);
void func_5636121776(void);
void func_5636122064(void);
void func_5636122192(void);
void func_5636122320(void);
void func_5636122448(void);
void HALT(void);
void RETURN(void);
Inst func_5636118528_op0[2] = {func_5636119520, RETURN};
Inst func_5636118528_op1[2] = {func_5636118848, RETURN};
Inst func_5636118528_op2[2] = {func_5636119712, RETURN};
Inst func_5636118528_op3[2] = {func_5636119936, RETURN};
Inst func_5636118528_op4[2] = {func_5636120064, RETURN};
Inst func_5636118528_op5[2] = {func_5636120256, RETURN};
Inst func_5636118528_op6[2] = {func_5636120384, RETURN};
Inst func_5636118528_op7[2] = {func_5636120512, RETURN};
Inst func_5636118528_op8[2] = {func_5636120640, RETURN};
Inst func_5636118528_op9[2] = {func_5636120192, RETURN};
Inst func_5636118656_op0[2] = {func_5636121040, RETURN};
Inst func_5636118656_op1[2] = {func_5636119776, RETURN};
Inst func_5636118656_op2[2] = {func_5636118144, RETURN};
Inst func_5636118080_op0[2] = {func_5636118912, RETURN};
Inst func_5636118080_op1[2] = {func_5636118352, RETURN};
Inst func_5636118352_op0[2] = {func_5636121776, RETURN};
Inst func_5636118352_op1[2] = {func_5636118528, RETURN};
Inst func_5636118208_op0[2] = {func_5636118656, HALT};
Inst func_5636118144_op0[2] = {func_5636122064, RETURN};
Inst func_5636118144_op1[2] = {func_5636122320, RETURN};
Inst func_5636118144_op2[2] = {func_5636118080, RETURN};
Inst exp_5636121040[4] = {func_5636118144, func_5636119216, func_5636118656, RETURN};
Inst exp_5636119776[4] = {func_5636118144, func_5636121360, func_5636118656, RETURN};
Inst exp_5636118912[4] = {func_5636121488, func_5636118656, func_5636121616, RETURN};
Inst exp_5636121776[3] = {func_5636118528, func_5636118352, RETURN};
Inst exp_5636122064[4] = {func_5636118080, func_5636122192, func_5636118144, RETURN};
Inst exp_5636122320[4] = {func_5636118080, func_5636122448, func_5636118144, RETURN};
void func_5636118528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118528_op0;
        break;
        case 1:
            PC = func_5636118528_op1;
        break;
        case 2:
            PC = func_5636118528_op2;
        break;
        case 3:
            PC = func_5636118528_op3;
        break;
        case 4:
            PC = func_5636118528_op4;
        break;
        case 5:
            PC = func_5636118528_op5;
        break;
        case 6:
            PC = func_5636118528_op6;
        break;
        case 7:
            PC = func_5636118528_op7;
        break;
        case 8:
            PC = func_5636118528_op8;
        break;
        case 9:
            PC = func_5636118528_op9;
        break;
    }
}
void func_5636118656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118656_op0;
        break;
        case 1:
            PC = func_5636118656_op1;
        break;
        case 2:
            PC = func_5636118656_op2;
        break;
    }
}
void func_5636118080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118080_op0;
        break;
        case 1:
            PC = func_5636118080_op1;
        break;
    }
}
void func_5636118352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118352_op0;
        break;
        case 1:
            PC = func_5636118352_op1;
        break;
    }
}
void func_5636118208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118208_op0;
        break;
    }
}
void func_5636118144(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5636118144_op0;
        break;
        case 1:
            PC = func_5636118144_op1;
        break;
        case 2:
            PC = func_5636118144_op2;
        break;
    }
}
void func_5636119520(void) {
    extend(48);
    NEXT();
}
void func_5636118848(void) {
    extend(49);
    NEXT();
}
void func_5636119712(void) {
    extend(50);
    NEXT();
}
void func_5636119936(void) {
    extend(51);
    NEXT();
}
void func_5636120064(void) {
    extend(52);
    NEXT();
}
void func_5636120256(void) {
    extend(53);
    NEXT();
}
void func_5636120384(void) {
    extend(54);
    NEXT();
}
void func_5636120512(void) {
    extend(55);
    NEXT();
}
void func_5636120640(void) {
    extend(56);
    NEXT();
}
void func_5636120192(void) {
    extend(57);
    NEXT();
}
void func_5636121040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5636121040;
}
void func_5636119216(void) {
    extend(43);
    NEXT();
}
void func_5636119776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5636119776;
}
void func_5636121360(void) {
    extend(45);
    NEXT();
}
void func_5636118912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5636118912;
}
void func_5636121488(void) {
    extend(40);
    NEXT();
}
void func_5636121616(void) {
    extend(41);
    NEXT();
}
void func_5636121776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5636121776;
}
void func_5636122064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5636122064;
}
void func_5636122192(void) {
    extend(42);
    NEXT();
}
void func_5636122320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5636122320;
}
void func_5636122448(void) {
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
    PC =func_5636118208_op0;
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
