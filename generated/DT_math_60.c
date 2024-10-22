#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 60
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
    static void *func_5635076816_op0[2] = { &&func_5635077808, &&RETURN };
    static void *func_5635076816_op1[2] = { &&func_5635077136, &&RETURN };
    static void *func_5635076816_op2[2] = { &&func_5635078000, &&RETURN };
    static void *func_5635076816_op3[2] = { &&func_5635078224, &&RETURN };
    static void *func_5635076816_op4[2] = { &&func_5635078352, &&RETURN };
    static void *func_5635076816_op5[2] = { &&func_5635078544, &&RETURN };
    static void *func_5635076816_op6[2] = { &&func_5635078672, &&RETURN };
    static void *func_5635076816_op7[2] = { &&func_5635078800, &&RETURN };
    static void *func_5635076816_op8[2] = { &&func_5635078928, &&RETURN };
    static void *func_5635076816_op9[2] = { &&func_5635078480, &&RETURN };
    static void *func_5635076944_op0[2] = { &&func_5635079328, &&RETURN };
    static void *func_5635076944_op1[2] = { &&func_5635078064, &&RETURN };
    static void *func_5635076944_op2[2] = { &&func_5635076432, &&RETURN };
    static void *func_5635076368_op0[2] = { &&func_5635077200, &&RETURN };
    static void *func_5635076368_op1[2] = { &&func_5635076640, &&RETURN };
    static void *func_5635076640_op0[2] = { &&func_5635080064, &&RETURN };
    static void *func_5635076640_op1[2] = { &&func_5635076816, &&RETURN };
    static void *func_5635076496_op0[2] = { &&func_5635076944, &&HALT };
    static void *func_5635076432_op0[2] = { &&func_5635080352, &&RETURN };
    static void *func_5635076432_op1[2] = { &&func_5635080608, &&RETURN };
    static void *func_5635076432_op2[2] = { &&func_5635076368, &&RETURN };
    static void *exp_5635079328[4] = {&&func_5635076432, &&func_5635077504, &&func_5635076944, &&RETURN };
    static void *exp_5635078064[4] = {&&func_5635076432, &&func_5635079648, &&func_5635076944, &&RETURN };
    static void *exp_5635077200[4] = {&&func_5635079776, &&func_5635076944, &&func_5635079904, &&RETURN };
    static void *exp_5635080064[3] = {&&func_5635076816, &&func_5635076640, &&RETURN };
    static void *exp_5635080352[4] = {&&func_5635076368, &&func_5635080480, &&func_5635076432, &&RETURN };
    static void *exp_5635080608[4] = {&&func_5635076368, &&func_5635080736, &&func_5635076432, &&RETURN };

func_5635076816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076816_op0;
            break;
        case 1:
            PC = func_5635076816_op1;
            break;
        case 2:
            PC = func_5635076816_op2;
            break;
        case 3:
            PC = func_5635076816_op3;
            break;
        case 4:
            PC = func_5635076816_op4;
            break;
        case 5:
            PC = func_5635076816_op5;
            break;
        case 6:
            PC = func_5635076816_op6;
            break;
        case 7:
            PC = func_5635076816_op7;
            break;
        case 8:
            PC = func_5635076816_op8;
            break;
        case 9:
            PC = func_5635076816_op9;
            break;
    }
    goto **PC;
func_5635076944:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076944_op0;
            break;
        case 1:
            PC = func_5635076944_op1;
            break;
        case 2:
            PC = func_5635076944_op2;
            break;
    }
    goto **PC;
func_5635076368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076368_op0;
            break;
        case 1:
            PC = func_5635076368_op1;
            break;
    }
    goto **PC;
func_5635076640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076640_op0;
            break;
        case 1:
            PC = func_5635076640_op1;
            break;
    }
    goto **PC;
func_5635076496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076496_op0;
            break;
    }
    goto **PC;
func_5635076432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5635076432_op0;
            break;
        case 1:
            PC = func_5635076432_op1;
            break;
        case 2:
            PC = func_5635076432_op2;
            break;
    }
    goto **PC;
func_5635077808:
    extend(48);
    NEXT();
    goto **PC;
func_5635077136:
    extend(49);
    NEXT();
    goto **PC;
func_5635078000:
    extend(50);
    NEXT();
    goto **PC;
func_5635078224:
    extend(51);
    NEXT();
    goto **PC;
func_5635078352:
    extend(52);
    NEXT();
    goto **PC;
func_5635078544:
    extend(53);
    NEXT();
    goto **PC;
func_5635078672:
    extend(54);
    NEXT();
    goto **PC;
func_5635078800:
    extend(55);
    NEXT();
    goto **PC;
func_5635078928:
    extend(56);
    NEXT();
    goto **PC;
func_5635078480:
    extend(57);
    NEXT();
    goto **PC;
func_5635079328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635079328;
    goto **PC;
func_5635077504:
    extend(43);
    NEXT();
    goto **PC;
func_5635078064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635078064;
    goto **PC;
func_5635079648:
    extend(45);
    NEXT();
    goto **PC;
func_5635077200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635077200;
    goto **PC;
func_5635079776:
    extend(40);
    NEXT();
    goto **PC;
func_5635079904:
    extend(41);
    NEXT();
    goto **PC;
func_5635080064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635080064;
    goto **PC;
func_5635080352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635080352;
    goto **PC;
func_5635080480:
    extend(42);
    NEXT();
    goto **PC;
func_5635080608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5635080608;
    goto **PC;
func_5635080736:
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
    PC = func_5635076496_op0;
    goto **PC;
}
