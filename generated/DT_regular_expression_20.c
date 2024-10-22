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
    static void *func_5106594880_op0[2] = { &&func_5106614624, &&RETURN };
    static void *func_5106594880_op1[2] = { &&func_5106613984, &&RETURN };
    static void *func_5106611392_op0[2] = { &&func_5106614544, &&RETURN };
    static void *func_5106611600_op0[2] = { &&func_5106614288, &&RETURN };
    static void *func_5106611600_op1[2] = { &&func_5106612976, &&RETURN };
    static void *func_5106611600_op2[2] = { &&func_5106612592, &&RETURN };
    static void *func_5106611808_op0[2] = { &&func_5106612848, &&RETURN };
    static void *func_5106611808_op1[2] = { &&func_5106614816, &&RETURN };
    static void *func_5106611264_op0[2] = { &&func_5106615264, &&RETURN };
    static void *func_5106612464_op0[2] = { &&func_5106615760, &&RETURN };
    static void *func_5106612464_op1[2] = { &&func_5106615888, &&RETURN };
    static void *func_5106612464_op2[2] = { &&func_5106616016, &&RETURN };
    static void *func_5106612464_op3[2] = { &&func_5106616176, &&RETURN };
    static void *func_5106612464_op4[2] = { &&func_5106616304, &&RETURN };
    static void *func_5106612464_op5[2] = { &&func_5106613664, &&RETURN };
    static void *func_5106612464_op6[2] = { &&func_5106616880, &&RETURN };
    static void *func_5106612464_op7[2] = { &&func_5106617008, &&RETURN };
    static void *func_5106612464_op8[2] = { &&func_5106617136, &&RETURN };
    static void *func_5106612464_op9[2] = { &&func_5106613600, &&RETURN };
    static void *func_5106612592_op0[2] = { &&func_5106612144, &&RETURN };
    static void *func_5106612592_op1[2] = { &&func_5106611392, &&RETURN };
    static void *func_5106612592_op2[2] = { &&func_5106612368, &&RETURN };
    static void *func_5106612592_op3[2] = { &&func_5106611808, &&RETURN };
    static void *func_5106612592_op4[2] = { &&func_5106613856, &&RETURN };
    static void *func_5106612368_op0[2] = { &&func_5106615456, &&RETURN };
    static void *func_5106612144_op0[2] = { &&func_5106617456, &&RETURN };
    static void *func_5106614160_op0[2] = { &&func_5106619184, &&RETURN };
    static void *func_5106614160_op1[2] = { &&func_5106619312, &&RETURN };
    static void *func_5106614160_op2[2] = { &&func_5106619440, &&RETURN };
    static void *func_5106614160_op3[2] = { &&func_5106619600, &&RETURN };
    static void *func_5106614160_op4[2] = { &&func_5106619728, &&RETURN };
    static void *func_5106614160_op5[2] = { &&func_5106619920, &&RETURN };
    static void *func_5106614160_op6[2] = { &&func_5106620048, &&RETURN };
    static void *func_5106614160_op7[2] = { &&func_5106620176, &&RETURN };
    static void *func_5106614160_op8[2] = { &&func_5106620304, &&RETURN };
    static void *func_5106614160_op9[2] = { &&func_5106619856, &&RETURN };
    static void *func_5106614160_op10[2] = { &&func_5106620624, &&RETURN };
    static void *func_5106614160_op11[2] = { &&func_5106620752, &&RETURN };
    static void *func_5106614160_op12[2] = { &&func_5106620880, &&RETURN };
    static void *func_5106614160_op13[2] = { &&func_5106621008, &&RETURN };
    static void *func_5106614160_op14[2] = { &&func_5106621136, &&RETURN };
    static void *func_5106614160_op15[2] = { &&func_5106621264, &&RETURN };
    static void *func_5106614160_op16[2] = { &&func_5106621392, &&RETURN };
    static void *func_5106614160_op17[2] = { &&func_5106620432, &&RETURN };
    static void *func_5106614160_op18[2] = { &&func_5106621776, &&RETURN };
    static void *func_5106614160_op19[2] = { &&func_5106621904, &&RETURN };
    static void *func_5106614160_op20[2] = { &&func_5106622032, &&RETURN };
    static void *func_5106614160_op21[2] = { &&func_5106622160, &&RETURN };
    static void *func_5106614160_op22[2] = { &&func_5106622288, &&RETURN };
    static void *func_5106614160_op23[2] = { &&func_5106616432, &&RETURN };
    static void *func_5106614160_op24[2] = { &&func_5106616560, &&RETURN };
    static void *func_5106614160_op25[2] = { &&func_5106616688, &&RETURN };
    static void *func_5106614160_op26[2] = { &&func_5106616816, &&RETURN };
    static void *func_5106614160_op27[2] = { &&func_5106622416, &&RETURN };
    static void *func_5106614160_op28[2] = { &&func_5106622544, &&RETURN };
    static void *func_5106614160_op29[2] = { &&func_5106622672, &&RETURN };
    static void *func_5106614160_op30[2] = { &&func_5106622800, &&RETURN };
    static void *func_5106614160_op31[2] = { &&func_5106622928, &&RETURN };
    static void *func_5106614160_op32[2] = { &&func_5106623056, &&RETURN };
    static void *func_5106614160_op33[2] = { &&func_5106621520, &&RETURN };
    static void *func_5106614160_op34[2] = { &&func_5106621648, &&RETURN };
    static void *func_5106614160_op35[2] = { &&func_5106623696, &&RETURN };
    static void *func_5106614160_op36[2] = { &&func_5106623824, &&RETURN };
    static void *func_5106614160_op37[2] = { &&func_5106623952, &&RETURN };
    static void *func_5106614160_op38[2] = { &&func_5106624080, &&RETURN };
    static void *func_5106614160_op39[2] = { &&func_5106624208, &&RETURN };
    static void *func_5106614160_op40[2] = { &&func_5106624336, &&RETURN };
    static void *func_5106614160_op41[2] = { &&func_5106624464, &&RETURN };
    static void *func_5106614160_op42[2] = { &&func_5106624592, &&RETURN };
    static void *func_5106614160_op43[2] = { &&func_5106624720, &&RETURN };
    static void *func_5106614160_op44[2] = { &&func_5106624848, &&RETURN };
    static void *func_5106614160_op45[2] = { &&func_5106624976, &&RETURN };
    static void *func_5106614160_op46[2] = { &&func_5106625104, &&RETURN };
    static void *func_5106614160_op47[2] = { &&func_5106625232, &&RETURN };
    static void *func_5106614160_op48[2] = { &&func_5106625360, &&RETURN };
    static void *func_5106614160_op49[2] = { &&func_5106625488, &&RETURN };
    static void *func_5106614160_op50[2] = { &&func_5106625616, &&RETURN };
    static void *func_5106614160_op51[2] = { &&func_5106625744, &&RETURN };
    static void *func_5106613280_op0[2] = { &&func_5106615136, &&RETURN };
    static void *func_5106613280_op1[2] = { &&func_5106614544, &&RETURN };
    static void *func_5106613280_op2[2] = { &&func_5106618272, &&RETURN };
    static void *func_5106613280_op3[2] = { &&func_5106618432, &&RETURN };
    static void *func_5106613280_op4[2] = { &&func_5106618560, &&RETURN };
    static void *func_5106613280_op5[2] = { &&func_5106618752, &&RETURN };
    static void *func_5106613280_op6[2] = { &&func_5106615456, &&RETURN };
    static void *func_5106613280_op7[2] = { &&func_5106618880, &&RETURN };
    static void *func_5106613280_op8[2] = { &&func_5106617584, &&RETURN };
    static void *func_5106613280_op9[2] = { &&func_5106617712, &&RETURN };
    static void *func_5106613280_op10[2] = { &&func_5106618688, &&RETURN };
    static void *func_5106613280_op11[2] = { &&func_5106625936, &&RETURN };
    static void *func_5106613280_op12[2] = { &&func_5106626064, &&RETURN };
    static void *func_5106613280_op13[2] = { &&func_5106626192, &&RETURN };
    static void *func_5106612720_op0[2] = { &&func_5106617840, &&RETURN };
    static void *func_5106612848_op0[2] = { &&func_5106614160, &&RETURN };
    static void *func_5106612848_op1[2] = { &&func_5106612464, &&RETURN };
    static void *func_5106612848_op2[2] = { &&func_5106614944, &&RETURN };
    static void *func_5106612976_op0[2] = { &&func_5106615664, &&RETURN };
    static void *func_5106613104_op0[2] = { &&func_5106626320, &&RETURN };
    static void *func_5106613408_op0[2] = { &&func_5106626448, &&RETURN };
    static void *func_5106612064_op0[2] = { &&func_5106613408, &&RETURN };
    static void *func_5106612064_op1[2] = { &&func_5106611808, &&RETURN };
    static void *func_5106612208_op0[2] = { &&func_5106612064, &&RETURN };
    static void *func_5106612208_op1[2] = { &&func_5106615584, &&RETURN };
    static void *func_5106613856_op0[2] = { &&func_5106613104, &&RETURN };
    static void *func_5106613856_op1[2] = { &&func_5106612720, &&RETURN };
    static void *func_5106613984_op0[2] = { &&func_5106611264, &&RETURN };
    static void *func_5106613984_op1[2] = { &&func_5106611600, &&RETURN };
    static void *func_5106614288_op0[2] = { &&func_5106626704, &&RETURN };
    static void *func_5106614416_op0[2] = { &&func_5106594880, &&HALT };
    static void *func_5106614944_op0[2] = { &&func_5106627360, &&RETURN };
    static void *func_5106614944_op1[2] = { &&func_5106626576, &&RETURN };
    static void *func_5106614944_op2[2] = { &&func_5106627504, &&RETURN };
    static void *func_5106614944_op3[2] = { &&func_5106627664, &&RETURN };
    static void *func_5106614944_op4[2] = { &&func_5106627792, &&RETURN };
    static void *func_5106614944_op5[2] = { &&func_5106627984, &&RETURN };
    static void *func_5106614944_op6[2] = { &&func_5106628112, &&RETURN };
    static void *func_5106614944_op7[2] = { &&func_5106628240, &&RETURN };
    static void *func_5106614944_op8[2] = { &&func_5106628368, &&RETURN };
    static void *func_5106614944_op9[2] = { &&func_5106627920, &&RETURN };
    static void *func_5106614944_op10[2] = { &&func_5106628688, &&RETURN };
    static void *func_5106614624_op0[2] = { &&func_5106626992, &&RETURN };
    static void *exp_5106614816[3] = {&&func_5106615136, &&func_5106613280, &&RETURN };
    static void *exp_5106615264[3] = {&&func_5106613984, &&func_5106611600, &&RETURN };
    static void *exp_5106617456[4] = {&&func_5106617584, &&func_5106594880, &&func_5106617712, &&RETURN };
    static void *exp_5106617840[4] = {&&func_5106617968, &&func_5106612208, &&func_5106625936, &&RETURN };
    static void *exp_5106615664[3] = {&&func_5106612592, &&func_5106618432, &&RETURN };
    static void *exp_5106626320[4] = {&&func_5106618688, &&func_5106612208, &&func_5106625936, &&RETURN };
    static void *exp_5106626448[4] = {&&func_5106611808, &&func_5106626576, &&func_5106611808, &&RETURN };
    static void *exp_5106615584[3] = {&&func_5106612064, &&func_5106612208, &&RETURN };
    static void *exp_5106626704[3] = {&&func_5106612592, &&func_5106618272, &&RETURN };
    static void *exp_5106626992[4] = {&&func_5106594880, &&func_5106618880, &&func_5106613984, &&RETURN };

func_5106594880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106594880_op0;
            break;
        case 1:
            PC = func_5106594880_op1;
            break;
    }
    goto **PC;
func_5106611392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106611392_op0;
            break;
    }
    goto **PC;
func_5106611600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106611600_op0;
            break;
        case 1:
            PC = func_5106611600_op1;
            break;
        case 2:
            PC = func_5106611600_op2;
            break;
    }
    goto **PC;
func_5106611808:
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
            PC = func_5106611808_op0;
            break;
        case 1:
            PC = func_5106611808_op1;
            break;
    }
    goto **PC;
func_5106611264:
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
            PC = func_5106611264_op0;
            break;
    }
    goto **PC;
func_5106612464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612464_op0;
            break;
        case 1:
            PC = func_5106612464_op1;
            break;
        case 2:
            PC = func_5106612464_op2;
            break;
        case 3:
            PC = func_5106612464_op3;
            break;
        case 4:
            PC = func_5106612464_op4;
            break;
        case 5:
            PC = func_5106612464_op5;
            break;
        case 6:
            PC = func_5106612464_op6;
            break;
        case 7:
            PC = func_5106612464_op7;
            break;
        case 8:
            PC = func_5106612464_op8;
            break;
        case 9:
            PC = func_5106612464_op9;
            break;
    }
    goto **PC;
func_5106612592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612592_op0;
            break;
        case 1:
            PC = func_5106612592_op1;
            break;
        case 2:
            PC = func_5106612592_op2;
            break;
        case 3:
            PC = func_5106612592_op3;
            break;
        case 4:
            PC = func_5106612592_op4;
            break;
    }
    goto **PC;
func_5106612368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612368_op0;
            break;
    }
    goto **PC;
func_5106612144:
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
            PC = func_5106612144_op0;
            break;
    }
    goto **PC;
func_5106614160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614160_op0;
            break;
        case 1:
            PC = func_5106614160_op1;
            break;
        case 2:
            PC = func_5106614160_op2;
            break;
        case 3:
            PC = func_5106614160_op3;
            break;
        case 4:
            PC = func_5106614160_op4;
            break;
        case 5:
            PC = func_5106614160_op5;
            break;
        case 6:
            PC = func_5106614160_op6;
            break;
        case 7:
            PC = func_5106614160_op7;
            break;
        case 8:
            PC = func_5106614160_op8;
            break;
        case 9:
            PC = func_5106614160_op9;
            break;
        case 10:
            PC = func_5106614160_op10;
            break;
        case 11:
            PC = func_5106614160_op11;
            break;
        case 12:
            PC = func_5106614160_op12;
            break;
        case 13:
            PC = func_5106614160_op13;
            break;
        case 14:
            PC = func_5106614160_op14;
            break;
        case 15:
            PC = func_5106614160_op15;
            break;
        case 16:
            PC = func_5106614160_op16;
            break;
        case 17:
            PC = func_5106614160_op17;
            break;
        case 18:
            PC = func_5106614160_op18;
            break;
        case 19:
            PC = func_5106614160_op19;
            break;
        case 20:
            PC = func_5106614160_op20;
            break;
        case 21:
            PC = func_5106614160_op21;
            break;
        case 22:
            PC = func_5106614160_op22;
            break;
        case 23:
            PC = func_5106614160_op23;
            break;
        case 24:
            PC = func_5106614160_op24;
            break;
        case 25:
            PC = func_5106614160_op25;
            break;
        case 26:
            PC = func_5106614160_op26;
            break;
        case 27:
            PC = func_5106614160_op27;
            break;
        case 28:
            PC = func_5106614160_op28;
            break;
        case 29:
            PC = func_5106614160_op29;
            break;
        case 30:
            PC = func_5106614160_op30;
            break;
        case 31:
            PC = func_5106614160_op31;
            break;
        case 32:
            PC = func_5106614160_op32;
            break;
        case 33:
            PC = func_5106614160_op33;
            break;
        case 34:
            PC = func_5106614160_op34;
            break;
        case 35:
            PC = func_5106614160_op35;
            break;
        case 36:
            PC = func_5106614160_op36;
            break;
        case 37:
            PC = func_5106614160_op37;
            break;
        case 38:
            PC = func_5106614160_op38;
            break;
        case 39:
            PC = func_5106614160_op39;
            break;
        case 40:
            PC = func_5106614160_op40;
            break;
        case 41:
            PC = func_5106614160_op41;
            break;
        case 42:
            PC = func_5106614160_op42;
            break;
        case 43:
            PC = func_5106614160_op43;
            break;
        case 44:
            PC = func_5106614160_op44;
            break;
        case 45:
            PC = func_5106614160_op45;
            break;
        case 46:
            PC = func_5106614160_op46;
            break;
        case 47:
            PC = func_5106614160_op47;
            break;
        case 48:
            PC = func_5106614160_op48;
            break;
        case 49:
            PC = func_5106614160_op49;
            break;
        case 50:
            PC = func_5106614160_op50;
            break;
        case 51:
            PC = func_5106614160_op51;
            break;
    }
    goto **PC;
func_5106613280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5106613280_op0;
            break;
        case 1:
            PC = func_5106613280_op1;
            break;
        case 2:
            PC = func_5106613280_op2;
            break;
        case 3:
            PC = func_5106613280_op3;
            break;
        case 4:
            PC = func_5106613280_op4;
            break;
        case 5:
            PC = func_5106613280_op5;
            break;
        case 6:
            PC = func_5106613280_op6;
            break;
        case 7:
            PC = func_5106613280_op7;
            break;
        case 8:
            PC = func_5106613280_op8;
            break;
        case 9:
            PC = func_5106613280_op9;
            break;
        case 10:
            PC = func_5106613280_op10;
            break;
        case 11:
            PC = func_5106613280_op11;
            break;
        case 12:
            PC = func_5106613280_op12;
            break;
        case 13:
            PC = func_5106613280_op13;
            break;
    }
    goto **PC;
func_5106612720:
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
            PC = func_5106612720_op0;
            break;
    }
    goto **PC;
func_5106612848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5106612848_op0;
            break;
        case 1:
            PC = func_5106612848_op1;
            break;
        case 2:
            PC = func_5106612848_op2;
            break;
    }
    goto **PC;
func_5106612976:
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
            PC = func_5106612976_op0;
            break;
    }
    goto **PC;
func_5106613104:
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
            PC = func_5106613104_op0;
            break;
    }
    goto **PC;
func_5106613408:
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
            PC = func_5106613408_op0;
            break;
    }
    goto **PC;
func_5106612064:
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
            PC = func_5106612064_op0;
            break;
        case 1:
            PC = func_5106612064_op1;
            break;
    }
    goto **PC;
func_5106612208:
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
            PC = func_5106612208_op0;
            break;
        case 1:
            PC = func_5106612208_op1;
            break;
    }
    goto **PC;
func_5106613856:
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
            PC = func_5106613856_op0;
            break;
        case 1:
            PC = func_5106613856_op1;
            break;
    }
    goto **PC;
func_5106613984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106613984_op0;
            break;
        case 1:
            PC = func_5106613984_op1;
            break;
    }
    goto **PC;
func_5106614288:
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
            PC = func_5106614288_op0;
            break;
    }
    goto **PC;
func_5106614416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614416_op0;
            break;
    }
    goto **PC;
func_5106614944:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5106614944_op0;
            break;
        case 1:
            PC = func_5106614944_op1;
            break;
        case 2:
            PC = func_5106614944_op2;
            break;
        case 3:
            PC = func_5106614944_op3;
            break;
        case 4:
            PC = func_5106614944_op4;
            break;
        case 5:
            PC = func_5106614944_op5;
            break;
        case 6:
            PC = func_5106614944_op6;
            break;
        case 7:
            PC = func_5106614944_op7;
            break;
        case 8:
            PC = func_5106614944_op8;
            break;
        case 9:
            PC = func_5106614944_op9;
            break;
        case 10:
            PC = func_5106614944_op10;
            break;
    }
    goto **PC;
func_5106614624:
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
            PC = func_5106614624_op0;
            break;
    }
    goto **PC;
func_5106614544:
    extend(46);
    NEXT();
    goto **PC;
func_5106614816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106614816;
    goto **PC;
func_5106615136:
    extend(92);
    NEXT();
    goto **PC;
func_5106615264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106615264;
    goto **PC;
func_5106615760:
    extend(48);
    NEXT();
    goto **PC;
func_5106615888:
    extend(49);
    NEXT();
    goto **PC;
func_5106616016:
    extend(50);
    NEXT();
    goto **PC;
func_5106616176:
    extend(51);
    NEXT();
    goto **PC;
func_5106616304:
    extend(52);
    NEXT();
    goto **PC;
func_5106613664:
    extend(53);
    NEXT();
    goto **PC;
func_5106616880:
    extend(54);
    NEXT();
    goto **PC;
func_5106617008:
    extend(55);
    NEXT();
    goto **PC;
func_5106617136:
    extend(56);
    NEXT();
    goto **PC;
func_5106613600:
    extend(57);
    NEXT();
    goto **PC;
func_5106615456:
    extend(36);
    NEXT();
    goto **PC;
func_5106617456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106617456;
    goto **PC;
func_5106617584:
    extend(40);
    NEXT();
    goto **PC;
func_5106617712:
    extend(41);
    NEXT();
    goto **PC;
func_5106619184:
    extend(97);
    NEXT();
    goto **PC;
func_5106619312:
    extend(98);
    NEXT();
    goto **PC;
func_5106619440:
    extend(99);
    NEXT();
    goto **PC;
func_5106619600:
    extend(100);
    NEXT();
    goto **PC;
func_5106619728:
    extend(101);
    NEXT();
    goto **PC;
func_5106619920:
    extend(102);
    NEXT();
    goto **PC;
func_5106620048:
    extend(103);
    NEXT();
    goto **PC;
func_5106620176:
    extend(104);
    NEXT();
    goto **PC;
func_5106620304:
    extend(105);
    NEXT();
    goto **PC;
func_5106619856:
    extend(106);
    NEXT();
    goto **PC;
func_5106620624:
    extend(107);
    NEXT();
    goto **PC;
func_5106620752:
    extend(108);
    NEXT();
    goto **PC;
func_5106620880:
    extend(109);
    NEXT();
    goto **PC;
func_5106621008:
    extend(110);
    NEXT();
    goto **PC;
func_5106621136:
    extend(111);
    NEXT();
    goto **PC;
func_5106621264:
    extend(112);
    NEXT();
    goto **PC;
func_5106621392:
    extend(113);
    NEXT();
    goto **PC;
func_5106620432:
    extend(114);
    NEXT();
    goto **PC;
func_5106621776:
    extend(115);
    NEXT();
    goto **PC;
func_5106621904:
    extend(116);
    NEXT();
    goto **PC;
func_5106622032:
    extend(117);
    NEXT();
    goto **PC;
func_5106622160:
    extend(118);
    NEXT();
    goto **PC;
func_5106622288:
    extend(119);
    NEXT();
    goto **PC;
func_5106616432:
    extend(120);
    NEXT();
    goto **PC;
func_5106616560:
    extend(121);
    NEXT();
    goto **PC;
func_5106616688:
    extend(122);
    NEXT();
    goto **PC;
func_5106616816:
    extend(65);
    NEXT();
    goto **PC;
func_5106622416:
    extend(66);
    NEXT();
    goto **PC;
func_5106622544:
    extend(67);
    NEXT();
    goto **PC;
func_5106622672:
    extend(68);
    NEXT();
    goto **PC;
func_5106622800:
    extend(69);
    NEXT();
    goto **PC;
func_5106622928:
    extend(70);
    NEXT();
    goto **PC;
func_5106623056:
    extend(71);
    NEXT();
    goto **PC;
func_5106621520:
    extend(72);
    NEXT();
    goto **PC;
func_5106621648:
    extend(73);
    NEXT();
    goto **PC;
func_5106623696:
    extend(74);
    NEXT();
    goto **PC;
func_5106623824:
    extend(75);
    NEXT();
    goto **PC;
func_5106623952:
    extend(76);
    NEXT();
    goto **PC;
func_5106624080:
    extend(77);
    NEXT();
    goto **PC;
func_5106624208:
    extend(78);
    NEXT();
    goto **PC;
func_5106624336:
    extend(79);
    NEXT();
    goto **PC;
func_5106624464:
    extend(80);
    NEXT();
    goto **PC;
func_5106624592:
    extend(81);
    NEXT();
    goto **PC;
func_5106624720:
    extend(82);
    NEXT();
    goto **PC;
func_5106624848:
    extend(83);
    NEXT();
    goto **PC;
func_5106624976:
    extend(84);
    NEXT();
    goto **PC;
func_5106625104:
    extend(85);
    NEXT();
    goto **PC;
func_5106625232:
    extend(86);
    NEXT();
    goto **PC;
func_5106625360:
    extend(87);
    NEXT();
    goto **PC;
func_5106625488:
    extend(88);
    NEXT();
    goto **PC;
func_5106625616:
    extend(89);
    NEXT();
    goto **PC;
func_5106625744:
    extend(90);
    NEXT();
    goto **PC;
func_5106618272:
    extend(42);
    NEXT();
    goto **PC;
func_5106618432:
    extend(43);
    NEXT();
    goto **PC;
func_5106618560:
    extend(63);
    NEXT();
    goto **PC;
func_5106618752:
    extend(94);
    NEXT();
    goto **PC;
func_5106618880:
    extend(124);
    NEXT();
    goto **PC;
func_5106618688:
    extend(91);
    NEXT();
    goto **PC;
func_5106625936:
    extend(93);
    NEXT();
    goto **PC;
func_5106626064:
    extend(123);
    NEXT();
    goto **PC;
func_5106626192:
    extend(125);
    NEXT();
    goto **PC;
func_5106617840:
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
    PC = exp_5106617840;
    goto **PC;
func_5106617968:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5106615664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106615664;
    goto **PC;
func_5106626320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106626320;
    goto **PC;
func_5106626448:
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
    PC = exp_5106626448;
    goto **PC;
func_5106626576:
    extend(45);
    NEXT();
    goto **PC;
func_5106615584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106615584;
    goto **PC;
func_5106626704:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106626704;
    goto **PC;
func_5106627360:
    extend(95);
    NEXT();
    goto **PC;
func_5106627504:
    extend(64);
    NEXT();
    goto **PC;
func_5106627664:
    extend(35);
    NEXT();
    goto **PC;
func_5106627792:
    extend(37);
    NEXT();
    goto **PC;
func_5106627984:
    extend(38);
    NEXT();
    goto **PC;
func_5106628112:
    extend(61);
    NEXT();
    goto **PC;
func_5106628240:
    extend(126);
    NEXT();
    goto **PC;
func_5106628368:
    extend(96);
    NEXT();
    goto **PC;
func_5106627920:
    extend(39);
    NEXT();
    goto **PC;
func_5106628688:
    extend(34);
    NEXT();
    goto **PC;
func_5106626992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106626992;
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
    PC = func_5106614416_op0;
    goto **PC;
}
