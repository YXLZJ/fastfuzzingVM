#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 50
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
    static void *func_4854936272_op0[2] = { &&func_4854937264, &&RETURN };
    static void *func_4854936272_op1[2] = { &&func_4854936592, &&RETURN };
    static void *func_4854936272_op2[2] = { &&func_4854937456, &&RETURN };
    static void *func_4854936272_op3[2] = { &&func_4854937680, &&RETURN };
    static void *func_4854936272_op4[2] = { &&func_4854937808, &&RETURN };
    static void *func_4854936272_op5[2] = { &&func_4854938000, &&RETURN };
    static void *func_4854936272_op6[2] = { &&func_4854938128, &&RETURN };
    static void *func_4854936272_op7[2] = { &&func_4854938256, &&RETURN };
    static void *func_4854936272_op8[2] = { &&func_4854938384, &&RETURN };
    static void *func_4854936272_op9[2] = { &&func_4854937936, &&RETURN };
    static void *func_4854936400_op0[2] = { &&func_4854938784, &&RETURN };
    static void *func_4854936400_op1[2] = { &&func_4854937520, &&RETURN };
    static void *func_4854936400_op2[2] = { &&func_4854935888, &&RETURN };
    static void *func_4854935824_op0[2] = { &&func_4854936656, &&RETURN };
    static void *func_4854935824_op1[2] = { &&func_4854936096, &&RETURN };
    static void *func_4854936096_op0[2] = { &&func_4854939520, &&RETURN };
    static void *func_4854936096_op1[2] = { &&func_4854936272, &&RETURN };
    static void *func_4854935952_op0[2] = { &&func_4854936400, &&HALT };
    static void *func_4854935888_op0[2] = { &&func_4854939808, &&RETURN };
    static void *func_4854935888_op1[2] = { &&func_4854940064, &&RETURN };
    static void *func_4854935888_op2[2] = { &&func_4854935824, &&RETURN };
    static void *exp_4854938784[4] = {&&func_4854935888, &&func_4854936960, &&func_4854936400, &&RETURN };
    static void *exp_4854937520[4] = {&&func_4854935888, &&func_4854939104, &&func_4854936400, &&RETURN };
    static void *exp_4854936656[4] = {&&func_4854939232, &&func_4854936400, &&func_4854939360, &&RETURN };
    static void *exp_4854939520[3] = {&&func_4854936272, &&func_4854936096, &&RETURN };
    static void *exp_4854939808[4] = {&&func_4854935824, &&func_4854939936, &&func_4854935888, &&RETURN };
    static void *exp_4854940064[4] = {&&func_4854935824, &&func_4854940192, &&func_4854935888, &&RETURN };

func_4854936272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4854936272_op0;
            break;
        case 1:
            PC = func_4854936272_op1;
            break;
        case 2:
            PC = func_4854936272_op2;
            break;
        case 3:
            PC = func_4854936272_op3;
            break;
        case 4:
            PC = func_4854936272_op4;
            break;
        case 5:
            PC = func_4854936272_op5;
            break;
        case 6:
            PC = func_4854936272_op6;
            break;
        case 7:
            PC = func_4854936272_op7;
            break;
        case 8:
            PC = func_4854936272_op8;
            break;
        case 9:
            PC = func_4854936272_op9;
            break;
    }
    goto **PC;
func_4854936400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4854936400_op0;
            break;
        case 1:
            PC = func_4854936400_op1;
            break;
        case 2:
            PC = func_4854936400_op2;
            break;
    }
    goto **PC;
func_4854935824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4854935824_op0;
            break;
        case 1:
            PC = func_4854935824_op1;
            break;
    }
    goto **PC;
func_4854936096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4854936096_op0;
            break;
        case 1:
            PC = func_4854936096_op1;
            break;
    }
    goto **PC;
func_4854935952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4854935952_op0;
            break;
    }
    goto **PC;
func_4854935888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4854935888_op0;
            break;
        case 1:
            PC = func_4854935888_op1;
            break;
        case 2:
            PC = func_4854935888_op2;
            break;
    }
    goto **PC;
func_4854937264:
    extend(48);
    NEXT();
    goto **PC;
func_4854936592:
    extend(49);
    NEXT();
    goto **PC;
func_4854937456:
    extend(50);
    NEXT();
    goto **PC;
func_4854937680:
    extend(51);
    NEXT();
    goto **PC;
func_4854937808:
    extend(52);
    NEXT();
    goto **PC;
func_4854938000:
    extend(53);
    NEXT();
    goto **PC;
func_4854938128:
    extend(54);
    NEXT();
    goto **PC;
func_4854938256:
    extend(55);
    NEXT();
    goto **PC;
func_4854938384:
    extend(56);
    NEXT();
    goto **PC;
func_4854937936:
    extend(57);
    NEXT();
    goto **PC;
func_4854938784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854938784;
    goto **PC;
func_4854936960:
    extend(43);
    NEXT();
    goto **PC;
func_4854937520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854937520;
    goto **PC;
func_4854939104:
    extend(45);
    NEXT();
    goto **PC;
func_4854936656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854936656;
    goto **PC;
func_4854939232:
    extend(40);
    NEXT();
    goto **PC;
func_4854939360:
    extend(41);
    NEXT();
    goto **PC;
func_4854939520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854939520;
    goto **PC;
func_4854939808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854939808;
    goto **PC;
func_4854939936:
    extend(42);
    NEXT();
    goto **PC;
func_4854940064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4854940064;
    goto **PC;
func_4854940192:
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
    PC = func_4854935952_op0;
    goto **PC;
}
