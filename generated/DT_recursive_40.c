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
    static void *func_5274362080_op0[2] = { &&func_5274363744, &&RETURN };
    static void *func_5274362080_op1[2] = { &&func_5274363872, &&RETURN };
    static void *func_5274362080_op2[2] = { &&func_5274364064, &&RETURN };
    static void *func_5274363536_op0[2] = { &&func_5274363680, &&RETURN };
    static void *func_5274363536_op1[2] = { &&func_5274365088, &&RETURN };
    static void *func_5274363536_op2[2] = { &&func_5274365408, &&RETURN };
    static void *func_5274363376_op0[2] = { &&func_5274363536, &&HALT };
    static void *exp_5274363680[5] = {&&func_5274362080, &&func_5274364528, &&func_5274364656, &&func_5274364880, &&RETURN };
    static void *exp_5274365088[4] = {&&func_5274362080, &&func_5274365216, &&func_5274364368, &&RETURN };
    static void *exp_5274365408[4] = {&&func_5274362080, &&func_5274365536, &&func_5274363536, &&RETURN };

func_5274362080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274362080_op0;
            break;
        case 1:
            PC = func_5274362080_op1;
            break;
        case 2:
            PC = func_5274362080_op2;
            break;
    }
    goto **PC;
func_5274363536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274363536_op0;
            break;
        case 1:
            PC = func_5274363536_op1;
            break;
        case 2:
            PC = func_5274363536_op2;
            break;
    }
    goto **PC;
func_5274363376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5274363376_op0;
            break;
    }
    goto **PC;
func_5274363744:
    extend(48);
    extend(100);
    NEXT();
    goto **PC;
func_5274363872:
    extend(49);
    NEXT();
    goto **PC;
func_5274364064:
    extend(50);
    NEXT();
    goto **PC;
func_5274363680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        extend(51);
        extend(52);
        extend(53);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274363680;
    goto **PC;
func_5274364528:
    extend(51);
    NEXT();
    goto **PC;
func_5274364656:
    extend(52);
    NEXT();
    goto **PC;
func_5274364880:
    extend(53);
    NEXT();
    goto **PC;
func_5274365088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274365088;
    goto **PC;
func_5274365216:
    extend(42);
    NEXT();
    goto **PC;
func_5274364368:
    extend(116);
    NEXT();
    goto **PC;
func_5274365408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(50);
        extend(43);
        extend(50);
        extend(42);
        extend(116);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274365408;
    goto **PC;
func_5274365536:
    extend(43);
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
    PC = func_5274363376_op0;
    goto **PC;
}
