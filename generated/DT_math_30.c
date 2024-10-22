#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 30
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
    static void *func_5383418576_op0[2] = { &&func_5383419568, &&RETURN };
    static void *func_5383418576_op1[2] = { &&func_5383418896, &&RETURN };
    static void *func_5383418576_op2[2] = { &&func_5383419760, &&RETURN };
    static void *func_5383418576_op3[2] = { &&func_5383419984, &&RETURN };
    static void *func_5383418576_op4[2] = { &&func_5383420112, &&RETURN };
    static void *func_5383418576_op5[2] = { &&func_5383420304, &&RETURN };
    static void *func_5383418576_op6[2] = { &&func_5383420432, &&RETURN };
    static void *func_5383418576_op7[2] = { &&func_5383420560, &&RETURN };
    static void *func_5383418576_op8[2] = { &&func_5383420688, &&RETURN };
    static void *func_5383418576_op9[2] = { &&func_5383420240, &&RETURN };
    static void *func_5383418704_op0[2] = { &&func_5383421088, &&RETURN };
    static void *func_5383418704_op1[2] = { &&func_5383419824, &&RETURN };
    static void *func_5383418704_op2[2] = { &&func_5383418192, &&RETURN };
    static void *func_5383418128_op0[2] = { &&func_5383418960, &&RETURN };
    static void *func_5383418128_op1[2] = { &&func_5383418400, &&RETURN };
    static void *func_5383418400_op0[2] = { &&func_5383421824, &&RETURN };
    static void *func_5383418400_op1[2] = { &&func_5383418576, &&RETURN };
    static void *func_5383418256_op0[2] = { &&func_5383418704, &&HALT };
    static void *func_5383418192_op0[2] = { &&func_5383422112, &&RETURN };
    static void *func_5383418192_op1[2] = { &&func_5383422368, &&RETURN };
    static void *func_5383418192_op2[2] = { &&func_5383418128, &&RETURN };
    static void *exp_5383421088[4] = {&&func_5383418192, &&func_5383419264, &&func_5383418704, &&RETURN };
    static void *exp_5383419824[4] = {&&func_5383418192, &&func_5383421408, &&func_5383418704, &&RETURN };
    static void *exp_5383418960[4] = {&&func_5383421536, &&func_5383418704, &&func_5383421664, &&RETURN };
    static void *exp_5383421824[3] = {&&func_5383418576, &&func_5383418400, &&RETURN };
    static void *exp_5383422112[4] = {&&func_5383418128, &&func_5383422240, &&func_5383418192, &&RETURN };
    static void *exp_5383422368[4] = {&&func_5383418128, &&func_5383422496, &&func_5383418192, &&RETURN };

func_5383418576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418576_op0;
            break;
        case 1:
            PC = func_5383418576_op1;
            break;
        case 2:
            PC = func_5383418576_op2;
            break;
        case 3:
            PC = func_5383418576_op3;
            break;
        case 4:
            PC = func_5383418576_op4;
            break;
        case 5:
            PC = func_5383418576_op5;
            break;
        case 6:
            PC = func_5383418576_op6;
            break;
        case 7:
            PC = func_5383418576_op7;
            break;
        case 8:
            PC = func_5383418576_op8;
            break;
        case 9:
            PC = func_5383418576_op9;
            break;
    }
    goto **PC;
func_5383418704:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418704_op0;
            break;
        case 1:
            PC = func_5383418704_op1;
            break;
        case 2:
            PC = func_5383418704_op2;
            break;
    }
    goto **PC;
func_5383418128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418128_op0;
            break;
        case 1:
            PC = func_5383418128_op1;
            break;
    }
    goto **PC;
func_5383418400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418400_op0;
            break;
        case 1:
            PC = func_5383418400_op1;
            break;
    }
    goto **PC;
func_5383418256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418256_op0;
            break;
    }
    goto **PC;
func_5383418192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5383418192_op0;
            break;
        case 1:
            PC = func_5383418192_op1;
            break;
        case 2:
            PC = func_5383418192_op2;
            break;
    }
    goto **PC;
func_5383419568:
    extend(48);
    NEXT();
    goto **PC;
func_5383418896:
    extend(49);
    NEXT();
    goto **PC;
func_5383419760:
    extend(50);
    NEXT();
    goto **PC;
func_5383419984:
    extend(51);
    NEXT();
    goto **PC;
func_5383420112:
    extend(52);
    NEXT();
    goto **PC;
func_5383420304:
    extend(53);
    NEXT();
    goto **PC;
func_5383420432:
    extend(54);
    NEXT();
    goto **PC;
func_5383420560:
    extend(55);
    NEXT();
    goto **PC;
func_5383420688:
    extend(56);
    NEXT();
    goto **PC;
func_5383420240:
    extend(57);
    NEXT();
    goto **PC;
func_5383421088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383421088;
    goto **PC;
func_5383419264:
    extend(43);
    NEXT();
    goto **PC;
func_5383419824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383419824;
    goto **PC;
func_5383421408:
    extend(45);
    NEXT();
    goto **PC;
func_5383418960:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383418960;
    goto **PC;
func_5383421536:
    extend(40);
    NEXT();
    goto **PC;
func_5383421664:
    extend(41);
    NEXT();
    goto **PC;
func_5383421824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383421824;
    goto **PC;
func_5383422112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383422112;
    goto **PC;
func_5383422240:
    extend(42);
    NEXT();
    goto **PC;
func_5383422368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5383422368;
    goto **PC;
func_5383422496:
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
    PC = func_5383418256_op0;
    goto **PC;
}
