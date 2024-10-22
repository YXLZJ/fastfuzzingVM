#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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
void func_5341470944(void);
void func_5341472400(void);
void func_5341472240(void);
void func_5341472608(void);
void func_5341472736(void);
void func_5341472928(void);
void func_5341472544(void);
void func_5341473392(void);
void func_5341473520(void);
void func_5341473744(void);
void func_5341473952(void);
void func_5341474080(void);
void func_5341473232(void);
void func_5341474272(void);
void func_5341474400(void);
void HALT(void);
void RETURN(void);
Inst func_5341470944_op0[2] = {func_5341472608, RETURN};
Inst func_5341470944_op1[2] = {func_5341472736, RETURN};
Inst func_5341470944_op2[2] = {func_5341472928, RETURN};
Inst func_5341472400_op0[2] = {func_5341472544, RETURN};
Inst func_5341472400_op1[2] = {func_5341473952, RETURN};
Inst func_5341472400_op2[2] = {func_5341474272, RETURN};
Inst func_5341472240_op0[2] = {func_5341472400, HALT};
Inst exp_5341472544[5] = {func_5341470944, func_5341473392, func_5341473520, func_5341473744, RETURN};
Inst exp_5341473952[4] = {func_5341470944, func_5341474080, func_5341473232, RETURN};
Inst exp_5341474272[4] = {func_5341470944, func_5341474400, func_5341472400, RETURN};
void func_5341470944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341470944_op0;
        break;
        case 1:
            PC = func_5341470944_op1;
        break;
        case 2:
            PC = func_5341470944_op2;
        break;
    }
}
void func_5341472400(void) {
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
            PC = func_5341472400_op0;
        break;
        case 1:
            PC = func_5341472400_op1;
        break;
        case 2:
            PC = func_5341472400_op2;
        break;
    }
}
void func_5341472240(void) {
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
            PC = func_5341472240_op0;
        break;
    }
}
void func_5341472608(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5341472736(void) {
    extend(49);
    NEXT();
}
void func_5341472928(void) {
    extend(50);
    NEXT();
}
void func_5341472544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5341472544;
}
void func_5341473392(void) {
    extend(51);
    NEXT();
}
void func_5341473520(void) {
    extend(52);
    NEXT();
}
void func_5341473744(void) {
    extend(53);
    NEXT();
}
void func_5341473952(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5341473952;
}
void func_5341474080(void) {
    extend(42);
    NEXT();
}
void func_5341473232(void) {
    extend(116);
    NEXT();
}
void func_5341474272(void) {
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
    PC = exp_5341474272;
}
void func_5341474400(void) {
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
    PC =func_5341472240_op0;
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
