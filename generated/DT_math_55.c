#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 55
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
    static void *func_5509247696_op0[2] = { &&func_5509248688, &&RETURN };
    static void *func_5509247696_op1[2] = { &&func_5509248016, &&RETURN };
    static void *func_5509247696_op2[2] = { &&func_5509248880, &&RETURN };
    static void *func_5509247696_op3[2] = { &&func_5509249104, &&RETURN };
    static void *func_5509247696_op4[2] = { &&func_5509249232, &&RETURN };
    static void *func_5509247696_op5[2] = { &&func_5509249424, &&RETURN };
    static void *func_5509247696_op6[2] = { &&func_5509249552, &&RETURN };
    static void *func_5509247696_op7[2] = { &&func_5509249680, &&RETURN };
    static void *func_5509247696_op8[2] = { &&func_5509249808, &&RETURN };
    static void *func_5509247696_op9[2] = { &&func_5509249360, &&RETURN };
    static void *func_5509247824_op0[2] = { &&func_5509250208, &&RETURN };
    static void *func_5509247824_op1[2] = { &&func_5509248944, &&RETURN };
    static void *func_5509247824_op2[2] = { &&func_5509247312, &&RETURN };
    static void *func_5509247248_op0[2] = { &&func_5509248080, &&RETURN };
    static void *func_5509247248_op1[2] = { &&func_5509247520, &&RETURN };
    static void *func_5509247520_op0[2] = { &&func_5509250944, &&RETURN };
    static void *func_5509247520_op1[2] = { &&func_5509247696, &&RETURN };
    static void *func_5509247376_op0[2] = { &&func_5509247824, &&HALT };
    static void *func_5509247312_op0[2] = { &&func_5509251232, &&RETURN };
    static void *func_5509247312_op1[2] = { &&func_5509251488, &&RETURN };
    static void *func_5509247312_op2[2] = { &&func_5509247248, &&RETURN };
    static void *exp_5509250208[4] = {&&func_5509247312, &&func_5509248384, &&func_5509247824, &&RETURN };
    static void *exp_5509248944[4] = {&&func_5509247312, &&func_5509250528, &&func_5509247824, &&RETURN };
    static void *exp_5509248080[4] = {&&func_5509250656, &&func_5509247824, &&func_5509250784, &&RETURN };
    static void *exp_5509250944[3] = {&&func_5509247696, &&func_5509247520, &&RETURN };
    static void *exp_5509251232[4] = {&&func_5509247248, &&func_5509251360, &&func_5509247312, &&RETURN };
    static void *exp_5509251488[4] = {&&func_5509247248, &&func_5509251616, &&func_5509247312, &&RETURN };

func_5509247696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247696_op0;
            break;
        case 1:
            PC = func_5509247696_op1;
            break;
        case 2:
            PC = func_5509247696_op2;
            break;
        case 3:
            PC = func_5509247696_op3;
            break;
        case 4:
            PC = func_5509247696_op4;
            break;
        case 5:
            PC = func_5509247696_op5;
            break;
        case 6:
            PC = func_5509247696_op6;
            break;
        case 7:
            PC = func_5509247696_op7;
            break;
        case 8:
            PC = func_5509247696_op8;
            break;
        case 9:
            PC = func_5509247696_op9;
            break;
    }
    goto **PC;
func_5509247824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247824_op0;
            break;
        case 1:
            PC = func_5509247824_op1;
            break;
        case 2:
            PC = func_5509247824_op2;
            break;
    }
    goto **PC;
func_5509247248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247248_op0;
            break;
        case 1:
            PC = func_5509247248_op1;
            break;
    }
    goto **PC;
func_5509247520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247520_op0;
            break;
        case 1:
            PC = func_5509247520_op1;
            break;
    }
    goto **PC;
func_5509247376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247376_op0;
            break;
    }
    goto **PC;
func_5509247312:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5509247312_op0;
            break;
        case 1:
            PC = func_5509247312_op1;
            break;
        case 2:
            PC = func_5509247312_op2;
            break;
    }
    goto **PC;
func_5509248688:
    extend(48);
    NEXT();
    goto **PC;
func_5509248016:
    extend(49);
    NEXT();
    goto **PC;
func_5509248880:
    extend(50);
    NEXT();
    goto **PC;
func_5509249104:
    extend(51);
    NEXT();
    goto **PC;
func_5509249232:
    extend(52);
    NEXT();
    goto **PC;
func_5509249424:
    extend(53);
    NEXT();
    goto **PC;
func_5509249552:
    extend(54);
    NEXT();
    goto **PC;
func_5509249680:
    extend(55);
    NEXT();
    goto **PC;
func_5509249808:
    extend(56);
    NEXT();
    goto **PC;
func_5509249360:
    extend(57);
    NEXT();
    goto **PC;
func_5509250208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509250208;
    goto **PC;
func_5509248384:
    extend(43);
    NEXT();
    goto **PC;
func_5509248944:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509248944;
    goto **PC;
func_5509250528:
    extend(45);
    NEXT();
    goto **PC;
func_5509248080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509248080;
    goto **PC;
func_5509250656:
    extend(40);
    NEXT();
    goto **PC;
func_5509250784:
    extend(41);
    NEXT();
    goto **PC;
func_5509250944:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509250944;
    goto **PC;
func_5509251232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509251232;
    goto **PC;
func_5509251360:
    extend(42);
    NEXT();
    goto **PC;
func_5509251488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5509251488;
    goto **PC;
func_5509251616:
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
    PC = func_5509247376_op0;
    goto **PC;
}
