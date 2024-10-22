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
void func_5257584864(void);
void func_5257586320(void);
void func_5257586160(void);
void func_5257586528(void);
void func_5257586656(void);
void func_5257586848(void);
void func_5257586464(void);
void func_5257587312(void);
void func_5257587440(void);
void func_5257587664(void);
void func_5257587872(void);
void func_5257588000(void);
void func_5257587152(void);
void func_5257588192(void);
void func_5257588320(void);
void HALT(void);
void RETURN(void);
Inst func_5257584864_op0[2] = {func_5257586528, RETURN};
Inst func_5257584864_op1[2] = {func_5257586656, RETURN};
Inst func_5257584864_op2[2] = {func_5257586848, RETURN};
Inst func_5257586320_op0[2] = {func_5257586464, RETURN};
Inst func_5257586320_op1[2] = {func_5257587872, RETURN};
Inst func_5257586320_op2[2] = {func_5257588192, RETURN};
Inst func_5257586160_op0[2] = {func_5257586320, HALT};
Inst exp_5257586464[5] = {func_5257584864, func_5257587312, func_5257587440, func_5257587664, RETURN};
Inst exp_5257587872[4] = {func_5257584864, func_5257588000, func_5257587152, RETURN};
Inst exp_5257588192[4] = {func_5257584864, func_5257588320, func_5257586320, RETURN};
void func_5257584864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257584864_op0;
        break;
        case 1:
            PC = func_5257584864_op1;
        break;
        case 2:
            PC = func_5257584864_op2;
        break;
    }
}
void func_5257586320(void) {
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
            PC = func_5257586320_op0;
        break;
        case 1:
            PC = func_5257586320_op1;
        break;
        case 2:
            PC = func_5257586320_op2;
        break;
    }
}
void func_5257586160(void) {
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
            PC = func_5257586160_op0;
        break;
    }
}
void func_5257586528(void) {
    extend(48);
    extend(100);
    NEXT();
}
void func_5257586656(void) {
    extend(49);
    NEXT();
}
void func_5257586848(void) {
    extend(50);
    NEXT();
}
void func_5257586464(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        return;
    }
    store();
    PC = exp_5257586464;
}
void func_5257587312(void) {
    extend(51);
    NEXT();
}
void func_5257587440(void) {
    extend(52);
    NEXT();
}
void func_5257587664(void) {
    extend(53);
    NEXT();
}
void func_5257587872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        return;
    }
    store();
    PC = exp_5257587872;
}
void func_5257588000(void) {
    extend(42);
    NEXT();
}
void func_5257587152(void) {
    extend(116);
    NEXT();
}
void func_5257588192(void) {
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
    PC = exp_5257588192;
}
void func_5257588320(void) {
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
    PC =func_5257586160_op0;
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
