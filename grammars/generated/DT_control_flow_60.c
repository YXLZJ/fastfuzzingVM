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
    static void *func_5008029984_op0[2] = { &&func_5008031824, &&RETURN };
    static void *func_5008030368_op0[2] = { &&func_5008033120, &&RETURN };
    static void *func_5008030368_op1[2] = { &&func_5008033376, &&RETURN };
    static void *func_5008030368_op2[2] = { &&func_5008033632, &&RETURN };
    static void *func_5008030784_op0[2] = { &&func_5008034144, &&RETURN };
    static void *func_5008030784_op1[2] = { &&func_5008031728, &&RETURN };
    static void *func_5008030784_op2[2] = { &&func_5008034336, &&RETURN };
    static void *func_5008030784_op3[2] = { &&func_5008034464, &&RETURN };
    static void *func_5008030784_op4[2] = { &&func_5008034592, &&RETURN };
    static void *func_5008030784_op5[2] = { &&func_5008034784, &&RETURN };
    static void *func_5008030784_op6[2] = { &&func_5008034912, &&RETURN };
    static void *func_5008030784_op7[2] = { &&func_5008035040, &&RETURN };
    static void *func_5008030784_op8[2] = { &&func_5008035168, &&RETURN };
    static void *func_5008030784_op9[2] = { &&func_5008034720, &&RETURN };
    static void *func_5008030880_op0[2] = { &&func_5008035744, &&RETURN };
    static void *func_5008030880_op1[2] = { &&func_5008032912, &&RETURN };
    static void *func_5008030880_op2[2] = { &&func_5008032256, &&RETURN };
    static void *func_5008030656_op0[2] = { &&func_5008034048, &&RETURN };
    static void *func_5008030656_op1[2] = { &&func_5008031008, &&RETURN };
    static void *func_5008030656_op2[2] = { &&func_5008031280, &&RETURN };
    static void *func_5008030576_op0[2] = { &&func_5008033888, &&RETURN };
    static void *func_5008031280_op0[2] = { &&func_5008036896, &&RETURN };
    static void *func_5008031280_op1[2] = { &&func_5008037568, &&RETURN };
    static void *func_5008031280_op2[2] = { &&func_5008037696, &&RETURN };
    static void *func_5008031280_op3[2] = { &&func_5008037824, &&RETURN };
    static void *func_5008031280_op4[2] = { &&func_5008037952, &&RETURN };
    static void *func_5008031280_op5[2] = { &&func_5008038144, &&RETURN };
    static void *func_5008031280_op6[2] = { &&func_5008038272, &&RETURN };
    static void *func_5008031280_op7[2] = { &&func_5008038400, &&RETURN };
    static void *func_5008031280_op8[2] = { &&func_5008038528, &&RETURN };
    static void *func_5008030496_op0[2] = { &&func_5008038080, &&RETURN };
    static void *func_5008030496_op1[2] = { &&func_5008036544, &&RETURN };
    static void *func_5008031008_op0[2] = { &&func_5008030784, &&RETURN };
    static void *func_5008031008_op1[2] = { &&func_5008036720, &&RETURN };
    static void *func_5008031536_op0[2] = { &&func_5008038784, &&RETURN };
    static void *func_5008031200_op0[2] = { &&func_5008039424, &&RETURN };
    static void *func_5008031472_op0[2] = { &&func_5008031200, &&HALT };
    static void *func_5008031888_op0[2] = { &&func_5008030496, &&RETURN };
    static void *func_5008031888_op1[2] = { &&func_5008032096, &&RETURN };
    static void *func_5008031888_op2[2] = { &&func_5008030576, &&RETURN };
    static void *func_5008031888_op3[2] = { &&func_5008029984, &&RETURN };
    static void *func_5008031888_op4[2] = { &&func_5008031536, &&RETURN };
    static void *func_5008032256_op0[2] = { &&func_5008040272, &&RETURN };
    static void *func_5008032256_op1[2] = { &&func_5008039552, &&RETURN };
    static void *func_5008032256_op2[2] = { &&func_5008030656, &&RETURN };
    static void *func_5008032096_op0[2] = { &&func_5008040208, &&RETURN };
    static void *exp_5008031824[5] = {&&func_5008031280, &&func_5008032016, &&func_5008030880, &&func_5008031072, &&RETURN };
    static void *exp_5008033120[4] = {&&func_5008030880, &&func_5008033248, &&func_5008030880, &&RETURN };
    static void *exp_5008033376[4] = {&&func_5008030880, &&func_5008033504, &&func_5008030880, &&RETURN };
    static void *exp_5008033632[4] = {&&func_5008030880, &&func_5008033760, &&func_5008030880, &&RETURN };
    static void *exp_5008035744[4] = {&&func_5008030880, &&func_5008035872, &&func_5008032256, &&RETURN };
    static void *exp_5008032912[4] = {&&func_5008030880, &&func_5008033040, &&func_5008032256, &&RETURN };
    static void *exp_5008034048[4] = {&&func_5008036224, &&func_5008030880, &&func_5008036352, &&RETURN };
    static void *exp_5008033888[12] = {&&func_5008037120, &&func_5008036224, &&func_5008029984, &&func_5008031072, &&func_5008030368, &&func_5008031072, &&func_5008029984, &&func_5008036352, &&func_5008037248, &&func_5008031200, &&func_5008032384, &&RETURN };
    static void *exp_5008038080[8] = {&&func_5008039296, &&func_5008036224, &&func_5008030368, &&func_5008036352, &&func_5008037248, &&func_5008031200, &&func_5008032384, &&RETURN };
    static void *exp_5008036544[12] = {&&func_5008039296, &&func_5008036224, &&func_5008030368, &&func_5008036352, &&func_5008037248, &&func_5008031200, &&func_5008032384, &&func_5008039120, &&func_5008037248, &&func_5008031200, &&func_5008032384, &&RETURN };
    static void *exp_5008036720[3] = {&&func_5008030784, &&func_5008031008, &&RETURN };
    static void *exp_5008038784[6] = {&&func_5008038912, &&func_5008036224, &&func_5008030880, &&func_5008036352, &&func_5008031072, &&RETURN };
    static void *exp_5008039424[3] = {&&func_5008031888, &&func_5008031200, &&RETURN };
    static void *exp_5008040272[4] = {&&func_5008032256, &&func_5008040400, &&func_5008030656, &&RETURN };
    static void *exp_5008039552[4] = {&&func_5008032256, &&func_5008035232, &&func_5008030656, &&RETURN };
    static void *exp_5008040208[8] = {&&func_5008035600, &&func_5008036224, &&func_5008030368, &&func_5008036352, &&func_5008037248, &&func_5008031200, &&func_5008032384, &&RETURN };

func_5008029984:
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
            PC = func_5008029984_op0;
            break;
    }
    goto **PC;
func_5008030368:
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
            PC = func_5008030368_op0;
            break;
        case 1:
            PC = func_5008030368_op1;
            break;
        case 2:
            PC = func_5008030368_op2;
            break;
    }
    goto **PC;
func_5008030784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5008030784_op0;
            break;
        case 1:
            PC = func_5008030784_op1;
            break;
        case 2:
            PC = func_5008030784_op2;
            break;
        case 3:
            PC = func_5008030784_op3;
            break;
        case 4:
            PC = func_5008030784_op4;
            break;
        case 5:
            PC = func_5008030784_op5;
            break;
        case 6:
            PC = func_5008030784_op6;
            break;
        case 7:
            PC = func_5008030784_op7;
            break;
        case 8:
            PC = func_5008030784_op8;
            break;
        case 9:
            PC = func_5008030784_op9;
            break;
    }
    goto **PC;
func_5008030880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5008030880_op0;
            break;
        case 1:
            PC = func_5008030880_op1;
            break;
        case 2:
            PC = func_5008030880_op2;
            break;
    }
    goto **PC;
func_5008030656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5008030656_op0;
            break;
        case 1:
            PC = func_5008030656_op1;
            break;
        case 2:
            PC = func_5008030656_op2;
            break;
    }
    goto **PC;
func_5008030576:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5008030576_op0;
            break;
    }
    goto **PC;
func_5008031280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5008031280_op0;
            break;
        case 1:
            PC = func_5008031280_op1;
            break;
        case 2:
            PC = func_5008031280_op2;
            break;
        case 3:
            PC = func_5008031280_op3;
            break;
        case 4:
            PC = func_5008031280_op4;
            break;
        case 5:
            PC = func_5008031280_op5;
            break;
        case 6:
            PC = func_5008031280_op6;
            break;
        case 7:
            PC = func_5008031280_op7;
            break;
        case 8:
            PC = func_5008031280_op8;
            break;
    }
    goto **PC;
func_5008030496:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5008030496_op0;
            break;
        case 1:
            PC = func_5008030496_op1;
            break;
    }
    goto **PC;
func_5008031008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5008031008_op0;
            break;
        case 1:
            PC = func_5008031008_op1;
            break;
    }
    goto **PC;
func_5008031536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
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
            PC = func_5008031536_op0;
            break;
    }
    goto **PC;
func_5008031200:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5008031200_op0;
            break;
    }
    goto **PC;
func_5008031472:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5008031472_op0;
            break;
    }
    goto **PC;
func_5008031888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5008031888_op0;
            break;
        case 1:
            PC = func_5008031888_op1;
            break;
        case 2:
            PC = func_5008031888_op2;
            break;
        case 3:
            PC = func_5008031888_op3;
            break;
        case 4:
            PC = func_5008031888_op4;
            break;
    }
    goto **PC;
func_5008032256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5008032256_op0;
            break;
        case 1:
            PC = func_5008032256_op1;
            break;
        case 2:
            PC = func_5008032256_op2;
            break;
    }
    goto **PC;
func_5008032096:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5008032096_op0;
            break;
    }
    goto **PC;
func_5008031824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008031824;
    goto **PC;
func_5008032016:
    extend(61);
    NEXT();
    goto **PC;
func_5008031072:
    extend(59);
    NEXT();
    goto **PC;
func_5008033120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008033120;
    goto **PC;
func_5008033248:
    extend(62);
    NEXT();
    goto **PC;
func_5008033376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008033376;
    goto **PC;
func_5008033504:
    extend(60);
    NEXT();
    goto **PC;
func_5008033632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008033632;
    goto **PC;
func_5008033760:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5008034144:
    extend(48);
    NEXT();
    goto **PC;
func_5008031728:
    extend(49);
    NEXT();
    goto **PC;
func_5008034336:
    extend(50);
    NEXT();
    goto **PC;
func_5008034464:
    extend(51);
    NEXT();
    goto **PC;
func_5008034592:
    extend(52);
    NEXT();
    goto **PC;
func_5008034784:
    extend(53);
    NEXT();
    goto **PC;
func_5008034912:
    extend(54);
    NEXT();
    goto **PC;
func_5008035040:
    extend(55);
    NEXT();
    goto **PC;
func_5008035168:
    extend(56);
    NEXT();
    goto **PC;
func_5008034720:
    extend(57);
    NEXT();
    goto **PC;
func_5008035744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008035744;
    goto **PC;
func_5008035872:
    extend(43);
    NEXT();
    goto **PC;
func_5008032912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008032912;
    goto **PC;
func_5008033040:
    extend(45);
    NEXT();
    goto **PC;
func_5008034048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008034048;
    goto **PC;
func_5008036224:
    extend(40);
    NEXT();
    goto **PC;
func_5008036352:
    extend(41);
    NEXT();
    goto **PC;
func_5008033888:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008033888;
    goto **PC;
func_5008037120:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5008037248:
    extend(123);
    NEXT();
    goto **PC;
func_5008032384:
    extend(125);
    NEXT();
    goto **PC;
func_5008036896:
    extend(105);
    NEXT();
    goto **PC;
func_5008037568:
    extend(106);
    NEXT();
    goto **PC;
func_5008037696:
    extend(107);
    NEXT();
    goto **PC;
func_5008037824:
    extend(120);
    NEXT();
    goto **PC;
func_5008037952:
    extend(121);
    NEXT();
    goto **PC;
func_5008038144:
    extend(122);
    NEXT();
    goto **PC;
func_5008038272:
    extend(97);
    NEXT();
    goto **PC;
func_5008038400:
    extend(98);
    NEXT();
    goto **PC;
func_5008038528:
    extend(99);
    NEXT();
    goto **PC;
func_5008038080:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008038080;
    goto **PC;
func_5008039296:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5008036544:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008036544;
    goto **PC;
func_5008039120:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5008036720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008036720;
    goto **PC;
func_5008038784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008038784;
    goto **PC;
func_5008038912:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5008039424:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008039424;
    goto **PC;
func_5008040272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008040272;
    goto **PC;
func_5008040400:
    extend(42);
    NEXT();
    goto **PC;
func_5008039552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008039552;
    goto **PC;
func_5008035232:
    extend(47);
    NEXT();
    goto **PC;
func_5008040208:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5008040208;
    goto **PC;
func_5008035600:
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
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
    PC = func_5008031472_op0;
    goto **PC;
}
