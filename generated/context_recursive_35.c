#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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
void func_5148532960(void);
void func_5148534416(void);
void func_5148534256(void);
void func_5148534624(void);
void func_5148534752(void);
void func_5148534944(void);
void func_5148534560(void);
void func_5148535408(void);
void func_5148535536(void);
void func_5148535760(void);
void func_5148535968(void);
void func_5148536096(void);
void func_5148535248(void);
void func_5148536288(void);
void func_5148536416(void);
void HALT(void);
void RETURN(void);
Inst func_5148532960_op0[2] = {func_5148534624, RETURN};
Inst func_5148532960_op1[2] = {func_5148534752, RETURN};
Inst func_5148532960_op2[2] = {func_5148534944, RETURN};
Inst func_5148534416_op0[2] = {func_5148534560, RETURN};
Inst func_5148534416_op1[2] = {func_5148535968, RETURN};
Inst func_5148534416_op2[2] = {func_5148536288, RETURN};
Inst func_5148534256_op0[2] = {func_5148534416, HALT};
Inst exp_5148534560[5] = {func_5148532960, func_5148535408, func_5148535536, func_5148535760, RETURN};
Inst exp_5148535968[4] = {func_5148532960, func_5148536096, func_5148535248, RETURN};
Inst exp_5148536288[4] = {func_5148532960, func_5148536416, func_5148534416, RETURN};
void func_5148532960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5148532960_op0;
        break;
        case 1:
            PC = func_5148532960_op1;
        break;
        case 2:
            PC = func_5148532960_op2;
        break;
    }
}
void func_5148534416(void) {
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
            PC = func_5148534416_op0;
        break;
        case 1:
            PC = func_5148534416_op1;
        break;
        case 2:
            PC = func_5148534416_op2;
        break;
    }
}
void func_5148534256(void) {
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
            PC = func_5148534256_op0;
        break;
    }
}
void func_5148534624(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5148534752(void) {
    extend(49);
    NEXT();
}
void func_5148534944(void) {
    extend(50);
    NEXT();
}
void func_5148534560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5148534560;
}
void func_5148535408(void) {
    extend(51);
    NEXT();
}
void func_5148535536(void) {
    extend(52);
    NEXT();
}
void func_5148535760(void) {
    extend(53);
    NEXT();
}
void func_5148535968(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5148535968;
}
void func_5148536096(void) {
    extend(42);
    NEXT();
}
void func_5148535248(void) {
    extend(116);
    NEXT();
}
void func_5148536288(void) {
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
    PC = exp_5148536288;
}
void func_5148536416(void) {
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
    PC =func_5148534256_op0;
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
