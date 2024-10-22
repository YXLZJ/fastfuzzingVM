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
void func_5240812288(void);
void func_5240812416(void);
void func_5240811840(void);
void func_5240812112(void);
void func_5240811968(void);
void func_5240811904(void);
void func_5240813280(void);
void func_5240812608(void);
void func_5240813472(void);
void func_5240813696(void);
void func_5240813824(void);
void func_5240814016(void);
void func_5240814144(void);
void func_5240814272(void);
void func_5240814400(void);
void func_5240813952(void);
void func_5240814800(void);
void func_5240812976(void);
void func_5240813536(void);
void func_5240815120(void);
void func_5240812672(void);
void func_5240815248(void);
void func_5240815376(void);
void func_5240815536(void);
void func_5240815824(void);
void func_5240815952(void);
void func_5240816080(void);
void func_5240816208(void);
void HALT(void);
void RETURN(void);
Inst func_5240812288_op0[2] = {func_5240813280, RETURN};
Inst func_5240812288_op1[2] = {func_5240812608, RETURN};
Inst func_5240812288_op2[2] = {func_5240813472, RETURN};
Inst func_5240812288_op3[2] = {func_5240813696, RETURN};
Inst func_5240812288_op4[2] = {func_5240813824, RETURN};
Inst func_5240812288_op5[2] = {func_5240814016, RETURN};
Inst func_5240812288_op6[2] = {func_5240814144, RETURN};
Inst func_5240812288_op7[2] = {func_5240814272, RETURN};
Inst func_5240812288_op8[2] = {func_5240814400, RETURN};
Inst func_5240812288_op9[2] = {func_5240813952, RETURN};
Inst func_5240812416_op0[2] = {func_5240814800, RETURN};
Inst func_5240812416_op1[2] = {func_5240813536, RETURN};
Inst func_5240812416_op2[2] = {func_5240811904, RETURN};
Inst func_5240811840_op0[2] = {func_5240812672, RETURN};
Inst func_5240811840_op1[2] = {func_5240812112, RETURN};
Inst func_5240812112_op0[2] = {func_5240815536, RETURN};
Inst func_5240812112_op1[2] = {func_5240812288, RETURN};
Inst func_5240811968_op0[2] = {func_5240812416, HALT};
Inst func_5240811904_op0[2] = {func_5240815824, RETURN};
Inst func_5240811904_op1[2] = {func_5240816080, RETURN};
Inst func_5240811904_op2[2] = {func_5240811840, RETURN};
Inst exp_5240814800[4] = {func_5240811904, func_5240812976, func_5240812416, RETURN};
Inst exp_5240813536[4] = {func_5240811904, func_5240815120, func_5240812416, RETURN};
Inst exp_5240812672[4] = {func_5240815248, func_5240812416, func_5240815376, RETURN};
Inst exp_5240815536[3] = {func_5240812288, func_5240812112, RETURN};
Inst exp_5240815824[4] = {func_5240811840, func_5240815952, func_5240811904, RETURN};
Inst exp_5240816080[4] = {func_5240811840, func_5240816208, func_5240811904, RETURN};
void func_5240812288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5240812288_op0;
        break;
        case 1:
            PC = func_5240812288_op1;
        break;
        case 2:
            PC = func_5240812288_op2;
        break;
        case 3:
            PC = func_5240812288_op3;
        break;
        case 4:
            PC = func_5240812288_op4;
        break;
        case 5:
            PC = func_5240812288_op5;
        break;
        case 6:
            PC = func_5240812288_op6;
        break;
        case 7:
            PC = func_5240812288_op7;
        break;
        case 8:
            PC = func_5240812288_op8;
        break;
        case 9:
            PC = func_5240812288_op9;
        break;
    }
}
void func_5240812416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5240812416_op0;
        break;
        case 1:
            PC = func_5240812416_op1;
        break;
        case 2:
            PC = func_5240812416_op2;
        break;
    }
}
void func_5240811840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5240811840_op0;
        break;
        case 1:
            PC = func_5240811840_op1;
        break;
    }
}
void func_5240812112(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5240812112_op0;
        break;
        case 1:
            PC = func_5240812112_op1;
        break;
    }
}
void func_5240811968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5240811968_op0;
        break;
    }
}
void func_5240811904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5240811904_op0;
        break;
        case 1:
            PC = func_5240811904_op1;
        break;
        case 2:
            PC = func_5240811904_op2;
        break;
    }
}
void func_5240813280(void) {
    extend(48);
    NEXT();
}
void func_5240812608(void) {
    extend(49);
    NEXT();
}
void func_5240813472(void) {
    extend(50);
    NEXT();
}
void func_5240813696(void) {
    extend(51);
    NEXT();
}
void func_5240813824(void) {
    extend(52);
    NEXT();
}
void func_5240814016(void) {
    extend(53);
    NEXT();
}
void func_5240814144(void) {
    extend(54);
    NEXT();
}
void func_5240814272(void) {
    extend(55);
    NEXT();
}
void func_5240814400(void) {
    extend(56);
    NEXT();
}
void func_5240813952(void) {
    extend(57);
    NEXT();
}
void func_5240814800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5240814800;
}
void func_5240812976(void) {
    extend(43);
    NEXT();
}
void func_5240813536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5240813536;
}
void func_5240815120(void) {
    extend(45);
    NEXT();
}
void func_5240812672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5240812672;
}
void func_5240815248(void) {
    extend(40);
    NEXT();
}
void func_5240815376(void) {
    extend(41);
    NEXT();
}
void func_5240815536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5240815536;
}
void func_5240815824(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5240815824;
}
void func_5240815952(void) {
    extend(42);
    NEXT();
}
void func_5240816080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5240816080;
}
void func_5240816208(void) {
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
    PC =func_5240811968_op0;
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
