#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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
void func_5274362080(void);
void func_5274363536(void);
void func_5274363376(void);
void func_5274363744(void);
void func_5274363872(void);
void func_5274364064(void);
void func_5274363680(void);
void func_5274364528(void);
void func_5274364656(void);
void func_5274364880(void);
void func_5274365088(void);
void func_5274365216(void);
void func_5274364368(void);
void func_5274365408(void);
void func_5274365536(void);
void HALT(void);
void RETURN(void);
Inst func_5274362080_op0[2] = {func_5274363744, RETURN};
Inst func_5274362080_op1[2] = {func_5274363872, RETURN};
Inst func_5274362080_op2[2] = {func_5274364064, RETURN};
Inst func_5274363536_op0[2] = {func_5274363680, RETURN};
Inst func_5274363536_op1[2] = {func_5274365088, RETURN};
Inst func_5274363536_op2[2] = {func_5274365408, RETURN};
Inst func_5274363376_op0[2] = {func_5274363536, HALT};
Inst exp_5274363680[5] = {func_5274362080, func_5274364528, func_5274364656, func_5274364880, RETURN};
Inst exp_5274365088[4] = {func_5274362080, func_5274365216, func_5274364368, RETURN};
Inst exp_5274365408[4] = {func_5274362080, func_5274365536, func_5274363536, RETURN};
void func_5274362080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274362080_op0;
        break;
        case 1:
            PC = func_5274362080_op1;
        break;
        case 2:
            PC = func_5274362080_op2;
        break;
    }
}
void func_5274363536(void) {
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
            PC = func_5274363536_op0;
        break;
        case 1:
            PC = func_5274363536_op1;
        break;
        case 2:
            PC = func_5274363536_op2;
        break;
    }
}
void func_5274363376(void) {
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
            PC = func_5274363376_op0;
        break;
    }
}
void func_5274363744(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5274363872(void) {
    extend(49);
    NEXT();
}
void func_5274364064(void) {
    extend(50);
    NEXT();
}
void func_5274363680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5274363680;
}
void func_5274364528(void) {
    extend(51);
    NEXT();
}
void func_5274364656(void) {
    extend(52);
    NEXT();
}
void func_5274364880(void) {
    extend(53);
    NEXT();
}
void func_5274365088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5274365088;
}
void func_5274365216(void) {
    extend(42);
    NEXT();
}
void func_5274364368(void) {
    extend(116);
    NEXT();
}
void func_5274365408(void) {
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
    PC = exp_5274365408;
}
void func_5274365536(void) {
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
    PC =func_5274363376_op0;
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
