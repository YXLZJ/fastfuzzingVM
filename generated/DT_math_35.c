#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 35
// Declare buffer
char data[BUFFER_SIZE];


#define extend(c) { \
    if(buffer_top < BUFFER_SIZE) { \
        data[buffer_top++] = c; \
    } \
}

// Define 'clean' macro to reset the buffer
#define clean() { \
    buffer_top = 0; \
    stack_top = frames; \
}

// Stack structure definition

void *frames[MAX_DEPTH];     // Array to hold stack frames

// Declare variables
unsigned seed;       // Random seed
unsigned branch;     // To hold branch value
void **PC;           // Program counter

// XOR shift algorithm to generate random numbers
#define xor(l) do { \
    asm volatile ( \
        "eor %w[seed], %w[seed], %w[seed], lsl #13\n\t" \
        "eor %w[seed], %w[seed], %w[seed], lsr #17\n\t" \
        "eor %w[seed], %w[seed], %w[seed], lsl #5\n\t" \
        : [seed] "+r" (seed) \
    ); \
    branch = seed % (l); \
} while(0)

// Pop operation on the stack
#define pop() (--stack_top)

// Store the current PC onto the stack
#define store() do { \
    *(stack_top++) = PC; \
} while (0)

// Move to the next instruction
#define NEXT() PC++

int main() {
    // Declare local variables as register variables
    register unsigned seed asm("x19") = (unsigned)time(NULL);
    register unsigned branch asm("x20");
    register void **PC asm("x21");
    register void **stack_top asm("x22") = frames;  // Initialize stack_top
    register unsigned buffer_top asm("x23") = 0;          // Initialize buffer_top
    register FILE *fp = fopen("output.txt", "w");
    goto LOOP;
    static void *func_5106594512_op0[2] = { &&func_5106595504, &&RETURN };
    static void *func_5106594512_op1[2] = { &&func_5106594832, &&RETURN };
    static void *func_5106594512_op2[2] = { &&func_5106595696, &&RETURN };
    static void *func_5106594512_op3[2] = { &&func_5106595920, &&RETURN };
    static void *func_5106594512_op4[2] = { &&func_5106596048, &&RETURN };
    static void *func_5106594512_op5[2] = { &&func_5106596240, &&RETURN };
    static void *func_5106594512_op6[2] = { &&func_5106596368, &&RETURN };
    static void *func_5106594512_op7[2] = { &&func_5106596496, &&RETURN };
    static void *func_5106594512_op8[2] = { &&func_5106596624, &&RETURN };
    static void *func_5106594512_op9[2] = { &&func_5106596176, &&RETURN };
    static void *func_5106594640_op0[2] = { &&func_5106597024, &&RETURN };
    static void *func_5106594640_op1[2] = { &&func_5106595760, &&RETURN };
    static void *func_5106594640_op2[2] = { &&func_5106594128, &&RETURN };
    static void *func_5106594064_op0[2] = { &&func_5106594896, &&RETURN };
    static void *func_5106594064_op1[2] = { &&func_5106594336, &&RETURN };
    static void *func_5106594336_op0[2] = { &&func_5106597760, &&RETURN };
    static void *func_5106594336_op1[2] = { &&func_5106594512, &&RETURN };
    static void *func_5106594192_op0[2] = { &&func_5106594640, &&HALT };
    static void *func_5106594128_op0[2] = { &&func_5106598048, &&RETURN };
    static void *func_5106594128_op1[2] = { &&func_5106598304, &&RETURN };
    static void *func_5106594128_op2[2] = { &&func_5106594064, &&RETURN };
    static void *exp_5106597024[4] = {&&func_5106594128, &&func_5106595200, &&func_5106594640, &&RETURN };
    static void *exp_5106595760[4] = {&&func_5106594128, &&func_5106597344, &&func_5106594640, &&RETURN };
    static void *exp_5106594896[4] = {&&func_5106597472, &&func_5106594640, &&func_5106597600, &&RETURN };
    static void *exp_5106597760[3] = {&&func_5106594512, &&func_5106594336, &&RETURN };
    static void *exp_5106598048[4] = {&&func_5106594064, &&func_5106598176, &&func_5106594128, &&RETURN };
    static void *exp_5106598304[4] = {&&func_5106594064, &&func_5106598432, &&func_5106594128, &&RETURN };

func_5106594512:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594512_op0;
            break;
        case 1:
            PC = func_5106594512_op1;
            break;
        case 2:
            PC = func_5106594512_op2;
            break;
        case 3:
            PC = func_5106594512_op3;
            break;
        case 4:
            PC = func_5106594512_op4;
            break;
        case 5:
            PC = func_5106594512_op5;
            break;
        case 6:
            PC = func_5106594512_op6;
            break;
        case 7:
            PC = func_5106594512_op7;
            break;
        case 8:
            PC = func_5106594512_op8;
            break;
        case 9:
            PC = func_5106594512_op9;
            break;
    }
    goto **PC;
func_5106594640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594640_op0;
            break;
        case 1:
            PC = func_5106594640_op1;
            break;
        case 2:
            PC = func_5106594640_op2;
            break;
    }
    goto **PC;
func_5106594064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594064_op0;
            break;
        case 1:
            PC = func_5106594064_op1;
            break;
    }
    goto **PC;
func_5106594336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594336_op0;
            break;
        case 1:
            PC = func_5106594336_op1;
            break;
    }
    goto **PC;
func_5106594192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594192_op0;
            break;
    }
    goto **PC;
func_5106594128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594128_op0;
            break;
        case 1:
            PC = func_5106594128_op1;
            break;
        case 2:
            PC = func_5106594128_op2;
            break;
    }
    goto **PC;
func_5106595504:
    extend(48);
    NEXT();
    goto **PC;
func_5106594832:
    extend(49);
    NEXT();
    goto **PC;
func_5106595696:
    extend(50);
    NEXT();
    goto **PC;
func_5106595920:
    extend(51);
    NEXT();
    goto **PC;
func_5106596048:
    extend(52);
    NEXT();
    goto **PC;
func_5106596240:
    extend(53);
    NEXT();
    goto **PC;
func_5106596368:
    extend(54);
    NEXT();
    goto **PC;
func_5106596496:
    extend(55);
    NEXT();
    goto **PC;
func_5106596624:
    extend(56);
    NEXT();
    goto **PC;
func_5106596176:
    extend(57);
    NEXT();
    goto **PC;
func_5106597024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106597024;
    goto **PC;
func_5106595200:
    extend(43);
    NEXT();
    goto **PC;
func_5106595760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106595760;
    goto **PC;
func_5106597344:
    extend(45);
    NEXT();
    goto **PC;
func_5106594896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106594896;
    goto **PC;
func_5106597472:
    extend(40);
    NEXT();
    goto **PC;
func_5106597600:
    extend(41);
    NEXT();
    goto **PC;
func_5106597760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106597760;
    goto **PC;
func_5106598048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106598048;
    goto **PC;
func_5106598176:
    extend(42);
    NEXT();
    goto **PC;
func_5106598304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106598304;
    goto **PC;
func_5106598432:
    extend(47);
    NEXT();
    goto **PC;
HALT:
    // Print the buffer content
    fwrite(data, sizeof(char), buffer_top, fp);
    fclose(fp);
    return 0;
RETURN:
    // Pop from the stack and proceed to the next instruction
    PC = *(--stack_top);
    PC++;
    goto **PC;
LOOP:
    PC = func_5106594192_op0;
    goto **PC;
}
