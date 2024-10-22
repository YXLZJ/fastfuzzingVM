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
    static void *func_5618302128_op0[2] = { &&func_5618303760, &&RETURN };
    static void *func_5618302128_op1[2] = { &&func_5618304144, &&RETURN };
    static void *func_5618302688_op0[2] = { &&func_5618304608, &&RETURN };
    static void *func_5618302688_op1[2] = { &&func_5618304736, &&RETURN };
    static void *func_5618302688_op2[2] = { &&func_5618304864, &&RETURN };
    static void *func_5618302688_op3[2] = { &&func_5618303456, &&RETURN };
    static void *func_5618302688_op4[2] = { &&func_5618305248, &&RETURN };
    static void *func_5618302688_op5[2] = { &&func_5618305440, &&RETURN };
    static void *func_5618302688_op6[2] = { &&func_5618305568, &&RETURN };
    static void *func_5618302688_op7[2] = { &&func_5618305696, &&RETURN };
    static void *func_5618302688_op8[2] = { &&func_5618305824, &&RETURN };
    static void *func_5618302688_op9[2] = { &&func_5618305376, &&RETURN };
    static void *func_5618302496_op0[2] = { &&func_5618303312, &&RETURN };
    static void *func_5618302496_op1[2] = { &&func_5618303824, &&RETURN };
    static void *func_5618302256_op0[2] = { &&func_5618304352, &&RETURN };
    static void *func_5618302256_op1[2] = { &&func_5618303040, &&RETURN };
    static void *func_5618302432_op0[2] = { &&func_5618302688, &&RETURN };
    static void *func_5618302432_op1[2] = { &&func_5618304480, &&RETURN };
    static void *func_5618302912_op0[2] = { &&func_5618306416, &&RETURN };
    static void *func_5618302912_op1[2] = { &&func_5618306848, &&RETURN };
    static void *func_5618303040_op0[2] = { &&func_5618306992, &&RETURN };
    static void *func_5618302832_op0[2] = { &&func_5618303824, &&HALT };
    static void *func_5618303392_op0[2] = { &&func_5618306336, &&RETURN };
    static void *func_5618303392_op1[2] = { &&func_5618307760, &&RETURN };
    static void *func_5618303392_op2[2] = { &&func_5618307888, &&RETURN };
    static void *func_5618303392_op3[2] = { &&func_5618308048, &&RETURN };
    static void *func_5618303392_op4[2] = { &&func_5618308176, &&RETURN };
    static void *func_5618303824_op0[2] = { &&func_5618302912, &&RETURN };
    static void *func_5618303824_op1[2] = { &&func_5618302128, &&RETURN };
    static void *func_5618303824_op2[2] = { &&func_5618303392, &&RETURN };
    static void *func_5618303824_op3[2] = { &&func_5618302432, &&RETURN };
    static void *func_5618303824_op4[2] = { &&func_5618307600, &&RETURN };
    static void *func_5618303824_op5[2] = { &&func_5618308704, &&RETURN };
    static void *func_5618303824_op6[2] = { &&func_5618308832, &&RETURN };
    static void *exp_5618303760[4] = {&&func_5618304016, &&func_5618302496, &&func_5618303584, &&RETURN };
    static void *exp_5618304144[3] = {&&func_5618304016, &&func_5618303584, &&RETURN };
    static void *exp_5618303312[4] = {&&func_5618303824, &&func_5618306208, &&func_5618302496, &&RETURN };
    static void *exp_5618304352[4] = {&&func_5618303040, &&func_5618306208, &&func_5618302256, &&RETURN };
    static void *exp_5618304480[3] = {&&func_5618302688, &&func_5618302432, &&RETURN };
    static void *exp_5618306416[4] = {&&func_5618306544, &&func_5618302256, &&func_5618306672, &&RETURN };
    static void *exp_5618306848[3] = {&&func_5618306544, &&func_5618306672, &&RETURN };
    static void *exp_5618306992[4] = {&&func_5618303392, &&func_5618304992, &&func_5618303824, &&RETURN };

func_5618302128:
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
            PC = func_5618302128_op0;
            break;
        case 1:
            PC = func_5618302128_op1;
            break;
    }
    goto **PC;
func_5618302688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5618302688_op0;
            break;
        case 1:
            PC = func_5618302688_op1;
            break;
        case 2:
            PC = func_5618302688_op2;
            break;
        case 3:
            PC = func_5618302688_op3;
            break;
        case 4:
            PC = func_5618302688_op4;
            break;
        case 5:
            PC = func_5618302688_op5;
            break;
        case 6:
            PC = func_5618302688_op6;
            break;
        case 7:
            PC = func_5618302688_op7;
            break;
        case 8:
            PC = func_5618302688_op8;
            break;
        case 9:
            PC = func_5618302688_op9;
            break;
    }
    goto **PC;
func_5618302496:
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
            PC = func_5618302496_op0;
            break;
        case 1:
            PC = func_5618302496_op1;
            break;
    }
    goto **PC;
func_5618302256:
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
            PC = func_5618302256_op0;
            break;
        case 1:
            PC = func_5618302256_op1;
            break;
    }
    goto **PC;
func_5618302432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5618302432_op0;
            break;
        case 1:
            PC = func_5618302432_op1;
            break;
    }
    goto **PC;
func_5618302912:
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
            PC = func_5618302912_op0;
            break;
        case 1:
            PC = func_5618302912_op1;
            break;
    }
    goto **PC;
func_5618303040:
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
            PC = func_5618303040_op0;
            break;
    }
    goto **PC;
func_5618302832:
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
            PC = func_5618302832_op0;
            break;
    }
    goto **PC;
func_5618303392:
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
            PC = func_5618303392_op0;
            break;
        case 1:
            PC = func_5618303392_op1;
            break;
        case 2:
            PC = func_5618303392_op2;
            break;
        case 3:
            PC = func_5618303392_op3;
            break;
        case 4:
            PC = func_5618303392_op4;
            break;
    }
    goto **PC;
func_5618303824:
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
            PC = func_5618303824_op0;
            break;
        case 1:
            PC = func_5618303824_op1;
            break;
        case 2:
            PC = func_5618303824_op2;
            break;
        case 3:
            PC = func_5618303824_op3;
            break;
        case 4:
            PC = func_5618303824_op4;
            break;
        case 5:
            PC = func_5618303824_op5;
            break;
        case 6:
            PC = func_5618303824_op6;
            break;
    }
    goto **PC;
func_5618303760:
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
    PC = exp_5618303760;
    goto **PC;
func_5618304016:
    extend(91);
    NEXT();
    goto **PC;
func_5618303584:
    extend(93);
    NEXT();
    goto **PC;
func_5618304144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5618304144;
    goto **PC;
func_5618304608:
    extend(48);
    NEXT();
    goto **PC;
func_5618304736:
    extend(49);
    NEXT();
    goto **PC;
func_5618304864:
    extend(50);
    NEXT();
    goto **PC;
func_5618303456:
    extend(51);
    NEXT();
    goto **PC;
func_5618305248:
    extend(52);
    NEXT();
    goto **PC;
func_5618305440:
    extend(53);
    NEXT();
    goto **PC;
func_5618305568:
    extend(54);
    NEXT();
    goto **PC;
func_5618305696:
    extend(55);
    NEXT();
    goto **PC;
func_5618305824:
    extend(56);
    NEXT();
    goto **PC;
func_5618305376:
    extend(57);
    NEXT();
    goto **PC;
func_5618303312:
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
    PC = exp_5618303312;
    goto **PC;
func_5618306208:
    extend(44);
    NEXT();
    goto **PC;
func_5618304352:
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
    PC = exp_5618304352;
    goto **PC;
func_5618304480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5618304480;
    goto **PC;
func_5618306416:
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
    PC = exp_5618306416;
    goto **PC;
func_5618306544:
    extend(123);
    NEXT();
    goto **PC;
func_5618306672:
    extend(125);
    NEXT();
    goto **PC;
func_5618306848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5618306848;
    goto **PC;
func_5618306992:
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
    PC = exp_5618306992;
    goto **PC;
func_5618304992:
    extend(58);
    NEXT();
    goto **PC;
func_5618306336:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5618307760:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5618307888:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5618308048:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5618308176:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5618307600:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5618308704:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5618308832:
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
    PC = func_5618302832_op0;
    goto **PC;
}
