#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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
void func_5660238048(void);
void func_5660239504(void);
void func_5660239344(void);
void func_5660239712(void);
void func_5660239840(void);
void func_5660240032(void);
void func_5660239648(void);
void func_5660240496(void);
void func_5660240624(void);
void func_5660240848(void);
void func_5660241056(void);
void func_5660241184(void);
void func_5660240336(void);
void func_5660241376(void);
void func_5660241504(void);
void HALT(void);
void RETURN(void);
Inst func_5660238048_op0[2] = {func_5660239712, RETURN};
Inst func_5660238048_op1[2] = {func_5660239840, RETURN};
Inst func_5660238048_op2[2] = {func_5660240032, RETURN};
Inst func_5660239504_op0[2] = {func_5660239648, RETURN};
Inst func_5660239504_op1[2] = {func_5660241056, RETURN};
Inst func_5660239504_op2[2] = {func_5660241376, RETURN};
Inst func_5660239344_op0[2] = {func_5660239504, HALT};
Inst exp_5660239648[5] = {func_5660238048, func_5660240496, func_5660240624, func_5660240848, RETURN};
Inst exp_5660241056[4] = {func_5660238048, func_5660241184, func_5660240336, RETURN};
Inst exp_5660241376[4] = {func_5660238048, func_5660241504, func_5660239504, RETURN};
void func_5660238048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5660238048_op0;
        break;
        case 1:
            PC = func_5660238048_op1;
        break;
        case 2:
            PC = func_5660238048_op2;
        break;
    }
}
void func_5660239504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5660239504_op0;
        break;
        case 1:
            PC = func_5660239504_op1;
        break;
        case 2:
            PC = func_5660239504_op2;
        break;
    }
}
void func_5660239344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5660239344_op0;
        break;
    }
}
void func_5660239712(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5660239840(void) {
    extend(49);
    NEXT();
}
void func_5660240032(void) {
    extend(50);
    NEXT();
}
void func_5660239648(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5660239648;
}
void func_5660240496(void) {
    extend(51);
    NEXT();
}
void func_5660240624(void) {
    extend(52);
    NEXT();
}
void func_5660240848(void) {
    extend(53);
    NEXT();
}
void func_5660241056(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5660241056;
}
void func_5660241184(void) {
    extend(42);
    NEXT();
}
void func_5660240336(void) {
    extend(116);
    NEXT();
}
void func_5660241376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5660241376;
}
void func_5660241504(void) {
    extend(43);
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
    PC =func_5660239344_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 3;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
