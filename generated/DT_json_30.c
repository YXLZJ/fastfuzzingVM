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
    static void *func_5836405936_op0[2] = { &&func_5836407568, &&RETURN };
    static void *func_5836405936_op1[2] = { &&func_5836407952, &&RETURN };
    static void *func_5836406496_op0[2] = { &&func_5836408416, &&RETURN };
    static void *func_5836406496_op1[2] = { &&func_5836408544, &&RETURN };
    static void *func_5836406496_op2[2] = { &&func_5836408672, &&RETURN };
    static void *func_5836406496_op3[2] = { &&func_5836407264, &&RETURN };
    static void *func_5836406496_op4[2] = { &&func_5836409056, &&RETURN };
    static void *func_5836406496_op5[2] = { &&func_5836409248, &&RETURN };
    static void *func_5836406496_op6[2] = { &&func_5836409376, &&RETURN };
    static void *func_5836406496_op7[2] = { &&func_5836409504, &&RETURN };
    static void *func_5836406496_op8[2] = { &&func_5836409632, &&RETURN };
    static void *func_5836406496_op9[2] = { &&func_5836409184, &&RETURN };
    static void *func_5836406304_op0[2] = { &&func_5836407120, &&RETURN };
    static void *func_5836406304_op1[2] = { &&func_5836407632, &&RETURN };
    static void *func_5836406064_op0[2] = { &&func_5836408160, &&RETURN };
    static void *func_5836406064_op1[2] = { &&func_5836406848, &&RETURN };
    static void *func_5836406240_op0[2] = { &&func_5836406496, &&RETURN };
    static void *func_5836406240_op1[2] = { &&func_5836408288, &&RETURN };
    static void *func_5836406720_op0[2] = { &&func_5836410224, &&RETURN };
    static void *func_5836406720_op1[2] = { &&func_5836410656, &&RETURN };
    static void *func_5836406848_op0[2] = { &&func_5836410800, &&RETURN };
    static void *func_5836406640_op0[2] = { &&func_5836407632, &&HALT };
    static void *func_5836407200_op0[2] = { &&func_5836410144, &&RETURN };
    static void *func_5836407200_op1[2] = { &&func_5836411568, &&RETURN };
    static void *func_5836407200_op2[2] = { &&func_5836411696, &&RETURN };
    static void *func_5836407200_op3[2] = { &&func_5836411856, &&RETURN };
    static void *func_5836407200_op4[2] = { &&func_5836411984, &&RETURN };
    static void *func_5836407632_op0[2] = { &&func_5836406720, &&RETURN };
    static void *func_5836407632_op1[2] = { &&func_5836405936, &&RETURN };
    static void *func_5836407632_op2[2] = { &&func_5836407200, &&RETURN };
    static void *func_5836407632_op3[2] = { &&func_5836406240, &&RETURN };
    static void *func_5836407632_op4[2] = { &&func_5836411408, &&RETURN };
    static void *func_5836407632_op5[2] = { &&func_5836412512, &&RETURN };
    static void *func_5836407632_op6[2] = { &&func_5836412640, &&RETURN };
    static void *exp_5836407568[4] = {&&func_5836407824, &&func_5836406304, &&func_5836407392, &&RETURN };
    static void *exp_5836407952[3] = {&&func_5836407824, &&func_5836407392, &&RETURN };
    static void *exp_5836407120[4] = {&&func_5836407632, &&func_5836410016, &&func_5836406304, &&RETURN };
    static void *exp_5836408160[4] = {&&func_5836406848, &&func_5836410016, &&func_5836406064, &&RETURN };
    static void *exp_5836408288[3] = {&&func_5836406496, &&func_5836406240, &&RETURN };
    static void *exp_5836410224[4] = {&&func_5836410352, &&func_5836406064, &&func_5836410480, &&RETURN };
    static void *exp_5836410656[3] = {&&func_5836410352, &&func_5836410480, &&RETURN };
    static void *exp_5836410800[4] = {&&func_5836407200, &&func_5836408800, &&func_5836407632, &&RETURN };

func_5836405936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5836405936_op0;
            break;
        case 1:
            PC = func_5836405936_op1;
            break;
    }
    goto **PC;
func_5836406496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406496_op0;
            break;
        case 1:
            PC = func_5836406496_op1;
            break;
        case 2:
            PC = func_5836406496_op2;
            break;
        case 3:
            PC = func_5836406496_op3;
            break;
        case 4:
            PC = func_5836406496_op4;
            break;
        case 5:
            PC = func_5836406496_op5;
            break;
        case 6:
            PC = func_5836406496_op6;
            break;
        case 7:
            PC = func_5836406496_op7;
            break;
        case 8:
            PC = func_5836406496_op8;
            break;
        case 9:
            PC = func_5836406496_op9;
            break;
    }
    goto **PC;
func_5836406304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406304_op0;
            break;
        case 1:
            PC = func_5836406304_op1;
            break;
    }
    goto **PC;
func_5836406064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406064_op0;
            break;
        case 1:
            PC = func_5836406064_op1;
            break;
    }
    goto **PC;
func_5836406240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406240_op0;
            break;
        case 1:
            PC = func_5836406240_op1;
            break;
    }
    goto **PC;
func_5836406720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406720_op0;
            break;
        case 1:
            PC = func_5836406720_op1;
            break;
    }
    goto **PC;
func_5836406848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406848_op0;
            break;
    }
    goto **PC;
func_5836406640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5836406640_op0;
            break;
    }
    goto **PC;
func_5836407200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5836407200_op0;
            break;
        case 1:
            PC = func_5836407200_op1;
            break;
        case 2:
            PC = func_5836407200_op2;
            break;
        case 3:
            PC = func_5836407200_op3;
            break;
        case 4:
            PC = func_5836407200_op4;
            break;
    }
    goto **PC;
func_5836407632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5836407632_op0;
            break;
        case 1:
            PC = func_5836407632_op1;
            break;
        case 2:
            PC = func_5836407632_op2;
            break;
        case 3:
            PC = func_5836407632_op3;
            break;
        case 4:
            PC = func_5836407632_op4;
            break;
        case 5:
            PC = func_5836407632_op5;
            break;
        case 6:
            PC = func_5836407632_op6;
            break;
    }
    goto **PC;
func_5836407568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836407568;
    goto **PC;
func_5836407824:
    extend(91);
    NEXT();
    goto **PC;
func_5836407392:
    extend(93);
    NEXT();
    goto **PC;
func_5836407952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836407952;
    goto **PC;
func_5836408416:
    extend(48);
    NEXT();
    goto **PC;
func_5836408544:
    extend(49);
    NEXT();
    goto **PC;
func_5836408672:
    extend(50);
    NEXT();
    goto **PC;
func_5836407264:
    extend(51);
    NEXT();
    goto **PC;
func_5836409056:
    extend(52);
    NEXT();
    goto **PC;
func_5836409248:
    extend(53);
    NEXT();
    goto **PC;
func_5836409376:
    extend(54);
    NEXT();
    goto **PC;
func_5836409504:
    extend(55);
    NEXT();
    goto **PC;
func_5836409632:
    extend(56);
    NEXT();
    goto **PC;
func_5836409184:
    extend(57);
    NEXT();
    goto **PC;
func_5836407120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836407120;
    goto **PC;
func_5836410016:
    extend(44);
    NEXT();
    goto **PC;
func_5836408160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836408160;
    goto **PC;
func_5836408288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836408288;
    goto **PC;
func_5836410224:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836410224;
    goto **PC;
func_5836410352:
    extend(123);
    NEXT();
    goto **PC;
func_5836410480:
    extend(125);
    NEXT();
    goto **PC;
func_5836410656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836410656;
    goto **PC;
func_5836410800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5836410800;
    goto **PC;
func_5836408800:
    extend(58);
    NEXT();
    goto **PC;
func_5836410144:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5836411568:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5836411696:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5836411856:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5836411984:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5836411408:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5836412512:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5836412640:
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC = func_5836406640_op0;
    goto **PC;
}
