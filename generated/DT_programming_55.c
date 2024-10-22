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
    static void *func_5752532368_op0[2] = { &&func_5752534464, &&RETURN };
    static void *func_5752533120_op0[2] = { &&func_5752536064, &&RETURN };
    static void *func_5752533120_op1[2] = { &&func_5752536320, &&RETURN };
    static void *func_5752533120_op2[2] = { &&func_5752536576, &&RETURN };
    static void *func_5752533120_op3[2] = { &&func_5752536864, &&RETURN };
    static void *func_5752533120_op4[2] = { &&func_5752537152, &&RETURN };
    static void *func_5752533120_op5[2] = { &&func_5752537504, &&RETURN };
    static void *func_5752533120_op6[2] = { &&func_5752537808, &&RETURN };
    static void *func_5752533280_op0[2] = { &&func_5752535936, &&RETURN };
    static void *func_5752533280_op1[2] = { &&func_5752535488, &&RETURN };
    static void *func_5752533280_op2[2] = { &&func_5752538384, &&RETURN };
    static void *func_5752533280_op3[2] = { &&func_5752538512, &&RETURN };
    static void *func_5752533280_op4[2] = { &&func_5752538640, &&RETURN };
    static void *func_5752533280_op5[2] = { &&func_5752538832, &&RETURN };
    static void *func_5752533280_op6[2] = { &&func_5752538960, &&RETURN };
    static void *func_5752533280_op7[2] = { &&func_5752539088, &&RETURN };
    static void *func_5752533280_op8[2] = { &&func_5752539216, &&RETURN };
    static void *func_5752533280_op9[2] = { &&func_5752538768, &&RETURN };
    static void *func_5752532992_op0[2] = { &&func_5752535424, &&RETURN };
    static void *func_5752532992_op1[2] = { &&func_5752535616, &&RETURN };
    static void *func_5752532992_op2[2] = { &&func_5752534528, &&RETURN };
    static void *func_5752532640_op0[2] = { &&func_5752539616, &&RETURN };
    static void *func_5752532640_op1[2] = { &&func_5752532560, &&RETURN };
    static void *func_5752532640_op2[2] = { &&func_5752532880, &&RETURN };
    static void *func_5752532240_op0[2] = { &&func_5752534368, &&RETURN };
    static void *func_5752532880_op0[2] = { &&func_5752540320, &&RETURN };
    static void *func_5752532880_op1[2] = { &&func_5752535040, &&RETURN };
    static void *func_5752533408_op0[2] = { &&func_5752541280, &&RETURN };
    static void *func_5752535040_op0[2] = { &&func_5752542752, &&RETURN };
    static void *func_5752535040_op1[2] = { &&func_5752542880, &&RETURN };
    static void *func_5752535040_op2[2] = { &&func_5752543008, &&RETURN };
    static void *func_5752535040_op3[2] = { &&func_5752543168, &&RETURN };
    static void *func_5752535040_op4[2] = { &&func_5752543296, &&RETURN };
    static void *func_5752535040_op5[2] = { &&func_5752543488, &&RETURN };
    static void *func_5752535040_op6[2] = { &&func_5752543616, &&RETURN };
    static void *func_5752535040_op7[2] = { &&func_5752537936, &&RETURN };
    static void *func_5752535040_op8[2] = { &&func_5752538064, &&RETURN };
    static void *func_5752535040_op9[2] = { &&func_5752543424, &&RETURN };
    static void *func_5752535040_op10[2] = { &&func_5752543680, &&RETURN };
    static void *func_5752535040_op11[2] = { &&func_5752543808, &&RETURN };
    static void *func_5752535040_op12[2] = { &&func_5752543936, &&RETURN };
    static void *func_5752535040_op13[2] = { &&func_5752544064, &&RETURN };
    static void *func_5752535040_op14[2] = { &&func_5752544192, &&RETURN };
    static void *func_5752535040_op15[2] = { &&func_5752544320, &&RETURN };
    static void *func_5752535040_op16[2] = { &&func_5752544448, &&RETURN };
    static void *func_5752535040_op17[2] = { &&func_5752538192, &&RETURN };
    static void *func_5752535040_op18[2] = { &&func_5752544832, &&RETURN };
    static void *func_5752535040_op19[2] = { &&func_5752544960, &&RETURN };
    static void *func_5752535040_op20[2] = { &&func_5752545088, &&RETURN };
    static void *func_5752535040_op21[2] = { &&func_5752545216, &&RETURN };
    static void *func_5752535040_op22[2] = { &&func_5752545344, &&RETURN };
    static void *func_5752535040_op23[2] = { &&func_5752545472, &&RETURN };
    static void *func_5752535040_op24[2] = { &&func_5752545600, &&RETURN };
    static void *func_5752535040_op25[2] = { &&func_5752545728, &&RETURN };
    static void *func_5752535040_op26[2] = { &&func_5752545856, &&RETURN };
    static void *func_5752535040_op27[2] = { &&func_5752545984, &&RETURN };
    static void *func_5752535040_op28[2] = { &&func_5752546112, &&RETURN };
    static void *func_5752535040_op29[2] = { &&func_5752546240, &&RETURN };
    static void *func_5752535040_op30[2] = { &&func_5752546368, &&RETURN };
    static void *func_5752535040_op31[2] = { &&func_5752546496, &&RETURN };
    static void *func_5752535040_op32[2] = { &&func_5752546624, &&RETURN };
    static void *func_5752535040_op33[2] = { &&func_5752544576, &&RETURN };
    static void *func_5752535040_op34[2] = { &&func_5752544704, &&RETURN };
    static void *func_5752535040_op35[2] = { &&func_5752547264, &&RETURN };
    static void *func_5752535040_op36[2] = { &&func_5752547392, &&RETURN };
    static void *func_5752535040_op37[2] = { &&func_5752547520, &&RETURN };
    static void *func_5752535040_op38[2] = { &&func_5752547648, &&RETURN };
    static void *func_5752535040_op39[2] = { &&func_5752547776, &&RETURN };
    static void *func_5752535040_op40[2] = { &&func_5752547904, &&RETURN };
    static void *func_5752535040_op41[2] = { &&func_5752548032, &&RETURN };
    static void *func_5752535040_op42[2] = { &&func_5752548160, &&RETURN };
    static void *func_5752535040_op43[2] = { &&func_5752548288, &&RETURN };
    static void *func_5752535040_op44[2] = { &&func_5752548416, &&RETURN };
    static void *func_5752535040_op45[2] = { &&func_5752548544, &&RETURN };
    static void *func_5752535040_op46[2] = { &&func_5752548672, &&RETURN };
    static void *func_5752535040_op47[2] = { &&func_5752548800, &&RETURN };
    static void *func_5752535040_op48[2] = { &&func_5752548928, &&RETURN };
    static void *func_5752535040_op49[2] = { &&func_5752549056, &&RETURN };
    static void *func_5752535040_op50[2] = { &&func_5752549184, &&RETURN };
    static void *func_5752535040_op51[2] = { &&func_5752549312, &&RETURN };
    static void *func_5752532560_op0[2] = { &&func_5752541104, &&RETURN };
    static void *func_5752532560_op1[2] = { &&func_5752533280, &&RETURN };
    static void *func_5752533600_op0[2] = { &&func_5752540448, &&RETURN };
    static void *func_5752533600_op1[2] = { &&func_5752534240, &&RETURN };
    static void *func_5752533808_op0[2] = { &&func_5752541680, &&RETURN };
    static void *func_5752533728_op0[2] = { &&func_5752533600, &&HALT };
    static void *func_5752534240_op0[2] = { &&func_5752534080, &&RETURN };
    static void *func_5752534240_op1[2] = { &&func_5752532368, &&RETURN };
    static void *func_5752534240_op2[2] = { &&func_5752533408, &&RETURN };
    static void *func_5752534240_op3[2] = { &&func_5752534000, &&RETURN };
    static void *func_5752534240_op4[2] = { &&func_5752532240, &&RETURN };
    static void *func_5752534240_op5[2] = { &&func_5752533808, &&RETURN };
    static void *func_5752534528_op0[2] = { &&func_5752542304, &&RETURN };
    static void *func_5752534528_op1[2] = { &&func_5752541936, &&RETURN };
    static void *func_5752534528_op2[2] = { &&func_5752532640, &&RETURN };
    static void *func_5752534080_op0[2] = { &&func_5752549520, &&RETURN };
    static void *func_5752534080_op1[2] = { &&func_5752549904, &&RETURN };
    static void *func_5752534080_op2[2] = { &&func_5752550160, &&RETURN };
    static void *func_5752534000_op0[2] = { &&func_5752549440, &&RETURN };
    static void *exp_5752534464[5] = {&&func_5752532880, &&func_5752534784, &&func_5752532992, &&func_5752534912, &&RETURN };
    static void *exp_5752536064[4] = {&&func_5752532992, &&func_5752536192, &&func_5752532992, &&RETURN };
    static void *exp_5752536320[4] = {&&func_5752532992, &&func_5752536448, &&func_5752532992, &&RETURN };
    static void *exp_5752536576[4] = {&&func_5752532992, &&func_5752536704, &&func_5752532992, &&RETURN };
    static void *exp_5752536864[4] = {&&func_5752532992, &&func_5752536992, &&func_5752532992, &&RETURN };
    static void *exp_5752537152[4] = {&&func_5752533120, &&func_5752537280, &&func_5752533120, &&RETURN };
    static void *exp_5752537504[4] = {&&func_5752533120, &&func_5752537632, &&func_5752533120, &&RETURN };
    static void *exp_5752537808[3] = {&&func_5752535296, &&func_5752533120, &&RETURN };
    static void *exp_5752535424[4] = {&&func_5752532992, &&func_5752539760, &&func_5752534528, &&RETURN };
    static void *exp_5752535616[4] = {&&func_5752532992, &&func_5752535744, &&func_5752534528, &&RETURN };
    static void *exp_5752539616[4] = {&&func_5752539984, &&func_5752532992, &&func_5752540112, &&RETURN };
    static void *exp_5752534368[8] = {&&func_5752540720, &&func_5752532880, &&func_5752539984, &&func_5752540112, &&func_5752535104, &&func_5752533600, &&func_5752540976, &&RETURN };
    static void *exp_5752540320[3] = {&&func_5752535040, &&func_5752532880, &&RETURN };
    static void *exp_5752541280[8] = {&&func_5752541408, &&func_5752539984, &&func_5752533120, &&func_5752540112, &&func_5752535104, &&func_5752533600, &&func_5752540976, &&RETURN };
    static void *exp_5752541104[3] = {&&func_5752533280, &&func_5752532560, &&RETURN };
    static void *exp_5752540448[3] = {&&func_5752533600, &&func_5752534240, &&RETURN };
    static void *exp_5752541680[4] = {&&func_5752541808, &&func_5752532992, &&func_5752534912, &&RETURN };
    static void *exp_5752542304[4] = {&&func_5752534528, &&func_5752542432, &&func_5752532640, &&RETURN };
    static void *exp_5752541936[4] = {&&func_5752534528, &&func_5752542560, &&func_5752532640, &&RETURN };
    static void *exp_5752549520[4] = {&&func_5752549648, &&func_5752532880, &&func_5752549776, &&RETURN };
    static void *exp_5752549904[4] = {&&func_5752550032, &&func_5752532880, &&func_5752549776, &&RETURN };
    static void *exp_5752550160[4] = {&&func_5752550288, &&func_5752532880, &&func_5752549776, &&RETURN };
    static void *exp_5752549440[8] = {&&func_5752542208, &&func_5752539984, &&func_5752533120, &&func_5752540112, &&func_5752535104, &&func_5752533600, &&func_5752540976, &&RETURN };

func_5752532368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532368_op0;
            break;
    }
    goto **PC;
func_5752533120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533120_op0;
            break;
        case 1:
            PC = func_5752533120_op1;
            break;
        case 2:
            PC = func_5752533120_op2;
            break;
        case 3:
            PC = func_5752533120_op3;
            break;
        case 4:
            PC = func_5752533120_op4;
            break;
        case 5:
            PC = func_5752533120_op5;
            break;
        case 6:
            PC = func_5752533120_op6;
            break;
    }
    goto **PC;
func_5752533280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533280_op0;
            break;
        case 1:
            PC = func_5752533280_op1;
            break;
        case 2:
            PC = func_5752533280_op2;
            break;
        case 3:
            PC = func_5752533280_op3;
            break;
        case 4:
            PC = func_5752533280_op4;
            break;
        case 5:
            PC = func_5752533280_op5;
            break;
        case 6:
            PC = func_5752533280_op6;
            break;
        case 7:
            PC = func_5752533280_op7;
            break;
        case 8:
            PC = func_5752533280_op8;
            break;
        case 9:
            PC = func_5752533280_op9;
            break;
    }
    goto **PC;
func_5752532992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532992_op0;
            break;
        case 1:
            PC = func_5752532992_op1;
            break;
        case 2:
            PC = func_5752532992_op2;
            break;
    }
    goto **PC;
func_5752532640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532640_op0;
            break;
        case 1:
            PC = func_5752532640_op1;
            break;
        case 2:
            PC = func_5752532640_op2;
            break;
    }
    goto **PC;
func_5752532240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532240_op0;
            break;
    }
    goto **PC;
func_5752532880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532880_op0;
            break;
        case 1:
            PC = func_5752532880_op1;
            break;
    }
    goto **PC;
func_5752533408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533408_op0;
            break;
    }
    goto **PC;
func_5752535040:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5752535040_op0;
            break;
        case 1:
            PC = func_5752535040_op1;
            break;
        case 2:
            PC = func_5752535040_op2;
            break;
        case 3:
            PC = func_5752535040_op3;
            break;
        case 4:
            PC = func_5752535040_op4;
            break;
        case 5:
            PC = func_5752535040_op5;
            break;
        case 6:
            PC = func_5752535040_op6;
            break;
        case 7:
            PC = func_5752535040_op7;
            break;
        case 8:
            PC = func_5752535040_op8;
            break;
        case 9:
            PC = func_5752535040_op9;
            break;
        case 10:
            PC = func_5752535040_op10;
            break;
        case 11:
            PC = func_5752535040_op11;
            break;
        case 12:
            PC = func_5752535040_op12;
            break;
        case 13:
            PC = func_5752535040_op13;
            break;
        case 14:
            PC = func_5752535040_op14;
            break;
        case 15:
            PC = func_5752535040_op15;
            break;
        case 16:
            PC = func_5752535040_op16;
            break;
        case 17:
            PC = func_5752535040_op17;
            break;
        case 18:
            PC = func_5752535040_op18;
            break;
        case 19:
            PC = func_5752535040_op19;
            break;
        case 20:
            PC = func_5752535040_op20;
            break;
        case 21:
            PC = func_5752535040_op21;
            break;
        case 22:
            PC = func_5752535040_op22;
            break;
        case 23:
            PC = func_5752535040_op23;
            break;
        case 24:
            PC = func_5752535040_op24;
            break;
        case 25:
            PC = func_5752535040_op25;
            break;
        case 26:
            PC = func_5752535040_op26;
            break;
        case 27:
            PC = func_5752535040_op27;
            break;
        case 28:
            PC = func_5752535040_op28;
            break;
        case 29:
            PC = func_5752535040_op29;
            break;
        case 30:
            PC = func_5752535040_op30;
            break;
        case 31:
            PC = func_5752535040_op31;
            break;
        case 32:
            PC = func_5752535040_op32;
            break;
        case 33:
            PC = func_5752535040_op33;
            break;
        case 34:
            PC = func_5752535040_op34;
            break;
        case 35:
            PC = func_5752535040_op35;
            break;
        case 36:
            PC = func_5752535040_op36;
            break;
        case 37:
            PC = func_5752535040_op37;
            break;
        case 38:
            PC = func_5752535040_op38;
            break;
        case 39:
            PC = func_5752535040_op39;
            break;
        case 40:
            PC = func_5752535040_op40;
            break;
        case 41:
            PC = func_5752535040_op41;
            break;
        case 42:
            PC = func_5752535040_op42;
            break;
        case 43:
            PC = func_5752535040_op43;
            break;
        case 44:
            PC = func_5752535040_op44;
            break;
        case 45:
            PC = func_5752535040_op45;
            break;
        case 46:
            PC = func_5752535040_op46;
            break;
        case 47:
            PC = func_5752535040_op47;
            break;
        case 48:
            PC = func_5752535040_op48;
            break;
        case 49:
            PC = func_5752535040_op49;
            break;
        case 50:
            PC = func_5752535040_op50;
            break;
        case 51:
            PC = func_5752535040_op51;
            break;
    }
    goto **PC;
func_5752532560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5752532560_op0;
            break;
        case 1:
            PC = func_5752532560_op1;
            break;
    }
    goto **PC;
func_5752533600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533600_op0;
            break;
        case 1:
            PC = func_5752533600_op1;
            break;
    }
    goto **PC;
func_5752533808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533808_op0;
            break;
    }
    goto **PC;
func_5752533728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752533728_op0;
            break;
    }
    goto **PC;
func_5752534240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5752534240_op0;
            break;
        case 1:
            PC = func_5752534240_op1;
            break;
        case 2:
            PC = func_5752534240_op2;
            break;
        case 3:
            PC = func_5752534240_op3;
            break;
        case 4:
            PC = func_5752534240_op4;
            break;
        case 5:
            PC = func_5752534240_op5;
            break;
    }
    goto **PC;
func_5752534528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752534528_op0;
            break;
        case 1:
            PC = func_5752534528_op1;
            break;
        case 2:
            PC = func_5752534528_op2;
            break;
    }
    goto **PC;
func_5752534080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5752534080_op0;
            break;
        case 1:
            PC = func_5752534080_op1;
            break;
        case 2:
            PC = func_5752534080_op2;
            break;
    }
    goto **PC;
func_5752534000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5752534000_op0;
            break;
    }
    goto **PC;
func_5752534464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752534464;
    goto **PC;
func_5752534784:
    extend(61);
    NEXT();
    goto **PC;
func_5752534912:
    extend(59);
    NEXT();
    goto **PC;
func_5752536064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752536064;
    goto **PC;
func_5752536192:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5752536320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752536320;
    goto **PC;
func_5752536448:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5752536576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752536576;
    goto **PC;
func_5752536704:
    extend(62);
    NEXT();
    goto **PC;
func_5752536864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752536864;
    goto **PC;
func_5752536992:
    extend(60);
    NEXT();
    goto **PC;
func_5752537152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752537152;
    goto **PC;
func_5752537280:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5752537504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752537504;
    goto **PC;
func_5752537632:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5752537808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752537808;
    goto **PC;
func_5752535296:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5752535936:
    extend(48);
    NEXT();
    goto **PC;
func_5752535488:
    extend(49);
    NEXT();
    goto **PC;
func_5752538384:
    extend(50);
    NEXT();
    goto **PC;
func_5752538512:
    extend(51);
    NEXT();
    goto **PC;
func_5752538640:
    extend(52);
    NEXT();
    goto **PC;
func_5752538832:
    extend(53);
    NEXT();
    goto **PC;
func_5752538960:
    extend(54);
    NEXT();
    goto **PC;
func_5752539088:
    extend(55);
    NEXT();
    goto **PC;
func_5752539216:
    extend(56);
    NEXT();
    goto **PC;
func_5752538768:
    extend(57);
    NEXT();
    goto **PC;
func_5752535424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752535424;
    goto **PC;
func_5752539760:
    extend(43);
    NEXT();
    goto **PC;
func_5752535616:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752535616;
    goto **PC;
func_5752535744:
    extend(45);
    NEXT();
    goto **PC;
func_5752539616:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752539616;
    goto **PC;
func_5752539984:
    extend(40);
    NEXT();
    goto **PC;
func_5752540112:
    extend(41);
    NEXT();
    goto **PC;
func_5752534368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752534368;
    goto **PC;
func_5752540720:
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    NEXT();
    goto **PC;
func_5752535104:
    extend(123);
    NEXT();
    goto **PC;
func_5752540976:
    extend(125);
    NEXT();
    goto **PC;
func_5752540320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752540320;
    goto **PC;
func_5752541280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752541280;
    goto **PC;
func_5752541408:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5752542752:
    extend(97);
    NEXT();
    goto **PC;
func_5752542880:
    extend(98);
    NEXT();
    goto **PC;
func_5752543008:
    extend(99);
    NEXT();
    goto **PC;
func_5752543168:
    extend(100);
    NEXT();
    goto **PC;
func_5752543296:
    extend(101);
    NEXT();
    goto **PC;
func_5752543488:
    extend(102);
    NEXT();
    goto **PC;
func_5752543616:
    extend(103);
    NEXT();
    goto **PC;
func_5752537936:
    extend(104);
    NEXT();
    goto **PC;
func_5752538064:
    extend(105);
    NEXT();
    goto **PC;
func_5752543424:
    extend(106);
    NEXT();
    goto **PC;
func_5752543680:
    extend(107);
    NEXT();
    goto **PC;
func_5752543808:
    extend(108);
    NEXT();
    goto **PC;
func_5752543936:
    extend(109);
    NEXT();
    goto **PC;
func_5752544064:
    extend(110);
    NEXT();
    goto **PC;
func_5752544192:
    extend(111);
    NEXT();
    goto **PC;
func_5752544320:
    extend(112);
    NEXT();
    goto **PC;
func_5752544448:
    extend(113);
    NEXT();
    goto **PC;
func_5752538192:
    extend(114);
    NEXT();
    goto **PC;
func_5752544832:
    extend(115);
    NEXT();
    goto **PC;
func_5752544960:
    extend(116);
    NEXT();
    goto **PC;
func_5752545088:
    extend(117);
    NEXT();
    goto **PC;
func_5752545216:
    extend(118);
    NEXT();
    goto **PC;
func_5752545344:
    extend(119);
    NEXT();
    goto **PC;
func_5752545472:
    extend(120);
    NEXT();
    goto **PC;
func_5752545600:
    extend(121);
    NEXT();
    goto **PC;
func_5752545728:
    extend(122);
    NEXT();
    goto **PC;
func_5752545856:
    extend(65);
    NEXT();
    goto **PC;
func_5752545984:
    extend(66);
    NEXT();
    goto **PC;
func_5752546112:
    extend(67);
    NEXT();
    goto **PC;
func_5752546240:
    extend(68);
    NEXT();
    goto **PC;
func_5752546368:
    extend(69);
    NEXT();
    goto **PC;
func_5752546496:
    extend(70);
    NEXT();
    goto **PC;
func_5752546624:
    extend(71);
    NEXT();
    goto **PC;
func_5752544576:
    extend(72);
    NEXT();
    goto **PC;
func_5752544704:
    extend(73);
    NEXT();
    goto **PC;
func_5752547264:
    extend(74);
    NEXT();
    goto **PC;
func_5752547392:
    extend(75);
    NEXT();
    goto **PC;
func_5752547520:
    extend(76);
    NEXT();
    goto **PC;
func_5752547648:
    extend(77);
    NEXT();
    goto **PC;
func_5752547776:
    extend(78);
    NEXT();
    goto **PC;
func_5752547904:
    extend(79);
    NEXT();
    goto **PC;
func_5752548032:
    extend(80);
    NEXT();
    goto **PC;
func_5752548160:
    extend(81);
    NEXT();
    goto **PC;
func_5752548288:
    extend(82);
    NEXT();
    goto **PC;
func_5752548416:
    extend(83);
    NEXT();
    goto **PC;
func_5752548544:
    extend(84);
    NEXT();
    goto **PC;
func_5752548672:
    extend(85);
    NEXT();
    goto **PC;
func_5752548800:
    extend(86);
    NEXT();
    goto **PC;
func_5752548928:
    extend(87);
    NEXT();
    goto **PC;
func_5752549056:
    extend(88);
    NEXT();
    goto **PC;
func_5752549184:
    extend(89);
    NEXT();
    goto **PC;
func_5752549312:
    extend(90);
    NEXT();
    goto **PC;
func_5752541104:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752541104;
    goto **PC;
func_5752540448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752540448;
    goto **PC;
func_5752541680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752541680;
    goto **PC;
func_5752541808:
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    NEXT();
    goto **PC;
func_5752542304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752542304;
    goto **PC;
func_5752542432:
    extend(42);
    NEXT();
    goto **PC;
func_5752541936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752541936;
    goto **PC;
func_5752542560:
    extend(47);
    NEXT();
    goto **PC;
func_5752549520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752549520;
    goto **PC;
func_5752549648:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5752549776:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5752549904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752549904;
    goto **PC;
func_5752550032:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5752550160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752550160;
    goto **PC;
func_5752550288:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5752549440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5752549440;
    goto **PC;
func_5752542208:
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
    PC = func_5752533728_op0;
    goto **PC;
}
