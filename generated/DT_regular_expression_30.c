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
    static void *func_5702186048_op0[2] = { &&func_5702205792, &&RETURN };
    static void *func_5702186048_op1[2] = { &&func_5702205152, &&RETURN };
    static void *func_5702202560_op0[2] = { &&func_5702205712, &&RETURN };
    static void *func_5702202768_op0[2] = { &&func_5702205456, &&RETURN };
    static void *func_5702202768_op1[2] = { &&func_5702204144, &&RETURN };
    static void *func_5702202768_op2[2] = { &&func_5702203760, &&RETURN };
    static void *func_5702202976_op0[2] = { &&func_5702204016, &&RETURN };
    static void *func_5702202976_op1[2] = { &&func_5702205984, &&RETURN };
    static void *func_5702202432_op0[2] = { &&func_5702206432, &&RETURN };
    static void *func_5702203632_op0[2] = { &&func_5702206928, &&RETURN };
    static void *func_5702203632_op1[2] = { &&func_5702207056, &&RETURN };
    static void *func_5702203632_op2[2] = { &&func_5702207184, &&RETURN };
    static void *func_5702203632_op3[2] = { &&func_5702207344, &&RETURN };
    static void *func_5702203632_op4[2] = { &&func_5702207472, &&RETURN };
    static void *func_5702203632_op5[2] = { &&func_5702204832, &&RETURN };
    static void *func_5702203632_op6[2] = { &&func_5702208048, &&RETURN };
    static void *func_5702203632_op7[2] = { &&func_5702208176, &&RETURN };
    static void *func_5702203632_op8[2] = { &&func_5702208304, &&RETURN };
    static void *func_5702203632_op9[2] = { &&func_5702204768, &&RETURN };
    static void *func_5702203760_op0[2] = { &&func_5702203312, &&RETURN };
    static void *func_5702203760_op1[2] = { &&func_5702202560, &&RETURN };
    static void *func_5702203760_op2[2] = { &&func_5702203536, &&RETURN };
    static void *func_5702203760_op3[2] = { &&func_5702202976, &&RETURN };
    static void *func_5702203760_op4[2] = { &&func_5702205024, &&RETURN };
    static void *func_5702203536_op0[2] = { &&func_5702206624, &&RETURN };
    static void *func_5702203312_op0[2] = { &&func_5702208624, &&RETURN };
    static void *func_5702205328_op0[2] = { &&func_5702210352, &&RETURN };
    static void *func_5702205328_op1[2] = { &&func_5702210480, &&RETURN };
    static void *func_5702205328_op2[2] = { &&func_5702210608, &&RETURN };
    static void *func_5702205328_op3[2] = { &&func_5702210768, &&RETURN };
    static void *func_5702205328_op4[2] = { &&func_5702210896, &&RETURN };
    static void *func_5702205328_op5[2] = { &&func_5702211088, &&RETURN };
    static void *func_5702205328_op6[2] = { &&func_5702211216, &&RETURN };
    static void *func_5702205328_op7[2] = { &&func_5702211344, &&RETURN };
    static void *func_5702205328_op8[2] = { &&func_5702211472, &&RETURN };
    static void *func_5702205328_op9[2] = { &&func_5702211024, &&RETURN };
    static void *func_5702205328_op10[2] = { &&func_5702211792, &&RETURN };
    static void *func_5702205328_op11[2] = { &&func_5702211920, &&RETURN };
    static void *func_5702205328_op12[2] = { &&func_5702212048, &&RETURN };
    static void *func_5702205328_op13[2] = { &&func_5702212176, &&RETURN };
    static void *func_5702205328_op14[2] = { &&func_5702212304, &&RETURN };
    static void *func_5702205328_op15[2] = { &&func_5702212432, &&RETURN };
    static void *func_5702205328_op16[2] = { &&func_5702212560, &&RETURN };
    static void *func_5702205328_op17[2] = { &&func_5702211600, &&RETURN };
    static void *func_5702205328_op18[2] = { &&func_5702212944, &&RETURN };
    static void *func_5702205328_op19[2] = { &&func_5702213072, &&RETURN };
    static void *func_5702205328_op20[2] = { &&func_5702213200, &&RETURN };
    static void *func_5702205328_op21[2] = { &&func_5702213328, &&RETURN };
    static void *func_5702205328_op22[2] = { &&func_5702213456, &&RETURN };
    static void *func_5702205328_op23[2] = { &&func_5702207600, &&RETURN };
    static void *func_5702205328_op24[2] = { &&func_5702207728, &&RETURN };
    static void *func_5702205328_op25[2] = { &&func_5702207856, &&RETURN };
    static void *func_5702205328_op26[2] = { &&func_5702207984, &&RETURN };
    static void *func_5702205328_op27[2] = { &&func_5702213584, &&RETURN };
    static void *func_5702205328_op28[2] = { &&func_5702213712, &&RETURN };
    static void *func_5702205328_op29[2] = { &&func_5702213840, &&RETURN };
    static void *func_5702205328_op30[2] = { &&func_5702213968, &&RETURN };
    static void *func_5702205328_op31[2] = { &&func_5702214096, &&RETURN };
    static void *func_5702205328_op32[2] = { &&func_5702214224, &&RETURN };
    static void *func_5702205328_op33[2] = { &&func_5702212688, &&RETURN };
    static void *func_5702205328_op34[2] = { &&func_5702212816, &&RETURN };
    static void *func_5702205328_op35[2] = { &&func_5702214864, &&RETURN };
    static void *func_5702205328_op36[2] = { &&func_5702214992, &&RETURN };
    static void *func_5702205328_op37[2] = { &&func_5702215120, &&RETURN };
    static void *func_5702205328_op38[2] = { &&func_5702215248, &&RETURN };
    static void *func_5702205328_op39[2] = { &&func_5702215376, &&RETURN };
    static void *func_5702205328_op40[2] = { &&func_5702215504, &&RETURN };
    static void *func_5702205328_op41[2] = { &&func_5702215632, &&RETURN };
    static void *func_5702205328_op42[2] = { &&func_5702215760, &&RETURN };
    static void *func_5702205328_op43[2] = { &&func_5702215888, &&RETURN };
    static void *func_5702205328_op44[2] = { &&func_5702216016, &&RETURN };
    static void *func_5702205328_op45[2] = { &&func_5702216144, &&RETURN };
    static void *func_5702205328_op46[2] = { &&func_5702216272, &&RETURN };
    static void *func_5702205328_op47[2] = { &&func_5702216400, &&RETURN };
    static void *func_5702205328_op48[2] = { &&func_5702216528, &&RETURN };
    static void *func_5702205328_op49[2] = { &&func_5702216656, &&RETURN };
    static void *func_5702205328_op50[2] = { &&func_5702216784, &&RETURN };
    static void *func_5702205328_op51[2] = { &&func_5702216912, &&RETURN };
    static void *func_5702204448_op0[2] = { &&func_5702206304, &&RETURN };
    static void *func_5702204448_op1[2] = { &&func_5702205712, &&RETURN };
    static void *func_5702204448_op2[2] = { &&func_5702209440, &&RETURN };
    static void *func_5702204448_op3[2] = { &&func_5702209600, &&RETURN };
    static void *func_5702204448_op4[2] = { &&func_5702209728, &&RETURN };
    static void *func_5702204448_op5[2] = { &&func_5702209920, &&RETURN };
    static void *func_5702204448_op6[2] = { &&func_5702206624, &&RETURN };
    static void *func_5702204448_op7[2] = { &&func_5702210048, &&RETURN };
    static void *func_5702204448_op8[2] = { &&func_5702208752, &&RETURN };
    static void *func_5702204448_op9[2] = { &&func_5702208880, &&RETURN };
    static void *func_5702204448_op10[2] = { &&func_5702209856, &&RETURN };
    static void *func_5702204448_op11[2] = { &&func_5702217104, &&RETURN };
    static void *func_5702204448_op12[2] = { &&func_5702217232, &&RETURN };
    static void *func_5702204448_op13[2] = { &&func_5702217360, &&RETURN };
    static void *func_5702203888_op0[2] = { &&func_5702209008, &&RETURN };
    static void *func_5702204016_op0[2] = { &&func_5702205328, &&RETURN };
    static void *func_5702204016_op1[2] = { &&func_5702203632, &&RETURN };
    static void *func_5702204016_op2[2] = { &&func_5702206112, &&RETURN };
    static void *func_5702204144_op0[2] = { &&func_5702206832, &&RETURN };
    static void *func_5702204272_op0[2] = { &&func_5702217488, &&RETURN };
    static void *func_5702204576_op0[2] = { &&func_5702217616, &&RETURN };
    static void *func_5702203232_op0[2] = { &&func_5702204576, &&RETURN };
    static void *func_5702203232_op1[2] = { &&func_5702202976, &&RETURN };
    static void *func_5702203376_op0[2] = { &&func_5702203232, &&RETURN };
    static void *func_5702203376_op1[2] = { &&func_5702206752, &&RETURN };
    static void *func_5702205024_op0[2] = { &&func_5702204272, &&RETURN };
    static void *func_5702205024_op1[2] = { &&func_5702203888, &&RETURN };
    static void *func_5702205152_op0[2] = { &&func_5702202432, &&RETURN };
    static void *func_5702205152_op1[2] = { &&func_5702202768, &&RETURN };
    static void *func_5702205456_op0[2] = { &&func_5702217872, &&RETURN };
    static void *func_5702205584_op0[2] = { &&func_5702186048, &&HALT };
    static void *func_5702206112_op0[2] = { &&func_5702218528, &&RETURN };
    static void *func_5702206112_op1[2] = { &&func_5702217744, &&RETURN };
    static void *func_5702206112_op2[2] = { &&func_5702218672, &&RETURN };
    static void *func_5702206112_op3[2] = { &&func_5702218832, &&RETURN };
    static void *func_5702206112_op4[2] = { &&func_5702218960, &&RETURN };
    static void *func_5702206112_op5[2] = { &&func_5702219152, &&RETURN };
    static void *func_5702206112_op6[2] = { &&func_5702219280, &&RETURN };
    static void *func_5702206112_op7[2] = { &&func_5702219408, &&RETURN };
    static void *func_5702206112_op8[2] = { &&func_5702219536, &&RETURN };
    static void *func_5702206112_op9[2] = { &&func_5702219088, &&RETURN };
    static void *func_5702206112_op10[2] = { &&func_5702219856, &&RETURN };
    static void *func_5702205792_op0[2] = { &&func_5702218160, &&RETURN };
    static void *exp_5702205984[3] = {&&func_5702206304, &&func_5702204448, &&RETURN };
    static void *exp_5702206432[3] = {&&func_5702205152, &&func_5702202768, &&RETURN };
    static void *exp_5702208624[4] = {&&func_5702208752, &&func_5702186048, &&func_5702208880, &&RETURN };
    static void *exp_5702209008[4] = {&&func_5702209136, &&func_5702203376, &&func_5702217104, &&RETURN };
    static void *exp_5702206832[3] = {&&func_5702203760, &&func_5702209600, &&RETURN };
    static void *exp_5702217488[4] = {&&func_5702209856, &&func_5702203376, &&func_5702217104, &&RETURN };
    static void *exp_5702217616[4] = {&&func_5702202976, &&func_5702217744, &&func_5702202976, &&RETURN };
    static void *exp_5702206752[3] = {&&func_5702203232, &&func_5702203376, &&RETURN };
    static void *exp_5702217872[3] = {&&func_5702203760, &&func_5702209440, &&RETURN };
    static void *exp_5702218160[4] = {&&func_5702186048, &&func_5702210048, &&func_5702205152, &&RETURN };

func_5702186048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5702186048_op0;
            break;
        case 1:
            PC = func_5702186048_op1;
            break;
    }
    goto **PC;
func_5702202560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5702202560_op0;
            break;
    }
    goto **PC;
func_5702202768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5702202768_op0;
            break;
        case 1:
            PC = func_5702202768_op1;
            break;
        case 2:
            PC = func_5702202768_op2;
            break;
    }
    goto **PC;
func_5702202976:
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
            PC = func_5702202976_op0;
            break;
        case 1:
            PC = func_5702202976_op1;
            break;
    }
    goto **PC;
func_5702202432:
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
            PC = func_5702202432_op0;
            break;
    }
    goto **PC;
func_5702203632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5702203632_op0;
            break;
        case 1:
            PC = func_5702203632_op1;
            break;
        case 2:
            PC = func_5702203632_op2;
            break;
        case 3:
            PC = func_5702203632_op3;
            break;
        case 4:
            PC = func_5702203632_op4;
            break;
        case 5:
            PC = func_5702203632_op5;
            break;
        case 6:
            PC = func_5702203632_op6;
            break;
        case 7:
            PC = func_5702203632_op7;
            break;
        case 8:
            PC = func_5702203632_op8;
            break;
        case 9:
            PC = func_5702203632_op9;
            break;
    }
    goto **PC;
func_5702203760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5702203760_op0;
            break;
        case 1:
            PC = func_5702203760_op1;
            break;
        case 2:
            PC = func_5702203760_op2;
            break;
        case 3:
            PC = func_5702203760_op3;
            break;
        case 4:
            PC = func_5702203760_op4;
            break;
    }
    goto **PC;
func_5702203536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5702203536_op0;
            break;
    }
    goto **PC;
func_5702203312:
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
            PC = func_5702203312_op0;
            break;
    }
    goto **PC;
func_5702205328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5702205328_op0;
            break;
        case 1:
            PC = func_5702205328_op1;
            break;
        case 2:
            PC = func_5702205328_op2;
            break;
        case 3:
            PC = func_5702205328_op3;
            break;
        case 4:
            PC = func_5702205328_op4;
            break;
        case 5:
            PC = func_5702205328_op5;
            break;
        case 6:
            PC = func_5702205328_op6;
            break;
        case 7:
            PC = func_5702205328_op7;
            break;
        case 8:
            PC = func_5702205328_op8;
            break;
        case 9:
            PC = func_5702205328_op9;
            break;
        case 10:
            PC = func_5702205328_op10;
            break;
        case 11:
            PC = func_5702205328_op11;
            break;
        case 12:
            PC = func_5702205328_op12;
            break;
        case 13:
            PC = func_5702205328_op13;
            break;
        case 14:
            PC = func_5702205328_op14;
            break;
        case 15:
            PC = func_5702205328_op15;
            break;
        case 16:
            PC = func_5702205328_op16;
            break;
        case 17:
            PC = func_5702205328_op17;
            break;
        case 18:
            PC = func_5702205328_op18;
            break;
        case 19:
            PC = func_5702205328_op19;
            break;
        case 20:
            PC = func_5702205328_op20;
            break;
        case 21:
            PC = func_5702205328_op21;
            break;
        case 22:
            PC = func_5702205328_op22;
            break;
        case 23:
            PC = func_5702205328_op23;
            break;
        case 24:
            PC = func_5702205328_op24;
            break;
        case 25:
            PC = func_5702205328_op25;
            break;
        case 26:
            PC = func_5702205328_op26;
            break;
        case 27:
            PC = func_5702205328_op27;
            break;
        case 28:
            PC = func_5702205328_op28;
            break;
        case 29:
            PC = func_5702205328_op29;
            break;
        case 30:
            PC = func_5702205328_op30;
            break;
        case 31:
            PC = func_5702205328_op31;
            break;
        case 32:
            PC = func_5702205328_op32;
            break;
        case 33:
            PC = func_5702205328_op33;
            break;
        case 34:
            PC = func_5702205328_op34;
            break;
        case 35:
            PC = func_5702205328_op35;
            break;
        case 36:
            PC = func_5702205328_op36;
            break;
        case 37:
            PC = func_5702205328_op37;
            break;
        case 38:
            PC = func_5702205328_op38;
            break;
        case 39:
            PC = func_5702205328_op39;
            break;
        case 40:
            PC = func_5702205328_op40;
            break;
        case 41:
            PC = func_5702205328_op41;
            break;
        case 42:
            PC = func_5702205328_op42;
            break;
        case 43:
            PC = func_5702205328_op43;
            break;
        case 44:
            PC = func_5702205328_op44;
            break;
        case 45:
            PC = func_5702205328_op45;
            break;
        case 46:
            PC = func_5702205328_op46;
            break;
        case 47:
            PC = func_5702205328_op47;
            break;
        case 48:
            PC = func_5702205328_op48;
            break;
        case 49:
            PC = func_5702205328_op49;
            break;
        case 50:
            PC = func_5702205328_op50;
            break;
        case 51:
            PC = func_5702205328_op51;
            break;
    }
    goto **PC;
func_5702204448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5702204448_op0;
            break;
        case 1:
            PC = func_5702204448_op1;
            break;
        case 2:
            PC = func_5702204448_op2;
            break;
        case 3:
            PC = func_5702204448_op3;
            break;
        case 4:
            PC = func_5702204448_op4;
            break;
        case 5:
            PC = func_5702204448_op5;
            break;
        case 6:
            PC = func_5702204448_op6;
            break;
        case 7:
            PC = func_5702204448_op7;
            break;
        case 8:
            PC = func_5702204448_op8;
            break;
        case 9:
            PC = func_5702204448_op9;
            break;
        case 10:
            PC = func_5702204448_op10;
            break;
        case 11:
            PC = func_5702204448_op11;
            break;
        case 12:
            PC = func_5702204448_op12;
            break;
        case 13:
            PC = func_5702204448_op13;
            break;
    }
    goto **PC;
func_5702203888:
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
            PC = func_5702203888_op0;
            break;
    }
    goto **PC;
func_5702204016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5702204016_op0;
            break;
        case 1:
            PC = func_5702204016_op1;
            break;
        case 2:
            PC = func_5702204016_op2;
            break;
    }
    goto **PC;
func_5702204144:
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
            PC = func_5702204144_op0;
            break;
    }
    goto **PC;
func_5702204272:
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
            PC = func_5702204272_op0;
            break;
    }
    goto **PC;
func_5702204576:
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
            PC = func_5702204576_op0;
            break;
    }
    goto **PC;
func_5702203232:
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
            PC = func_5702203232_op0;
            break;
        case 1:
            PC = func_5702203232_op1;
            break;
    }
    goto **PC;
func_5702203376:
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
            PC = func_5702203376_op0;
            break;
        case 1:
            PC = func_5702203376_op1;
            break;
    }
    goto **PC;
func_5702205024:
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
            PC = func_5702205024_op0;
            break;
        case 1:
            PC = func_5702205024_op1;
            break;
    }
    goto **PC;
func_5702205152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5702205152_op0;
            break;
        case 1:
            PC = func_5702205152_op1;
            break;
    }
    goto **PC;
func_5702205456:
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
            PC = func_5702205456_op0;
            break;
    }
    goto **PC;
func_5702205584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5702205584_op0;
            break;
    }
    goto **PC;
func_5702206112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5702206112_op0;
            break;
        case 1:
            PC = func_5702206112_op1;
            break;
        case 2:
            PC = func_5702206112_op2;
            break;
        case 3:
            PC = func_5702206112_op3;
            break;
        case 4:
            PC = func_5702206112_op4;
            break;
        case 5:
            PC = func_5702206112_op5;
            break;
        case 6:
            PC = func_5702206112_op6;
            break;
        case 7:
            PC = func_5702206112_op7;
            break;
        case 8:
            PC = func_5702206112_op8;
            break;
        case 9:
            PC = func_5702206112_op9;
            break;
        case 10:
            PC = func_5702206112_op10;
            break;
    }
    goto **PC;
func_5702205792:
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
            PC = func_5702205792_op0;
            break;
    }
    goto **PC;
func_5702205712:
    extend(46);
    NEXT();
    goto **PC;
func_5702205984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702205984;
    goto **PC;
func_5702206304:
    extend(92);
    NEXT();
    goto **PC;
func_5702206432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702206432;
    goto **PC;
func_5702206928:
    extend(48);
    NEXT();
    goto **PC;
func_5702207056:
    extend(49);
    NEXT();
    goto **PC;
func_5702207184:
    extend(50);
    NEXT();
    goto **PC;
func_5702207344:
    extend(51);
    NEXT();
    goto **PC;
func_5702207472:
    extend(52);
    NEXT();
    goto **PC;
func_5702204832:
    extend(53);
    NEXT();
    goto **PC;
func_5702208048:
    extend(54);
    NEXT();
    goto **PC;
func_5702208176:
    extend(55);
    NEXT();
    goto **PC;
func_5702208304:
    extend(56);
    NEXT();
    goto **PC;
func_5702204768:
    extend(57);
    NEXT();
    goto **PC;
func_5702206624:
    extend(36);
    NEXT();
    goto **PC;
func_5702208624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702208624;
    goto **PC;
func_5702208752:
    extend(40);
    NEXT();
    goto **PC;
func_5702208880:
    extend(41);
    NEXT();
    goto **PC;
func_5702210352:
    extend(97);
    NEXT();
    goto **PC;
func_5702210480:
    extend(98);
    NEXT();
    goto **PC;
func_5702210608:
    extend(99);
    NEXT();
    goto **PC;
func_5702210768:
    extend(100);
    NEXT();
    goto **PC;
func_5702210896:
    extend(101);
    NEXT();
    goto **PC;
func_5702211088:
    extend(102);
    NEXT();
    goto **PC;
func_5702211216:
    extend(103);
    NEXT();
    goto **PC;
func_5702211344:
    extend(104);
    NEXT();
    goto **PC;
func_5702211472:
    extend(105);
    NEXT();
    goto **PC;
func_5702211024:
    extend(106);
    NEXT();
    goto **PC;
func_5702211792:
    extend(107);
    NEXT();
    goto **PC;
func_5702211920:
    extend(108);
    NEXT();
    goto **PC;
func_5702212048:
    extend(109);
    NEXT();
    goto **PC;
func_5702212176:
    extend(110);
    NEXT();
    goto **PC;
func_5702212304:
    extend(111);
    NEXT();
    goto **PC;
func_5702212432:
    extend(112);
    NEXT();
    goto **PC;
func_5702212560:
    extend(113);
    NEXT();
    goto **PC;
func_5702211600:
    extend(114);
    NEXT();
    goto **PC;
func_5702212944:
    extend(115);
    NEXT();
    goto **PC;
func_5702213072:
    extend(116);
    NEXT();
    goto **PC;
func_5702213200:
    extend(117);
    NEXT();
    goto **PC;
func_5702213328:
    extend(118);
    NEXT();
    goto **PC;
func_5702213456:
    extend(119);
    NEXT();
    goto **PC;
func_5702207600:
    extend(120);
    NEXT();
    goto **PC;
func_5702207728:
    extend(121);
    NEXT();
    goto **PC;
func_5702207856:
    extend(122);
    NEXT();
    goto **PC;
func_5702207984:
    extend(65);
    NEXT();
    goto **PC;
func_5702213584:
    extend(66);
    NEXT();
    goto **PC;
func_5702213712:
    extend(67);
    NEXT();
    goto **PC;
func_5702213840:
    extend(68);
    NEXT();
    goto **PC;
func_5702213968:
    extend(69);
    NEXT();
    goto **PC;
func_5702214096:
    extend(70);
    NEXT();
    goto **PC;
func_5702214224:
    extend(71);
    NEXT();
    goto **PC;
func_5702212688:
    extend(72);
    NEXT();
    goto **PC;
func_5702212816:
    extend(73);
    NEXT();
    goto **PC;
func_5702214864:
    extend(74);
    NEXT();
    goto **PC;
func_5702214992:
    extend(75);
    NEXT();
    goto **PC;
func_5702215120:
    extend(76);
    NEXT();
    goto **PC;
func_5702215248:
    extend(77);
    NEXT();
    goto **PC;
func_5702215376:
    extend(78);
    NEXT();
    goto **PC;
func_5702215504:
    extend(79);
    NEXT();
    goto **PC;
func_5702215632:
    extend(80);
    NEXT();
    goto **PC;
func_5702215760:
    extend(81);
    NEXT();
    goto **PC;
func_5702215888:
    extend(82);
    NEXT();
    goto **PC;
func_5702216016:
    extend(83);
    NEXT();
    goto **PC;
func_5702216144:
    extend(84);
    NEXT();
    goto **PC;
func_5702216272:
    extend(85);
    NEXT();
    goto **PC;
func_5702216400:
    extend(86);
    NEXT();
    goto **PC;
func_5702216528:
    extend(87);
    NEXT();
    goto **PC;
func_5702216656:
    extend(88);
    NEXT();
    goto **PC;
func_5702216784:
    extend(89);
    NEXT();
    goto **PC;
func_5702216912:
    extend(90);
    NEXT();
    goto **PC;
func_5702209440:
    extend(42);
    NEXT();
    goto **PC;
func_5702209600:
    extend(43);
    NEXT();
    goto **PC;
func_5702209728:
    extend(63);
    NEXT();
    goto **PC;
func_5702209920:
    extend(94);
    NEXT();
    goto **PC;
func_5702210048:
    extend(124);
    NEXT();
    goto **PC;
func_5702209856:
    extend(91);
    NEXT();
    goto **PC;
func_5702217104:
    extend(93);
    NEXT();
    goto **PC;
func_5702217232:
    extend(123);
    NEXT();
    goto **PC;
func_5702217360:
    extend(125);
    NEXT();
    goto **PC;
func_5702209008:
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
    PC = exp_5702209008;
    goto **PC;
func_5702209136:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5702206832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702206832;
    goto **PC;
func_5702217488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702217488;
    goto **PC;
func_5702217616:
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
    PC = exp_5702217616;
    goto **PC;
func_5702217744:
    extend(45);
    NEXT();
    goto **PC;
func_5702206752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702206752;
    goto **PC;
func_5702217872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702217872;
    goto **PC;
func_5702218528:
    extend(95);
    NEXT();
    goto **PC;
func_5702218672:
    extend(64);
    NEXT();
    goto **PC;
func_5702218832:
    extend(35);
    NEXT();
    goto **PC;
func_5702218960:
    extend(37);
    NEXT();
    goto **PC;
func_5702219152:
    extend(38);
    NEXT();
    goto **PC;
func_5702219280:
    extend(61);
    NEXT();
    goto **PC;
func_5702219408:
    extend(126);
    NEXT();
    goto **PC;
func_5702219536:
    extend(96);
    NEXT();
    goto **PC;
func_5702219088:
    extend(39);
    NEXT();
    goto **PC;
func_5702219856:
    extend(34);
    NEXT();
    goto **PC;
func_5702218160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5702218160;
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
    PC = func_5702205584_op0;
    goto **PC;
}
