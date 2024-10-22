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
void func_5081424096(void);
void func_5081425552(void);
void func_5081425392(void);
void func_5081425760(void);
void func_5081425888(void);
void func_5081426080(void);
void func_5081425696(void);
void func_5081426544(void);
void func_5081426672(void);
void func_5081426896(void);
void func_5081427104(void);
void func_5081427232(void);
void func_5081426384(void);
void func_5081427424(void);
void func_5081427552(void);
void HALT(void);
void RETURN(void);
Inst func_5081424096_op0[2] = {func_5081425760, RETURN};
Inst func_5081424096_op1[2] = {func_5081425888, RETURN};
Inst func_5081424096_op2[2] = {func_5081426080, RETURN};
Inst func_5081425552_op0[2] = {func_5081425696, RETURN};
Inst func_5081425552_op1[2] = {func_5081427104, RETURN};
Inst func_5081425552_op2[2] = {func_5081427424, RETURN};
Inst func_5081425392_op0[2] = {func_5081425552, HALT};
Inst exp_5081425696[5] = {func_5081424096, func_5081426544, func_5081426672, func_5081426896, RETURN};
Inst exp_5081427104[4] = {func_5081424096, func_5081427232, func_5081426384, RETURN};
Inst exp_5081427424[4] = {func_5081424096, func_5081427552, func_5081425552, RETURN};
void func_5081424096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5081424096_op0;
        break;
        case 1:
            PC = func_5081424096_op1;
        break;
        case 2:
            PC = func_5081424096_op2;
        break;
    }
}
void func_5081425552(void) {
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
            PC = func_5081425552_op0;
        break;
        case 1:
            PC = func_5081425552_op1;
        break;
        case 2:
            PC = func_5081425552_op2;
        break;
    }
}
void func_5081425392(void) {
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
            PC = func_5081425392_op0;
        break;
    }
}
void func_5081425760(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5081425888(void) {
    extend(49);
    NEXT();
}
void func_5081426080(void) {
    extend(50);
    NEXT();
}
void func_5081425696(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5081425696;
}
void func_5081426544(void) {
    extend(51);
    NEXT();
}
void func_5081426672(void) {
    extend(52);
    NEXT();
}
void func_5081426896(void) {
    extend(53);
    NEXT();
}
void func_5081427104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5081427104;
}
void func_5081427232(void) {
    extend(42);
    NEXT();
}
void func_5081426384(void) {
    extend(116);
    NEXT();
}
void func_5081427424(void) {
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
    PC = exp_5081427424;
}
void func_5081427552(void) {
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
    PC =func_5081425392_op0;
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
