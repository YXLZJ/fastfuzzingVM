#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 45
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
    static void *func_4846547664_op0[2] = { &&func_4846548656, &&RETURN };
    static void *func_4846547664_op1[2] = { &&func_4846547984, &&RETURN };
    static void *func_4846547664_op2[2] = { &&func_4846548848, &&RETURN };
    static void *func_4846547664_op3[2] = { &&func_4846549072, &&RETURN };
    static void *func_4846547664_op4[2] = { &&func_4846549200, &&RETURN };
    static void *func_4846547664_op5[2] = { &&func_4846549392, &&RETURN };
    static void *func_4846547664_op6[2] = { &&func_4846549520, &&RETURN };
    static void *func_4846547664_op7[2] = { &&func_4846549648, &&RETURN };
    static void *func_4846547664_op8[2] = { &&func_4846549776, &&RETURN };
    static void *func_4846547664_op9[2] = { &&func_4846549328, &&RETURN };
    static void *func_4846547792_op0[2] = { &&func_4846550176, &&RETURN };
    static void *func_4846547792_op1[2] = { &&func_4846548912, &&RETURN };
    static void *func_4846547792_op2[2] = { &&func_4846547280, &&RETURN };
    static void *func_4846547216_op0[2] = { &&func_4846548048, &&RETURN };
    static void *func_4846547216_op1[2] = { &&func_4846547488, &&RETURN };
    static void *func_4846547488_op0[2] = { &&func_4846550912, &&RETURN };
    static void *func_4846547488_op1[2] = { &&func_4846547664, &&RETURN };
    static void *func_4846547344_op0[2] = { &&func_4846547792, &&HALT };
    static void *func_4846547280_op0[2] = { &&func_4846551200, &&RETURN };
    static void *func_4846547280_op1[2] = { &&func_4846551456, &&RETURN };
    static void *func_4846547280_op2[2] = { &&func_4846547216, &&RETURN };
    static void *exp_4846550176[4] = {&&func_4846547280, &&func_4846548352, &&func_4846547792, &&RETURN };
    static void *exp_4846548912[4] = {&&func_4846547280, &&func_4846550496, &&func_4846547792, &&RETURN };
    static void *exp_4846548048[4] = {&&func_4846550624, &&func_4846547792, &&func_4846550752, &&RETURN };
    static void *exp_4846550912[3] = {&&func_4846547664, &&func_4846547488, &&RETURN };
    static void *exp_4846551200[4] = {&&func_4846547216, &&func_4846551328, &&func_4846547280, &&RETURN };
    static void *exp_4846551456[4] = {&&func_4846547216, &&func_4846551584, &&func_4846547280, &&RETURN };

func_4846547664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547664_op0;
            break;
        case 1:
            PC = func_4846547664_op1;
            break;
        case 2:
            PC = func_4846547664_op2;
            break;
        case 3:
            PC = func_4846547664_op3;
            break;
        case 4:
            PC = func_4846547664_op4;
            break;
        case 5:
            PC = func_4846547664_op5;
            break;
        case 6:
            PC = func_4846547664_op6;
            break;
        case 7:
            PC = func_4846547664_op7;
            break;
        case 8:
            PC = func_4846547664_op8;
            break;
        case 9:
            PC = func_4846547664_op9;
            break;
    }
    goto **PC;
func_4846547792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547792_op0;
            break;
        case 1:
            PC = func_4846547792_op1;
            break;
        case 2:
            PC = func_4846547792_op2;
            break;
    }
    goto **PC;
func_4846547216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547216_op0;
            break;
        case 1:
            PC = func_4846547216_op1;
            break;
    }
    goto **PC;
func_4846547488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547488_op0;
            break;
        case 1:
            PC = func_4846547488_op1;
            break;
    }
    goto **PC;
func_4846547344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547344_op0;
            break;
    }
    goto **PC;
func_4846547280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4846547280_op0;
            break;
        case 1:
            PC = func_4846547280_op1;
            break;
        case 2:
            PC = func_4846547280_op2;
            break;
    }
    goto **PC;
func_4846548656:
    extend(48);
    NEXT();
    goto **PC;
func_4846547984:
    extend(49);
    NEXT();
    goto **PC;
func_4846548848:
    extend(50);
    NEXT();
    goto **PC;
func_4846549072:
    extend(51);
    NEXT();
    goto **PC;
func_4846549200:
    extend(52);
    NEXT();
    goto **PC;
func_4846549392:
    extend(53);
    NEXT();
    goto **PC;
func_4846549520:
    extend(54);
    NEXT();
    goto **PC;
func_4846549648:
    extend(55);
    NEXT();
    goto **PC;
func_4846549776:
    extend(56);
    NEXT();
    goto **PC;
func_4846549328:
    extend(57);
    NEXT();
    goto **PC;
func_4846550176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846550176;
    goto **PC;
func_4846548352:
    extend(43);
    NEXT();
    goto **PC;
func_4846548912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846548912;
    goto **PC;
func_4846550496:
    extend(45);
    NEXT();
    goto **PC;
func_4846548048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846548048;
    goto **PC;
func_4846550624:
    extend(40);
    NEXT();
    goto **PC;
func_4846550752:
    extend(41);
    NEXT();
    goto **PC;
func_4846550912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846550912;
    goto **PC;
func_4846551200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846551200;
    goto **PC;
func_4846551328:
    extend(42);
    NEXT();
    goto **PC;
func_4846551456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846551456;
    goto **PC;
func_4846551584:
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
    PC = func_4846547344_op0;
    goto **PC;
}
