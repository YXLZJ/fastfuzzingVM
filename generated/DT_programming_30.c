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
    static void *func_5685423504_op0[2] = { &&func_5685425600, &&RETURN };
    static void *func_5685424256_op0[2] = { &&func_5685427200, &&RETURN };
    static void *func_5685424256_op1[2] = { &&func_5685427456, &&RETURN };
    static void *func_5685424256_op2[2] = { &&func_5685427712, &&RETURN };
    static void *func_5685424256_op3[2] = { &&func_5685428000, &&RETURN };
    static void *func_5685424256_op4[2] = { &&func_5685428288, &&RETURN };
    static void *func_5685424256_op5[2] = { &&func_5685428640, &&RETURN };
    static void *func_5685424256_op6[2] = { &&func_5685428944, &&RETURN };
    static void *func_5685424416_op0[2] = { &&func_5685427072, &&RETURN };
    static void *func_5685424416_op1[2] = { &&func_5685426624, &&RETURN };
    static void *func_5685424416_op2[2] = { &&func_5685429520, &&RETURN };
    static void *func_5685424416_op3[2] = { &&func_5685429648, &&RETURN };
    static void *func_5685424416_op4[2] = { &&func_5685429776, &&RETURN };
    static void *func_5685424416_op5[2] = { &&func_5685429968, &&RETURN };
    static void *func_5685424416_op6[2] = { &&func_5685430096, &&RETURN };
    static void *func_5685424416_op7[2] = { &&func_5685430224, &&RETURN };
    static void *func_5685424416_op8[2] = { &&func_5685430352, &&RETURN };
    static void *func_5685424416_op9[2] = { &&func_5685429904, &&RETURN };
    static void *func_5685424128_op0[2] = { &&func_5685426560, &&RETURN };
    static void *func_5685424128_op1[2] = { &&func_5685426752, &&RETURN };
    static void *func_5685424128_op2[2] = { &&func_5685425664, &&RETURN };
    static void *func_5685423776_op0[2] = { &&func_5685430752, &&RETURN };
    static void *func_5685423776_op1[2] = { &&func_5685423696, &&RETURN };
    static void *func_5685423776_op2[2] = { &&func_5685424016, &&RETURN };
    static void *func_5685423376_op0[2] = { &&func_5685425504, &&RETURN };
    static void *func_5685424016_op0[2] = { &&func_5685431456, &&RETURN };
    static void *func_5685424016_op1[2] = { &&func_5685426176, &&RETURN };
    static void *func_5685424544_op0[2] = { &&func_5685432416, &&RETURN };
    static void *func_5685426176_op0[2] = { &&func_5685433888, &&RETURN };
    static void *func_5685426176_op1[2] = { &&func_5685434016, &&RETURN };
    static void *func_5685426176_op2[2] = { &&func_5685434144, &&RETURN };
    static void *func_5685426176_op3[2] = { &&func_5685434304, &&RETURN };
    static void *func_5685426176_op4[2] = { &&func_5685434432, &&RETURN };
    static void *func_5685426176_op5[2] = { &&func_5685434624, &&RETURN };
    static void *func_5685426176_op6[2] = { &&func_5685434752, &&RETURN };
    static void *func_5685426176_op7[2] = { &&func_5685429072, &&RETURN };
    static void *func_5685426176_op8[2] = { &&func_5685429200, &&RETURN };
    static void *func_5685426176_op9[2] = { &&func_5685434560, &&RETURN };
    static void *func_5685426176_op10[2] = { &&func_5685434816, &&RETURN };
    static void *func_5685426176_op11[2] = { &&func_5685434944, &&RETURN };
    static void *func_5685426176_op12[2] = { &&func_5685435072, &&RETURN };
    static void *func_5685426176_op13[2] = { &&func_5685435200, &&RETURN };
    static void *func_5685426176_op14[2] = { &&func_5685435328, &&RETURN };
    static void *func_5685426176_op15[2] = { &&func_5685435456, &&RETURN };
    static void *func_5685426176_op16[2] = { &&func_5685435584, &&RETURN };
    static void *func_5685426176_op17[2] = { &&func_5685429328, &&RETURN };
    static void *func_5685426176_op18[2] = { &&func_5685435968, &&RETURN };
    static void *func_5685426176_op19[2] = { &&func_5685436096, &&RETURN };
    static void *func_5685426176_op20[2] = { &&func_5685436224, &&RETURN };
    static void *func_5685426176_op21[2] = { &&func_5685436352, &&RETURN };
    static void *func_5685426176_op22[2] = { &&func_5685436480, &&RETURN };
    static void *func_5685426176_op23[2] = { &&func_5685436608, &&RETURN };
    static void *func_5685426176_op24[2] = { &&func_5685436736, &&RETURN };
    static void *func_5685426176_op25[2] = { &&func_5685436864, &&RETURN };
    static void *func_5685426176_op26[2] = { &&func_5685436992, &&RETURN };
    static void *func_5685426176_op27[2] = { &&func_5685437120, &&RETURN };
    static void *func_5685426176_op28[2] = { &&func_5685437248, &&RETURN };
    static void *func_5685426176_op29[2] = { &&func_5685437376, &&RETURN };
    static void *func_5685426176_op30[2] = { &&func_5685437504, &&RETURN };
    static void *func_5685426176_op31[2] = { &&func_5685437632, &&RETURN };
    static void *func_5685426176_op32[2] = { &&func_5685437760, &&RETURN };
    static void *func_5685426176_op33[2] = { &&func_5685435712, &&RETURN };
    static void *func_5685426176_op34[2] = { &&func_5685435840, &&RETURN };
    static void *func_5685426176_op35[2] = { &&func_5685438400, &&RETURN };
    static void *func_5685426176_op36[2] = { &&func_5685438528, &&RETURN };
    static void *func_5685426176_op37[2] = { &&func_5685438656, &&RETURN };
    static void *func_5685426176_op38[2] = { &&func_5685438784, &&RETURN };
    static void *func_5685426176_op39[2] = { &&func_5685438912, &&RETURN };
    static void *func_5685426176_op40[2] = { &&func_5685439040, &&RETURN };
    static void *func_5685426176_op41[2] = { &&func_5685439168, &&RETURN };
    static void *func_5685426176_op42[2] = { &&func_5685439296, &&RETURN };
    static void *func_5685426176_op43[2] = { &&func_5685439424, &&RETURN };
    static void *func_5685426176_op44[2] = { &&func_5685439552, &&RETURN };
    static void *func_5685426176_op45[2] = { &&func_5685439680, &&RETURN };
    static void *func_5685426176_op46[2] = { &&func_5685439808, &&RETURN };
    static void *func_5685426176_op47[2] = { &&func_5685439936, &&RETURN };
    static void *func_5685426176_op48[2] = { &&func_5685440064, &&RETURN };
    static void *func_5685426176_op49[2] = { &&func_5685440192, &&RETURN };
    static void *func_5685426176_op50[2] = { &&func_5685440320, &&RETURN };
    static void *func_5685426176_op51[2] = { &&func_5685440448, &&RETURN };
    static void *func_5685423696_op0[2] = { &&func_5685432240, &&RETURN };
    static void *func_5685423696_op1[2] = { &&func_5685424416, &&RETURN };
    static void *func_5685424736_op0[2] = { &&func_5685431584, &&RETURN };
    static void *func_5685424736_op1[2] = { &&func_5685425376, &&RETURN };
    static void *func_5685424944_op0[2] = { &&func_5685432816, &&RETURN };
    static void *func_5685424864_op0[2] = { &&func_5685424736, &&HALT };
    static void *func_5685425376_op0[2] = { &&func_5685425216, &&RETURN };
    static void *func_5685425376_op1[2] = { &&func_5685423504, &&RETURN };
    static void *func_5685425376_op2[2] = { &&func_5685424544, &&RETURN };
    static void *func_5685425376_op3[2] = { &&func_5685425136, &&RETURN };
    static void *func_5685425376_op4[2] = { &&func_5685423376, &&RETURN };
    static void *func_5685425376_op5[2] = { &&func_5685424944, &&RETURN };
    static void *func_5685425664_op0[2] = { &&func_5685433440, &&RETURN };
    static void *func_5685425664_op1[2] = { &&func_5685433072, &&RETURN };
    static void *func_5685425664_op2[2] = { &&func_5685423776, &&RETURN };
    static void *func_5685425216_op0[2] = { &&func_5685440656, &&RETURN };
    static void *func_5685425216_op1[2] = { &&func_5685441040, &&RETURN };
    static void *func_5685425216_op2[2] = { &&func_5685441296, &&RETURN };
    static void *func_5685425136_op0[2] = { &&func_5685440576, &&RETURN };
    static void *exp_5685425600[5] = {&&func_5685424016, &&func_5685425920, &&func_5685424128, &&func_5685426048, &&RETURN };
    static void *exp_5685427200[4] = {&&func_5685424128, &&func_5685427328, &&func_5685424128, &&RETURN };
    static void *exp_5685427456[4] = {&&func_5685424128, &&func_5685427584, &&func_5685424128, &&RETURN };
    static void *exp_5685427712[4] = {&&func_5685424128, &&func_5685427840, &&func_5685424128, &&RETURN };
    static void *exp_5685428000[4] = {&&func_5685424128, &&func_5685428128, &&func_5685424128, &&RETURN };
    static void *exp_5685428288[4] = {&&func_5685424256, &&func_5685428416, &&func_5685424256, &&RETURN };
    static void *exp_5685428640[4] = {&&func_5685424256, &&func_5685428768, &&func_5685424256, &&RETURN };
    static void *exp_5685428944[3] = {&&func_5685426432, &&func_5685424256, &&RETURN };
    static void *exp_5685426560[4] = {&&func_5685424128, &&func_5685430896, &&func_5685425664, &&RETURN };
    static void *exp_5685426752[4] = {&&func_5685424128, &&func_5685426880, &&func_5685425664, &&RETURN };
    static void *exp_5685430752[4] = {&&func_5685431120, &&func_5685424128, &&func_5685431248, &&RETURN };
    static void *exp_5685425504[8] = {&&func_5685431856, &&func_5685424016, &&func_5685431120, &&func_5685431248, &&func_5685426240, &&func_5685424736, &&func_5685432112, &&RETURN };
    static void *exp_5685431456[3] = {&&func_5685426176, &&func_5685424016, &&RETURN };
    static void *exp_5685432416[8] = {&&func_5685432544, &&func_5685431120, &&func_5685424256, &&func_5685431248, &&func_5685426240, &&func_5685424736, &&func_5685432112, &&RETURN };
    static void *exp_5685432240[3] = {&&func_5685424416, &&func_5685423696, &&RETURN };
    static void *exp_5685431584[3] = {&&func_5685424736, &&func_5685425376, &&RETURN };
    static void *exp_5685432816[4] = {&&func_5685432944, &&func_5685424128, &&func_5685426048, &&RETURN };
    static void *exp_5685433440[4] = {&&func_5685425664, &&func_5685433568, &&func_5685423776, &&RETURN };
    static void *exp_5685433072[4] = {&&func_5685425664, &&func_5685433696, &&func_5685423776, &&RETURN };
    static void *exp_5685440656[4] = {&&func_5685440784, &&func_5685424016, &&func_5685440912, &&RETURN };
    static void *exp_5685441040[4] = {&&func_5685441168, &&func_5685424016, &&func_5685440912, &&RETURN };
    static void *exp_5685441296[4] = {&&func_5685441424, &&func_5685424016, &&func_5685440912, &&RETURN };
    static void *exp_5685440576[8] = {&&func_5685433344, &&func_5685431120, &&func_5685424256, &&func_5685431248, &&func_5685426240, &&func_5685424736, &&func_5685432112, &&RETURN };

func_5685423504:
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
            PC = func_5685423504_op0;
            break;
    }
    goto **PC;
func_5685424256:
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
            PC = func_5685424256_op0;
            break;
        case 1:
            PC = func_5685424256_op1;
            break;
        case 2:
            PC = func_5685424256_op2;
            break;
        case 3:
            PC = func_5685424256_op3;
            break;
        case 4:
            PC = func_5685424256_op4;
            break;
        case 5:
            PC = func_5685424256_op5;
            break;
        case 6:
            PC = func_5685424256_op6;
            break;
    }
    goto **PC;
func_5685424416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5685424416_op0;
            break;
        case 1:
            PC = func_5685424416_op1;
            break;
        case 2:
            PC = func_5685424416_op2;
            break;
        case 3:
            PC = func_5685424416_op3;
            break;
        case 4:
            PC = func_5685424416_op4;
            break;
        case 5:
            PC = func_5685424416_op5;
            break;
        case 6:
            PC = func_5685424416_op6;
            break;
        case 7:
            PC = func_5685424416_op7;
            break;
        case 8:
            PC = func_5685424416_op8;
            break;
        case 9:
            PC = func_5685424416_op9;
            break;
    }
    goto **PC;
func_5685424128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5685424128_op0;
            break;
        case 1:
            PC = func_5685424128_op1;
            break;
        case 2:
            PC = func_5685424128_op2;
            break;
    }
    goto **PC;
func_5685423776:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5685423776_op0;
            break;
        case 1:
            PC = func_5685423776_op1;
            break;
        case 2:
            PC = func_5685423776_op2;
            break;
    }
    goto **PC;
func_5685423376:
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
            PC = func_5685423376_op0;
            break;
    }
    goto **PC;
func_5685424016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5685424016_op0;
            break;
        case 1:
            PC = func_5685424016_op1;
            break;
    }
    goto **PC;
func_5685424544:
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
            PC = func_5685424544_op0;
            break;
    }
    goto **PC;
func_5685426176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5685426176_op0;
            break;
        case 1:
            PC = func_5685426176_op1;
            break;
        case 2:
            PC = func_5685426176_op2;
            break;
        case 3:
            PC = func_5685426176_op3;
            break;
        case 4:
            PC = func_5685426176_op4;
            break;
        case 5:
            PC = func_5685426176_op5;
            break;
        case 6:
            PC = func_5685426176_op6;
            break;
        case 7:
            PC = func_5685426176_op7;
            break;
        case 8:
            PC = func_5685426176_op8;
            break;
        case 9:
            PC = func_5685426176_op9;
            break;
        case 10:
            PC = func_5685426176_op10;
            break;
        case 11:
            PC = func_5685426176_op11;
            break;
        case 12:
            PC = func_5685426176_op12;
            break;
        case 13:
            PC = func_5685426176_op13;
            break;
        case 14:
            PC = func_5685426176_op14;
            break;
        case 15:
            PC = func_5685426176_op15;
            break;
        case 16:
            PC = func_5685426176_op16;
            break;
        case 17:
            PC = func_5685426176_op17;
            break;
        case 18:
            PC = func_5685426176_op18;
            break;
        case 19:
            PC = func_5685426176_op19;
            break;
        case 20:
            PC = func_5685426176_op20;
            break;
        case 21:
            PC = func_5685426176_op21;
            break;
        case 22:
            PC = func_5685426176_op22;
            break;
        case 23:
            PC = func_5685426176_op23;
            break;
        case 24:
            PC = func_5685426176_op24;
            break;
        case 25:
            PC = func_5685426176_op25;
            break;
        case 26:
            PC = func_5685426176_op26;
            break;
        case 27:
            PC = func_5685426176_op27;
            break;
        case 28:
            PC = func_5685426176_op28;
            break;
        case 29:
            PC = func_5685426176_op29;
            break;
        case 30:
            PC = func_5685426176_op30;
            break;
        case 31:
            PC = func_5685426176_op31;
            break;
        case 32:
            PC = func_5685426176_op32;
            break;
        case 33:
            PC = func_5685426176_op33;
            break;
        case 34:
            PC = func_5685426176_op34;
            break;
        case 35:
            PC = func_5685426176_op35;
            break;
        case 36:
            PC = func_5685426176_op36;
            break;
        case 37:
            PC = func_5685426176_op37;
            break;
        case 38:
            PC = func_5685426176_op38;
            break;
        case 39:
            PC = func_5685426176_op39;
            break;
        case 40:
            PC = func_5685426176_op40;
            break;
        case 41:
            PC = func_5685426176_op41;
            break;
        case 42:
            PC = func_5685426176_op42;
            break;
        case 43:
            PC = func_5685426176_op43;
            break;
        case 44:
            PC = func_5685426176_op44;
            break;
        case 45:
            PC = func_5685426176_op45;
            break;
        case 46:
            PC = func_5685426176_op46;
            break;
        case 47:
            PC = func_5685426176_op47;
            break;
        case 48:
            PC = func_5685426176_op48;
            break;
        case 49:
            PC = func_5685426176_op49;
            break;
        case 50:
            PC = func_5685426176_op50;
            break;
        case 51:
            PC = func_5685426176_op51;
            break;
    }
    goto **PC;
func_5685423696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5685423696_op0;
            break;
        case 1:
            PC = func_5685423696_op1;
            break;
    }
    goto **PC;
func_5685424736:
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
            PC = func_5685424736_op0;
            break;
        case 1:
            PC = func_5685424736_op1;
            break;
    }
    goto **PC;
func_5685424944:
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
            PC = func_5685424944_op0;
            break;
    }
    goto **PC;
func_5685424864:
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
            PC = func_5685424864_op0;
            break;
    }
    goto **PC;
func_5685425376:
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
            PC = func_5685425376_op0;
            break;
        case 1:
            PC = func_5685425376_op1;
            break;
        case 2:
            PC = func_5685425376_op2;
            break;
        case 3:
            PC = func_5685425376_op3;
            break;
        case 4:
            PC = func_5685425376_op4;
            break;
        case 5:
            PC = func_5685425376_op5;
            break;
    }
    goto **PC;
func_5685425664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5685425664_op0;
            break;
        case 1:
            PC = func_5685425664_op1;
            break;
        case 2:
            PC = func_5685425664_op2;
            break;
    }
    goto **PC;
func_5685425216:
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
            PC = func_5685425216_op0;
            break;
        case 1:
            PC = func_5685425216_op1;
            break;
        case 2:
            PC = func_5685425216_op2;
            break;
    }
    goto **PC;
func_5685425136:
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
            PC = func_5685425136_op0;
            break;
    }
    goto **PC;
func_5685425600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685425600;
    goto **PC;
func_5685425920:
    extend(61);
    NEXT();
    goto **PC;
func_5685426048:
    extend(59);
    NEXT();
    goto **PC;
func_5685427200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685427200;
    goto **PC;
func_5685427328:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5685427456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685427456;
    goto **PC;
func_5685427584:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5685427712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685427712;
    goto **PC;
func_5685427840:
    extend(62);
    NEXT();
    goto **PC;
func_5685428000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685428000;
    goto **PC;
func_5685428128:
    extend(60);
    NEXT();
    goto **PC;
func_5685428288:
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
    PC = exp_5685428288;
    goto **PC;
func_5685428416:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5685428640:
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
    PC = exp_5685428640;
    goto **PC;
func_5685428768:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5685428944:
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
    PC = exp_5685428944;
    goto **PC;
func_5685426432:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5685427072:
    extend(48);
    NEXT();
    goto **PC;
func_5685426624:
    extend(49);
    NEXT();
    goto **PC;
func_5685429520:
    extend(50);
    NEXT();
    goto **PC;
func_5685429648:
    extend(51);
    NEXT();
    goto **PC;
func_5685429776:
    extend(52);
    NEXT();
    goto **PC;
func_5685429968:
    extend(53);
    NEXT();
    goto **PC;
func_5685430096:
    extend(54);
    NEXT();
    goto **PC;
func_5685430224:
    extend(55);
    NEXT();
    goto **PC;
func_5685430352:
    extend(56);
    NEXT();
    goto **PC;
func_5685429904:
    extend(57);
    NEXT();
    goto **PC;
func_5685426560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685426560;
    goto **PC;
func_5685430896:
    extend(43);
    NEXT();
    goto **PC;
func_5685426752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685426752;
    goto **PC;
func_5685426880:
    extend(45);
    NEXT();
    goto **PC;
func_5685430752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685430752;
    goto **PC;
func_5685431120:
    extend(40);
    NEXT();
    goto **PC;
func_5685431248:
    extend(41);
    NEXT();
    goto **PC;
func_5685425504:
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
    PC = exp_5685425504;
    goto **PC;
func_5685431856:
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
func_5685426240:
    extend(123);
    NEXT();
    goto **PC;
func_5685432112:
    extend(125);
    NEXT();
    goto **PC;
func_5685431456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685431456;
    goto **PC;
func_5685432416:
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
    PC = exp_5685432416;
    goto **PC;
func_5685432544:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5685433888:
    extend(97);
    NEXT();
    goto **PC;
func_5685434016:
    extend(98);
    NEXT();
    goto **PC;
func_5685434144:
    extend(99);
    NEXT();
    goto **PC;
func_5685434304:
    extend(100);
    NEXT();
    goto **PC;
func_5685434432:
    extend(101);
    NEXT();
    goto **PC;
func_5685434624:
    extend(102);
    NEXT();
    goto **PC;
func_5685434752:
    extend(103);
    NEXT();
    goto **PC;
func_5685429072:
    extend(104);
    NEXT();
    goto **PC;
func_5685429200:
    extend(105);
    NEXT();
    goto **PC;
func_5685434560:
    extend(106);
    NEXT();
    goto **PC;
func_5685434816:
    extend(107);
    NEXT();
    goto **PC;
func_5685434944:
    extend(108);
    NEXT();
    goto **PC;
func_5685435072:
    extend(109);
    NEXT();
    goto **PC;
func_5685435200:
    extend(110);
    NEXT();
    goto **PC;
func_5685435328:
    extend(111);
    NEXT();
    goto **PC;
func_5685435456:
    extend(112);
    NEXT();
    goto **PC;
func_5685435584:
    extend(113);
    NEXT();
    goto **PC;
func_5685429328:
    extend(114);
    NEXT();
    goto **PC;
func_5685435968:
    extend(115);
    NEXT();
    goto **PC;
func_5685436096:
    extend(116);
    NEXT();
    goto **PC;
func_5685436224:
    extend(117);
    NEXT();
    goto **PC;
func_5685436352:
    extend(118);
    NEXT();
    goto **PC;
func_5685436480:
    extend(119);
    NEXT();
    goto **PC;
func_5685436608:
    extend(120);
    NEXT();
    goto **PC;
func_5685436736:
    extend(121);
    NEXT();
    goto **PC;
func_5685436864:
    extend(122);
    NEXT();
    goto **PC;
func_5685436992:
    extend(65);
    NEXT();
    goto **PC;
func_5685437120:
    extend(66);
    NEXT();
    goto **PC;
func_5685437248:
    extend(67);
    NEXT();
    goto **PC;
func_5685437376:
    extend(68);
    NEXT();
    goto **PC;
func_5685437504:
    extend(69);
    NEXT();
    goto **PC;
func_5685437632:
    extend(70);
    NEXT();
    goto **PC;
func_5685437760:
    extend(71);
    NEXT();
    goto **PC;
func_5685435712:
    extend(72);
    NEXT();
    goto **PC;
func_5685435840:
    extend(73);
    NEXT();
    goto **PC;
func_5685438400:
    extend(74);
    NEXT();
    goto **PC;
func_5685438528:
    extend(75);
    NEXT();
    goto **PC;
func_5685438656:
    extend(76);
    NEXT();
    goto **PC;
func_5685438784:
    extend(77);
    NEXT();
    goto **PC;
func_5685438912:
    extend(78);
    NEXT();
    goto **PC;
func_5685439040:
    extend(79);
    NEXT();
    goto **PC;
func_5685439168:
    extend(80);
    NEXT();
    goto **PC;
func_5685439296:
    extend(81);
    NEXT();
    goto **PC;
func_5685439424:
    extend(82);
    NEXT();
    goto **PC;
func_5685439552:
    extend(83);
    NEXT();
    goto **PC;
func_5685439680:
    extend(84);
    NEXT();
    goto **PC;
func_5685439808:
    extend(85);
    NEXT();
    goto **PC;
func_5685439936:
    extend(86);
    NEXT();
    goto **PC;
func_5685440064:
    extend(87);
    NEXT();
    goto **PC;
func_5685440192:
    extend(88);
    NEXT();
    goto **PC;
func_5685440320:
    extend(89);
    NEXT();
    goto **PC;
func_5685440448:
    extend(90);
    NEXT();
    goto **PC;
func_5685432240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685432240;
    goto **PC;
func_5685431584:
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
    PC = exp_5685431584;
    goto **PC;
func_5685432816:
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
    PC = exp_5685432816;
    goto **PC;
func_5685432944:
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
func_5685433440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685433440;
    goto **PC;
func_5685433568:
    extend(42);
    NEXT();
    goto **PC;
func_5685433072:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5685433072;
    goto **PC;
func_5685433696:
    extend(47);
    NEXT();
    goto **PC;
func_5685440656:
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
    PC = exp_5685440656;
    goto **PC;
func_5685440784:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5685440912:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5685441040:
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
    PC = exp_5685441040;
    goto **PC;
func_5685441168:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5685441296:
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
    PC = exp_5685441296;
    goto **PC;
func_5685441424:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5685440576:
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
    PC = exp_5685440576;
    goto **PC;
func_5685433344:
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
    PC = func_5685424864_op0;
    goto **PC;
}
