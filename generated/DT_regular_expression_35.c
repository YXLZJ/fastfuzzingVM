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
    static void *func_5585787744_op0[2] = { &&func_5585807488, &&RETURN };
    static void *func_5585787744_op1[2] = { &&func_5585806848, &&RETURN };
    static void *func_5585804256_op0[2] = { &&func_5585807408, &&RETURN };
    static void *func_5585804464_op0[2] = { &&func_5585807152, &&RETURN };
    static void *func_5585804464_op1[2] = { &&func_5585805840, &&RETURN };
    static void *func_5585804464_op2[2] = { &&func_5585805456, &&RETURN };
    static void *func_5585804672_op0[2] = { &&func_5585805712, &&RETURN };
    static void *func_5585804672_op1[2] = { &&func_5585807680, &&RETURN };
    static void *func_5585804128_op0[2] = { &&func_5585808128, &&RETURN };
    static void *func_5585805328_op0[2] = { &&func_5585808624, &&RETURN };
    static void *func_5585805328_op1[2] = { &&func_5585808752, &&RETURN };
    static void *func_5585805328_op2[2] = { &&func_5585808880, &&RETURN };
    static void *func_5585805328_op3[2] = { &&func_5585809040, &&RETURN };
    static void *func_5585805328_op4[2] = { &&func_5585809168, &&RETURN };
    static void *func_5585805328_op5[2] = { &&func_5585806528, &&RETURN };
    static void *func_5585805328_op6[2] = { &&func_5585809744, &&RETURN };
    static void *func_5585805328_op7[2] = { &&func_5585809872, &&RETURN };
    static void *func_5585805328_op8[2] = { &&func_5585810000, &&RETURN };
    static void *func_5585805328_op9[2] = { &&func_5585806464, &&RETURN };
    static void *func_5585805456_op0[2] = { &&func_5585805008, &&RETURN };
    static void *func_5585805456_op1[2] = { &&func_5585804256, &&RETURN };
    static void *func_5585805456_op2[2] = { &&func_5585805232, &&RETURN };
    static void *func_5585805456_op3[2] = { &&func_5585804672, &&RETURN };
    static void *func_5585805456_op4[2] = { &&func_5585806720, &&RETURN };
    static void *func_5585805232_op0[2] = { &&func_5585808320, &&RETURN };
    static void *func_5585805008_op0[2] = { &&func_5585810320, &&RETURN };
    static void *func_5585807024_op0[2] = { &&func_5585812048, &&RETURN };
    static void *func_5585807024_op1[2] = { &&func_5585812176, &&RETURN };
    static void *func_5585807024_op2[2] = { &&func_5585812304, &&RETURN };
    static void *func_5585807024_op3[2] = { &&func_5585812464, &&RETURN };
    static void *func_5585807024_op4[2] = { &&func_5585812592, &&RETURN };
    static void *func_5585807024_op5[2] = { &&func_5585812784, &&RETURN };
    static void *func_5585807024_op6[2] = { &&func_5585812912, &&RETURN };
    static void *func_5585807024_op7[2] = { &&func_5585813040, &&RETURN };
    static void *func_5585807024_op8[2] = { &&func_5585813168, &&RETURN };
    static void *func_5585807024_op9[2] = { &&func_5585812720, &&RETURN };
    static void *func_5585807024_op10[2] = { &&func_5585813488, &&RETURN };
    static void *func_5585807024_op11[2] = { &&func_5585813616, &&RETURN };
    static void *func_5585807024_op12[2] = { &&func_5585813744, &&RETURN };
    static void *func_5585807024_op13[2] = { &&func_5585813872, &&RETURN };
    static void *func_5585807024_op14[2] = { &&func_5585814000, &&RETURN };
    static void *func_5585807024_op15[2] = { &&func_5585814128, &&RETURN };
    static void *func_5585807024_op16[2] = { &&func_5585814256, &&RETURN };
    static void *func_5585807024_op17[2] = { &&func_5585813296, &&RETURN };
    static void *func_5585807024_op18[2] = { &&func_5585814640, &&RETURN };
    static void *func_5585807024_op19[2] = { &&func_5585814768, &&RETURN };
    static void *func_5585807024_op20[2] = { &&func_5585814896, &&RETURN };
    static void *func_5585807024_op21[2] = { &&func_5585815024, &&RETURN };
    static void *func_5585807024_op22[2] = { &&func_5585815152, &&RETURN };
    static void *func_5585807024_op23[2] = { &&func_5585809296, &&RETURN };
    static void *func_5585807024_op24[2] = { &&func_5585809424, &&RETURN };
    static void *func_5585807024_op25[2] = { &&func_5585809552, &&RETURN };
    static void *func_5585807024_op26[2] = { &&func_5585809680, &&RETURN };
    static void *func_5585807024_op27[2] = { &&func_5585815280, &&RETURN };
    static void *func_5585807024_op28[2] = { &&func_5585815408, &&RETURN };
    static void *func_5585807024_op29[2] = { &&func_5585815536, &&RETURN };
    static void *func_5585807024_op30[2] = { &&func_5585815664, &&RETURN };
    static void *func_5585807024_op31[2] = { &&func_5585815792, &&RETURN };
    static void *func_5585807024_op32[2] = { &&func_5585815920, &&RETURN };
    static void *func_5585807024_op33[2] = { &&func_5585814384, &&RETURN };
    static void *func_5585807024_op34[2] = { &&func_5585814512, &&RETURN };
    static void *func_5585807024_op35[2] = { &&func_5585816560, &&RETURN };
    static void *func_5585807024_op36[2] = { &&func_5585816688, &&RETURN };
    static void *func_5585807024_op37[2] = { &&func_5585816816, &&RETURN };
    static void *func_5585807024_op38[2] = { &&func_5585816944, &&RETURN };
    static void *func_5585807024_op39[2] = { &&func_5585817072, &&RETURN };
    static void *func_5585807024_op40[2] = { &&func_5585817200, &&RETURN };
    static void *func_5585807024_op41[2] = { &&func_5585817328, &&RETURN };
    static void *func_5585807024_op42[2] = { &&func_5585817456, &&RETURN };
    static void *func_5585807024_op43[2] = { &&func_5585817584, &&RETURN };
    static void *func_5585807024_op44[2] = { &&func_5585817712, &&RETURN };
    static void *func_5585807024_op45[2] = { &&func_5585817840, &&RETURN };
    static void *func_5585807024_op46[2] = { &&func_5585817968, &&RETURN };
    static void *func_5585807024_op47[2] = { &&func_5585818096, &&RETURN };
    static void *func_5585807024_op48[2] = { &&func_5585818224, &&RETURN };
    static void *func_5585807024_op49[2] = { &&func_5585818352, &&RETURN };
    static void *func_5585807024_op50[2] = { &&func_5585818480, &&RETURN };
    static void *func_5585807024_op51[2] = { &&func_5585818608, &&RETURN };
    static void *func_5585806144_op0[2] = { &&func_5585808000, &&RETURN };
    static void *func_5585806144_op1[2] = { &&func_5585807408, &&RETURN };
    static void *func_5585806144_op2[2] = { &&func_5585811136, &&RETURN };
    static void *func_5585806144_op3[2] = { &&func_5585811296, &&RETURN };
    static void *func_5585806144_op4[2] = { &&func_5585811424, &&RETURN };
    static void *func_5585806144_op5[2] = { &&func_5585811616, &&RETURN };
    static void *func_5585806144_op6[2] = { &&func_5585808320, &&RETURN };
    static void *func_5585806144_op7[2] = { &&func_5585811744, &&RETURN };
    static void *func_5585806144_op8[2] = { &&func_5585810448, &&RETURN };
    static void *func_5585806144_op9[2] = { &&func_5585810576, &&RETURN };
    static void *func_5585806144_op10[2] = { &&func_5585811552, &&RETURN };
    static void *func_5585806144_op11[2] = { &&func_5585818800, &&RETURN };
    static void *func_5585806144_op12[2] = { &&func_5585818928, &&RETURN };
    static void *func_5585806144_op13[2] = { &&func_5585819056, &&RETURN };
    static void *func_5585805584_op0[2] = { &&func_5585810704, &&RETURN };
    static void *func_5585805712_op0[2] = { &&func_5585807024, &&RETURN };
    static void *func_5585805712_op1[2] = { &&func_5585805328, &&RETURN };
    static void *func_5585805712_op2[2] = { &&func_5585807808, &&RETURN };
    static void *func_5585805840_op0[2] = { &&func_5585808528, &&RETURN };
    static void *func_5585805968_op0[2] = { &&func_5585819184, &&RETURN };
    static void *func_5585806272_op0[2] = { &&func_5585819312, &&RETURN };
    static void *func_5585804928_op0[2] = { &&func_5585806272, &&RETURN };
    static void *func_5585804928_op1[2] = { &&func_5585804672, &&RETURN };
    static void *func_5585805072_op0[2] = { &&func_5585804928, &&RETURN };
    static void *func_5585805072_op1[2] = { &&func_5585808448, &&RETURN };
    static void *func_5585806720_op0[2] = { &&func_5585805968, &&RETURN };
    static void *func_5585806720_op1[2] = { &&func_5585805584, &&RETURN };
    static void *func_5585806848_op0[2] = { &&func_5585804128, &&RETURN };
    static void *func_5585806848_op1[2] = { &&func_5585804464, &&RETURN };
    static void *func_5585807152_op0[2] = { &&func_5585819568, &&RETURN };
    static void *func_5585807280_op0[2] = { &&func_5585787744, &&HALT };
    static void *func_5585807808_op0[2] = { &&func_5585820224, &&RETURN };
    static void *func_5585807808_op1[2] = { &&func_5585819440, &&RETURN };
    static void *func_5585807808_op2[2] = { &&func_5585820368, &&RETURN };
    static void *func_5585807808_op3[2] = { &&func_5585820528, &&RETURN };
    static void *func_5585807808_op4[2] = { &&func_5585820656, &&RETURN };
    static void *func_5585807808_op5[2] = { &&func_5585820848, &&RETURN };
    static void *func_5585807808_op6[2] = { &&func_5585820976, &&RETURN };
    static void *func_5585807808_op7[2] = { &&func_5585821104, &&RETURN };
    static void *func_5585807808_op8[2] = { &&func_5585821232, &&RETURN };
    static void *func_5585807808_op9[2] = { &&func_5585820784, &&RETURN };
    static void *func_5585807808_op10[2] = { &&func_5585821552, &&RETURN };
    static void *func_5585807488_op0[2] = { &&func_5585819856, &&RETURN };
    static void *exp_5585807680[3] = {&&func_5585808000, &&func_5585806144, &&RETURN };
    static void *exp_5585808128[3] = {&&func_5585806848, &&func_5585804464, &&RETURN };
    static void *exp_5585810320[4] = {&&func_5585810448, &&func_5585787744, &&func_5585810576, &&RETURN };
    static void *exp_5585810704[4] = {&&func_5585810832, &&func_5585805072, &&func_5585818800, &&RETURN };
    static void *exp_5585808528[3] = {&&func_5585805456, &&func_5585811296, &&RETURN };
    static void *exp_5585819184[4] = {&&func_5585811552, &&func_5585805072, &&func_5585818800, &&RETURN };
    static void *exp_5585819312[4] = {&&func_5585804672, &&func_5585819440, &&func_5585804672, &&RETURN };
    static void *exp_5585808448[3] = {&&func_5585804928, &&func_5585805072, &&RETURN };
    static void *exp_5585819568[3] = {&&func_5585805456, &&func_5585811136, &&RETURN };
    static void *exp_5585819856[4] = {&&func_5585787744, &&func_5585811744, &&func_5585806848, &&RETURN };

func_5585787744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5585787744_op0;
            break;
        case 1:
            PC = func_5585787744_op1;
            break;
    }
    goto **PC;
func_5585804256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5585804256_op0;
            break;
    }
    goto **PC;
func_5585804464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5585804464_op0;
            break;
        case 1:
            PC = func_5585804464_op1;
            break;
        case 2:
            PC = func_5585804464_op2;
            break;
    }
    goto **PC;
func_5585804672:
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
            PC = func_5585804672_op0;
            break;
        case 1:
            PC = func_5585804672_op1;
            break;
    }
    goto **PC;
func_5585804128:
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
            PC = func_5585804128_op0;
            break;
    }
    goto **PC;
func_5585805328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5585805328_op0;
            break;
        case 1:
            PC = func_5585805328_op1;
            break;
        case 2:
            PC = func_5585805328_op2;
            break;
        case 3:
            PC = func_5585805328_op3;
            break;
        case 4:
            PC = func_5585805328_op4;
            break;
        case 5:
            PC = func_5585805328_op5;
            break;
        case 6:
            PC = func_5585805328_op6;
            break;
        case 7:
            PC = func_5585805328_op7;
            break;
        case 8:
            PC = func_5585805328_op8;
            break;
        case 9:
            PC = func_5585805328_op9;
            break;
    }
    goto **PC;
func_5585805456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5585805456_op0;
            break;
        case 1:
            PC = func_5585805456_op1;
            break;
        case 2:
            PC = func_5585805456_op2;
            break;
        case 3:
            PC = func_5585805456_op3;
            break;
        case 4:
            PC = func_5585805456_op4;
            break;
    }
    goto **PC;
func_5585805232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5585805232_op0;
            break;
    }
    goto **PC;
func_5585805008:
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
            PC = func_5585805008_op0;
            break;
    }
    goto **PC;
func_5585807024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5585807024_op0;
            break;
        case 1:
            PC = func_5585807024_op1;
            break;
        case 2:
            PC = func_5585807024_op2;
            break;
        case 3:
            PC = func_5585807024_op3;
            break;
        case 4:
            PC = func_5585807024_op4;
            break;
        case 5:
            PC = func_5585807024_op5;
            break;
        case 6:
            PC = func_5585807024_op6;
            break;
        case 7:
            PC = func_5585807024_op7;
            break;
        case 8:
            PC = func_5585807024_op8;
            break;
        case 9:
            PC = func_5585807024_op9;
            break;
        case 10:
            PC = func_5585807024_op10;
            break;
        case 11:
            PC = func_5585807024_op11;
            break;
        case 12:
            PC = func_5585807024_op12;
            break;
        case 13:
            PC = func_5585807024_op13;
            break;
        case 14:
            PC = func_5585807024_op14;
            break;
        case 15:
            PC = func_5585807024_op15;
            break;
        case 16:
            PC = func_5585807024_op16;
            break;
        case 17:
            PC = func_5585807024_op17;
            break;
        case 18:
            PC = func_5585807024_op18;
            break;
        case 19:
            PC = func_5585807024_op19;
            break;
        case 20:
            PC = func_5585807024_op20;
            break;
        case 21:
            PC = func_5585807024_op21;
            break;
        case 22:
            PC = func_5585807024_op22;
            break;
        case 23:
            PC = func_5585807024_op23;
            break;
        case 24:
            PC = func_5585807024_op24;
            break;
        case 25:
            PC = func_5585807024_op25;
            break;
        case 26:
            PC = func_5585807024_op26;
            break;
        case 27:
            PC = func_5585807024_op27;
            break;
        case 28:
            PC = func_5585807024_op28;
            break;
        case 29:
            PC = func_5585807024_op29;
            break;
        case 30:
            PC = func_5585807024_op30;
            break;
        case 31:
            PC = func_5585807024_op31;
            break;
        case 32:
            PC = func_5585807024_op32;
            break;
        case 33:
            PC = func_5585807024_op33;
            break;
        case 34:
            PC = func_5585807024_op34;
            break;
        case 35:
            PC = func_5585807024_op35;
            break;
        case 36:
            PC = func_5585807024_op36;
            break;
        case 37:
            PC = func_5585807024_op37;
            break;
        case 38:
            PC = func_5585807024_op38;
            break;
        case 39:
            PC = func_5585807024_op39;
            break;
        case 40:
            PC = func_5585807024_op40;
            break;
        case 41:
            PC = func_5585807024_op41;
            break;
        case 42:
            PC = func_5585807024_op42;
            break;
        case 43:
            PC = func_5585807024_op43;
            break;
        case 44:
            PC = func_5585807024_op44;
            break;
        case 45:
            PC = func_5585807024_op45;
            break;
        case 46:
            PC = func_5585807024_op46;
            break;
        case 47:
            PC = func_5585807024_op47;
            break;
        case 48:
            PC = func_5585807024_op48;
            break;
        case 49:
            PC = func_5585807024_op49;
            break;
        case 50:
            PC = func_5585807024_op50;
            break;
        case 51:
            PC = func_5585807024_op51;
            break;
    }
    goto **PC;
func_5585806144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5585806144_op0;
            break;
        case 1:
            PC = func_5585806144_op1;
            break;
        case 2:
            PC = func_5585806144_op2;
            break;
        case 3:
            PC = func_5585806144_op3;
            break;
        case 4:
            PC = func_5585806144_op4;
            break;
        case 5:
            PC = func_5585806144_op5;
            break;
        case 6:
            PC = func_5585806144_op6;
            break;
        case 7:
            PC = func_5585806144_op7;
            break;
        case 8:
            PC = func_5585806144_op8;
            break;
        case 9:
            PC = func_5585806144_op9;
            break;
        case 10:
            PC = func_5585806144_op10;
            break;
        case 11:
            PC = func_5585806144_op11;
            break;
        case 12:
            PC = func_5585806144_op12;
            break;
        case 13:
            PC = func_5585806144_op13;
            break;
    }
    goto **PC;
func_5585805584:
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
            PC = func_5585805584_op0;
            break;
    }
    goto **PC;
func_5585805712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5585805712_op0;
            break;
        case 1:
            PC = func_5585805712_op1;
            break;
        case 2:
            PC = func_5585805712_op2;
            break;
    }
    goto **PC;
func_5585805840:
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
            PC = func_5585805840_op0;
            break;
    }
    goto **PC;
func_5585805968:
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
            PC = func_5585805968_op0;
            break;
    }
    goto **PC;
func_5585806272:
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
            PC = func_5585806272_op0;
            break;
    }
    goto **PC;
func_5585804928:
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
            PC = func_5585804928_op0;
            break;
        case 1:
            PC = func_5585804928_op1;
            break;
    }
    goto **PC;
func_5585805072:
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
            PC = func_5585805072_op0;
            break;
        case 1:
            PC = func_5585805072_op1;
            break;
    }
    goto **PC;
func_5585806720:
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
            PC = func_5585806720_op0;
            break;
        case 1:
            PC = func_5585806720_op1;
            break;
    }
    goto **PC;
func_5585806848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5585806848_op0;
            break;
        case 1:
            PC = func_5585806848_op1;
            break;
    }
    goto **PC;
func_5585807152:
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
            PC = func_5585807152_op0;
            break;
    }
    goto **PC;
func_5585807280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5585807280_op0;
            break;
    }
    goto **PC;
func_5585807808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5585807808_op0;
            break;
        case 1:
            PC = func_5585807808_op1;
            break;
        case 2:
            PC = func_5585807808_op2;
            break;
        case 3:
            PC = func_5585807808_op3;
            break;
        case 4:
            PC = func_5585807808_op4;
            break;
        case 5:
            PC = func_5585807808_op5;
            break;
        case 6:
            PC = func_5585807808_op6;
            break;
        case 7:
            PC = func_5585807808_op7;
            break;
        case 8:
            PC = func_5585807808_op8;
            break;
        case 9:
            PC = func_5585807808_op9;
            break;
        case 10:
            PC = func_5585807808_op10;
            break;
    }
    goto **PC;
func_5585807488:
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
            PC = func_5585807488_op0;
            break;
    }
    goto **PC;
func_5585807408:
    extend(46);
    NEXT();
    goto **PC;
func_5585807680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585807680;
    goto **PC;
func_5585808000:
    extend(92);
    NEXT();
    goto **PC;
func_5585808128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585808128;
    goto **PC;
func_5585808624:
    extend(48);
    NEXT();
    goto **PC;
func_5585808752:
    extend(49);
    NEXT();
    goto **PC;
func_5585808880:
    extend(50);
    NEXT();
    goto **PC;
func_5585809040:
    extend(51);
    NEXT();
    goto **PC;
func_5585809168:
    extend(52);
    NEXT();
    goto **PC;
func_5585806528:
    extend(53);
    NEXT();
    goto **PC;
func_5585809744:
    extend(54);
    NEXT();
    goto **PC;
func_5585809872:
    extend(55);
    NEXT();
    goto **PC;
func_5585810000:
    extend(56);
    NEXT();
    goto **PC;
func_5585806464:
    extend(57);
    NEXT();
    goto **PC;
func_5585808320:
    extend(36);
    NEXT();
    goto **PC;
func_5585810320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585810320;
    goto **PC;
func_5585810448:
    extend(40);
    NEXT();
    goto **PC;
func_5585810576:
    extend(41);
    NEXT();
    goto **PC;
func_5585812048:
    extend(97);
    NEXT();
    goto **PC;
func_5585812176:
    extend(98);
    NEXT();
    goto **PC;
func_5585812304:
    extend(99);
    NEXT();
    goto **PC;
func_5585812464:
    extend(100);
    NEXT();
    goto **PC;
func_5585812592:
    extend(101);
    NEXT();
    goto **PC;
func_5585812784:
    extend(102);
    NEXT();
    goto **PC;
func_5585812912:
    extend(103);
    NEXT();
    goto **PC;
func_5585813040:
    extend(104);
    NEXT();
    goto **PC;
func_5585813168:
    extend(105);
    NEXT();
    goto **PC;
func_5585812720:
    extend(106);
    NEXT();
    goto **PC;
func_5585813488:
    extend(107);
    NEXT();
    goto **PC;
func_5585813616:
    extend(108);
    NEXT();
    goto **PC;
func_5585813744:
    extend(109);
    NEXT();
    goto **PC;
func_5585813872:
    extend(110);
    NEXT();
    goto **PC;
func_5585814000:
    extend(111);
    NEXT();
    goto **PC;
func_5585814128:
    extend(112);
    NEXT();
    goto **PC;
func_5585814256:
    extend(113);
    NEXT();
    goto **PC;
func_5585813296:
    extend(114);
    NEXT();
    goto **PC;
func_5585814640:
    extend(115);
    NEXT();
    goto **PC;
func_5585814768:
    extend(116);
    NEXT();
    goto **PC;
func_5585814896:
    extend(117);
    NEXT();
    goto **PC;
func_5585815024:
    extend(118);
    NEXT();
    goto **PC;
func_5585815152:
    extend(119);
    NEXT();
    goto **PC;
func_5585809296:
    extend(120);
    NEXT();
    goto **PC;
func_5585809424:
    extend(121);
    NEXT();
    goto **PC;
func_5585809552:
    extend(122);
    NEXT();
    goto **PC;
func_5585809680:
    extend(65);
    NEXT();
    goto **PC;
func_5585815280:
    extend(66);
    NEXT();
    goto **PC;
func_5585815408:
    extend(67);
    NEXT();
    goto **PC;
func_5585815536:
    extend(68);
    NEXT();
    goto **PC;
func_5585815664:
    extend(69);
    NEXT();
    goto **PC;
func_5585815792:
    extend(70);
    NEXT();
    goto **PC;
func_5585815920:
    extend(71);
    NEXT();
    goto **PC;
func_5585814384:
    extend(72);
    NEXT();
    goto **PC;
func_5585814512:
    extend(73);
    NEXT();
    goto **PC;
func_5585816560:
    extend(74);
    NEXT();
    goto **PC;
func_5585816688:
    extend(75);
    NEXT();
    goto **PC;
func_5585816816:
    extend(76);
    NEXT();
    goto **PC;
func_5585816944:
    extend(77);
    NEXT();
    goto **PC;
func_5585817072:
    extend(78);
    NEXT();
    goto **PC;
func_5585817200:
    extend(79);
    NEXT();
    goto **PC;
func_5585817328:
    extend(80);
    NEXT();
    goto **PC;
func_5585817456:
    extend(81);
    NEXT();
    goto **PC;
func_5585817584:
    extend(82);
    NEXT();
    goto **PC;
func_5585817712:
    extend(83);
    NEXT();
    goto **PC;
func_5585817840:
    extend(84);
    NEXT();
    goto **PC;
func_5585817968:
    extend(85);
    NEXT();
    goto **PC;
func_5585818096:
    extend(86);
    NEXT();
    goto **PC;
func_5585818224:
    extend(87);
    NEXT();
    goto **PC;
func_5585818352:
    extend(88);
    NEXT();
    goto **PC;
func_5585818480:
    extend(89);
    NEXT();
    goto **PC;
func_5585818608:
    extend(90);
    NEXT();
    goto **PC;
func_5585811136:
    extend(42);
    NEXT();
    goto **PC;
func_5585811296:
    extend(43);
    NEXT();
    goto **PC;
func_5585811424:
    extend(63);
    NEXT();
    goto **PC;
func_5585811616:
    extend(94);
    NEXT();
    goto **PC;
func_5585811744:
    extend(124);
    NEXT();
    goto **PC;
func_5585811552:
    extend(91);
    NEXT();
    goto **PC;
func_5585818800:
    extend(93);
    NEXT();
    goto **PC;
func_5585818928:
    extend(123);
    NEXT();
    goto **PC;
func_5585819056:
    extend(125);
    NEXT();
    goto **PC;
func_5585810704:
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
    PC = exp_5585810704;
    goto **PC;
func_5585810832:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5585808528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585808528;
    goto **PC;
func_5585819184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585819184;
    goto **PC;
func_5585819312:
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
    PC = exp_5585819312;
    goto **PC;
func_5585819440:
    extend(45);
    NEXT();
    goto **PC;
func_5585808448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585808448;
    goto **PC;
func_5585819568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585819568;
    goto **PC;
func_5585820224:
    extend(95);
    NEXT();
    goto **PC;
func_5585820368:
    extend(64);
    NEXT();
    goto **PC;
func_5585820528:
    extend(35);
    NEXT();
    goto **PC;
func_5585820656:
    extend(37);
    NEXT();
    goto **PC;
func_5585820848:
    extend(38);
    NEXT();
    goto **PC;
func_5585820976:
    extend(61);
    NEXT();
    goto **PC;
func_5585821104:
    extend(126);
    NEXT();
    goto **PC;
func_5585821232:
    extend(96);
    NEXT();
    goto **PC;
func_5585820784:
    extend(39);
    NEXT();
    goto **PC;
func_5585821552:
    extend(34);
    NEXT();
    goto **PC;
func_5585819856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585819856;
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
    PC = func_5585807280_op0;
    goto **PC;
}
