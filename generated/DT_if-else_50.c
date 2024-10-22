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
    static void *func_5769290464_op0[2] = { &&func_5769301488, &&RETURN };
    static void *func_5769299904_op0[2] = { &&func_5769302112, &&RETURN };
    static void *func_5769299904_op1[2] = { &&func_5769300560, &&RETURN };
    static void *func_5769299904_op2[2] = { &&func_5769302752, &&RETURN };
    static void *func_5769299824_op0[2] = { &&func_5769303008, &&RETURN };
    static void *func_5769299824_op1[2] = { &&func_5769301264, &&RETURN };
    static void *func_5769299824_op2[2] = { &&func_5769303296, &&RETURN };
    static void *func_5769299744_op0[2] = { &&func_5769300896, &&RETURN };
    static void *func_5769299744_op1[2] = { &&func_5769300368, &&RETURN };
    static void *func_5769300368_op0[2] = { &&func_5769303648, &&RETURN };
    static void *func_5769300368_op1[2] = { &&func_5769303776, &&RETURN };
    static void *func_5769300368_op2[2] = { &&func_5769303904, &&RETURN };
    static void *func_5769300368_op3[2] = { &&func_5769304032, &&RETURN };
    static void *func_5769300368_op4[2] = { &&func_5769304160, &&RETURN };
    static void *func_5769300368_op5[2] = { &&func_5769304352, &&RETURN };
    static void *func_5769299472_op0[2] = { &&func_5769303584, &&RETURN };
    static void *func_5769299472_op1[2] = { &&func_5769305776, &&RETURN };
    static void *func_5769300896_op0[2] = { &&func_5769305008, &&RETURN };
    static void *func_5769300896_op1[2] = { &&func_5769302000, &&RETURN };
    static void *func_5769300896_op2[2] = { &&func_5769306416, &&RETURN };
    static void *func_5769300896_op3[2] = { &&func_5769306544, &&RETURN };
    static void *func_5769300896_op4[2] = { &&func_5769306672, &&RETURN };
    static void *func_5769300896_op5[2] = { &&func_5769306864, &&RETURN };
    static void *func_5769300896_op6[2] = { &&func_5769306992, &&RETURN };
    static void *func_5769300896_op7[2] = { &&func_5769307120, &&RETURN };
    static void *func_5769300896_op8[2] = { &&func_5769307248, &&RETURN };
    static void *func_5769300896_op9[2] = { &&func_5769306800, &&RETURN };
    static void *func_5769299664_op0[2] = { &&func_5769307568, &&RETURN };
    static void *func_5769300192_op0[2] = { &&func_5769299472, &&HALT };
    static void *func_5769300256_op0[2] = { &&func_5769299472, &&RETURN };
    static void *func_5769300256_op1[2] = { &&func_5769290464, &&RETURN };
    static void *func_5769300256_op2[2] = { &&func_5769299664, &&RETURN };
    static void *func_5769301136_op0[2] = { &&func_5769304832, &&RETURN };
    static void *func_5769301136_op1[2] = { &&func_5769304544, &&RETURN };
    static void *func_5769301264_op0[2] = { &&func_5769299744, &&RETURN };
    static void *func_5769301264_op1[2] = { &&func_5769307968, &&RETURN };
    static void *exp_5769301488[5] = {&&func_5769300368, &&func_5769301616, &&func_5769299824, &&func_5769301744, &&RETURN };
    static void *exp_5769302112[4] = {&&func_5769299824, &&func_5769302240, &&func_5769299824, &&RETURN };
    static void *exp_5769300560[4] = {&&func_5769299824, &&func_5769302624, &&func_5769299824, &&RETURN };
    static void *exp_5769302752[4] = {&&func_5769299824, &&func_5769302880, &&func_5769299824, &&RETURN };
    static void *exp_5769303008[4] = {&&func_5769301264, &&func_5769303136, &&func_5769299824, &&RETURN };
    static void *exp_5769303296[4] = {&&func_5769301264, &&func_5769303424, &&func_5769299824, &&RETURN };
    static void *exp_5769303584[12] = {&&func_5769301392, &&func_5769302368, &&func_5769299904, &&func_5769302496, &&func_5769301936, &&func_5769301136, &&func_5769305840, &&func_5769305968, &&func_5769301936, &&func_5769301136, &&func_5769305840, &&RETURN };
    static void *exp_5769305776[8] = {&&func_5769301392, &&func_5769302368, &&func_5769299904, &&func_5769302496, &&func_5769301936, &&func_5769301136, &&func_5769305840, &&RETURN };
    static void *exp_5769307568[6] = {&&func_5769307696, &&func_5769302368, &&func_5769299824, &&func_5769302496, &&func_5769301744, &&RETURN };
    static void *exp_5769304832[3] = {&&func_5769300256, &&func_5769301136, &&RETURN };
    static void *exp_5769304544[1] = {&&RETURN };
    static void *exp_5769307968[4] = {&&func_5769299744, &&func_5769308096, &&func_5769301264, &&RETURN };

func_5769290464:
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
            PC = func_5769290464_op0;
            break;
    }
    goto **PC;
func_5769299904:
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
            PC = func_5769299904_op0;
            break;
        case 1:
            PC = func_5769299904_op1;
            break;
        case 2:
            PC = func_5769299904_op2;
            break;
    }
    goto **PC;
func_5769299824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5769299824_op0;
            break;
        case 1:
            PC = func_5769299824_op1;
            break;
        case 2:
            PC = func_5769299824_op2;
            break;
    }
    goto **PC;
func_5769299744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5769299744_op0;
            break;
        case 1:
            PC = func_5769299744_op1;
            break;
    }
    goto **PC;
func_5769300368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5769300368_op0;
            break;
        case 1:
            PC = func_5769300368_op1;
            break;
        case 2:
            PC = func_5769300368_op2;
            break;
        case 3:
            PC = func_5769300368_op3;
            break;
        case 4:
            PC = func_5769300368_op4;
            break;
        case 5:
            PC = func_5769300368_op5;
            break;
    }
    goto **PC;
func_5769299472:
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
            PC = func_5769299472_op0;
            break;
        case 1:
            PC = func_5769299472_op1;
            break;
    }
    goto **PC;
func_5769300896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5769300896_op0;
            break;
        case 1:
            PC = func_5769300896_op1;
            break;
        case 2:
            PC = func_5769300896_op2;
            break;
        case 3:
            PC = func_5769300896_op3;
            break;
        case 4:
            PC = func_5769300896_op4;
            break;
        case 5:
            PC = func_5769300896_op5;
            break;
        case 6:
            PC = func_5769300896_op6;
            break;
        case 7:
            PC = func_5769300896_op7;
            break;
        case 8:
            PC = func_5769300896_op8;
            break;
        case 9:
            PC = func_5769300896_op9;
            break;
    }
    goto **PC;
func_5769299664:
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
            PC = func_5769299664_op0;
            break;
    }
    goto **PC;
func_5769300192:
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
            PC = func_5769300192_op0;
            break;
    }
    goto **PC;
func_5769300256:
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
            PC = func_5769300256_op0;
            break;
        case 1:
            PC = func_5769300256_op1;
            break;
        case 2:
            PC = func_5769300256_op2;
            break;
    }
    goto **PC;
func_5769301136:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5769301136_op0;
            break;
        case 1:
            PC = func_5769301136_op1;
            break;
    }
    goto **PC;
func_5769301264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5769301264_op0;
            break;
        case 1:
            PC = func_5769301264_op1;
            break;
    }
    goto **PC;
func_5769301488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769301488;
    goto **PC;
func_5769301616:
    extend(61);
    NEXT();
    goto **PC;
func_5769301744:
    extend(59);
    NEXT();
    goto **PC;
func_5769302112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769302112;
    goto **PC;
func_5769302240:
    extend(62);
    NEXT();
    goto **PC;
func_5769300560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769300560;
    goto **PC;
func_5769302624:
    extend(60);
    NEXT();
    goto **PC;
func_5769302752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769302752;
    goto **PC;
func_5769302880:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5769303008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769303008;
    goto **PC;
func_5769303136:
    extend(43);
    NEXT();
    goto **PC;
func_5769303296:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769303296;
    goto **PC;
func_5769303424:
    extend(45);
    NEXT();
    goto **PC;
func_5769303648:
    extend(120);
    NEXT();
    goto **PC;
func_5769303776:
    extend(121);
    NEXT();
    goto **PC;
func_5769303904:
    extend(122);
    NEXT();
    goto **PC;
func_5769304032:
    extend(97);
    NEXT();
    goto **PC;
func_5769304160:
    extend(98);
    NEXT();
    goto **PC;
func_5769304352:
    extend(99);
    NEXT();
    goto **PC;
func_5769303584:
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
    PC = exp_5769303584;
    goto **PC;
func_5769301392:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5769302368:
    extend(40);
    NEXT();
    goto **PC;
func_5769302496:
    extend(41);
    NEXT();
    goto **PC;
func_5769301936:
    extend(123);
    NEXT();
    goto **PC;
func_5769305840:
    extend(125);
    NEXT();
    goto **PC;
func_5769305968:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5769305776:
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
    PC = exp_5769305776;
    goto **PC;
func_5769305008:
    extend(48);
    NEXT();
    goto **PC;
func_5769302000:
    extend(49);
    NEXT();
    goto **PC;
func_5769306416:
    extend(50);
    NEXT();
    goto **PC;
func_5769306544:
    extend(51);
    NEXT();
    goto **PC;
func_5769306672:
    extend(52);
    NEXT();
    goto **PC;
func_5769306864:
    extend(53);
    NEXT();
    goto **PC;
func_5769306992:
    extend(54);
    NEXT();
    goto **PC;
func_5769307120:
    extend(55);
    NEXT();
    goto **PC;
func_5769307248:
    extend(56);
    NEXT();
    goto **PC;
func_5769306800:
    extend(57);
    NEXT();
    goto **PC;
func_5769307568:
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
    PC = exp_5769307568;
    goto **PC;
func_5769307696:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5769304832:
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
    PC = exp_5769304832;
    goto **PC;
func_5769304544:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769304544;
    goto **PC;
func_5769307968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5769307968;
    goto **PC;
func_5769308096:
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
    PC = func_5769300192_op0;
    goto **PC;
}
