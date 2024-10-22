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
    static void *func_5828029840_op0[2] = { &&func_5828031936, &&RETURN };
    static void *func_5828030592_op0[2] = { &&func_5828033536, &&RETURN };
    static void *func_5828030592_op1[2] = { &&func_5828033792, &&RETURN };
    static void *func_5828030592_op2[2] = { &&func_5828034048, &&RETURN };
    static void *func_5828030592_op3[2] = { &&func_5828034336, &&RETURN };
    static void *func_5828030592_op4[2] = { &&func_5828034624, &&RETURN };
    static void *func_5828030592_op5[2] = { &&func_5828034976, &&RETURN };
    static void *func_5828030592_op6[2] = { &&func_5828035280, &&RETURN };
    static void *func_5828030752_op0[2] = { &&func_5828033408, &&RETURN };
    static void *func_5828030752_op1[2] = { &&func_5828032960, &&RETURN };
    static void *func_5828030752_op2[2] = { &&func_5828035856, &&RETURN };
    static void *func_5828030752_op3[2] = { &&func_5828035984, &&RETURN };
    static void *func_5828030752_op4[2] = { &&func_5828036112, &&RETURN };
    static void *func_5828030752_op5[2] = { &&func_5828036304, &&RETURN };
    static void *func_5828030752_op6[2] = { &&func_5828036432, &&RETURN };
    static void *func_5828030752_op7[2] = { &&func_5828036560, &&RETURN };
    static void *func_5828030752_op8[2] = { &&func_5828036688, &&RETURN };
    static void *func_5828030752_op9[2] = { &&func_5828036240, &&RETURN };
    static void *func_5828030464_op0[2] = { &&func_5828032896, &&RETURN };
    static void *func_5828030464_op1[2] = { &&func_5828033088, &&RETURN };
    static void *func_5828030464_op2[2] = { &&func_5828032000, &&RETURN };
    static void *func_5828030112_op0[2] = { &&func_5828037088, &&RETURN };
    static void *func_5828030112_op1[2] = { &&func_5828030032, &&RETURN };
    static void *func_5828030112_op2[2] = { &&func_5828030352, &&RETURN };
    static void *func_5828029712_op0[2] = { &&func_5828031840, &&RETURN };
    static void *func_5828030352_op0[2] = { &&func_5828037792, &&RETURN };
    static void *func_5828030352_op1[2] = { &&func_5828032512, &&RETURN };
    static void *func_5828030880_op0[2] = { &&func_5828038752, &&RETURN };
    static void *func_5828032512_op0[2] = { &&func_5828040224, &&RETURN };
    static void *func_5828032512_op1[2] = { &&func_5828040352, &&RETURN };
    static void *func_5828032512_op2[2] = { &&func_5828040480, &&RETURN };
    static void *func_5828032512_op3[2] = { &&func_5828040640, &&RETURN };
    static void *func_5828032512_op4[2] = { &&func_5828040768, &&RETURN };
    static void *func_5828032512_op5[2] = { &&func_5828040960, &&RETURN };
    static void *func_5828032512_op6[2] = { &&func_5828041088, &&RETURN };
    static void *func_5828032512_op7[2] = { &&func_5828035408, &&RETURN };
    static void *func_5828032512_op8[2] = { &&func_5828035536, &&RETURN };
    static void *func_5828032512_op9[2] = { &&func_5828040896, &&RETURN };
    static void *func_5828032512_op10[2] = { &&func_5828041152, &&RETURN };
    static void *func_5828032512_op11[2] = { &&func_5828041280, &&RETURN };
    static void *func_5828032512_op12[2] = { &&func_5828041408, &&RETURN };
    static void *func_5828032512_op13[2] = { &&func_5828041536, &&RETURN };
    static void *func_5828032512_op14[2] = { &&func_5828041664, &&RETURN };
    static void *func_5828032512_op15[2] = { &&func_5828041792, &&RETURN };
    static void *func_5828032512_op16[2] = { &&func_5828041920, &&RETURN };
    static void *func_5828032512_op17[2] = { &&func_5828035664, &&RETURN };
    static void *func_5828032512_op18[2] = { &&func_5828042304, &&RETURN };
    static void *func_5828032512_op19[2] = { &&func_5828042432, &&RETURN };
    static void *func_5828032512_op20[2] = { &&func_5828042560, &&RETURN };
    static void *func_5828032512_op21[2] = { &&func_5828042688, &&RETURN };
    static void *func_5828032512_op22[2] = { &&func_5828042816, &&RETURN };
    static void *func_5828032512_op23[2] = { &&func_5828042944, &&RETURN };
    static void *func_5828032512_op24[2] = { &&func_5828043072, &&RETURN };
    static void *func_5828032512_op25[2] = { &&func_5828043200, &&RETURN };
    static void *func_5828032512_op26[2] = { &&func_5828043328, &&RETURN };
    static void *func_5828032512_op27[2] = { &&func_5828043456, &&RETURN };
    static void *func_5828032512_op28[2] = { &&func_5828043584, &&RETURN };
    static void *func_5828032512_op29[2] = { &&func_5828043712, &&RETURN };
    static void *func_5828032512_op30[2] = { &&func_5828043840, &&RETURN };
    static void *func_5828032512_op31[2] = { &&func_5828043968, &&RETURN };
    static void *func_5828032512_op32[2] = { &&func_5828044096, &&RETURN };
    static void *func_5828032512_op33[2] = { &&func_5828042048, &&RETURN };
    static void *func_5828032512_op34[2] = { &&func_5828042176, &&RETURN };
    static void *func_5828032512_op35[2] = { &&func_5828044736, &&RETURN };
    static void *func_5828032512_op36[2] = { &&func_5828044864, &&RETURN };
    static void *func_5828032512_op37[2] = { &&func_5828044992, &&RETURN };
    static void *func_5828032512_op38[2] = { &&func_5828045120, &&RETURN };
    static void *func_5828032512_op39[2] = { &&func_5828045248, &&RETURN };
    static void *func_5828032512_op40[2] = { &&func_5828045376, &&RETURN };
    static void *func_5828032512_op41[2] = { &&func_5828045504, &&RETURN };
    static void *func_5828032512_op42[2] = { &&func_5828045632, &&RETURN };
    static void *func_5828032512_op43[2] = { &&func_5828045760, &&RETURN };
    static void *func_5828032512_op44[2] = { &&func_5828045888, &&RETURN };
    static void *func_5828032512_op45[2] = { &&func_5828046016, &&RETURN };
    static void *func_5828032512_op46[2] = { &&func_5828046144, &&RETURN };
    static void *func_5828032512_op47[2] = { &&func_5828046272, &&RETURN };
    static void *func_5828032512_op48[2] = { &&func_5828046400, &&RETURN };
    static void *func_5828032512_op49[2] = { &&func_5828046528, &&RETURN };
    static void *func_5828032512_op50[2] = { &&func_5828046656, &&RETURN };
    static void *func_5828032512_op51[2] = { &&func_5829050528, &&RETURN };
    static void *func_5828030032_op0[2] = { &&func_5829050800, &&RETURN };
    static void *func_5828030032_op1[2] = { &&func_5828030752, &&RETURN };
    static void *func_5828031072_op0[2] = { &&func_5829051008, &&RETURN };
    static void *func_5828031072_op1[2] = { &&func_5828031712, &&RETURN };
    static void *func_5828031280_op0[2] = { &&func_5829051248, &&RETURN };
    static void *func_5828031200_op0[2] = { &&func_5828031072, &&HALT };
    static void *func_5828031712_op0[2] = { &&func_5828031552, &&RETURN };
    static void *func_5828031712_op1[2] = { &&func_5828029840, &&RETURN };
    static void *func_5828031712_op2[2] = { &&func_5828030880, &&RETURN };
    static void *func_5828031712_op3[2] = { &&func_5828031472, &&RETURN };
    static void *func_5828031712_op4[2] = { &&func_5828029712, &&RETURN };
    static void *func_5828031712_op5[2] = { &&func_5828031280, &&RETURN };
    static void *func_5828032000_op0[2] = { &&func_5829051168, &&RETURN };
    static void *func_5828032000_op1[2] = { &&func_5829050688, &&RETURN };
    static void *func_5828032000_op2[2] = { &&func_5828030112, &&RETURN };
    static void *func_5828031552_op0[2] = { &&func_5829052416, &&RETURN };
    static void *func_5828031552_op1[2] = { &&func_5829052800, &&RETURN };
    static void *func_5828031552_op2[2] = { &&func_5829053088, &&RETURN };
    static void *func_5828031472_op0[2] = { &&func_5829051584, &&RETURN };
    static void *exp_5828031936[5] = {&&func_5828030352, &&func_5828032256, &&func_5828030464, &&func_5828032384, &&RETURN };
    static void *exp_5828033536[4] = {&&func_5828030464, &&func_5828033664, &&func_5828030464, &&RETURN };
    static void *exp_5828033792[4] = {&&func_5828030464, &&func_5828033920, &&func_5828030464, &&RETURN };
    static void *exp_5828034048[4] = {&&func_5828030464, &&func_5828034176, &&func_5828030464, &&RETURN };
    static void *exp_5828034336[4] = {&&func_5828030464, &&func_5828034464, &&func_5828030464, &&RETURN };
    static void *exp_5828034624[4] = {&&func_5828030592, &&func_5828034752, &&func_5828030592, &&RETURN };
    static void *exp_5828034976[4] = {&&func_5828030592, &&func_5828035104, &&func_5828030592, &&RETURN };
    static void *exp_5828035280[3] = {&&func_5828032768, &&func_5828030592, &&RETURN };
    static void *exp_5828032896[4] = {&&func_5828030464, &&func_5828037232, &&func_5828032000, &&RETURN };
    static void *exp_5828033088[4] = {&&func_5828030464, &&func_5828033216, &&func_5828032000, &&RETURN };
    static void *exp_5828037088[4] = {&&func_5828037456, &&func_5828030464, &&func_5828037584, &&RETURN };
    static void *exp_5828031840[8] = {&&func_5828038192, &&func_5828030352, &&func_5828037456, &&func_5828037584, &&func_5828032576, &&func_5828031072, &&func_5828038448, &&RETURN };
    static void *exp_5828037792[3] = {&&func_5828032512, &&func_5828030352, &&RETURN };
    static void *exp_5828038752[8] = {&&func_5828038880, &&func_5828037456, &&func_5828030592, &&func_5828037584, &&func_5828032576, &&func_5828031072, &&func_5828038448, &&RETURN };
    static void *exp_5829050800[3] = {&&func_5828030752, &&func_5828030032, &&RETURN };
    static void *exp_5829051008[3] = {&&func_5828031072, &&func_5828031712, &&RETURN };
    static void *exp_5829051248[4] = {&&func_5829051376, &&func_5828030464, &&func_5828032384, &&RETURN };
    static void *exp_5829051168[4] = {&&func_5828032000, &&func_5829051984, &&func_5828030112, &&RETURN };
    static void *exp_5829050688[4] = {&&func_5828032000, &&func_5829052176, &&func_5828030112, &&RETURN };
    static void *exp_5829052416[4] = {&&func_5829052544, &&func_5828030352, &&func_5829052672, &&RETURN };
    static void *exp_5829052800[4] = {&&func_5829052928, &&func_5828030352, &&func_5829052672, &&RETURN };
    static void *exp_5829053088[4] = {&&func_5829053216, &&func_5828030352, &&func_5829052672, &&RETURN };
    static void *exp_5829051584[8] = {&&func_5829051824, &&func_5828037456, &&func_5828030592, &&func_5828037584, &&func_5828032576, &&func_5828031072, &&func_5828038448, &&RETURN };

func_5828029840:
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
            PC = func_5828029840_op0;
            break;
    }
    goto **PC;
func_5828030592:
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
            PC = func_5828030592_op0;
            break;
        case 1:
            PC = func_5828030592_op1;
            break;
        case 2:
            PC = func_5828030592_op2;
            break;
        case 3:
            PC = func_5828030592_op3;
            break;
        case 4:
            PC = func_5828030592_op4;
            break;
        case 5:
            PC = func_5828030592_op5;
            break;
        case 6:
            PC = func_5828030592_op6;
            break;
    }
    goto **PC;
func_5828030752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5828030752_op0;
            break;
        case 1:
            PC = func_5828030752_op1;
            break;
        case 2:
            PC = func_5828030752_op2;
            break;
        case 3:
            PC = func_5828030752_op3;
            break;
        case 4:
            PC = func_5828030752_op4;
            break;
        case 5:
            PC = func_5828030752_op5;
            break;
        case 6:
            PC = func_5828030752_op6;
            break;
        case 7:
            PC = func_5828030752_op7;
            break;
        case 8:
            PC = func_5828030752_op8;
            break;
        case 9:
            PC = func_5828030752_op9;
            break;
    }
    goto **PC;
func_5828030464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5828030464_op0;
            break;
        case 1:
            PC = func_5828030464_op1;
            break;
        case 2:
            PC = func_5828030464_op2;
            break;
    }
    goto **PC;
func_5828030112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5828030112_op0;
            break;
        case 1:
            PC = func_5828030112_op1;
            break;
        case 2:
            PC = func_5828030112_op2;
            break;
    }
    goto **PC;
func_5828029712:
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
            PC = func_5828029712_op0;
            break;
    }
    goto **PC;
func_5828030352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828030352_op0;
            break;
        case 1:
            PC = func_5828030352_op1;
            break;
    }
    goto **PC;
func_5828030880:
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
            PC = func_5828030880_op0;
            break;
    }
    goto **PC;
func_5828032512:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5828032512_op0;
            break;
        case 1:
            PC = func_5828032512_op1;
            break;
        case 2:
            PC = func_5828032512_op2;
            break;
        case 3:
            PC = func_5828032512_op3;
            break;
        case 4:
            PC = func_5828032512_op4;
            break;
        case 5:
            PC = func_5828032512_op5;
            break;
        case 6:
            PC = func_5828032512_op6;
            break;
        case 7:
            PC = func_5828032512_op7;
            break;
        case 8:
            PC = func_5828032512_op8;
            break;
        case 9:
            PC = func_5828032512_op9;
            break;
        case 10:
            PC = func_5828032512_op10;
            break;
        case 11:
            PC = func_5828032512_op11;
            break;
        case 12:
            PC = func_5828032512_op12;
            break;
        case 13:
            PC = func_5828032512_op13;
            break;
        case 14:
            PC = func_5828032512_op14;
            break;
        case 15:
            PC = func_5828032512_op15;
            break;
        case 16:
            PC = func_5828032512_op16;
            break;
        case 17:
            PC = func_5828032512_op17;
            break;
        case 18:
            PC = func_5828032512_op18;
            break;
        case 19:
            PC = func_5828032512_op19;
            break;
        case 20:
            PC = func_5828032512_op20;
            break;
        case 21:
            PC = func_5828032512_op21;
            break;
        case 22:
            PC = func_5828032512_op22;
            break;
        case 23:
            PC = func_5828032512_op23;
            break;
        case 24:
            PC = func_5828032512_op24;
            break;
        case 25:
            PC = func_5828032512_op25;
            break;
        case 26:
            PC = func_5828032512_op26;
            break;
        case 27:
            PC = func_5828032512_op27;
            break;
        case 28:
            PC = func_5828032512_op28;
            break;
        case 29:
            PC = func_5828032512_op29;
            break;
        case 30:
            PC = func_5828032512_op30;
            break;
        case 31:
            PC = func_5828032512_op31;
            break;
        case 32:
            PC = func_5828032512_op32;
            break;
        case 33:
            PC = func_5828032512_op33;
            break;
        case 34:
            PC = func_5828032512_op34;
            break;
        case 35:
            PC = func_5828032512_op35;
            break;
        case 36:
            PC = func_5828032512_op36;
            break;
        case 37:
            PC = func_5828032512_op37;
            break;
        case 38:
            PC = func_5828032512_op38;
            break;
        case 39:
            PC = func_5828032512_op39;
            break;
        case 40:
            PC = func_5828032512_op40;
            break;
        case 41:
            PC = func_5828032512_op41;
            break;
        case 42:
            PC = func_5828032512_op42;
            break;
        case 43:
            PC = func_5828032512_op43;
            break;
        case 44:
            PC = func_5828032512_op44;
            break;
        case 45:
            PC = func_5828032512_op45;
            break;
        case 46:
            PC = func_5828032512_op46;
            break;
        case 47:
            PC = func_5828032512_op47;
            break;
        case 48:
            PC = func_5828032512_op48;
            break;
        case 49:
            PC = func_5828032512_op49;
            break;
        case 50:
            PC = func_5828032512_op50;
            break;
        case 51:
            PC = func_5828032512_op51;
            break;
    }
    goto **PC;
func_5828030032:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828030032_op0;
            break;
        case 1:
            PC = func_5828030032_op1;
            break;
    }
    goto **PC;
func_5828031072:
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
            PC = func_5828031072_op0;
            break;
        case 1:
            PC = func_5828031072_op1;
            break;
    }
    goto **PC;
func_5828031280:
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
            PC = func_5828031280_op0;
            break;
    }
    goto **PC;
func_5828031200:
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
            PC = func_5828031200_op0;
            break;
    }
    goto **PC;
func_5828031712:
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
            PC = func_5828031712_op0;
            break;
        case 1:
            PC = func_5828031712_op1;
            break;
        case 2:
            PC = func_5828031712_op2;
            break;
        case 3:
            PC = func_5828031712_op3;
            break;
        case 4:
            PC = func_5828031712_op4;
            break;
        case 5:
            PC = func_5828031712_op5;
            break;
    }
    goto **PC;
func_5828032000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5828032000_op0;
            break;
        case 1:
            PC = func_5828032000_op1;
            break;
        case 2:
            PC = func_5828032000_op2;
            break;
    }
    goto **PC;
func_5828031552:
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
            PC = func_5828031552_op0;
            break;
        case 1:
            PC = func_5828031552_op1;
            break;
        case 2:
            PC = func_5828031552_op2;
            break;
    }
    goto **PC;
func_5828031472:
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
            PC = func_5828031472_op0;
            break;
    }
    goto **PC;
func_5828031936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828031936;
    goto **PC;
func_5828032256:
    extend(61);
    NEXT();
    goto **PC;
func_5828032384:
    extend(59);
    NEXT();
    goto **PC;
func_5828033536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828033536;
    goto **PC;
func_5828033664:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5828033792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828033792;
    goto **PC;
func_5828033920:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5828034048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828034048;
    goto **PC;
func_5828034176:
    extend(62);
    NEXT();
    goto **PC;
func_5828034336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828034336;
    goto **PC;
func_5828034464:
    extend(60);
    NEXT();
    goto **PC;
func_5828034624:
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
    PC = exp_5828034624;
    goto **PC;
func_5828034752:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5828034976:
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
    PC = exp_5828034976;
    goto **PC;
func_5828035104:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5828035280:
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
    PC = exp_5828035280;
    goto **PC;
func_5828032768:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5828033408:
    extend(48);
    NEXT();
    goto **PC;
func_5828032960:
    extend(49);
    NEXT();
    goto **PC;
func_5828035856:
    extend(50);
    NEXT();
    goto **PC;
func_5828035984:
    extend(51);
    NEXT();
    goto **PC;
func_5828036112:
    extend(52);
    NEXT();
    goto **PC;
func_5828036304:
    extend(53);
    NEXT();
    goto **PC;
func_5828036432:
    extend(54);
    NEXT();
    goto **PC;
func_5828036560:
    extend(55);
    NEXT();
    goto **PC;
func_5828036688:
    extend(56);
    NEXT();
    goto **PC;
func_5828036240:
    extend(57);
    NEXT();
    goto **PC;
func_5828032896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828032896;
    goto **PC;
func_5828037232:
    extend(43);
    NEXT();
    goto **PC;
func_5828033088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828033088;
    goto **PC;
func_5828033216:
    extend(45);
    NEXT();
    goto **PC;
func_5828037088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828037088;
    goto **PC;
func_5828037456:
    extend(40);
    NEXT();
    goto **PC;
func_5828037584:
    extend(41);
    NEXT();
    goto **PC;
func_5828031840:
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
    PC = exp_5828031840;
    goto **PC;
func_5828038192:
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
func_5828032576:
    extend(123);
    NEXT();
    goto **PC;
func_5828038448:
    extend(125);
    NEXT();
    goto **PC;
func_5828037792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828037792;
    goto **PC;
func_5828038752:
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
    PC = exp_5828038752;
    goto **PC;
func_5828038880:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5828040224:
    extend(97);
    NEXT();
    goto **PC;
func_5828040352:
    extend(98);
    NEXT();
    goto **PC;
func_5828040480:
    extend(99);
    NEXT();
    goto **PC;
func_5828040640:
    extend(100);
    NEXT();
    goto **PC;
func_5828040768:
    extend(101);
    NEXT();
    goto **PC;
func_5828040960:
    extend(102);
    NEXT();
    goto **PC;
func_5828041088:
    extend(103);
    NEXT();
    goto **PC;
func_5828035408:
    extend(104);
    NEXT();
    goto **PC;
func_5828035536:
    extend(105);
    NEXT();
    goto **PC;
func_5828040896:
    extend(106);
    NEXT();
    goto **PC;
func_5828041152:
    extend(107);
    NEXT();
    goto **PC;
func_5828041280:
    extend(108);
    NEXT();
    goto **PC;
func_5828041408:
    extend(109);
    NEXT();
    goto **PC;
func_5828041536:
    extend(110);
    NEXT();
    goto **PC;
func_5828041664:
    extend(111);
    NEXT();
    goto **PC;
func_5828041792:
    extend(112);
    NEXT();
    goto **PC;
func_5828041920:
    extend(113);
    NEXT();
    goto **PC;
func_5828035664:
    extend(114);
    NEXT();
    goto **PC;
func_5828042304:
    extend(115);
    NEXT();
    goto **PC;
func_5828042432:
    extend(116);
    NEXT();
    goto **PC;
func_5828042560:
    extend(117);
    NEXT();
    goto **PC;
func_5828042688:
    extend(118);
    NEXT();
    goto **PC;
func_5828042816:
    extend(119);
    NEXT();
    goto **PC;
func_5828042944:
    extend(120);
    NEXT();
    goto **PC;
func_5828043072:
    extend(121);
    NEXT();
    goto **PC;
func_5828043200:
    extend(122);
    NEXT();
    goto **PC;
func_5828043328:
    extend(65);
    NEXT();
    goto **PC;
func_5828043456:
    extend(66);
    NEXT();
    goto **PC;
func_5828043584:
    extend(67);
    NEXT();
    goto **PC;
func_5828043712:
    extend(68);
    NEXT();
    goto **PC;
func_5828043840:
    extend(69);
    NEXT();
    goto **PC;
func_5828043968:
    extend(70);
    NEXT();
    goto **PC;
func_5828044096:
    extend(71);
    NEXT();
    goto **PC;
func_5828042048:
    extend(72);
    NEXT();
    goto **PC;
func_5828042176:
    extend(73);
    NEXT();
    goto **PC;
func_5828044736:
    extend(74);
    NEXT();
    goto **PC;
func_5828044864:
    extend(75);
    NEXT();
    goto **PC;
func_5828044992:
    extend(76);
    NEXT();
    goto **PC;
func_5828045120:
    extend(77);
    NEXT();
    goto **PC;
func_5828045248:
    extend(78);
    NEXT();
    goto **PC;
func_5828045376:
    extend(79);
    NEXT();
    goto **PC;
func_5828045504:
    extend(80);
    NEXT();
    goto **PC;
func_5828045632:
    extend(81);
    NEXT();
    goto **PC;
func_5828045760:
    extend(82);
    NEXT();
    goto **PC;
func_5828045888:
    extend(83);
    NEXT();
    goto **PC;
func_5828046016:
    extend(84);
    NEXT();
    goto **PC;
func_5828046144:
    extend(85);
    NEXT();
    goto **PC;
func_5828046272:
    extend(86);
    NEXT();
    goto **PC;
func_5828046400:
    extend(87);
    NEXT();
    goto **PC;
func_5828046528:
    extend(88);
    NEXT();
    goto **PC;
func_5828046656:
    extend(89);
    NEXT();
    goto **PC;
func_5829050528:
    extend(90);
    NEXT();
    goto **PC;
func_5829050800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5829050800;
    goto **PC;
func_5829051008:
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
    PC = exp_5829051008;
    goto **PC;
func_5829051248:
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
    PC = exp_5829051248;
    goto **PC;
func_5829051376:
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
func_5829051168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5829051168;
    goto **PC;
func_5829051984:
    extend(42);
    NEXT();
    goto **PC;
func_5829050688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5829050688;
    goto **PC;
func_5829052176:
    extend(47);
    NEXT();
    goto **PC;
func_5829052416:
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
    PC = exp_5829052416;
    goto **PC;
func_5829052544:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5829052672:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5829052800:
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
    PC = exp_5829052800;
    goto **PC;
func_5829052928:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5829053088:
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
    PC = exp_5829053088;
    goto **PC;
func_5829053216:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5829051584:
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
    PC = exp_5829051584;
    goto **PC;
func_5829051824:
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
    PC = func_5828031200_op0;
    goto **PC;
}
