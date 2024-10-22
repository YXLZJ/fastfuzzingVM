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
    static void *func_5567968320_op0[2] = { &&func_5567988064, &&RETURN };
    static void *func_5567968320_op1[2] = { &&func_5567987424, &&RETURN };
    static void *func_5567984832_op0[2] = { &&func_5567987984, &&RETURN };
    static void *func_5567985040_op0[2] = { &&func_5567987728, &&RETURN };
    static void *func_5567985040_op1[2] = { &&func_5567986416, &&RETURN };
    static void *func_5567985040_op2[2] = { &&func_5567986032, &&RETURN };
    static void *func_5567985248_op0[2] = { &&func_5567986288, &&RETURN };
    static void *func_5567985248_op1[2] = { &&func_5567988256, &&RETURN };
    static void *func_5567984704_op0[2] = { &&func_5567988704, &&RETURN };
    static void *func_5567985904_op0[2] = { &&func_5567989200, &&RETURN };
    static void *func_5567985904_op1[2] = { &&func_5567989328, &&RETURN };
    static void *func_5567985904_op2[2] = { &&func_5567989456, &&RETURN };
    static void *func_5567985904_op3[2] = { &&func_5567989616, &&RETURN };
    static void *func_5567985904_op4[2] = { &&func_5567989744, &&RETURN };
    static void *func_5567985904_op5[2] = { &&func_5567987104, &&RETURN };
    static void *func_5567985904_op6[2] = { &&func_5567990320, &&RETURN };
    static void *func_5567985904_op7[2] = { &&func_5567990448, &&RETURN };
    static void *func_5567985904_op8[2] = { &&func_5567990576, &&RETURN };
    static void *func_5567985904_op9[2] = { &&func_5567987040, &&RETURN };
    static void *func_5567986032_op0[2] = { &&func_5567985584, &&RETURN };
    static void *func_5567986032_op1[2] = { &&func_5567984832, &&RETURN };
    static void *func_5567986032_op2[2] = { &&func_5567985808, &&RETURN };
    static void *func_5567986032_op3[2] = { &&func_5567985248, &&RETURN };
    static void *func_5567986032_op4[2] = { &&func_5567987296, &&RETURN };
    static void *func_5567985808_op0[2] = { &&func_5567988896, &&RETURN };
    static void *func_5567985584_op0[2] = { &&func_5567990896, &&RETURN };
    static void *func_5567987600_op0[2] = { &&func_5567992624, &&RETURN };
    static void *func_5567987600_op1[2] = { &&func_5567992752, &&RETURN };
    static void *func_5567987600_op2[2] = { &&func_5567992880, &&RETURN };
    static void *func_5567987600_op3[2] = { &&func_5567993040, &&RETURN };
    static void *func_5567987600_op4[2] = { &&func_5567993168, &&RETURN };
    static void *func_5567987600_op5[2] = { &&func_5567993360, &&RETURN };
    static void *func_5567987600_op6[2] = { &&func_5567993488, &&RETURN };
    static void *func_5567987600_op7[2] = { &&func_5567993616, &&RETURN };
    static void *func_5567987600_op8[2] = { &&func_5567993744, &&RETURN };
    static void *func_5567987600_op9[2] = { &&func_5567993296, &&RETURN };
    static void *func_5567987600_op10[2] = { &&func_5567994064, &&RETURN };
    static void *func_5567987600_op11[2] = { &&func_5567994192, &&RETURN };
    static void *func_5567987600_op12[2] = { &&func_5567994320, &&RETURN };
    static void *func_5567987600_op13[2] = { &&func_5567994448, &&RETURN };
    static void *func_5567987600_op14[2] = { &&func_5567994576, &&RETURN };
    static void *func_5567987600_op15[2] = { &&func_5567994704, &&RETURN };
    static void *func_5567987600_op16[2] = { &&func_5567994832, &&RETURN };
    static void *func_5567987600_op17[2] = { &&func_5567993872, &&RETURN };
    static void *func_5567987600_op18[2] = { &&func_5567995216, &&RETURN };
    static void *func_5567987600_op19[2] = { &&func_5567995344, &&RETURN };
    static void *func_5567987600_op20[2] = { &&func_5567995472, &&RETURN };
    static void *func_5567987600_op21[2] = { &&func_5567995600, &&RETURN };
    static void *func_5567987600_op22[2] = { &&func_5567995728, &&RETURN };
    static void *func_5567987600_op23[2] = { &&func_5567989872, &&RETURN };
    static void *func_5567987600_op24[2] = { &&func_5567990000, &&RETURN };
    static void *func_5567987600_op25[2] = { &&func_5567990128, &&RETURN };
    static void *func_5567987600_op26[2] = { &&func_5567990256, &&RETURN };
    static void *func_5567987600_op27[2] = { &&func_5567995856, &&RETURN };
    static void *func_5567987600_op28[2] = { &&func_5567995984, &&RETURN };
    static void *func_5567987600_op29[2] = { &&func_5567996112, &&RETURN };
    static void *func_5567987600_op30[2] = { &&func_5567996240, &&RETURN };
    static void *func_5567987600_op31[2] = { &&func_5567996368, &&RETURN };
    static void *func_5567987600_op32[2] = { &&func_5567996496, &&RETURN };
    static void *func_5567987600_op33[2] = { &&func_5567994960, &&RETURN };
    static void *func_5567987600_op34[2] = { &&func_5567995088, &&RETURN };
    static void *func_5567987600_op35[2] = { &&func_5567997136, &&RETURN };
    static void *func_5567987600_op36[2] = { &&func_5567997264, &&RETURN };
    static void *func_5567987600_op37[2] = { &&func_5567997392, &&RETURN };
    static void *func_5567987600_op38[2] = { &&func_5567997520, &&RETURN };
    static void *func_5567987600_op39[2] = { &&func_5567997648, &&RETURN };
    static void *func_5567987600_op40[2] = { &&func_5567997776, &&RETURN };
    static void *func_5567987600_op41[2] = { &&func_5567997904, &&RETURN };
    static void *func_5567987600_op42[2] = { &&func_5567998032, &&RETURN };
    static void *func_5567987600_op43[2] = { &&func_5567998160, &&RETURN };
    static void *func_5567987600_op44[2] = { &&func_5567998288, &&RETURN };
    static void *func_5567987600_op45[2] = { &&func_5567998416, &&RETURN };
    static void *func_5567987600_op46[2] = { &&func_5567998544, &&RETURN };
    static void *func_5567987600_op47[2] = { &&func_5567998672, &&RETURN };
    static void *func_5567987600_op48[2] = { &&func_5567998800, &&RETURN };
    static void *func_5567987600_op49[2] = { &&func_5567998928, &&RETURN };
    static void *func_5567987600_op50[2] = { &&func_5567999056, &&RETURN };
    static void *func_5567987600_op51[2] = { &&func_5567999184, &&RETURN };
    static void *func_5567986720_op0[2] = { &&func_5567988576, &&RETURN };
    static void *func_5567986720_op1[2] = { &&func_5567987984, &&RETURN };
    static void *func_5567986720_op2[2] = { &&func_5567991712, &&RETURN };
    static void *func_5567986720_op3[2] = { &&func_5567991872, &&RETURN };
    static void *func_5567986720_op4[2] = { &&func_5567992000, &&RETURN };
    static void *func_5567986720_op5[2] = { &&func_5567992192, &&RETURN };
    static void *func_5567986720_op6[2] = { &&func_5567988896, &&RETURN };
    static void *func_5567986720_op7[2] = { &&func_5567992320, &&RETURN };
    static void *func_5567986720_op8[2] = { &&func_5567991024, &&RETURN };
    static void *func_5567986720_op9[2] = { &&func_5567991152, &&RETURN };
    static void *func_5567986720_op10[2] = { &&func_5567992128, &&RETURN };
    static void *func_5567986720_op11[2] = { &&func_5567999376, &&RETURN };
    static void *func_5567986720_op12[2] = { &&func_5567999504, &&RETURN };
    static void *func_5567986720_op13[2] = { &&func_5567999632, &&RETURN };
    static void *func_5567986160_op0[2] = { &&func_5567991280, &&RETURN };
    static void *func_5567986288_op0[2] = { &&func_5567987600, &&RETURN };
    static void *func_5567986288_op1[2] = { &&func_5567985904, &&RETURN };
    static void *func_5567986288_op2[2] = { &&func_5567988384, &&RETURN };
    static void *func_5567986416_op0[2] = { &&func_5567989104, &&RETURN };
    static void *func_5567986544_op0[2] = { &&func_5567999760, &&RETURN };
    static void *func_5567986848_op0[2] = { &&func_5567999888, &&RETURN };
    static void *func_5567985504_op0[2] = { &&func_5567986848, &&RETURN };
    static void *func_5567985504_op1[2] = { &&func_5567985248, &&RETURN };
    static void *func_5567985648_op0[2] = { &&func_5567985504, &&RETURN };
    static void *func_5567985648_op1[2] = { &&func_5567989024, &&RETURN };
    static void *func_5567987296_op0[2] = { &&func_5567986544, &&RETURN };
    static void *func_5567987296_op1[2] = { &&func_5567986160, &&RETURN };
    static void *func_5567987424_op0[2] = { &&func_5567984704, &&RETURN };
    static void *func_5567987424_op1[2] = { &&func_5567985040, &&RETURN };
    static void *func_5567987728_op0[2] = { &&func_5568000144, &&RETURN };
    static void *func_5567987856_op0[2] = { &&func_5567968320, &&HALT };
    static void *func_5567988384_op0[2] = { &&func_5568000800, &&RETURN };
    static void *func_5567988384_op1[2] = { &&func_5568000016, &&RETURN };
    static void *func_5567988384_op2[2] = { &&func_5568000944, &&RETURN };
    static void *func_5567988384_op3[2] = { &&func_5568001104, &&RETURN };
    static void *func_5567988384_op4[2] = { &&func_5568001232, &&RETURN };
    static void *func_5567988384_op5[2] = { &&func_5568001424, &&RETURN };
    static void *func_5567988384_op6[2] = { &&func_5568001552, &&RETURN };
    static void *func_5567988384_op7[2] = { &&func_5568001680, &&RETURN };
    static void *func_5567988384_op8[2] = { &&func_5568001808, &&RETURN };
    static void *func_5567988384_op9[2] = { &&func_5568001360, &&RETURN };
    static void *func_5567988384_op10[2] = { &&func_5568002128, &&RETURN };
    static void *func_5567988064_op0[2] = { &&func_5568000432, &&RETURN };
    static void *exp_5567988256[3] = {&&func_5567988576, &&func_5567986720, &&RETURN };
    static void *exp_5567988704[3] = {&&func_5567987424, &&func_5567985040, &&RETURN };
    static void *exp_5567990896[4] = {&&func_5567991024, &&func_5567968320, &&func_5567991152, &&RETURN };
    static void *exp_5567991280[4] = {&&func_5567991408, &&func_5567985648, &&func_5567999376, &&RETURN };
    static void *exp_5567989104[3] = {&&func_5567986032, &&func_5567991872, &&RETURN };
    static void *exp_5567999760[4] = {&&func_5567992128, &&func_5567985648, &&func_5567999376, &&RETURN };
    static void *exp_5567999888[4] = {&&func_5567985248, &&func_5568000016, &&func_5567985248, &&RETURN };
    static void *exp_5567989024[3] = {&&func_5567985504, &&func_5567985648, &&RETURN };
    static void *exp_5568000144[3] = {&&func_5567986032, &&func_5567991712, &&RETURN };
    static void *exp_5568000432[4] = {&&func_5567968320, &&func_5567992320, &&func_5567987424, &&RETURN };

func_5567968320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5567968320_op0;
            break;
        case 1:
            PC = func_5567968320_op1;
            break;
    }
    goto **PC;
func_5567984832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5567984832_op0;
            break;
    }
    goto **PC;
func_5567985040:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5567985040_op0;
            break;
        case 1:
            PC = func_5567985040_op1;
            break;
        case 2:
            PC = func_5567985040_op2;
            break;
    }
    goto **PC;
func_5567985248:
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
            PC = func_5567985248_op0;
            break;
        case 1:
            PC = func_5567985248_op1;
            break;
    }
    goto **PC;
func_5567984704:
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
            PC = func_5567984704_op0;
            break;
    }
    goto **PC;
func_5567985904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5567985904_op0;
            break;
        case 1:
            PC = func_5567985904_op1;
            break;
        case 2:
            PC = func_5567985904_op2;
            break;
        case 3:
            PC = func_5567985904_op3;
            break;
        case 4:
            PC = func_5567985904_op4;
            break;
        case 5:
            PC = func_5567985904_op5;
            break;
        case 6:
            PC = func_5567985904_op6;
            break;
        case 7:
            PC = func_5567985904_op7;
            break;
        case 8:
            PC = func_5567985904_op8;
            break;
        case 9:
            PC = func_5567985904_op9;
            break;
    }
    goto **PC;
func_5567986032:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5567986032_op0;
            break;
        case 1:
            PC = func_5567986032_op1;
            break;
        case 2:
            PC = func_5567986032_op2;
            break;
        case 3:
            PC = func_5567986032_op3;
            break;
        case 4:
            PC = func_5567986032_op4;
            break;
    }
    goto **PC;
func_5567985808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5567985808_op0;
            break;
    }
    goto **PC;
func_5567985584:
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
            PC = func_5567985584_op0;
            break;
    }
    goto **PC;
func_5567987600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5567987600_op0;
            break;
        case 1:
            PC = func_5567987600_op1;
            break;
        case 2:
            PC = func_5567987600_op2;
            break;
        case 3:
            PC = func_5567987600_op3;
            break;
        case 4:
            PC = func_5567987600_op4;
            break;
        case 5:
            PC = func_5567987600_op5;
            break;
        case 6:
            PC = func_5567987600_op6;
            break;
        case 7:
            PC = func_5567987600_op7;
            break;
        case 8:
            PC = func_5567987600_op8;
            break;
        case 9:
            PC = func_5567987600_op9;
            break;
        case 10:
            PC = func_5567987600_op10;
            break;
        case 11:
            PC = func_5567987600_op11;
            break;
        case 12:
            PC = func_5567987600_op12;
            break;
        case 13:
            PC = func_5567987600_op13;
            break;
        case 14:
            PC = func_5567987600_op14;
            break;
        case 15:
            PC = func_5567987600_op15;
            break;
        case 16:
            PC = func_5567987600_op16;
            break;
        case 17:
            PC = func_5567987600_op17;
            break;
        case 18:
            PC = func_5567987600_op18;
            break;
        case 19:
            PC = func_5567987600_op19;
            break;
        case 20:
            PC = func_5567987600_op20;
            break;
        case 21:
            PC = func_5567987600_op21;
            break;
        case 22:
            PC = func_5567987600_op22;
            break;
        case 23:
            PC = func_5567987600_op23;
            break;
        case 24:
            PC = func_5567987600_op24;
            break;
        case 25:
            PC = func_5567987600_op25;
            break;
        case 26:
            PC = func_5567987600_op26;
            break;
        case 27:
            PC = func_5567987600_op27;
            break;
        case 28:
            PC = func_5567987600_op28;
            break;
        case 29:
            PC = func_5567987600_op29;
            break;
        case 30:
            PC = func_5567987600_op30;
            break;
        case 31:
            PC = func_5567987600_op31;
            break;
        case 32:
            PC = func_5567987600_op32;
            break;
        case 33:
            PC = func_5567987600_op33;
            break;
        case 34:
            PC = func_5567987600_op34;
            break;
        case 35:
            PC = func_5567987600_op35;
            break;
        case 36:
            PC = func_5567987600_op36;
            break;
        case 37:
            PC = func_5567987600_op37;
            break;
        case 38:
            PC = func_5567987600_op38;
            break;
        case 39:
            PC = func_5567987600_op39;
            break;
        case 40:
            PC = func_5567987600_op40;
            break;
        case 41:
            PC = func_5567987600_op41;
            break;
        case 42:
            PC = func_5567987600_op42;
            break;
        case 43:
            PC = func_5567987600_op43;
            break;
        case 44:
            PC = func_5567987600_op44;
            break;
        case 45:
            PC = func_5567987600_op45;
            break;
        case 46:
            PC = func_5567987600_op46;
            break;
        case 47:
            PC = func_5567987600_op47;
            break;
        case 48:
            PC = func_5567987600_op48;
            break;
        case 49:
            PC = func_5567987600_op49;
            break;
        case 50:
            PC = func_5567987600_op50;
            break;
        case 51:
            PC = func_5567987600_op51;
            break;
    }
    goto **PC;
func_5567986720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5567986720_op0;
            break;
        case 1:
            PC = func_5567986720_op1;
            break;
        case 2:
            PC = func_5567986720_op2;
            break;
        case 3:
            PC = func_5567986720_op3;
            break;
        case 4:
            PC = func_5567986720_op4;
            break;
        case 5:
            PC = func_5567986720_op5;
            break;
        case 6:
            PC = func_5567986720_op6;
            break;
        case 7:
            PC = func_5567986720_op7;
            break;
        case 8:
            PC = func_5567986720_op8;
            break;
        case 9:
            PC = func_5567986720_op9;
            break;
        case 10:
            PC = func_5567986720_op10;
            break;
        case 11:
            PC = func_5567986720_op11;
            break;
        case 12:
            PC = func_5567986720_op12;
            break;
        case 13:
            PC = func_5567986720_op13;
            break;
    }
    goto **PC;
func_5567986160:
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
            PC = func_5567986160_op0;
            break;
    }
    goto **PC;
func_5567986288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5567986288_op0;
            break;
        case 1:
            PC = func_5567986288_op1;
            break;
        case 2:
            PC = func_5567986288_op2;
            break;
    }
    goto **PC;
func_5567986416:
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
            PC = func_5567986416_op0;
            break;
    }
    goto **PC;
func_5567986544:
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
            PC = func_5567986544_op0;
            break;
    }
    goto **PC;
func_5567986848:
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
            PC = func_5567986848_op0;
            break;
    }
    goto **PC;
func_5567985504:
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
            PC = func_5567985504_op0;
            break;
        case 1:
            PC = func_5567985504_op1;
            break;
    }
    goto **PC;
func_5567985648:
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
            PC = func_5567985648_op0;
            break;
        case 1:
            PC = func_5567985648_op1;
            break;
    }
    goto **PC;
func_5567987296:
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
            PC = func_5567987296_op0;
            break;
        case 1:
            PC = func_5567987296_op1;
            break;
    }
    goto **PC;
func_5567987424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5567987424_op0;
            break;
        case 1:
            PC = func_5567987424_op1;
            break;
    }
    goto **PC;
func_5567987728:
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
            PC = func_5567987728_op0;
            break;
    }
    goto **PC;
func_5567987856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5567987856_op0;
            break;
    }
    goto **PC;
func_5567988384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5567988384_op0;
            break;
        case 1:
            PC = func_5567988384_op1;
            break;
        case 2:
            PC = func_5567988384_op2;
            break;
        case 3:
            PC = func_5567988384_op3;
            break;
        case 4:
            PC = func_5567988384_op4;
            break;
        case 5:
            PC = func_5567988384_op5;
            break;
        case 6:
            PC = func_5567988384_op6;
            break;
        case 7:
            PC = func_5567988384_op7;
            break;
        case 8:
            PC = func_5567988384_op8;
            break;
        case 9:
            PC = func_5567988384_op9;
            break;
        case 10:
            PC = func_5567988384_op10;
            break;
    }
    goto **PC;
func_5567988064:
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
            PC = func_5567988064_op0;
            break;
    }
    goto **PC;
func_5567987984:
    extend(46);
    NEXT();
    goto **PC;
func_5567988256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567988256;
    goto **PC;
func_5567988576:
    extend(92);
    NEXT();
    goto **PC;
func_5567988704:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567988704;
    goto **PC;
func_5567989200:
    extend(48);
    NEXT();
    goto **PC;
func_5567989328:
    extend(49);
    NEXT();
    goto **PC;
func_5567989456:
    extend(50);
    NEXT();
    goto **PC;
func_5567989616:
    extend(51);
    NEXT();
    goto **PC;
func_5567989744:
    extend(52);
    NEXT();
    goto **PC;
func_5567987104:
    extend(53);
    NEXT();
    goto **PC;
func_5567990320:
    extend(54);
    NEXT();
    goto **PC;
func_5567990448:
    extend(55);
    NEXT();
    goto **PC;
func_5567990576:
    extend(56);
    NEXT();
    goto **PC;
func_5567987040:
    extend(57);
    NEXT();
    goto **PC;
func_5567988896:
    extend(36);
    NEXT();
    goto **PC;
func_5567990896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567990896;
    goto **PC;
func_5567991024:
    extend(40);
    NEXT();
    goto **PC;
func_5567991152:
    extend(41);
    NEXT();
    goto **PC;
func_5567992624:
    extend(97);
    NEXT();
    goto **PC;
func_5567992752:
    extend(98);
    NEXT();
    goto **PC;
func_5567992880:
    extend(99);
    NEXT();
    goto **PC;
func_5567993040:
    extend(100);
    NEXT();
    goto **PC;
func_5567993168:
    extend(101);
    NEXT();
    goto **PC;
func_5567993360:
    extend(102);
    NEXT();
    goto **PC;
func_5567993488:
    extend(103);
    NEXT();
    goto **PC;
func_5567993616:
    extend(104);
    NEXT();
    goto **PC;
func_5567993744:
    extend(105);
    NEXT();
    goto **PC;
func_5567993296:
    extend(106);
    NEXT();
    goto **PC;
func_5567994064:
    extend(107);
    NEXT();
    goto **PC;
func_5567994192:
    extend(108);
    NEXT();
    goto **PC;
func_5567994320:
    extend(109);
    NEXT();
    goto **PC;
func_5567994448:
    extend(110);
    NEXT();
    goto **PC;
func_5567994576:
    extend(111);
    NEXT();
    goto **PC;
func_5567994704:
    extend(112);
    NEXT();
    goto **PC;
func_5567994832:
    extend(113);
    NEXT();
    goto **PC;
func_5567993872:
    extend(114);
    NEXT();
    goto **PC;
func_5567995216:
    extend(115);
    NEXT();
    goto **PC;
func_5567995344:
    extend(116);
    NEXT();
    goto **PC;
func_5567995472:
    extend(117);
    NEXT();
    goto **PC;
func_5567995600:
    extend(118);
    NEXT();
    goto **PC;
func_5567995728:
    extend(119);
    NEXT();
    goto **PC;
func_5567989872:
    extend(120);
    NEXT();
    goto **PC;
func_5567990000:
    extend(121);
    NEXT();
    goto **PC;
func_5567990128:
    extend(122);
    NEXT();
    goto **PC;
func_5567990256:
    extend(65);
    NEXT();
    goto **PC;
func_5567995856:
    extend(66);
    NEXT();
    goto **PC;
func_5567995984:
    extend(67);
    NEXT();
    goto **PC;
func_5567996112:
    extend(68);
    NEXT();
    goto **PC;
func_5567996240:
    extend(69);
    NEXT();
    goto **PC;
func_5567996368:
    extend(70);
    NEXT();
    goto **PC;
func_5567996496:
    extend(71);
    NEXT();
    goto **PC;
func_5567994960:
    extend(72);
    NEXT();
    goto **PC;
func_5567995088:
    extend(73);
    NEXT();
    goto **PC;
func_5567997136:
    extend(74);
    NEXT();
    goto **PC;
func_5567997264:
    extend(75);
    NEXT();
    goto **PC;
func_5567997392:
    extend(76);
    NEXT();
    goto **PC;
func_5567997520:
    extend(77);
    NEXT();
    goto **PC;
func_5567997648:
    extend(78);
    NEXT();
    goto **PC;
func_5567997776:
    extend(79);
    NEXT();
    goto **PC;
func_5567997904:
    extend(80);
    NEXT();
    goto **PC;
func_5567998032:
    extend(81);
    NEXT();
    goto **PC;
func_5567998160:
    extend(82);
    NEXT();
    goto **PC;
func_5567998288:
    extend(83);
    NEXT();
    goto **PC;
func_5567998416:
    extend(84);
    NEXT();
    goto **PC;
func_5567998544:
    extend(85);
    NEXT();
    goto **PC;
func_5567998672:
    extend(86);
    NEXT();
    goto **PC;
func_5567998800:
    extend(87);
    NEXT();
    goto **PC;
func_5567998928:
    extend(88);
    NEXT();
    goto **PC;
func_5567999056:
    extend(89);
    NEXT();
    goto **PC;
func_5567999184:
    extend(90);
    NEXT();
    goto **PC;
func_5567991712:
    extend(42);
    NEXT();
    goto **PC;
func_5567991872:
    extend(43);
    NEXT();
    goto **PC;
func_5567992000:
    extend(63);
    NEXT();
    goto **PC;
func_5567992192:
    extend(94);
    NEXT();
    goto **PC;
func_5567992320:
    extend(124);
    NEXT();
    goto **PC;
func_5567992128:
    extend(91);
    NEXT();
    goto **PC;
func_5567999376:
    extend(93);
    NEXT();
    goto **PC;
func_5567999504:
    extend(123);
    NEXT();
    goto **PC;
func_5567999632:
    extend(125);
    NEXT();
    goto **PC;
func_5567991280:
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
    PC = exp_5567991280;
    goto **PC;
func_5567991408:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5567989104:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567989104;
    goto **PC;
func_5567999760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567999760;
    goto **PC;
func_5567999888:
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
    PC = exp_5567999888;
    goto **PC;
func_5568000016:
    extend(45);
    NEXT();
    goto **PC;
func_5567989024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5567989024;
    goto **PC;
func_5568000144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5568000144;
    goto **PC;
func_5568000800:
    extend(95);
    NEXT();
    goto **PC;
func_5568000944:
    extend(64);
    NEXT();
    goto **PC;
func_5568001104:
    extend(35);
    NEXT();
    goto **PC;
func_5568001232:
    extend(37);
    NEXT();
    goto **PC;
func_5568001424:
    extend(38);
    NEXT();
    goto **PC;
func_5568001552:
    extend(61);
    NEXT();
    goto **PC;
func_5568001680:
    extend(126);
    NEXT();
    goto **PC;
func_5568001808:
    extend(96);
    NEXT();
    goto **PC;
func_5568001360:
    extend(39);
    NEXT();
    goto **PC;
func_5568002128:
    extend(34);
    NEXT();
    goto **PC;
func_5568000432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5568000432;
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
    PC = func_5567987856_op0;
    goto **PC;
}
