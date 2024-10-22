#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 20
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
    static void *func_5325749520_op0[2] = { &&func_5325752000, &&RETURN };
    static void *func_5325750160_op0[2] = { &&func_5325753152, &&RETURN };
    static void *func_5325750160_op1[2] = { &&func_5324698176, &&RETURN };
    static void *func_5325750160_op2[2] = { &&func_5325753600, &&RETURN };
    static void *func_5325750160_op3[2] = { &&func_5325753856, &&RETURN };
    static void *func_5325750160_op4[2] = { &&func_5325754144, &&RETURN };
    static void *func_5325750160_op5[2] = { &&func_5325754496, &&RETURN };
    static void *func_5325750160_op6[2] = { &&func_5325754800, &&RETURN };
    static void *func_5325750320_op0[2] = { &&func_5325753024, &&RETURN };
    static void *func_5325750320_op1[2] = { &&func_5325752576, &&RETURN };
    static void *func_5325750320_op2[2] = { &&func_5325755376, &&RETURN };
    static void *func_5325750320_op3[2] = { &&func_5325755504, &&RETURN };
    static void *func_5325750320_op4[2] = { &&func_5325755632, &&RETURN };
    static void *func_5325750320_op5[2] = { &&func_5325755824, &&RETURN };
    static void *func_5325750320_op6[2] = { &&func_5324698304, &&RETURN };
    static void *func_5325750320_op7[2] = { &&func_5324698096, &&RETURN };
    static void *func_5325750320_op8[2] = { &&func_5324698496, &&RETURN };
    static void *func_5325750320_op9[2] = { &&func_5324698752, &&RETURN };
    static void *func_5325741568_op0[2] = { &&func_5324699200, &&RETURN };
    static void *func_5325741568_op1[2] = { &&func_5324699456, &&RETURN };
    static void *func_5325741568_op2[2] = { &&func_5325751200, &&RETURN };
    static void *func_5325749728_op0[2] = { &&func_5324699120, &&RETURN };
    static void *func_5325749728_op1[2] = { &&func_5325749984, &&RETURN };
    static void *func_5325749728_op2[2] = { &&func_5325750480, &&RETURN };
    static void *func_5325749392_op0[2] = { &&func_5324698960, &&RETURN };
    static void *func_5325750480_op0[2] = { &&func_5324700224, &&RETURN };
    static void *func_5325750480_op1[2] = { &&func_5325752064, &&RETURN };
    static void *func_5325750592_op0[2] = { &&func_5324700128, &&RETURN };
    static void *func_5325752064_op0[2] = { &&func_5324702624, &&RETURN };
    static void *func_5325752064_op1[2] = { &&func_5324702752, &&RETURN };
    static void *func_5325752064_op2[2] = { &&func_5324702880, &&RETURN };
    static void *func_5325752064_op3[2] = { &&func_5324703040, &&RETURN };
    static void *func_5325752064_op4[2] = { &&func_5324703168, &&RETURN };
    static void *func_5325752064_op5[2] = { &&func_5324703360, &&RETURN };
    static void *func_5325752064_op6[2] = { &&func_5324703488, &&RETURN };
    static void *func_5325752064_op7[2] = { &&func_5324703616, &&RETURN };
    static void *func_5325752064_op8[2] = { &&func_5324703744, &&RETURN };
    static void *func_5325752064_op9[2] = { &&func_5324703296, &&RETURN };
    static void *func_5325752064_op10[2] = { &&func_5324704064, &&RETURN };
    static void *func_5325752064_op11[2] = { &&func_5324704192, &&RETURN };
    static void *func_5325752064_op12[2] = { &&func_5324704320, &&RETURN };
    static void *func_5325752064_op13[2] = { &&func_5324704448, &&RETURN };
    static void *func_5325752064_op14[2] = { &&func_5324704576, &&RETURN };
    static void *func_5325752064_op15[2] = { &&func_5324704704, &&RETURN };
    static void *func_5325752064_op16[2] = { &&func_5324704832, &&RETURN };
    static void *func_5325752064_op17[2] = { &&func_5324703872, &&RETURN };
    static void *func_5325752064_op18[2] = { &&func_5324705216, &&RETURN };
    static void *func_5325752064_op19[2] = { &&func_5324705344, &&RETURN };
    static void *func_5325752064_op20[2] = { &&func_5324705472, &&RETURN };
    static void *func_5325752064_op21[2] = { &&func_5324705600, &&RETURN };
    static void *func_5325752064_op22[2] = { &&func_5324705728, &&RETURN };
    static void *func_5325752064_op23[2] = { &&func_5324705856, &&RETURN };
    static void *func_5325752064_op24[2] = { &&func_5324705984, &&RETURN };
    static void *func_5325752064_op25[2] = { &&func_5324706112, &&RETURN };
    static void *func_5325752064_op26[2] = { &&func_5324706240, &&RETURN };
    static void *func_5325752064_op27[2] = { &&func_5324706368, &&RETURN };
    static void *func_5325752064_op28[2] = { &&func_5324706496, &&RETURN };
    static void *func_5325752064_op29[2] = { &&func_5324706624, &&RETURN };
    static void *func_5325752064_op30[2] = { &&func_5324706752, &&RETURN };
    static void *func_5325752064_op31[2] = { &&func_5324706880, &&RETURN };
    static void *func_5325752064_op32[2] = { &&func_5324707008, &&RETURN };
    static void *func_5325752064_op33[2] = { &&func_5324704960, &&RETURN };
    static void *func_5325752064_op34[2] = { &&func_5324705088, &&RETURN };
    static void *func_5325752064_op35[2] = { &&func_5324707648, &&RETURN };
    static void *func_5325752064_op36[2] = { &&func_5324707776, &&RETURN };
    static void *func_5325752064_op37[2] = { &&func_5324707904, &&RETURN };
    static void *func_5325752064_op38[2] = { &&func_5324708032, &&RETURN };
    static void *func_5325752064_op39[2] = { &&func_5324708160, &&RETURN };
    static void *func_5325752064_op40[2] = { &&func_5324708288, &&RETURN };
    static void *func_5325752064_op41[2] = { &&func_5324708416, &&RETURN };
    static void *func_5325752064_op42[2] = { &&func_5324708544, &&RETURN };
    static void *func_5325752064_op43[2] = { &&func_5324708672, &&RETURN };
    static void *func_5325752064_op44[2] = { &&func_5324708800, &&RETURN };
    static void *func_5325752064_op45[2] = { &&func_5324708928, &&RETURN };
    static void *func_5325752064_op46[2] = { &&func_5324709056, &&RETURN };
    static void *func_5325752064_op47[2] = { &&func_5324709184, &&RETURN };
    static void *func_5325752064_op48[2] = { &&func_5324709312, &&RETURN };
    static void *func_5325752064_op49[2] = { &&func_5324709440, &&RETURN };
    static void *func_5325752064_op50[2] = { &&func_5324709568, &&RETURN };
    static void *func_5325752064_op51[2] = { &&func_5324709696, &&RETURN };
    static void *func_5325749984_op0[2] = { &&func_5324701056, &&RETURN };
    static void *func_5325749984_op1[2] = { &&func_5325750320, &&RETURN };
    static void *func_5325750384_op0[2] = { &&func_5324701184, &&RETURN };
    static void *func_5325750384_op1[2] = { &&func_5325751264, &&RETURN };
    static void *func_5325750864_op0[2] = { &&func_5324701520, &&RETURN };
    static void *func_5325750784_op0[2] = { &&func_5325750384, &&HALT };
    static void *func_5325751264_op0[2] = { &&func_5325751136, &&RETURN };
    static void *func_5325751264_op1[2] = { &&func_5325749520, &&RETURN };
    static void *func_5325751264_op2[2] = { &&func_5325750592, &&RETURN };
    static void *func_5325751264_op3[2] = { &&func_5325751056, &&RETURN };
    static void *func_5325751264_op4[2] = { &&func_5325749392, &&RETURN };
    static void *func_5325751264_op5[2] = { &&func_5325750864, &&RETURN };
    static void *func_5325751200_op0[2] = { &&func_5324702144, &&RETURN };
    static void *func_5325751200_op1[2] = { &&func_5324701776, &&RETURN };
    static void *func_5325751200_op2[2] = { &&func_5325749728, &&RETURN };
    static void *func_5325751136_op0[2] = { &&func_5324702560, &&RETURN };
    static void *func_5325751136_op1[2] = { &&func_5324710224, &&RETURN };
    static void *func_5325751136_op2[2] = { &&func_5324710512, &&RETURN };
    static void *func_5325751056_op0[2] = { &&func_5324709824, &&RETURN };
    static void *exp_5325752000[5] = {&&func_5325750480, &&func_5325751392, &&func_5325741568, &&func_5325751520, &&RETURN };
    static void *exp_5325753152[4] = {&&func_5325741568, &&func_5325753280, &&func_5325741568, &&RETURN };
    static void *exp_5324698176[4] = {&&func_5325741568, &&func_5325753472, &&func_5325741568, &&RETURN };
    static void *exp_5325753600[4] = {&&func_5325741568, &&func_5325753728, &&func_5325741568, &&RETURN };
    static void *exp_5325753856[4] = {&&func_5325741568, &&func_5325753984, &&func_5325741568, &&RETURN };
    static void *exp_5325754144[4] = {&&func_5325750160, &&func_5325754272, &&func_5325750160, &&RETURN };
    static void *exp_5325754496[4] = {&&func_5325750160, &&func_5325754624, &&func_5325750160, &&RETURN };
    static void *exp_5325754800[3] = {&&func_5325752320, &&func_5325750160, &&RETURN };
    static void *exp_5324699200[4] = {&&func_5325741568, &&func_5324699328, &&func_5325751200, &&RETURN };
    static void *exp_5324699456[4] = {&&func_5325741568, &&func_5324699584, &&func_5325751200, &&RETURN };
    static void *exp_5324699120[4] = {&&func_5324699840, &&func_5325741568, &&func_5324699968, &&RETURN };
    static void *exp_5324698960[8] = {&&func_5324700576, &&func_5325750480, &&func_5324699840, &&func_5324699968, &&func_5324698880, &&func_5325750384, &&func_5324700832, &&RETURN };
    static void *exp_5324700224[3] = {&&func_5325752064, &&func_5325750480, &&RETURN };
    static void *exp_5324700128[8] = {&&func_5324700416, &&func_5324699840, &&func_5325750160, &&func_5324699968, &&func_5324698880, &&func_5325750384, &&func_5324700832, &&RETURN };
    static void *exp_5324701056[3] = {&&func_5325750320, &&func_5325749984, &&RETURN };
    static void *exp_5324701184[3] = {&&func_5325750384, &&func_5325751264, &&RETURN };
    static void *exp_5324701520[4] = {&&func_5324701648, &&func_5325741568, &&func_5325751520, &&RETURN };
    static void *exp_5324702144[4] = {&&func_5325751200, &&func_5324702272, &&func_5325749728, &&RETURN };
    static void *exp_5324701776[4] = {&&func_5325751200, &&func_5324702400, &&func_5325749728, &&RETURN };
    static void *exp_5324702560[4] = {&&func_5324709968, &&func_5325750480, &&func_5324710096, &&RETURN };
    static void *exp_5324710224[4] = {&&func_5324710352, &&func_5325750480, &&func_5324710096, &&RETURN };
    static void *exp_5324710512[4] = {&&func_5324710640, &&func_5325750480, &&func_5324710096, &&RETURN };
    static void *exp_5324709824[8] = {&&func_5324701984, &&func_5324699840, &&func_5325750160, &&func_5324699968, &&func_5324698880, &&func_5325750384, &&func_5324700832, &&RETURN };

func_5325749520:
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
            PC = func_5325749520_op0;
            break;
    }
    goto **PC;
func_5325750160:
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
            PC = func_5325750160_op0;
            break;
        case 1:
            PC = func_5325750160_op1;
            break;
        case 2:
            PC = func_5325750160_op2;
            break;
        case 3:
            PC = func_5325750160_op3;
            break;
        case 4:
            PC = func_5325750160_op4;
            break;
        case 5:
            PC = func_5325750160_op5;
            break;
        case 6:
            PC = func_5325750160_op6;
            break;
    }
    goto **PC;
func_5325750320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5325750320_op0;
            break;
        case 1:
            PC = func_5325750320_op1;
            break;
        case 2:
            PC = func_5325750320_op2;
            break;
        case 3:
            PC = func_5325750320_op3;
            break;
        case 4:
            PC = func_5325750320_op4;
            break;
        case 5:
            PC = func_5325750320_op5;
            break;
        case 6:
            PC = func_5325750320_op6;
            break;
        case 7:
            PC = func_5325750320_op7;
            break;
        case 8:
            PC = func_5325750320_op8;
            break;
        case 9:
            PC = func_5325750320_op9;
            break;
    }
    goto **PC;
func_5325741568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325741568_op0;
            break;
        case 1:
            PC = func_5325741568_op1;
            break;
        case 2:
            PC = func_5325741568_op2;
            break;
    }
    goto **PC;
func_5325749728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749728_op0;
            break;
        case 1:
            PC = func_5325749728_op1;
            break;
        case 2:
            PC = func_5325749728_op2;
            break;
    }
    goto **PC;
func_5325749392:
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
            PC = func_5325749392_op0;
            break;
    }
    goto **PC;
func_5325750480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5325750480_op0;
            break;
        case 1:
            PC = func_5325750480_op1;
            break;
    }
    goto **PC;
func_5325750592:
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
            PC = func_5325750592_op0;
            break;
    }
    goto **PC;
func_5325752064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5325752064_op0;
            break;
        case 1:
            PC = func_5325752064_op1;
            break;
        case 2:
            PC = func_5325752064_op2;
            break;
        case 3:
            PC = func_5325752064_op3;
            break;
        case 4:
            PC = func_5325752064_op4;
            break;
        case 5:
            PC = func_5325752064_op5;
            break;
        case 6:
            PC = func_5325752064_op6;
            break;
        case 7:
            PC = func_5325752064_op7;
            break;
        case 8:
            PC = func_5325752064_op8;
            break;
        case 9:
            PC = func_5325752064_op9;
            break;
        case 10:
            PC = func_5325752064_op10;
            break;
        case 11:
            PC = func_5325752064_op11;
            break;
        case 12:
            PC = func_5325752064_op12;
            break;
        case 13:
            PC = func_5325752064_op13;
            break;
        case 14:
            PC = func_5325752064_op14;
            break;
        case 15:
            PC = func_5325752064_op15;
            break;
        case 16:
            PC = func_5325752064_op16;
            break;
        case 17:
            PC = func_5325752064_op17;
            break;
        case 18:
            PC = func_5325752064_op18;
            break;
        case 19:
            PC = func_5325752064_op19;
            break;
        case 20:
            PC = func_5325752064_op20;
            break;
        case 21:
            PC = func_5325752064_op21;
            break;
        case 22:
            PC = func_5325752064_op22;
            break;
        case 23:
            PC = func_5325752064_op23;
            break;
        case 24:
            PC = func_5325752064_op24;
            break;
        case 25:
            PC = func_5325752064_op25;
            break;
        case 26:
            PC = func_5325752064_op26;
            break;
        case 27:
            PC = func_5325752064_op27;
            break;
        case 28:
            PC = func_5325752064_op28;
            break;
        case 29:
            PC = func_5325752064_op29;
            break;
        case 30:
            PC = func_5325752064_op30;
            break;
        case 31:
            PC = func_5325752064_op31;
            break;
        case 32:
            PC = func_5325752064_op32;
            break;
        case 33:
            PC = func_5325752064_op33;
            break;
        case 34:
            PC = func_5325752064_op34;
            break;
        case 35:
            PC = func_5325752064_op35;
            break;
        case 36:
            PC = func_5325752064_op36;
            break;
        case 37:
            PC = func_5325752064_op37;
            break;
        case 38:
            PC = func_5325752064_op38;
            break;
        case 39:
            PC = func_5325752064_op39;
            break;
        case 40:
            PC = func_5325752064_op40;
            break;
        case 41:
            PC = func_5325752064_op41;
            break;
        case 42:
            PC = func_5325752064_op42;
            break;
        case 43:
            PC = func_5325752064_op43;
            break;
        case 44:
            PC = func_5325752064_op44;
            break;
        case 45:
            PC = func_5325752064_op45;
            break;
        case 46:
            PC = func_5325752064_op46;
            break;
        case 47:
            PC = func_5325752064_op47;
            break;
        case 48:
            PC = func_5325752064_op48;
            break;
        case 49:
            PC = func_5325752064_op49;
            break;
        case 50:
            PC = func_5325752064_op50;
            break;
        case 51:
            PC = func_5325752064_op51;
            break;
    }
    goto **PC;
func_5325749984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749984_op0;
            break;
        case 1:
            PC = func_5325749984_op1;
            break;
    }
    goto **PC;
func_5325750384:
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
            PC = func_5325750384_op0;
            break;
        case 1:
            PC = func_5325750384_op1;
            break;
    }
    goto **PC;
func_5325750864:
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
            PC = func_5325750864_op0;
            break;
    }
    goto **PC;
func_5325750784:
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
            PC = func_5325750784_op0;
            break;
    }
    goto **PC;
func_5325751264:
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
            PC = func_5325751264_op0;
            break;
        case 1:
            PC = func_5325751264_op1;
            break;
        case 2:
            PC = func_5325751264_op2;
            break;
        case 3:
            PC = func_5325751264_op3;
            break;
        case 4:
            PC = func_5325751264_op4;
            break;
        case 5:
            PC = func_5325751264_op5;
            break;
    }
    goto **PC;
func_5325751200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325751200_op0;
            break;
        case 1:
            PC = func_5325751200_op1;
            break;
        case 2:
            PC = func_5325751200_op2;
            break;
    }
    goto **PC;
func_5325751136:
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
            PC = func_5325751136_op0;
            break;
        case 1:
            PC = func_5325751136_op1;
            break;
        case 2:
            PC = func_5325751136_op2;
            break;
    }
    goto **PC;
func_5325751056:
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
            PC = func_5325751056_op0;
            break;
    }
    goto **PC;
func_5325752000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752000;
    goto **PC;
func_5325751392:
    extend(61);
    NEXT();
    goto **PC;
func_5325751520:
    extend(59);
    NEXT();
    goto **PC;
func_5325753152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325753152;
    goto **PC;
func_5325753280:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5324698176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324698176;
    goto **PC;
func_5325753472:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5325753600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325753600;
    goto **PC;
func_5325753728:
    extend(62);
    NEXT();
    goto **PC;
func_5325753856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325753856;
    goto **PC;
func_5325753984:
    extend(60);
    NEXT();
    goto **PC;
func_5325754144:
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
    PC = exp_5325754144;
    goto **PC;
func_5325754272:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5325754496:
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
    PC = exp_5325754496;
    goto **PC;
func_5325754624:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5325754800:
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
    PC = exp_5325754800;
    goto **PC;
func_5325752320:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5325753024:
    extend(48);
    NEXT();
    goto **PC;
func_5325752576:
    extend(49);
    NEXT();
    goto **PC;
func_5325755376:
    extend(50);
    NEXT();
    goto **PC;
func_5325755504:
    extend(51);
    NEXT();
    goto **PC;
func_5325755632:
    extend(52);
    NEXT();
    goto **PC;
func_5325755824:
    extend(53);
    NEXT();
    goto **PC;
func_5324698304:
    extend(54);
    NEXT();
    goto **PC;
func_5324698096:
    extend(55);
    NEXT();
    goto **PC;
func_5324698496:
    extend(56);
    NEXT();
    goto **PC;
func_5324698752:
    extend(57);
    NEXT();
    goto **PC;
func_5324699200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324699200;
    goto **PC;
func_5324699328:
    extend(43);
    NEXT();
    goto **PC;
func_5324699456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324699456;
    goto **PC;
func_5324699584:
    extend(45);
    NEXT();
    goto **PC;
func_5324699120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324699120;
    goto **PC;
func_5324699840:
    extend(40);
    NEXT();
    goto **PC;
func_5324699968:
    extend(41);
    NEXT();
    goto **PC;
func_5324698960:
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
    PC = exp_5324698960;
    goto **PC;
func_5324700576:
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
func_5324698880:
    extend(123);
    NEXT();
    goto **PC;
func_5324700832:
    extend(125);
    NEXT();
    goto **PC;
func_5324700224:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324700224;
    goto **PC;
func_5324700128:
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
    PC = exp_5324700128;
    goto **PC;
func_5324700416:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5324702624:
    extend(97);
    NEXT();
    goto **PC;
func_5324702752:
    extend(98);
    NEXT();
    goto **PC;
func_5324702880:
    extend(99);
    NEXT();
    goto **PC;
func_5324703040:
    extend(100);
    NEXT();
    goto **PC;
func_5324703168:
    extend(101);
    NEXT();
    goto **PC;
func_5324703360:
    extend(102);
    NEXT();
    goto **PC;
func_5324703488:
    extend(103);
    NEXT();
    goto **PC;
func_5324703616:
    extend(104);
    NEXT();
    goto **PC;
func_5324703744:
    extend(105);
    NEXT();
    goto **PC;
func_5324703296:
    extend(106);
    NEXT();
    goto **PC;
func_5324704064:
    extend(107);
    NEXT();
    goto **PC;
func_5324704192:
    extend(108);
    NEXT();
    goto **PC;
func_5324704320:
    extend(109);
    NEXT();
    goto **PC;
func_5324704448:
    extend(110);
    NEXT();
    goto **PC;
func_5324704576:
    extend(111);
    NEXT();
    goto **PC;
func_5324704704:
    extend(112);
    NEXT();
    goto **PC;
func_5324704832:
    extend(113);
    NEXT();
    goto **PC;
func_5324703872:
    extend(114);
    NEXT();
    goto **PC;
func_5324705216:
    extend(115);
    NEXT();
    goto **PC;
func_5324705344:
    extend(116);
    NEXT();
    goto **PC;
func_5324705472:
    extend(117);
    NEXT();
    goto **PC;
func_5324705600:
    extend(118);
    NEXT();
    goto **PC;
func_5324705728:
    extend(119);
    NEXT();
    goto **PC;
func_5324705856:
    extend(120);
    NEXT();
    goto **PC;
func_5324705984:
    extend(121);
    NEXT();
    goto **PC;
func_5324706112:
    extend(122);
    NEXT();
    goto **PC;
func_5324706240:
    extend(65);
    NEXT();
    goto **PC;
func_5324706368:
    extend(66);
    NEXT();
    goto **PC;
func_5324706496:
    extend(67);
    NEXT();
    goto **PC;
func_5324706624:
    extend(68);
    NEXT();
    goto **PC;
func_5324706752:
    extend(69);
    NEXT();
    goto **PC;
func_5324706880:
    extend(70);
    NEXT();
    goto **PC;
func_5324707008:
    extend(71);
    NEXT();
    goto **PC;
func_5324704960:
    extend(72);
    NEXT();
    goto **PC;
func_5324705088:
    extend(73);
    NEXT();
    goto **PC;
func_5324707648:
    extend(74);
    NEXT();
    goto **PC;
func_5324707776:
    extend(75);
    NEXT();
    goto **PC;
func_5324707904:
    extend(76);
    NEXT();
    goto **PC;
func_5324708032:
    extend(77);
    NEXT();
    goto **PC;
func_5324708160:
    extend(78);
    NEXT();
    goto **PC;
func_5324708288:
    extend(79);
    NEXT();
    goto **PC;
func_5324708416:
    extend(80);
    NEXT();
    goto **PC;
func_5324708544:
    extend(81);
    NEXT();
    goto **PC;
func_5324708672:
    extend(82);
    NEXT();
    goto **PC;
func_5324708800:
    extend(83);
    NEXT();
    goto **PC;
func_5324708928:
    extend(84);
    NEXT();
    goto **PC;
func_5324709056:
    extend(85);
    NEXT();
    goto **PC;
func_5324709184:
    extend(86);
    NEXT();
    goto **PC;
func_5324709312:
    extend(87);
    NEXT();
    goto **PC;
func_5324709440:
    extend(88);
    NEXT();
    goto **PC;
func_5324709568:
    extend(89);
    NEXT();
    goto **PC;
func_5324709696:
    extend(90);
    NEXT();
    goto **PC;
func_5324701056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324701056;
    goto **PC;
func_5324701184:
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
    PC = exp_5324701184;
    goto **PC;
func_5324701520:
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
    PC = exp_5324701520;
    goto **PC;
func_5324701648:
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
func_5324702144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324702144;
    goto **PC;
func_5324702272:
    extend(42);
    NEXT();
    goto **PC;
func_5324701776:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5324701776;
    goto **PC;
func_5324702400:
    extend(47);
    NEXT();
    goto **PC;
func_5324702560:
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
    PC = exp_5324702560;
    goto **PC;
func_5324709968:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5324710096:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5324710224:
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
    PC = exp_5324710224;
    goto **PC;
func_5324710352:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5324710512:
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
    PC = exp_5324710512;
    goto **PC;
func_5324710640:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5324709824:
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
    PC = exp_5324709824;
    goto **PC;
func_5324701984:
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
    PC = func_5325750784_op0;
    goto **PC;
}
