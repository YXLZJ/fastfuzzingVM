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
    static void *func_5341475904_op0[2] = { &&func_5341495648, &&RETURN };
    static void *func_5341475904_op1[2] = { &&func_5341495008, &&RETURN };
    static void *func_5341492416_op0[2] = { &&func_5341495568, &&RETURN };
    static void *func_5341492624_op0[2] = { &&func_5341495312, &&RETURN };
    static void *func_5341492624_op1[2] = { &&func_5341494000, &&RETURN };
    static void *func_5341492624_op2[2] = { &&func_5341493616, &&RETURN };
    static void *func_5341492832_op0[2] = { &&func_5341493872, &&RETURN };
    static void *func_5341492832_op1[2] = { &&func_5341495840, &&RETURN };
    static void *func_5341492288_op0[2] = { &&func_5341496288, &&RETURN };
    static void *func_5341493488_op0[2] = { &&func_5341496784, &&RETURN };
    static void *func_5341493488_op1[2] = { &&func_5341496912, &&RETURN };
    static void *func_5341493488_op2[2] = { &&func_5341497040, &&RETURN };
    static void *func_5341493488_op3[2] = { &&func_5341497200, &&RETURN };
    static void *func_5341493488_op4[2] = { &&func_5341497328, &&RETURN };
    static void *func_5341493488_op5[2] = { &&func_5341494688, &&RETURN };
    static void *func_5341493488_op6[2] = { &&func_5341497904, &&RETURN };
    static void *func_5341493488_op7[2] = { &&func_5341498032, &&RETURN };
    static void *func_5341493488_op8[2] = { &&func_5341498160, &&RETURN };
    static void *func_5341493488_op9[2] = { &&func_5341494624, &&RETURN };
    static void *func_5341493616_op0[2] = { &&func_5341493168, &&RETURN };
    static void *func_5341493616_op1[2] = { &&func_5341492416, &&RETURN };
    static void *func_5341493616_op2[2] = { &&func_5341493392, &&RETURN };
    static void *func_5341493616_op3[2] = { &&func_5341492832, &&RETURN };
    static void *func_5341493616_op4[2] = { &&func_5341494880, &&RETURN };
    static void *func_5341493392_op0[2] = { &&func_5341496480, &&RETURN };
    static void *func_5341493168_op0[2] = { &&func_5341498480, &&RETURN };
    static void *func_5341495184_op0[2] = { &&func_5341500208, &&RETURN };
    static void *func_5341495184_op1[2] = { &&func_5341500336, &&RETURN };
    static void *func_5341495184_op2[2] = { &&func_5341500464, &&RETURN };
    static void *func_5341495184_op3[2] = { &&func_5341500624, &&RETURN };
    static void *func_5341495184_op4[2] = { &&func_5341500752, &&RETURN };
    static void *func_5341495184_op5[2] = { &&func_5341500944, &&RETURN };
    static void *func_5341495184_op6[2] = { &&func_5341501072, &&RETURN };
    static void *func_5341495184_op7[2] = { &&func_5341501200, &&RETURN };
    static void *func_5341495184_op8[2] = { &&func_5341501328, &&RETURN };
    static void *func_5341495184_op9[2] = { &&func_5341500880, &&RETURN };
    static void *func_5341495184_op10[2] = { &&func_5341501648, &&RETURN };
    static void *func_5341495184_op11[2] = { &&func_5341501776, &&RETURN };
    static void *func_5341495184_op12[2] = { &&func_5341501904, &&RETURN };
    static void *func_5341495184_op13[2] = { &&func_5341502032, &&RETURN };
    static void *func_5341495184_op14[2] = { &&func_5341502160, &&RETURN };
    static void *func_5341495184_op15[2] = { &&func_5341502288, &&RETURN };
    static void *func_5341495184_op16[2] = { &&func_5341502416, &&RETURN };
    static void *func_5341495184_op17[2] = { &&func_5341501456, &&RETURN };
    static void *func_5341495184_op18[2] = { &&func_5341502800, &&RETURN };
    static void *func_5341495184_op19[2] = { &&func_5341502928, &&RETURN };
    static void *func_5341495184_op20[2] = { &&func_5341503056, &&RETURN };
    static void *func_5341495184_op21[2] = { &&func_5341503184, &&RETURN };
    static void *func_5341495184_op22[2] = { &&func_5341503312, &&RETURN };
    static void *func_5341495184_op23[2] = { &&func_5341497456, &&RETURN };
    static void *func_5341495184_op24[2] = { &&func_5341497584, &&RETURN };
    static void *func_5341495184_op25[2] = { &&func_5341497712, &&RETURN };
    static void *func_5341495184_op26[2] = { &&func_5341497840, &&RETURN };
    static void *func_5341495184_op27[2] = { &&func_5341503440, &&RETURN };
    static void *func_5341495184_op28[2] = { &&func_5341503568, &&RETURN };
    static void *func_5341495184_op29[2] = { &&func_5341503696, &&RETURN };
    static void *func_5341495184_op30[2] = { &&func_5341503824, &&RETURN };
    static void *func_5341495184_op31[2] = { &&func_5341503952, &&RETURN };
    static void *func_5341495184_op32[2] = { &&func_5341504080, &&RETURN };
    static void *func_5341495184_op33[2] = { &&func_5341502544, &&RETURN };
    static void *func_5341495184_op34[2] = { &&func_5341502672, &&RETURN };
    static void *func_5341495184_op35[2] = { &&func_5341504720, &&RETURN };
    static void *func_5341495184_op36[2] = { &&func_5341504848, &&RETURN };
    static void *func_5341495184_op37[2] = { &&func_5341504976, &&RETURN };
    static void *func_5341495184_op38[2] = { &&func_5341505104, &&RETURN };
    static void *func_5341495184_op39[2] = { &&func_5341505232, &&RETURN };
    static void *func_5341495184_op40[2] = { &&func_5341505360, &&RETURN };
    static void *func_5341495184_op41[2] = { &&func_5341505488, &&RETURN };
    static void *func_5341495184_op42[2] = { &&func_5341505616, &&RETURN };
    static void *func_5341495184_op43[2] = { &&func_5341505744, &&RETURN };
    static void *func_5341495184_op44[2] = { &&func_5341505872, &&RETURN };
    static void *func_5341495184_op45[2] = { &&func_5341506000, &&RETURN };
    static void *func_5341495184_op46[2] = { &&func_5341506128, &&RETURN };
    static void *func_5341495184_op47[2] = { &&func_5341506256, &&RETURN };
    static void *func_5341495184_op48[2] = { &&func_5341506384, &&RETURN };
    static void *func_5341495184_op49[2] = { &&func_5341506512, &&RETURN };
    static void *func_5341495184_op50[2] = { &&func_5341506640, &&RETURN };
    static void *func_5341495184_op51[2] = { &&func_5341506768, &&RETURN };
    static void *func_5341494304_op0[2] = { &&func_5341496160, &&RETURN };
    static void *func_5341494304_op1[2] = { &&func_5341495568, &&RETURN };
    static void *func_5341494304_op2[2] = { &&func_5341499296, &&RETURN };
    static void *func_5341494304_op3[2] = { &&func_5341499456, &&RETURN };
    static void *func_5341494304_op4[2] = { &&func_5341499584, &&RETURN };
    static void *func_5341494304_op5[2] = { &&func_5341499776, &&RETURN };
    static void *func_5341494304_op6[2] = { &&func_5341496480, &&RETURN };
    static void *func_5341494304_op7[2] = { &&func_5341499904, &&RETURN };
    static void *func_5341494304_op8[2] = { &&func_5341498608, &&RETURN };
    static void *func_5341494304_op9[2] = { &&func_5341498736, &&RETURN };
    static void *func_5341494304_op10[2] = { &&func_5341499712, &&RETURN };
    static void *func_5341494304_op11[2] = { &&func_5341506960, &&RETURN };
    static void *func_5341494304_op12[2] = { &&func_5341507088, &&RETURN };
    static void *func_5341494304_op13[2] = { &&func_5341507216, &&RETURN };
    static void *func_5341493744_op0[2] = { &&func_5341498864, &&RETURN };
    static void *func_5341493872_op0[2] = { &&func_5341495184, &&RETURN };
    static void *func_5341493872_op1[2] = { &&func_5341493488, &&RETURN };
    static void *func_5341493872_op2[2] = { &&func_5341495968, &&RETURN };
    static void *func_5341494000_op0[2] = { &&func_5341496688, &&RETURN };
    static void *func_5341494128_op0[2] = { &&func_5341507344, &&RETURN };
    static void *func_5341494432_op0[2] = { &&func_5341507472, &&RETURN };
    static void *func_5341493088_op0[2] = { &&func_5341494432, &&RETURN };
    static void *func_5341493088_op1[2] = { &&func_5341492832, &&RETURN };
    static void *func_5341493232_op0[2] = { &&func_5341493088, &&RETURN };
    static void *func_5341493232_op1[2] = { &&func_5341496608, &&RETURN };
    static void *func_5341494880_op0[2] = { &&func_5341494128, &&RETURN };
    static void *func_5341494880_op1[2] = { &&func_5341493744, &&RETURN };
    static void *func_5341495008_op0[2] = { &&func_5341492288, &&RETURN };
    static void *func_5341495008_op1[2] = { &&func_5341492624, &&RETURN };
    static void *func_5341495312_op0[2] = { &&func_5341507728, &&RETURN };
    static void *func_5341495440_op0[2] = { &&func_5341475904, &&HALT };
    static void *func_5341495968_op0[2] = { &&func_5341508384, &&RETURN };
    static void *func_5341495968_op1[2] = { &&func_5341507600, &&RETURN };
    static void *func_5341495968_op2[2] = { &&func_5341508528, &&RETURN };
    static void *func_5341495968_op3[2] = { &&func_5341508688, &&RETURN };
    static void *func_5341495968_op4[2] = { &&func_5341508816, &&RETURN };
    static void *func_5341495968_op5[2] = { &&func_5341509008, &&RETURN };
    static void *func_5341495968_op6[2] = { &&func_5341509136, &&RETURN };
    static void *func_5341495968_op7[2] = { &&func_5341509264, &&RETURN };
    static void *func_5341495968_op8[2] = { &&func_5341509392, &&RETURN };
    static void *func_5341495968_op9[2] = { &&func_5341508944, &&RETURN };
    static void *func_5341495968_op10[2] = { &&func_5341509712, &&RETURN };
    static void *func_5341495648_op0[2] = { &&func_5341508016, &&RETURN };
    static void *exp_5341495840[3] = {&&func_5341496160, &&func_5341494304, &&RETURN };
    static void *exp_5341496288[3] = {&&func_5341495008, &&func_5341492624, &&RETURN };
    static void *exp_5341498480[4] = {&&func_5341498608, &&func_5341475904, &&func_5341498736, &&RETURN };
    static void *exp_5341498864[4] = {&&func_5341498992, &&func_5341493232, &&func_5341506960, &&RETURN };
    static void *exp_5341496688[3] = {&&func_5341493616, &&func_5341499456, &&RETURN };
    static void *exp_5341507344[4] = {&&func_5341499712, &&func_5341493232, &&func_5341506960, &&RETURN };
    static void *exp_5341507472[4] = {&&func_5341492832, &&func_5341507600, &&func_5341492832, &&RETURN };
    static void *exp_5341496608[3] = {&&func_5341493088, &&func_5341493232, &&RETURN };
    static void *exp_5341507728[3] = {&&func_5341493616, &&func_5341499296, &&RETURN };
    static void *exp_5341508016[4] = {&&func_5341475904, &&func_5341499904, &&func_5341495008, &&RETURN };

func_5341475904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341475904_op0;
            break;
        case 1:
            PC = func_5341475904_op1;
            break;
    }
    goto **PC;
func_5341492416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341492416_op0;
            break;
    }
    goto **PC;
func_5341492624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341492624_op0;
            break;
        case 1:
            PC = func_5341492624_op1;
            break;
        case 2:
            PC = func_5341492624_op2;
            break;
    }
    goto **PC;
func_5341492832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341492832_op0;
            break;
        case 1:
            PC = func_5341492832_op1;
            break;
    }
    goto **PC;
func_5341492288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341492288_op0;
            break;
    }
    goto **PC;
func_5341493488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493488_op0;
            break;
        case 1:
            PC = func_5341493488_op1;
            break;
        case 2:
            PC = func_5341493488_op2;
            break;
        case 3:
            PC = func_5341493488_op3;
            break;
        case 4:
            PC = func_5341493488_op4;
            break;
        case 5:
            PC = func_5341493488_op5;
            break;
        case 6:
            PC = func_5341493488_op6;
            break;
        case 7:
            PC = func_5341493488_op7;
            break;
        case 8:
            PC = func_5341493488_op8;
            break;
        case 9:
            PC = func_5341493488_op9;
            break;
    }
    goto **PC;
func_5341493616:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493616_op0;
            break;
        case 1:
            PC = func_5341493616_op1;
            break;
        case 2:
            PC = func_5341493616_op2;
            break;
        case 3:
            PC = func_5341493616_op3;
            break;
        case 4:
            PC = func_5341493616_op4;
            break;
    }
    goto **PC;
func_5341493392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493392_op0;
            break;
    }
    goto **PC;
func_5341493168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493168_op0;
            break;
    }
    goto **PC;
func_5341495184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495184_op0;
            break;
        case 1:
            PC = func_5341495184_op1;
            break;
        case 2:
            PC = func_5341495184_op2;
            break;
        case 3:
            PC = func_5341495184_op3;
            break;
        case 4:
            PC = func_5341495184_op4;
            break;
        case 5:
            PC = func_5341495184_op5;
            break;
        case 6:
            PC = func_5341495184_op6;
            break;
        case 7:
            PC = func_5341495184_op7;
            break;
        case 8:
            PC = func_5341495184_op8;
            break;
        case 9:
            PC = func_5341495184_op9;
            break;
        case 10:
            PC = func_5341495184_op10;
            break;
        case 11:
            PC = func_5341495184_op11;
            break;
        case 12:
            PC = func_5341495184_op12;
            break;
        case 13:
            PC = func_5341495184_op13;
            break;
        case 14:
            PC = func_5341495184_op14;
            break;
        case 15:
            PC = func_5341495184_op15;
            break;
        case 16:
            PC = func_5341495184_op16;
            break;
        case 17:
            PC = func_5341495184_op17;
            break;
        case 18:
            PC = func_5341495184_op18;
            break;
        case 19:
            PC = func_5341495184_op19;
            break;
        case 20:
            PC = func_5341495184_op20;
            break;
        case 21:
            PC = func_5341495184_op21;
            break;
        case 22:
            PC = func_5341495184_op22;
            break;
        case 23:
            PC = func_5341495184_op23;
            break;
        case 24:
            PC = func_5341495184_op24;
            break;
        case 25:
            PC = func_5341495184_op25;
            break;
        case 26:
            PC = func_5341495184_op26;
            break;
        case 27:
            PC = func_5341495184_op27;
            break;
        case 28:
            PC = func_5341495184_op28;
            break;
        case 29:
            PC = func_5341495184_op29;
            break;
        case 30:
            PC = func_5341495184_op30;
            break;
        case 31:
            PC = func_5341495184_op31;
            break;
        case 32:
            PC = func_5341495184_op32;
            break;
        case 33:
            PC = func_5341495184_op33;
            break;
        case 34:
            PC = func_5341495184_op34;
            break;
        case 35:
            PC = func_5341495184_op35;
            break;
        case 36:
            PC = func_5341495184_op36;
            break;
        case 37:
            PC = func_5341495184_op37;
            break;
        case 38:
            PC = func_5341495184_op38;
            break;
        case 39:
            PC = func_5341495184_op39;
            break;
        case 40:
            PC = func_5341495184_op40;
            break;
        case 41:
            PC = func_5341495184_op41;
            break;
        case 42:
            PC = func_5341495184_op42;
            break;
        case 43:
            PC = func_5341495184_op43;
            break;
        case 44:
            PC = func_5341495184_op44;
            break;
        case 45:
            PC = func_5341495184_op45;
            break;
        case 46:
            PC = func_5341495184_op46;
            break;
        case 47:
            PC = func_5341495184_op47;
            break;
        case 48:
            PC = func_5341495184_op48;
            break;
        case 49:
            PC = func_5341495184_op49;
            break;
        case 50:
            PC = func_5341495184_op50;
            break;
        case 51:
            PC = func_5341495184_op51;
            break;
    }
    goto **PC;
func_5341494304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5341494304_op0;
            break;
        case 1:
            PC = func_5341494304_op1;
            break;
        case 2:
            PC = func_5341494304_op2;
            break;
        case 3:
            PC = func_5341494304_op3;
            break;
        case 4:
            PC = func_5341494304_op4;
            break;
        case 5:
            PC = func_5341494304_op5;
            break;
        case 6:
            PC = func_5341494304_op6;
            break;
        case 7:
            PC = func_5341494304_op7;
            break;
        case 8:
            PC = func_5341494304_op8;
            break;
        case 9:
            PC = func_5341494304_op9;
            break;
        case 10:
            PC = func_5341494304_op10;
            break;
        case 11:
            PC = func_5341494304_op11;
            break;
        case 12:
            PC = func_5341494304_op12;
            break;
        case 13:
            PC = func_5341494304_op13;
            break;
    }
    goto **PC;
func_5341493744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493744_op0;
            break;
    }
    goto **PC;
func_5341493872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493872_op0;
            break;
        case 1:
            PC = func_5341493872_op1;
            break;
        case 2:
            PC = func_5341493872_op2;
            break;
    }
    goto **PC;
func_5341494000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341494000_op0;
            break;
    }
    goto **PC;
func_5341494128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341494128_op0;
            break;
    }
    goto **PC;
func_5341494432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341494432_op0;
            break;
    }
    goto **PC;
func_5341493088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493088_op0;
            break;
        case 1:
            PC = func_5341493088_op1;
            break;
    }
    goto **PC;
func_5341493232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341493232_op0;
            break;
        case 1:
            PC = func_5341493232_op1;
            break;
    }
    goto **PC;
func_5341494880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341494880_op0;
            break;
        case 1:
            PC = func_5341494880_op1;
            break;
    }
    goto **PC;
func_5341495008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495008_op0;
            break;
        case 1:
            PC = func_5341495008_op1;
            break;
    }
    goto **PC;
func_5341495312:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495312_op0;
            break;
    }
    goto **PC;
func_5341495440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495440_op0;
            break;
    }
    goto **PC;
func_5341495968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495968_op0;
            break;
        case 1:
            PC = func_5341495968_op1;
            break;
        case 2:
            PC = func_5341495968_op2;
            break;
        case 3:
            PC = func_5341495968_op3;
            break;
        case 4:
            PC = func_5341495968_op4;
            break;
        case 5:
            PC = func_5341495968_op5;
            break;
        case 6:
            PC = func_5341495968_op6;
            break;
        case 7:
            PC = func_5341495968_op7;
            break;
        case 8:
            PC = func_5341495968_op8;
            break;
        case 9:
            PC = func_5341495968_op9;
            break;
        case 10:
            PC = func_5341495968_op10;
            break;
    }
    goto **PC;
func_5341495648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5341495648_op0;
            break;
    }
    goto **PC;
func_5341495568:
    extend(46);
    NEXT();
    goto **PC;
func_5341495840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341495840;
    goto **PC;
func_5341496160:
    extend(92);
    NEXT();
    goto **PC;
func_5341496288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341496288;
    goto **PC;
func_5341496784:
    extend(48);
    NEXT();
    goto **PC;
func_5341496912:
    extend(49);
    NEXT();
    goto **PC;
func_5341497040:
    extend(50);
    NEXT();
    goto **PC;
func_5341497200:
    extend(51);
    NEXT();
    goto **PC;
func_5341497328:
    extend(52);
    NEXT();
    goto **PC;
func_5341494688:
    extend(53);
    NEXT();
    goto **PC;
func_5341497904:
    extend(54);
    NEXT();
    goto **PC;
func_5341498032:
    extend(55);
    NEXT();
    goto **PC;
func_5341498160:
    extend(56);
    NEXT();
    goto **PC;
func_5341494624:
    extend(57);
    NEXT();
    goto **PC;
func_5341496480:
    extend(36);
    NEXT();
    goto **PC;
func_5341498480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341498480;
    goto **PC;
func_5341498608:
    extend(40);
    NEXT();
    goto **PC;
func_5341498736:
    extend(41);
    NEXT();
    goto **PC;
func_5341500208:
    extend(97);
    NEXT();
    goto **PC;
func_5341500336:
    extend(98);
    NEXT();
    goto **PC;
func_5341500464:
    extend(99);
    NEXT();
    goto **PC;
func_5341500624:
    extend(100);
    NEXT();
    goto **PC;
func_5341500752:
    extend(101);
    NEXT();
    goto **PC;
func_5341500944:
    extend(102);
    NEXT();
    goto **PC;
func_5341501072:
    extend(103);
    NEXT();
    goto **PC;
func_5341501200:
    extend(104);
    NEXT();
    goto **PC;
func_5341501328:
    extend(105);
    NEXT();
    goto **PC;
func_5341500880:
    extend(106);
    NEXT();
    goto **PC;
func_5341501648:
    extend(107);
    NEXT();
    goto **PC;
func_5341501776:
    extend(108);
    NEXT();
    goto **PC;
func_5341501904:
    extend(109);
    NEXT();
    goto **PC;
func_5341502032:
    extend(110);
    NEXT();
    goto **PC;
func_5341502160:
    extend(111);
    NEXT();
    goto **PC;
func_5341502288:
    extend(112);
    NEXT();
    goto **PC;
func_5341502416:
    extend(113);
    NEXT();
    goto **PC;
func_5341501456:
    extend(114);
    NEXT();
    goto **PC;
func_5341502800:
    extend(115);
    NEXT();
    goto **PC;
func_5341502928:
    extend(116);
    NEXT();
    goto **PC;
func_5341503056:
    extend(117);
    NEXT();
    goto **PC;
func_5341503184:
    extend(118);
    NEXT();
    goto **PC;
func_5341503312:
    extend(119);
    NEXT();
    goto **PC;
func_5341497456:
    extend(120);
    NEXT();
    goto **PC;
func_5341497584:
    extend(121);
    NEXT();
    goto **PC;
func_5341497712:
    extend(122);
    NEXT();
    goto **PC;
func_5341497840:
    extend(65);
    NEXT();
    goto **PC;
func_5341503440:
    extend(66);
    NEXT();
    goto **PC;
func_5341503568:
    extend(67);
    NEXT();
    goto **PC;
func_5341503696:
    extend(68);
    NEXT();
    goto **PC;
func_5341503824:
    extend(69);
    NEXT();
    goto **PC;
func_5341503952:
    extend(70);
    NEXT();
    goto **PC;
func_5341504080:
    extend(71);
    NEXT();
    goto **PC;
func_5341502544:
    extend(72);
    NEXT();
    goto **PC;
func_5341502672:
    extend(73);
    NEXT();
    goto **PC;
func_5341504720:
    extend(74);
    NEXT();
    goto **PC;
func_5341504848:
    extend(75);
    NEXT();
    goto **PC;
func_5341504976:
    extend(76);
    NEXT();
    goto **PC;
func_5341505104:
    extend(77);
    NEXT();
    goto **PC;
func_5341505232:
    extend(78);
    NEXT();
    goto **PC;
func_5341505360:
    extend(79);
    NEXT();
    goto **PC;
func_5341505488:
    extend(80);
    NEXT();
    goto **PC;
func_5341505616:
    extend(81);
    NEXT();
    goto **PC;
func_5341505744:
    extend(82);
    NEXT();
    goto **PC;
func_5341505872:
    extend(83);
    NEXT();
    goto **PC;
func_5341506000:
    extend(84);
    NEXT();
    goto **PC;
func_5341506128:
    extend(85);
    NEXT();
    goto **PC;
func_5341506256:
    extend(86);
    NEXT();
    goto **PC;
func_5341506384:
    extend(87);
    NEXT();
    goto **PC;
func_5341506512:
    extend(88);
    NEXT();
    goto **PC;
func_5341506640:
    extend(89);
    NEXT();
    goto **PC;
func_5341506768:
    extend(90);
    NEXT();
    goto **PC;
func_5341499296:
    extend(42);
    NEXT();
    goto **PC;
func_5341499456:
    extend(43);
    NEXT();
    goto **PC;
func_5341499584:
    extend(63);
    NEXT();
    goto **PC;
func_5341499776:
    extend(94);
    NEXT();
    goto **PC;
func_5341499904:
    extend(124);
    NEXT();
    goto **PC;
func_5341499712:
    extend(91);
    NEXT();
    goto **PC;
func_5341506960:
    extend(93);
    NEXT();
    goto **PC;
func_5341507088:
    extend(123);
    NEXT();
    goto **PC;
func_5341507216:
    extend(125);
    NEXT();
    goto **PC;
func_5341498864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341498864;
    goto **PC;
func_5341498992:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5341496688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341496688;
    goto **PC;
func_5341507344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341507344;
    goto **PC;
func_5341507472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341507472;
    goto **PC;
func_5341507600:
    extend(45);
    NEXT();
    goto **PC;
func_5341496608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341496608;
    goto **PC;
func_5341507728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341507728;
    goto **PC;
func_5341508384:
    extend(95);
    NEXT();
    goto **PC;
func_5341508528:
    extend(64);
    NEXT();
    goto **PC;
func_5341508688:
    extend(35);
    NEXT();
    goto **PC;
func_5341508816:
    extend(37);
    NEXT();
    goto **PC;
func_5341509008:
    extend(38);
    NEXT();
    goto **PC;
func_5341509136:
    extend(61);
    NEXT();
    goto **PC;
func_5341509264:
    extend(126);
    NEXT();
    goto **PC;
func_5341509392:
    extend(96);
    NEXT();
    goto **PC;
func_5341508944:
    extend(39);
    NEXT();
    goto **PC;
func_5341509712:
    extend(34);
    NEXT();
    goto **PC;
func_5341508016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341508016;
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
    PC = func_5341495440_op0;
    goto **PC;
}
