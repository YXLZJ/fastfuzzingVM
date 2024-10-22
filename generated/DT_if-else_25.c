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
    static void *func_5744124640_op0[2] = { &&func_5744135664, &&RETURN };
    static void *func_5744134080_op0[2] = { &&func_5744136288, &&RETURN };
    static void *func_5744134080_op1[2] = { &&func_5744134736, &&RETURN };
    static void *func_5744134080_op2[2] = { &&func_5744136928, &&RETURN };
    static void *func_5744134000_op0[2] = { &&func_5744137184, &&RETURN };
    static void *func_5744134000_op1[2] = { &&func_5744135440, &&RETURN };
    static void *func_5744134000_op2[2] = { &&func_5744137472, &&RETURN };
    static void *func_5744133920_op0[2] = { &&func_5744135072, &&RETURN };
    static void *func_5744133920_op1[2] = { &&func_5744134544, &&RETURN };
    static void *func_5744134544_op0[2] = { &&func_5744137824, &&RETURN };
    static void *func_5744134544_op1[2] = { &&func_5744137952, &&RETURN };
    static void *func_5744134544_op2[2] = { &&func_5744138080, &&RETURN };
    static void *func_5744134544_op3[2] = { &&func_5744138208, &&RETURN };
    static void *func_5744134544_op4[2] = { &&func_5744138336, &&RETURN };
    static void *func_5744134544_op5[2] = { &&func_5744138528, &&RETURN };
    static void *func_5744133648_op0[2] = { &&func_5744137760, &&RETURN };
    static void *func_5744133648_op1[2] = { &&func_5744139952, &&RETURN };
    static void *func_5744135072_op0[2] = { &&func_5744139184, &&RETURN };
    static void *func_5744135072_op1[2] = { &&func_5744136176, &&RETURN };
    static void *func_5744135072_op2[2] = { &&func_5744140592, &&RETURN };
    static void *func_5744135072_op3[2] = { &&func_5744140720, &&RETURN };
    static void *func_5744135072_op4[2] = { &&func_5744140848, &&RETURN };
    static void *func_5744135072_op5[2] = { &&func_5744141040, &&RETURN };
    static void *func_5744135072_op6[2] = { &&func_5744141168, &&RETURN };
    static void *func_5744135072_op7[2] = { &&func_5744141296, &&RETURN };
    static void *func_5744135072_op8[2] = { &&func_5744141424, &&RETURN };
    static void *func_5744135072_op9[2] = { &&func_5744140976, &&RETURN };
    static void *func_5744133840_op0[2] = { &&func_5744141744, &&RETURN };
    static void *func_5744134368_op0[2] = { &&func_5744133648, &&HALT };
    static void *func_5744134432_op0[2] = { &&func_5744133648, &&RETURN };
    static void *func_5744134432_op1[2] = { &&func_5744124640, &&RETURN };
    static void *func_5744134432_op2[2] = { &&func_5744133840, &&RETURN };
    static void *func_5744135312_op0[2] = { &&func_5744139008, &&RETURN };
    static void *func_5744135312_op1[2] = { &&func_5744138720, &&RETURN };
    static void *func_5744135440_op0[2] = { &&func_5744133920, &&RETURN };
    static void *func_5744135440_op1[2] = { &&func_5744142144, &&RETURN };
    static void *exp_5744135664[5] = {&&func_5744134544, &&func_5744135792, &&func_5744134000, &&func_5744135920, &&RETURN };
    static void *exp_5744136288[4] = {&&func_5744134000, &&func_5744136416, &&func_5744134000, &&RETURN };
    static void *exp_5744134736[4] = {&&func_5744134000, &&func_5744136800, &&func_5744134000, &&RETURN };
    static void *exp_5744136928[4] = {&&func_5744134000, &&func_5744137056, &&func_5744134000, &&RETURN };
    static void *exp_5744137184[4] = {&&func_5744135440, &&func_5744137312, &&func_5744134000, &&RETURN };
    static void *exp_5744137472[4] = {&&func_5744135440, &&func_5744137600, &&func_5744134000, &&RETURN };
    static void *exp_5744137760[12] = {&&func_5744135568, &&func_5744136544, &&func_5744134080, &&func_5744136672, &&func_5744136112, &&func_5744135312, &&func_5744140016, &&func_5744140144, &&func_5744136112, &&func_5744135312, &&func_5744140016, &&RETURN };
    static void *exp_5744139952[8] = {&&func_5744135568, &&func_5744136544, &&func_5744134080, &&func_5744136672, &&func_5744136112, &&func_5744135312, &&func_5744140016, &&RETURN };
    static void *exp_5744141744[6] = {&&func_5744141872, &&func_5744136544, &&func_5744134000, &&func_5744136672, &&func_5744135920, &&RETURN };
    static void *exp_5744139008[3] = {&&func_5744134432, &&func_5744135312, &&RETURN };
    static void *exp_5744138720[1] = {&&RETURN };
    static void *exp_5744142144[4] = {&&func_5744133920, &&func_5744142272, &&func_5744135440, &&RETURN };

func_5744124640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5744124640_op0;
            break;
    }
    goto **PC;
func_5744134080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5744134080_op0;
            break;
        case 1:
            PC = func_5744134080_op1;
            break;
        case 2:
            PC = func_5744134080_op2;
            break;
    }
    goto **PC;
func_5744134000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5744134000_op0;
            break;
        case 1:
            PC = func_5744134000_op1;
            break;
        case 2:
            PC = func_5744134000_op2;
            break;
    }
    goto **PC;
func_5744133920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5744133920_op0;
            break;
        case 1:
            PC = func_5744133920_op1;
            break;
    }
    goto **PC;
func_5744134544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5744134544_op0;
            break;
        case 1:
            PC = func_5744134544_op1;
            break;
        case 2:
            PC = func_5744134544_op2;
            break;
        case 3:
            PC = func_5744134544_op3;
            break;
        case 4:
            PC = func_5744134544_op4;
            break;
        case 5:
            PC = func_5744134544_op5;
            break;
    }
    goto **PC;
func_5744133648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5744133648_op0;
            break;
        case 1:
            PC = func_5744133648_op1;
            break;
    }
    goto **PC;
func_5744135072:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5744135072_op0;
            break;
        case 1:
            PC = func_5744135072_op1;
            break;
        case 2:
            PC = func_5744135072_op2;
            break;
        case 3:
            PC = func_5744135072_op3;
            break;
        case 4:
            PC = func_5744135072_op4;
            break;
        case 5:
            PC = func_5744135072_op5;
            break;
        case 6:
            PC = func_5744135072_op6;
            break;
        case 7:
            PC = func_5744135072_op7;
            break;
        case 8:
            PC = func_5744135072_op8;
            break;
        case 9:
            PC = func_5744135072_op9;
            break;
    }
    goto **PC;
func_5744133840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5744133840_op0;
            break;
    }
    goto **PC;
func_5744134368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5744134368_op0;
            break;
    }
    goto **PC;
func_5744134432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5744134432_op0;
            break;
        case 1:
            PC = func_5744134432_op1;
            break;
        case 2:
            PC = func_5744134432_op2;
            break;
    }
    goto **PC;
func_5744135312:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5744135312_op0;
            break;
        case 1:
            PC = func_5744135312_op1;
            break;
    }
    goto **PC;
func_5744135440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5744135440_op0;
            break;
        case 1:
            PC = func_5744135440_op1;
            break;
    }
    goto **PC;
func_5744135664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744135664;
    goto **PC;
func_5744135792:
    extend(61);
    NEXT();
    goto **PC;
func_5744135920:
    extend(59);
    NEXT();
    goto **PC;
func_5744136288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744136288;
    goto **PC;
func_5744136416:
    extend(62);
    NEXT();
    goto **PC;
func_5744134736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744134736;
    goto **PC;
func_5744136800:
    extend(60);
    NEXT();
    goto **PC;
func_5744136928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744136928;
    goto **PC;
func_5744137056:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5744137184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744137184;
    goto **PC;
func_5744137312:
    extend(43);
    NEXT();
    goto **PC;
func_5744137472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744137472;
    goto **PC;
func_5744137600:
    extend(45);
    NEXT();
    goto **PC;
func_5744137824:
    extend(120);
    NEXT();
    goto **PC;
func_5744137952:
    extend(121);
    NEXT();
    goto **PC;
func_5744138080:
    extend(122);
    NEXT();
    goto **PC;
func_5744138208:
    extend(97);
    NEXT();
    goto **PC;
func_5744138336:
    extend(98);
    NEXT();
    goto **PC;
func_5744138528:
    extend(99);
    NEXT();
    goto **PC;
func_5744137760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744137760;
    goto **PC;
func_5744135568:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5744136544:
    extend(40);
    NEXT();
    goto **PC;
func_5744136672:
    extend(41);
    NEXT();
    goto **PC;
func_5744136112:
    extend(123);
    NEXT();
    goto **PC;
func_5744140016:
    extend(125);
    NEXT();
    goto **PC;
func_5744140144:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5744139952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744139952;
    goto **PC;
func_5744139184:
    extend(48);
    NEXT();
    goto **PC;
func_5744136176:
    extend(49);
    NEXT();
    goto **PC;
func_5744140592:
    extend(50);
    NEXT();
    goto **PC;
func_5744140720:
    extend(51);
    NEXT();
    goto **PC;
func_5744140848:
    extend(52);
    NEXT();
    goto **PC;
func_5744141040:
    extend(53);
    NEXT();
    goto **PC;
func_5744141168:
    extend(54);
    NEXT();
    goto **PC;
func_5744141296:
    extend(55);
    NEXT();
    goto **PC;
func_5744141424:
    extend(56);
    NEXT();
    goto **PC;
func_5744140976:
    extend(57);
    NEXT();
    goto **PC;
func_5744141744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744141744;
    goto **PC;
func_5744141872:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5744139008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744139008;
    goto **PC;
func_5744138720:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744138720;
    goto **PC;
func_5744142144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5744142144;
    goto **PC;
func_5744142272:
    extend(42);
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
    PC = func_5744134368_op0;
    goto **PC;
}
