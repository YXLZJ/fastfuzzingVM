#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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
void func_4914693600(void);
void func_4914695056(void);
void func_4914694896(void);
void func_4914695264(void);
void func_4914695392(void);
void func_4914695584(void);
void func_4914695200(void);
void func_4914696048(void);
void func_4914696176(void);
void func_4914696400(void);
void func_4914696608(void);
void func_4914696736(void);
void func_4914695888(void);
void func_4914696928(void);
void func_4914697056(void);
void HALT(void);
void RETURN(void);
Inst func_4914693600_op0[2] = {func_4914695264, RETURN};
Inst func_4914693600_op1[2] = {func_4914695392, RETURN};
Inst func_4914693600_op2[2] = {func_4914695584, RETURN};
Inst func_4914695056_op0[2] = {func_4914695200, RETURN};
Inst func_4914695056_op1[2] = {func_4914696608, RETURN};
Inst func_4914695056_op2[2] = {func_4914696928, RETURN};
Inst func_4914694896_op0[2] = {func_4914695056, HALT};
Inst exp_4914695200[5] = {func_4914693600, func_4914696048, func_4914696176, func_4914696400, RETURN};
Inst exp_4914696608[4] = {func_4914693600, func_4914696736, func_4914695888, RETURN};
Inst exp_4914696928[4] = {func_4914693600, func_4914697056, func_4914695056, RETURN};
void func_4914693600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4914693600_op0;
        break;
        case 1:
            PC = func_4914693600_op1;
        break;
        case 2:
            PC = func_4914693600_op2;
        break;
    }
}
void func_4914695056(void) {
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
            PC = func_4914695056_op0;
        break;
        case 1:
            PC = func_4914695056_op1;
        break;
        case 2:
            PC = func_4914695056_op2;
        break;
    }
}
void func_4914694896(void) {
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
            PC = func_4914694896_op0;
        break;
    }
}
void func_4914695264(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_4914695392(void) {
    extend(49);
    NEXT();
}
void func_4914695584(void) {
    extend(50);
    NEXT();
}
void func_4914695200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_4914695200;
}
void func_4914696048(void) {
    extend(51);
    NEXT();
}
void func_4914696176(void) {
    extend(52);
    NEXT();
}
void func_4914696400(void) {
    extend(53);
    NEXT();
}
void func_4914696608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_4914696608;
}
void func_4914696736(void) {
    extend(42);
    NEXT();
}
void func_4914695888(void) {
    extend(116);
    NEXT();
}
void func_4914696928(void) {
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
    PC = exp_4914696928;
}
void func_4914697056(void) {
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
    PC =func_4914694896_op0;
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
