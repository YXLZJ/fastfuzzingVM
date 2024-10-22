#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 25
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
    static void *func_5477783392_op0[2] = { &&func_5458911376, &&RETURN };
    static void *func_5477783392_op1[2] = { &&func_5458910736, &&RETURN };
    static void *func_5477783392_op2[2] = { &&func_5458911568, &&RETURN };
    static void *func_5477783392_op3[2] = { &&func_5458911792, &&RETURN };
    static void *func_5477783392_op4[2] = { &&func_5458911920, &&RETURN };
    static void *func_5477783392_op5[2] = { &&func_5458912112, &&RETURN };
    static void *func_5477783392_op6[2] = { &&func_5458912240, &&RETURN };
    static void *func_5477783392_op7[2] = { &&func_5458912368, &&RETURN };
    static void *func_5477783392_op8[2] = { &&func_5458912496, &&RETURN };
    static void *func_5477783392_op9[2] = { &&func_5458912048, &&RETURN };
    static void *func_5478826144_op0[2] = { &&func_5458910464, &&RETURN };
    static void *func_5478826144_op1[2] = { &&func_5458911296, &&RETURN };
    static void *func_5478826144_op2[2] = { &&func_5458910976, &&RETURN };
    static void *func_5458910336_op0[2] = { &&func_5458912816, &&RETURN };
    static void *func_5458910336_op1[2] = { &&func_5458909712, &&RETURN };
    static void *func_5458909712_op0[2] = { &&func_5458910896, &&RETURN };
    static void *func_5458909712_op1[2] = { &&func_5477783392, &&RETURN };
    static void *func_5458909840_op0[2] = { &&func_5478826144, &&HALT };
    static void *func_5458910976_op0[2] = { &&func_5458913920, &&RETURN };
    static void *func_5458910976_op1[2] = { &&func_5458914176, &&RETURN };
    static void *func_5458910976_op2[2] = { &&func_5458910336, &&RETURN };
    static void *exp_5458910464[4] = {&&func_5458910976, &&func_5458911168, &&func_5478826144, &&RETURN };
    static void *exp_5458911296[4] = {&&func_5458910976, &&func_5458911696, &&func_5478826144, &&RETURN };
    static void *exp_5458912816[4] = {&&func_5458913328, &&func_5478826144, &&func_5458913456, &&RETURN };
    static void *exp_5458910896[3] = {&&func_5477783392, &&func_5458909712, &&RETURN };
    static void *exp_5458913920[4] = {&&func_5458910336, &&func_5458914048, &&func_5458910976, &&RETURN };
    static void *exp_5458914176[4] = {&&func_5458910336, &&func_5458914304, &&func_5458910976, &&RETURN };

func_5477783392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5477783392_op0;
            break;
        case 1:
            PC = func_5477783392_op1;
            break;
        case 2:
            PC = func_5477783392_op2;
            break;
        case 3:
            PC = func_5477783392_op3;
            break;
        case 4:
            PC = func_5477783392_op4;
            break;
        case 5:
            PC = func_5477783392_op5;
            break;
        case 6:
            PC = func_5477783392_op6;
            break;
        case 7:
            PC = func_5477783392_op7;
            break;
        case 8:
            PC = func_5477783392_op8;
            break;
        case 9:
            PC = func_5477783392_op9;
            break;
    }
    goto **PC;
func_5478826144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5478826144_op0;
            break;
        case 1:
            PC = func_5478826144_op1;
            break;
        case 2:
            PC = func_5478826144_op2;
            break;
    }
    goto **PC;
func_5458910336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458910336_op0;
            break;
        case 1:
            PC = func_5458910336_op1;
            break;
    }
    goto **PC;
func_5458909712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458909712_op0;
            break;
        case 1:
            PC = func_5458909712_op1;
            break;
    }
    goto **PC;
func_5458909840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5458909840_op0;
            break;
    }
    goto **PC;
func_5458910976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458910976_op0;
            break;
        case 1:
            PC = func_5458910976_op1;
            break;
        case 2:
            PC = func_5458910976_op2;
            break;
    }
    goto **PC;
func_5458911376:
    extend(48);
    NEXT();
    goto **PC;
func_5458910736:
    extend(49);
    NEXT();
    goto **PC;
func_5458911568:
    extend(50);
    NEXT();
    goto **PC;
func_5458911792:
    extend(51);
    NEXT();
    goto **PC;
func_5458911920:
    extend(52);
    NEXT();
    goto **PC;
func_5458912112:
    extend(53);
    NEXT();
    goto **PC;
func_5458912240:
    extend(54);
    NEXT();
    goto **PC;
func_5458912368:
    extend(55);
    NEXT();
    goto **PC;
func_5458912496:
    extend(56);
    NEXT();
    goto **PC;
func_5458912048:
    extend(57);
    NEXT();
    goto **PC;
func_5458910464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458910464;
    goto **PC;
func_5458911168:
    extend(43);
    NEXT();
    goto **PC;
func_5458911296:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458911296;
    goto **PC;
func_5458911696:
    extend(45);
    NEXT();
    goto **PC;
func_5458912816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458912816;
    goto **PC;
func_5458913328:
    extend(40);
    NEXT();
    goto **PC;
func_5458913456:
    extend(41);
    NEXT();
    goto **PC;
func_5458910896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458910896;
    goto **PC;
func_5458913920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458913920;
    goto **PC;
func_5458914048:
    extend(42);
    NEXT();
    goto **PC;
func_5458914176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458914176;
    goto **PC;
func_5458914304:
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
    PC = func_5458909840_op0;
    goto **PC;
}
