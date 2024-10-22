#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 40
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
    static void *func_5467304656_op0[2] = { &&func_5467305648, &&RETURN };
    static void *func_5467304656_op1[2] = { &&func_5467304976, &&RETURN };
    static void *func_5467304656_op2[2] = { &&func_5467305840, &&RETURN };
    static void *func_5467304656_op3[2] = { &&func_5467306064, &&RETURN };
    static void *func_5467304656_op4[2] = { &&func_5467306192, &&RETURN };
    static void *func_5467304656_op5[2] = { &&func_5467306384, &&RETURN };
    static void *func_5467304656_op6[2] = { &&func_5467306512, &&RETURN };
    static void *func_5467304656_op7[2] = { &&func_5467306640, &&RETURN };
    static void *func_5467304656_op8[2] = { &&func_5467306768, &&RETURN };
    static void *func_5467304656_op9[2] = { &&func_5467306320, &&RETURN };
    static void *func_5467304784_op0[2] = { &&func_5467307168, &&RETURN };
    static void *func_5467304784_op1[2] = { &&func_5467305904, &&RETURN };
    static void *func_5467304784_op2[2] = { &&func_5467304272, &&RETURN };
    static void *func_5467304208_op0[2] = { &&func_5467305040, &&RETURN };
    static void *func_5467304208_op1[2] = { &&func_5467304480, &&RETURN };
    static void *func_5467304480_op0[2] = { &&func_5467307904, &&RETURN };
    static void *func_5467304480_op1[2] = { &&func_5467304656, &&RETURN };
    static void *func_5467304336_op0[2] = { &&func_5467304784, &&HALT };
    static void *func_5467304272_op0[2] = { &&func_5467308192, &&RETURN };
    static void *func_5467304272_op1[2] = { &&func_5467308448, &&RETURN };
    static void *func_5467304272_op2[2] = { &&func_5467304208, &&RETURN };
    static void *exp_5467307168[4] = {&&func_5467304272, &&func_5467305344, &&func_5467304784, &&RETURN };
    static void *exp_5467305904[4] = {&&func_5467304272, &&func_5467307488, &&func_5467304784, &&RETURN };
    static void *exp_5467305040[4] = {&&func_5467307616, &&func_5467304784, &&func_5467307744, &&RETURN };
    static void *exp_5467307904[3] = {&&func_5467304656, &&func_5467304480, &&RETURN };
    static void *exp_5467308192[4] = {&&func_5467304208, &&func_5467308320, &&func_5467304272, &&RETURN };
    static void *exp_5467308448[4] = {&&func_5467304208, &&func_5467308576, &&func_5467304272, &&RETURN };

func_5467304656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304656_op0;
            break;
        case 1:
            PC = func_5467304656_op1;
            break;
        case 2:
            PC = func_5467304656_op2;
            break;
        case 3:
            PC = func_5467304656_op3;
            break;
        case 4:
            PC = func_5467304656_op4;
            break;
        case 5:
            PC = func_5467304656_op5;
            break;
        case 6:
            PC = func_5467304656_op6;
            break;
        case 7:
            PC = func_5467304656_op7;
            break;
        case 8:
            PC = func_5467304656_op8;
            break;
        case 9:
            PC = func_5467304656_op9;
            break;
    }
    goto **PC;
func_5467304784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304784_op0;
            break;
        case 1:
            PC = func_5467304784_op1;
            break;
        case 2:
            PC = func_5467304784_op2;
            break;
    }
    goto **PC;
func_5467304208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304208_op0;
            break;
        case 1:
            PC = func_5467304208_op1;
            break;
    }
    goto **PC;
func_5467304480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304480_op0;
            break;
        case 1:
            PC = func_5467304480_op1;
            break;
    }
    goto **PC;
func_5467304336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304336_op0;
            break;
    }
    goto **PC;
func_5467304272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5467304272_op0;
            break;
        case 1:
            PC = func_5467304272_op1;
            break;
        case 2:
            PC = func_5467304272_op2;
            break;
    }
    goto **PC;
func_5467305648:
    extend(48);
    NEXT();
    goto **PC;
func_5467304976:
    extend(49);
    NEXT();
    goto **PC;
func_5467305840:
    extend(50);
    NEXT();
    goto **PC;
func_5467306064:
    extend(51);
    NEXT();
    goto **PC;
func_5467306192:
    extend(52);
    NEXT();
    goto **PC;
func_5467306384:
    extend(53);
    NEXT();
    goto **PC;
func_5467306512:
    extend(54);
    NEXT();
    goto **PC;
func_5467306640:
    extend(55);
    NEXT();
    goto **PC;
func_5467306768:
    extend(56);
    NEXT();
    goto **PC;
func_5467306320:
    extend(57);
    NEXT();
    goto **PC;
func_5467307168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467307168;
    goto **PC;
func_5467305344:
    extend(43);
    NEXT();
    goto **PC;
func_5467305904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467305904;
    goto **PC;
func_5467307488:
    extend(45);
    NEXT();
    goto **PC;
func_5467305040:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467305040;
    goto **PC;
func_5467307616:
    extend(40);
    NEXT();
    goto **PC;
func_5467307744:
    extend(41);
    NEXT();
    goto **PC;
func_5467307904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467307904;
    goto **PC;
func_5467308192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467308192;
    goto **PC;
func_5467308320:
    extend(42);
    NEXT();
    goto **PC;
func_5467308448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467308448;
    goto **PC;
func_5467308576:
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
    PC = func_5467304336_op0;
    goto **PC;
}
