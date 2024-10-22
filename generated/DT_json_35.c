#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 35
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
    static void *func_5005933744_op0[2] = { &&func_5005935376, &&RETURN };
    static void *func_5005933744_op1[2] = { &&func_5005935760, &&RETURN };
    static void *func_5005934304_op0[2] = { &&func_5005936224, &&RETURN };
    static void *func_5005934304_op1[2] = { &&func_5005936352, &&RETURN };
    static void *func_5005934304_op2[2] = { &&func_5005936480, &&RETURN };
    static void *func_5005934304_op3[2] = { &&func_5005935072, &&RETURN };
    static void *func_5005934304_op4[2] = { &&func_5005936864, &&RETURN };
    static void *func_5005934304_op5[2] = { &&func_5005937056, &&RETURN };
    static void *func_5005934304_op6[2] = { &&func_5005937184, &&RETURN };
    static void *func_5005934304_op7[2] = { &&func_5005937312, &&RETURN };
    static void *func_5005934304_op8[2] = { &&func_5005937440, &&RETURN };
    static void *func_5005934304_op9[2] = { &&func_5005936992, &&RETURN };
    static void *func_5005934112_op0[2] = { &&func_5005934928, &&RETURN };
    static void *func_5005934112_op1[2] = { &&func_5005935440, &&RETURN };
    static void *func_5005933872_op0[2] = { &&func_5005935968, &&RETURN };
    static void *func_5005933872_op1[2] = { &&func_5005934656, &&RETURN };
    static void *func_5005934048_op0[2] = { &&func_5005934304, &&RETURN };
    static void *func_5005934048_op1[2] = { &&func_5005936096, &&RETURN };
    static void *func_5005934528_op0[2] = { &&func_5005938032, &&RETURN };
    static void *func_5005934528_op1[2] = { &&func_5005938464, &&RETURN };
    static void *func_5005934656_op0[2] = { &&func_5005938608, &&RETURN };
    static void *func_5005934448_op0[2] = { &&func_5005935440, &&HALT };
    static void *func_5005935008_op0[2] = { &&func_5005937952, &&RETURN };
    static void *func_5005935008_op1[2] = { &&func_5005939376, &&RETURN };
    static void *func_5005935008_op2[2] = { &&func_5005939504, &&RETURN };
    static void *func_5005935008_op3[2] = { &&func_5005939664, &&RETURN };
    static void *func_5005935008_op4[2] = { &&func_5005939792, &&RETURN };
    static void *func_5005935440_op0[2] = { &&func_5005934528, &&RETURN };
    static void *func_5005935440_op1[2] = { &&func_5005933744, &&RETURN };
    static void *func_5005935440_op2[2] = { &&func_5005935008, &&RETURN };
    static void *func_5005935440_op3[2] = { &&func_5005934048, &&RETURN };
    static void *func_5005935440_op4[2] = { &&func_5005939216, &&RETURN };
    static void *func_5005935440_op5[2] = { &&func_5005940320, &&RETURN };
    static void *func_5005935440_op6[2] = { &&func_5005940448, &&RETURN };
    static void *exp_5005935376[4] = {&&func_5005935632, &&func_5005934112, &&func_5005935200, &&RETURN };
    static void *exp_5005935760[3] = {&&func_5005935632, &&func_5005935200, &&RETURN };
    static void *exp_5005934928[4] = {&&func_5005935440, &&func_5005937824, &&func_5005934112, &&RETURN };
    static void *exp_5005935968[4] = {&&func_5005934656, &&func_5005937824, &&func_5005933872, &&RETURN };
    static void *exp_5005936096[3] = {&&func_5005934304, &&func_5005934048, &&RETURN };
    static void *exp_5005938032[4] = {&&func_5005938160, &&func_5005933872, &&func_5005938288, &&RETURN };
    static void *exp_5005938464[3] = {&&func_5005938160, &&func_5005938288, &&RETURN };
    static void *exp_5005938608[4] = {&&func_5005935008, &&func_5005936608, &&func_5005935440, &&RETURN };

func_5005933744:
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
            PC = func_5005933744_op0;
            break;
        case 1:
            PC = func_5005933744_op1;
            break;
    }
    goto **PC;
func_5005934304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5005934304_op0;
            break;
        case 1:
            PC = func_5005934304_op1;
            break;
        case 2:
            PC = func_5005934304_op2;
            break;
        case 3:
            PC = func_5005934304_op3;
            break;
        case 4:
            PC = func_5005934304_op4;
            break;
        case 5:
            PC = func_5005934304_op5;
            break;
        case 6:
            PC = func_5005934304_op6;
            break;
        case 7:
            PC = func_5005934304_op7;
            break;
        case 8:
            PC = func_5005934304_op8;
            break;
        case 9:
            PC = func_5005934304_op9;
            break;
    }
    goto **PC;
func_5005934112:
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
            PC = func_5005934112_op0;
            break;
        case 1:
            PC = func_5005934112_op1;
            break;
    }
    goto **PC;
func_5005933872:
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
            PC = func_5005933872_op0;
            break;
        case 1:
            PC = func_5005933872_op1;
            break;
    }
    goto **PC;
func_5005934048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5005934048_op0;
            break;
        case 1:
            PC = func_5005934048_op1;
            break;
    }
    goto **PC;
func_5005934528:
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
            PC = func_5005934528_op0;
            break;
        case 1:
            PC = func_5005934528_op1;
            break;
    }
    goto **PC;
func_5005934656:
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
            PC = func_5005934656_op0;
            break;
    }
    goto **PC;
func_5005934448:
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
            PC = func_5005934448_op0;
            break;
    }
    goto **PC;
func_5005935008:
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
            PC = func_5005935008_op0;
            break;
        case 1:
            PC = func_5005935008_op1;
            break;
        case 2:
            PC = func_5005935008_op2;
            break;
        case 3:
            PC = func_5005935008_op3;
            break;
        case 4:
            PC = func_5005935008_op4;
            break;
    }
    goto **PC;
func_5005935440:
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
            PC = func_5005935440_op0;
            break;
        case 1:
            PC = func_5005935440_op1;
            break;
        case 2:
            PC = func_5005935440_op2;
            break;
        case 3:
            PC = func_5005935440_op3;
            break;
        case 4:
            PC = func_5005935440_op4;
            break;
        case 5:
            PC = func_5005935440_op5;
            break;
        case 6:
            PC = func_5005935440_op6;
            break;
    }
    goto **PC;
func_5005935376:
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
    PC = exp_5005935376;
    goto **PC;
func_5005935632:
    extend(91);
    NEXT();
    goto **PC;
func_5005935200:
    extend(93);
    NEXT();
    goto **PC;
func_5005935760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5005935760;
    goto **PC;
func_5005936224:
    extend(48);
    NEXT();
    goto **PC;
func_5005936352:
    extend(49);
    NEXT();
    goto **PC;
func_5005936480:
    extend(50);
    NEXT();
    goto **PC;
func_5005935072:
    extend(51);
    NEXT();
    goto **PC;
func_5005936864:
    extend(52);
    NEXT();
    goto **PC;
func_5005937056:
    extend(53);
    NEXT();
    goto **PC;
func_5005937184:
    extend(54);
    NEXT();
    goto **PC;
func_5005937312:
    extend(55);
    NEXT();
    goto **PC;
func_5005937440:
    extend(56);
    NEXT();
    goto **PC;
func_5005936992:
    extend(57);
    NEXT();
    goto **PC;
func_5005934928:
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
    PC = exp_5005934928;
    goto **PC;
func_5005937824:
    extend(44);
    NEXT();
    goto **PC;
func_5005935968:
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
    PC = exp_5005935968;
    goto **PC;
func_5005936096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5005936096;
    goto **PC;
func_5005938032:
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
    PC = exp_5005938032;
    goto **PC;
func_5005938160:
    extend(123);
    NEXT();
    goto **PC;
func_5005938288:
    extend(125);
    NEXT();
    goto **PC;
func_5005938464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5005938464;
    goto **PC;
func_5005938608:
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
    PC = exp_5005938608;
    goto **PC;
func_5005936608:
    extend(58);
    NEXT();
    goto **PC;
func_5005937952:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5005939376:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5005939504:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5005939664:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5005939792:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5005939216:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5005940320:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5005940448:
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
    PC = func_5005934448_op0;
    goto **PC;
}
