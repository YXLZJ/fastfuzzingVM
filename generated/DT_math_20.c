#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 20
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
    static void *func_5165314768_op0[2] = { &&func_5165315760, &&RETURN };
    static void *func_5165314768_op1[2] = { &&func_5165315088, &&RETURN };
    static void *func_5165314768_op2[2] = { &&func_5165315952, &&RETURN };
    static void *func_5165314768_op3[2] = { &&func_5165316176, &&RETURN };
    static void *func_5165314768_op4[2] = { &&func_5165316304, &&RETURN };
    static void *func_5165314768_op5[2] = { &&func_5165316496, &&RETURN };
    static void *func_5165314768_op6[2] = { &&func_5165316624, &&RETURN };
    static void *func_5165314768_op7[2] = { &&func_5165316752, &&RETURN };
    static void *func_5165314768_op8[2] = { &&func_5165316880, &&RETURN };
    static void *func_5165314768_op9[2] = { &&func_5165316432, &&RETURN };
    static void *func_5165314896_op0[2] = { &&func_5165317280, &&RETURN };
    static void *func_5165314896_op1[2] = { &&func_5165316016, &&RETURN };
    static void *func_5165314896_op2[2] = { &&func_5165314384, &&RETURN };
    static void *func_5165314320_op0[2] = { &&func_5165315152, &&RETURN };
    static void *func_5165314320_op1[2] = { &&func_5165314592, &&RETURN };
    static void *func_5165314592_op0[2] = { &&func_5165318016, &&RETURN };
    static void *func_5165314592_op1[2] = { &&func_5165314768, &&RETURN };
    static void *func_5165314448_op0[2] = { &&func_5165314896, &&HALT };
    static void *func_5165314384_op0[2] = { &&func_5165318304, &&RETURN };
    static void *func_5165314384_op1[2] = { &&func_5165318560, &&RETURN };
    static void *func_5165314384_op2[2] = { &&func_5165314320, &&RETURN };
    static void *exp_5165317280[4] = {&&func_5165314384, &&func_5165315456, &&func_5165314896, &&RETURN };
    static void *exp_5165316016[4] = {&&func_5165314384, &&func_5165317600, &&func_5165314896, &&RETURN };
    static void *exp_5165315152[4] = {&&func_5165317728, &&func_5165314896, &&func_5165317856, &&RETURN };
    static void *exp_5165318016[3] = {&&func_5165314768, &&func_5165314592, &&RETURN };
    static void *exp_5165318304[4] = {&&func_5165314320, &&func_5165318432, &&func_5165314384, &&RETURN };
    static void *exp_5165318560[4] = {&&func_5165314320, &&func_5165318688, &&func_5165314384, &&RETURN };

func_5165314768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314768_op0;
            break;
        case 1:
            PC = func_5165314768_op1;
            break;
        case 2:
            PC = func_5165314768_op2;
            break;
        case 3:
            PC = func_5165314768_op3;
            break;
        case 4:
            PC = func_5165314768_op4;
            break;
        case 5:
            PC = func_5165314768_op5;
            break;
        case 6:
            PC = func_5165314768_op6;
            break;
        case 7:
            PC = func_5165314768_op7;
            break;
        case 8:
            PC = func_5165314768_op8;
            break;
        case 9:
            PC = func_5165314768_op9;
            break;
    }
    goto **PC;
func_5165314896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314896_op0;
            break;
        case 1:
            PC = func_5165314896_op1;
            break;
        case 2:
            PC = func_5165314896_op2;
            break;
    }
    goto **PC;
func_5165314320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314320_op0;
            break;
        case 1:
            PC = func_5165314320_op1;
            break;
    }
    goto **PC;
func_5165314592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314592_op0;
            break;
        case 1:
            PC = func_5165314592_op1;
            break;
    }
    goto **PC;
func_5165314448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314448_op0;
            break;
    }
    goto **PC;
func_5165314384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165314384_op0;
            break;
        case 1:
            PC = func_5165314384_op1;
            break;
        case 2:
            PC = func_5165314384_op2;
            break;
    }
    goto **PC;
func_5165315760:
    extend(48);
    NEXT();
    goto **PC;
func_5165315088:
    extend(49);
    NEXT();
    goto **PC;
func_5165315952:
    extend(50);
    NEXT();
    goto **PC;
func_5165316176:
    extend(51);
    NEXT();
    goto **PC;
func_5165316304:
    extend(52);
    NEXT();
    goto **PC;
func_5165316496:
    extend(53);
    NEXT();
    goto **PC;
func_5165316624:
    extend(54);
    NEXT();
    goto **PC;
func_5165316752:
    extend(55);
    NEXT();
    goto **PC;
func_5165316880:
    extend(56);
    NEXT();
    goto **PC;
func_5165316432:
    extend(57);
    NEXT();
    goto **PC;
func_5165317280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165317280;
    goto **PC;
func_5165315456:
    extend(43);
    NEXT();
    goto **PC;
func_5165316016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165316016;
    goto **PC;
func_5165317600:
    extend(45);
    NEXT();
    goto **PC;
func_5165315152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165315152;
    goto **PC;
func_5165317728:
    extend(40);
    NEXT();
    goto **PC;
func_5165317856:
    extend(41);
    NEXT();
    goto **PC;
func_5165318016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165318016;
    goto **PC;
func_5165318304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165318304;
    goto **PC;
func_5165318432:
    extend(42);
    NEXT();
    goto **PC;
func_5165318560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165318560;
    goto **PC;
func_5165318688:
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
    PC = func_5165314448_op0;
    goto **PC;
}
