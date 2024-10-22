#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 50
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
    static void *func_5811237952_op0[2] = { &&func_5811257696, &&RETURN };
    static void *func_5811237952_op1[2] = { &&func_5811257056, &&RETURN };
    static void *func_5811254464_op0[2] = { &&func_5811257616, &&RETURN };
    static void *func_5811254672_op0[2] = { &&func_5811257360, &&RETURN };
    static void *func_5811254672_op1[2] = { &&func_5811256048, &&RETURN };
    static void *func_5811254672_op2[2] = { &&func_5811255664, &&RETURN };
    static void *func_5811254880_op0[2] = { &&func_5811255920, &&RETURN };
    static void *func_5811254880_op1[2] = { &&func_5811257888, &&RETURN };
    static void *func_5811254336_op0[2] = { &&func_5811258336, &&RETURN };
    static void *func_5811255536_op0[2] = { &&func_5811258832, &&RETURN };
    static void *func_5811255536_op1[2] = { &&func_5811258960, &&RETURN };
    static void *func_5811255536_op2[2] = { &&func_5811259088, &&RETURN };
    static void *func_5811255536_op3[2] = { &&func_5811259248, &&RETURN };
    static void *func_5811255536_op4[2] = { &&func_5811259376, &&RETURN };
    static void *func_5811255536_op5[2] = { &&func_5811256736, &&RETURN };
    static void *func_5811255536_op6[2] = { &&func_5811259952, &&RETURN };
    static void *func_5811255536_op7[2] = { &&func_5811260080, &&RETURN };
    static void *func_5811255536_op8[2] = { &&func_5811260208, &&RETURN };
    static void *func_5811255536_op9[2] = { &&func_5811256672, &&RETURN };
    static void *func_5811255664_op0[2] = { &&func_5811255216, &&RETURN };
    static void *func_5811255664_op1[2] = { &&func_5811254464, &&RETURN };
    static void *func_5811255664_op2[2] = { &&func_5811255440, &&RETURN };
    static void *func_5811255664_op3[2] = { &&func_5811254880, &&RETURN };
    static void *func_5811255664_op4[2] = { &&func_5811256928, &&RETURN };
    static void *func_5811255440_op0[2] = { &&func_5811258528, &&RETURN };
    static void *func_5811255216_op0[2] = { &&func_5811260528, &&RETURN };
    static void *func_5811257232_op0[2] = { &&func_5811262256, &&RETURN };
    static void *func_5811257232_op1[2] = { &&func_5811262384, &&RETURN };
    static void *func_5811257232_op2[2] = { &&func_5811262512, &&RETURN };
    static void *func_5811257232_op3[2] = { &&func_5811262672, &&RETURN };
    static void *func_5811257232_op4[2] = { &&func_5811262800, &&RETURN };
    static void *func_5811257232_op5[2] = { &&func_5811262992, &&RETURN };
    static void *func_5811257232_op6[2] = { &&func_5811263120, &&RETURN };
    static void *func_5811257232_op7[2] = { &&func_5811263248, &&RETURN };
    static void *func_5811257232_op8[2] = { &&func_5811263376, &&RETURN };
    static void *func_5811257232_op9[2] = { &&func_5811262928, &&RETURN };
    static void *func_5811257232_op10[2] = { &&func_5811263696, &&RETURN };
    static void *func_5811257232_op11[2] = { &&func_5811263824, &&RETURN };
    static void *func_5811257232_op12[2] = { &&func_5811263952, &&RETURN };
    static void *func_5811257232_op13[2] = { &&func_5811264080, &&RETURN };
    static void *func_5811257232_op14[2] = { &&func_5811264208, &&RETURN };
    static void *func_5811257232_op15[2] = { &&func_5811264336, &&RETURN };
    static void *func_5811257232_op16[2] = { &&func_5811264464, &&RETURN };
    static void *func_5811257232_op17[2] = { &&func_5811263504, &&RETURN };
    static void *func_5811257232_op18[2] = { &&func_5811264848, &&RETURN };
    static void *func_5811257232_op19[2] = { &&func_5811264976, &&RETURN };
    static void *func_5811257232_op20[2] = { &&func_5811265104, &&RETURN };
    static void *func_5811257232_op21[2] = { &&func_5811265232, &&RETURN };
    static void *func_5811257232_op22[2] = { &&func_5811265360, &&RETURN };
    static void *func_5811257232_op23[2] = { &&func_5811259504, &&RETURN };
    static void *func_5811257232_op24[2] = { &&func_5811259632, &&RETURN };
    static void *func_5811257232_op25[2] = { &&func_5811259760, &&RETURN };
    static void *func_5811257232_op26[2] = { &&func_5811259888, &&RETURN };
    static void *func_5811257232_op27[2] = { &&func_5811265488, &&RETURN };
    static void *func_5811257232_op28[2] = { &&func_5811265616, &&RETURN };
    static void *func_5811257232_op29[2] = { &&func_5811265744, &&RETURN };
    static void *func_5811257232_op30[2] = { &&func_5811265872, &&RETURN };
    static void *func_5811257232_op31[2] = { &&func_5811266000, &&RETURN };
    static void *func_5811257232_op32[2] = { &&func_5811266128, &&RETURN };
    static void *func_5811257232_op33[2] = { &&func_5811264592, &&RETURN };
    static void *func_5811257232_op34[2] = { &&func_5811264720, &&RETURN };
    static void *func_5811257232_op35[2] = { &&func_5811266768, &&RETURN };
    static void *func_5811257232_op36[2] = { &&func_5811266896, &&RETURN };
    static void *func_5811257232_op37[2] = { &&func_5811267024, &&RETURN };
    static void *func_5811257232_op38[2] = { &&func_5811267152, &&RETURN };
    static void *func_5811257232_op39[2] = { &&func_5811267280, &&RETURN };
    static void *func_5811257232_op40[2] = { &&func_5811267408, &&RETURN };
    static void *func_5811257232_op41[2] = { &&func_5811267536, &&RETURN };
    static void *func_5811257232_op42[2] = { &&func_5811267664, &&RETURN };
    static void *func_5811257232_op43[2] = { &&func_5811267792, &&RETURN };
    static void *func_5811257232_op44[2] = { &&func_5811267920, &&RETURN };
    static void *func_5811257232_op45[2] = { &&func_5811268048, &&RETURN };
    static void *func_5811257232_op46[2] = { &&func_5811268176, &&RETURN };
    static void *func_5811257232_op47[2] = { &&func_5811268304, &&RETURN };
    static void *func_5811257232_op48[2] = { &&func_5811268432, &&RETURN };
    static void *func_5811257232_op49[2] = { &&func_5811268560, &&RETURN };
    static void *func_5811257232_op50[2] = { &&func_5811268688, &&RETURN };
    static void *func_5811257232_op51[2] = { &&func_5811268816, &&RETURN };
    static void *func_5811256352_op0[2] = { &&func_5811258208, &&RETURN };
    static void *func_5811256352_op1[2] = { &&func_5811257616, &&RETURN };
    static void *func_5811256352_op2[2] = { &&func_5811261344, &&RETURN };
    static void *func_5811256352_op3[2] = { &&func_5811261504, &&RETURN };
    static void *func_5811256352_op4[2] = { &&func_5811261632, &&RETURN };
    static void *func_5811256352_op5[2] = { &&func_5811261824, &&RETURN };
    static void *func_5811256352_op6[2] = { &&func_5811258528, &&RETURN };
    static void *func_5811256352_op7[2] = { &&func_5811261952, &&RETURN };
    static void *func_5811256352_op8[2] = { &&func_5811260656, &&RETURN };
    static void *func_5811256352_op9[2] = { &&func_5811260784, &&RETURN };
    static void *func_5811256352_op10[2] = { &&func_5811261760, &&RETURN };
    static void *func_5811256352_op11[2] = { &&func_5811269008, &&RETURN };
    static void *func_5811256352_op12[2] = { &&func_5811269136, &&RETURN };
    static void *func_5811256352_op13[2] = { &&func_5811269264, &&RETURN };
    static void *func_5811255792_op0[2] = { &&func_5811260912, &&RETURN };
    static void *func_5811255920_op0[2] = { &&func_5811257232, &&RETURN };
    static void *func_5811255920_op1[2] = { &&func_5811255536, &&RETURN };
    static void *func_5811255920_op2[2] = { &&func_5811258016, &&RETURN };
    static void *func_5811256048_op0[2] = { &&func_5811258736, &&RETURN };
    static void *func_5811256176_op0[2] = { &&func_5811269392, &&RETURN };
    static void *func_5811256480_op0[2] = { &&func_5811269520, &&RETURN };
    static void *func_5811255136_op0[2] = { &&func_5811256480, &&RETURN };
    static void *func_5811255136_op1[2] = { &&func_5811254880, &&RETURN };
    static void *func_5811255280_op0[2] = { &&func_5811255136, &&RETURN };
    static void *func_5811255280_op1[2] = { &&func_5811258656, &&RETURN };
    static void *func_5811256928_op0[2] = { &&func_5811256176, &&RETURN };
    static void *func_5811256928_op1[2] = { &&func_5811255792, &&RETURN };
    static void *func_5811257056_op0[2] = { &&func_5811254336, &&RETURN };
    static void *func_5811257056_op1[2] = { &&func_5811254672, &&RETURN };
    static void *func_5811257360_op0[2] = { &&func_5811269776, &&RETURN };
    static void *func_5811257488_op0[2] = { &&func_5811237952, &&HALT };
    static void *func_5811258016_op0[2] = { &&func_5811270432, &&RETURN };
    static void *func_5811258016_op1[2] = { &&func_5811269648, &&RETURN };
    static void *func_5811258016_op2[2] = { &&func_5811270576, &&RETURN };
    static void *func_5811258016_op3[2] = { &&func_5811270736, &&RETURN };
    static void *func_5811258016_op4[2] = { &&func_5811270864, &&RETURN };
    static void *func_5811258016_op5[2] = { &&func_5811271056, &&RETURN };
    static void *func_5811258016_op6[2] = { &&func_5811271184, &&RETURN };
    static void *func_5811258016_op7[2] = { &&func_5811271312, &&RETURN };
    static void *func_5811258016_op8[2] = { &&func_5811271440, &&RETURN };
    static void *func_5811258016_op9[2] = { &&func_5811270992, &&RETURN };
    static void *func_5811258016_op10[2] = { &&func_5811271760, &&RETURN };
    static void *func_5811257696_op0[2] = { &&func_5811270064, &&RETURN };
    static void *exp_5811257888[3] = {&&func_5811258208, &&func_5811256352, &&RETURN };
    static void *exp_5811258336[3] = {&&func_5811257056, &&func_5811254672, &&RETURN };
    static void *exp_5811260528[4] = {&&func_5811260656, &&func_5811237952, &&func_5811260784, &&RETURN };
    static void *exp_5811260912[4] = {&&func_5811261040, &&func_5811255280, &&func_5811269008, &&RETURN };
    static void *exp_5811258736[3] = {&&func_5811255664, &&func_5811261504, &&RETURN };
    static void *exp_5811269392[4] = {&&func_5811261760, &&func_5811255280, &&func_5811269008, &&RETURN };
    static void *exp_5811269520[4] = {&&func_5811254880, &&func_5811269648, &&func_5811254880, &&RETURN };
    static void *exp_5811258656[3] = {&&func_5811255136, &&func_5811255280, &&RETURN };
    static void *exp_5811269776[3] = {&&func_5811255664, &&func_5811261344, &&RETURN };
    static void *exp_5811270064[4] = {&&func_5811237952, &&func_5811261952, &&func_5811257056, &&RETURN };

func_5811237952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5811237952_op0;
            break;
        case 1:
            PC = func_5811237952_op1;
            break;
    }
    goto **PC;
func_5811254464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811254464_op0;
            break;
    }
    goto **PC;
func_5811254672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5811254672_op0;
            break;
        case 1:
            PC = func_5811254672_op1;
            break;
        case 2:
            PC = func_5811254672_op2;
            break;
    }
    goto **PC;
func_5811254880:
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
            PC = func_5811254880_op0;
            break;
        case 1:
            PC = func_5811254880_op1;
            break;
    }
    goto **PC;
func_5811254336:
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
            PC = func_5811254336_op0;
            break;
    }
    goto **PC;
func_5811255536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5811255536_op0;
            break;
        case 1:
            PC = func_5811255536_op1;
            break;
        case 2:
            PC = func_5811255536_op2;
            break;
        case 3:
            PC = func_5811255536_op3;
            break;
        case 4:
            PC = func_5811255536_op4;
            break;
        case 5:
            PC = func_5811255536_op5;
            break;
        case 6:
            PC = func_5811255536_op6;
            break;
        case 7:
            PC = func_5811255536_op7;
            break;
        case 8:
            PC = func_5811255536_op8;
            break;
        case 9:
            PC = func_5811255536_op9;
            break;
    }
    goto **PC;
func_5811255664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5811255664_op0;
            break;
        case 1:
            PC = func_5811255664_op1;
            break;
        case 2:
            PC = func_5811255664_op2;
            break;
        case 3:
            PC = func_5811255664_op3;
            break;
        case 4:
            PC = func_5811255664_op4;
            break;
    }
    goto **PC;
func_5811255440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811255440_op0;
            break;
    }
    goto **PC;
func_5811255216:
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
            PC = func_5811255216_op0;
            break;
    }
    goto **PC;
func_5811257232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5811257232_op0;
            break;
        case 1:
            PC = func_5811257232_op1;
            break;
        case 2:
            PC = func_5811257232_op2;
            break;
        case 3:
            PC = func_5811257232_op3;
            break;
        case 4:
            PC = func_5811257232_op4;
            break;
        case 5:
            PC = func_5811257232_op5;
            break;
        case 6:
            PC = func_5811257232_op6;
            break;
        case 7:
            PC = func_5811257232_op7;
            break;
        case 8:
            PC = func_5811257232_op8;
            break;
        case 9:
            PC = func_5811257232_op9;
            break;
        case 10:
            PC = func_5811257232_op10;
            break;
        case 11:
            PC = func_5811257232_op11;
            break;
        case 12:
            PC = func_5811257232_op12;
            break;
        case 13:
            PC = func_5811257232_op13;
            break;
        case 14:
            PC = func_5811257232_op14;
            break;
        case 15:
            PC = func_5811257232_op15;
            break;
        case 16:
            PC = func_5811257232_op16;
            break;
        case 17:
            PC = func_5811257232_op17;
            break;
        case 18:
            PC = func_5811257232_op18;
            break;
        case 19:
            PC = func_5811257232_op19;
            break;
        case 20:
            PC = func_5811257232_op20;
            break;
        case 21:
            PC = func_5811257232_op21;
            break;
        case 22:
            PC = func_5811257232_op22;
            break;
        case 23:
            PC = func_5811257232_op23;
            break;
        case 24:
            PC = func_5811257232_op24;
            break;
        case 25:
            PC = func_5811257232_op25;
            break;
        case 26:
            PC = func_5811257232_op26;
            break;
        case 27:
            PC = func_5811257232_op27;
            break;
        case 28:
            PC = func_5811257232_op28;
            break;
        case 29:
            PC = func_5811257232_op29;
            break;
        case 30:
            PC = func_5811257232_op30;
            break;
        case 31:
            PC = func_5811257232_op31;
            break;
        case 32:
            PC = func_5811257232_op32;
            break;
        case 33:
            PC = func_5811257232_op33;
            break;
        case 34:
            PC = func_5811257232_op34;
            break;
        case 35:
            PC = func_5811257232_op35;
            break;
        case 36:
            PC = func_5811257232_op36;
            break;
        case 37:
            PC = func_5811257232_op37;
            break;
        case 38:
            PC = func_5811257232_op38;
            break;
        case 39:
            PC = func_5811257232_op39;
            break;
        case 40:
            PC = func_5811257232_op40;
            break;
        case 41:
            PC = func_5811257232_op41;
            break;
        case 42:
            PC = func_5811257232_op42;
            break;
        case 43:
            PC = func_5811257232_op43;
            break;
        case 44:
            PC = func_5811257232_op44;
            break;
        case 45:
            PC = func_5811257232_op45;
            break;
        case 46:
            PC = func_5811257232_op46;
            break;
        case 47:
            PC = func_5811257232_op47;
            break;
        case 48:
            PC = func_5811257232_op48;
            break;
        case 49:
            PC = func_5811257232_op49;
            break;
        case 50:
            PC = func_5811257232_op50;
            break;
        case 51:
            PC = func_5811257232_op51;
            break;
    }
    goto **PC;
func_5811256352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5811256352_op0;
            break;
        case 1:
            PC = func_5811256352_op1;
            break;
        case 2:
            PC = func_5811256352_op2;
            break;
        case 3:
            PC = func_5811256352_op3;
            break;
        case 4:
            PC = func_5811256352_op4;
            break;
        case 5:
            PC = func_5811256352_op5;
            break;
        case 6:
            PC = func_5811256352_op6;
            break;
        case 7:
            PC = func_5811256352_op7;
            break;
        case 8:
            PC = func_5811256352_op8;
            break;
        case 9:
            PC = func_5811256352_op9;
            break;
        case 10:
            PC = func_5811256352_op10;
            break;
        case 11:
            PC = func_5811256352_op11;
            break;
        case 12:
            PC = func_5811256352_op12;
            break;
        case 13:
            PC = func_5811256352_op13;
            break;
    }
    goto **PC;
func_5811255792:
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
            PC = func_5811255792_op0;
            break;
    }
    goto **PC;
func_5811255920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5811255920_op0;
            break;
        case 1:
            PC = func_5811255920_op1;
            break;
        case 2:
            PC = func_5811255920_op2;
            break;
    }
    goto **PC;
func_5811256048:
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
            PC = func_5811256048_op0;
            break;
    }
    goto **PC;
func_5811256176:
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
            PC = func_5811256176_op0;
            break;
    }
    goto **PC;
func_5811256480:
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
            PC = func_5811256480_op0;
            break;
    }
    goto **PC;
func_5811255136:
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
            PC = func_5811255136_op0;
            break;
        case 1:
            PC = func_5811255136_op1;
            break;
    }
    goto **PC;
func_5811255280:
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
            PC = func_5811255280_op0;
            break;
        case 1:
            PC = func_5811255280_op1;
            break;
    }
    goto **PC;
func_5811256928:
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
            PC = func_5811256928_op0;
            break;
        case 1:
            PC = func_5811256928_op1;
            break;
    }
    goto **PC;
func_5811257056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5811257056_op0;
            break;
        case 1:
            PC = func_5811257056_op1;
            break;
    }
    goto **PC;
func_5811257360:
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
            PC = func_5811257360_op0;
            break;
    }
    goto **PC;
func_5811257488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811257488_op0;
            break;
    }
    goto **PC;
func_5811258016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5811258016_op0;
            break;
        case 1:
            PC = func_5811258016_op1;
            break;
        case 2:
            PC = func_5811258016_op2;
            break;
        case 3:
            PC = func_5811258016_op3;
            break;
        case 4:
            PC = func_5811258016_op4;
            break;
        case 5:
            PC = func_5811258016_op5;
            break;
        case 6:
            PC = func_5811258016_op6;
            break;
        case 7:
            PC = func_5811258016_op7;
            break;
        case 8:
            PC = func_5811258016_op8;
            break;
        case 9:
            PC = func_5811258016_op9;
            break;
        case 10:
            PC = func_5811258016_op10;
            break;
    }
    goto **PC;
func_5811257696:
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
            PC = func_5811257696_op0;
            break;
    }
    goto **PC;
func_5811257616:
    extend(46);
    NEXT();
    goto **PC;
func_5811257888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811257888;
    goto **PC;
func_5811258208:
    extend(92);
    NEXT();
    goto **PC;
func_5811258336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811258336;
    goto **PC;
func_5811258832:
    extend(48);
    NEXT();
    goto **PC;
func_5811258960:
    extend(49);
    NEXT();
    goto **PC;
func_5811259088:
    extend(50);
    NEXT();
    goto **PC;
func_5811259248:
    extend(51);
    NEXT();
    goto **PC;
func_5811259376:
    extend(52);
    NEXT();
    goto **PC;
func_5811256736:
    extend(53);
    NEXT();
    goto **PC;
func_5811259952:
    extend(54);
    NEXT();
    goto **PC;
func_5811260080:
    extend(55);
    NEXT();
    goto **PC;
func_5811260208:
    extend(56);
    NEXT();
    goto **PC;
func_5811256672:
    extend(57);
    NEXT();
    goto **PC;
func_5811258528:
    extend(36);
    NEXT();
    goto **PC;
func_5811260528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811260528;
    goto **PC;
func_5811260656:
    extend(40);
    NEXT();
    goto **PC;
func_5811260784:
    extend(41);
    NEXT();
    goto **PC;
func_5811262256:
    extend(97);
    NEXT();
    goto **PC;
func_5811262384:
    extend(98);
    NEXT();
    goto **PC;
func_5811262512:
    extend(99);
    NEXT();
    goto **PC;
func_5811262672:
    extend(100);
    NEXT();
    goto **PC;
func_5811262800:
    extend(101);
    NEXT();
    goto **PC;
func_5811262992:
    extend(102);
    NEXT();
    goto **PC;
func_5811263120:
    extend(103);
    NEXT();
    goto **PC;
func_5811263248:
    extend(104);
    NEXT();
    goto **PC;
func_5811263376:
    extend(105);
    NEXT();
    goto **PC;
func_5811262928:
    extend(106);
    NEXT();
    goto **PC;
func_5811263696:
    extend(107);
    NEXT();
    goto **PC;
func_5811263824:
    extend(108);
    NEXT();
    goto **PC;
func_5811263952:
    extend(109);
    NEXT();
    goto **PC;
func_5811264080:
    extend(110);
    NEXT();
    goto **PC;
func_5811264208:
    extend(111);
    NEXT();
    goto **PC;
func_5811264336:
    extend(112);
    NEXT();
    goto **PC;
func_5811264464:
    extend(113);
    NEXT();
    goto **PC;
func_5811263504:
    extend(114);
    NEXT();
    goto **PC;
func_5811264848:
    extend(115);
    NEXT();
    goto **PC;
func_5811264976:
    extend(116);
    NEXT();
    goto **PC;
func_5811265104:
    extend(117);
    NEXT();
    goto **PC;
func_5811265232:
    extend(118);
    NEXT();
    goto **PC;
func_5811265360:
    extend(119);
    NEXT();
    goto **PC;
func_5811259504:
    extend(120);
    NEXT();
    goto **PC;
func_5811259632:
    extend(121);
    NEXT();
    goto **PC;
func_5811259760:
    extend(122);
    NEXT();
    goto **PC;
func_5811259888:
    extend(65);
    NEXT();
    goto **PC;
func_5811265488:
    extend(66);
    NEXT();
    goto **PC;
func_5811265616:
    extend(67);
    NEXT();
    goto **PC;
func_5811265744:
    extend(68);
    NEXT();
    goto **PC;
func_5811265872:
    extend(69);
    NEXT();
    goto **PC;
func_5811266000:
    extend(70);
    NEXT();
    goto **PC;
func_5811266128:
    extend(71);
    NEXT();
    goto **PC;
func_5811264592:
    extend(72);
    NEXT();
    goto **PC;
func_5811264720:
    extend(73);
    NEXT();
    goto **PC;
func_5811266768:
    extend(74);
    NEXT();
    goto **PC;
func_5811266896:
    extend(75);
    NEXT();
    goto **PC;
func_5811267024:
    extend(76);
    NEXT();
    goto **PC;
func_5811267152:
    extend(77);
    NEXT();
    goto **PC;
func_5811267280:
    extend(78);
    NEXT();
    goto **PC;
func_5811267408:
    extend(79);
    NEXT();
    goto **PC;
func_5811267536:
    extend(80);
    NEXT();
    goto **PC;
func_5811267664:
    extend(81);
    NEXT();
    goto **PC;
func_5811267792:
    extend(82);
    NEXT();
    goto **PC;
func_5811267920:
    extend(83);
    NEXT();
    goto **PC;
func_5811268048:
    extend(84);
    NEXT();
    goto **PC;
func_5811268176:
    extend(85);
    NEXT();
    goto **PC;
func_5811268304:
    extend(86);
    NEXT();
    goto **PC;
func_5811268432:
    extend(87);
    NEXT();
    goto **PC;
func_5811268560:
    extend(88);
    NEXT();
    goto **PC;
func_5811268688:
    extend(89);
    NEXT();
    goto **PC;
func_5811268816:
    extend(90);
    NEXT();
    goto **PC;
func_5811261344:
    extend(42);
    NEXT();
    goto **PC;
func_5811261504:
    extend(43);
    NEXT();
    goto **PC;
func_5811261632:
    extend(63);
    NEXT();
    goto **PC;
func_5811261824:
    extend(94);
    NEXT();
    goto **PC;
func_5811261952:
    extend(124);
    NEXT();
    goto **PC;
func_5811261760:
    extend(91);
    NEXT();
    goto **PC;
func_5811269008:
    extend(93);
    NEXT();
    goto **PC;
func_5811269136:
    extend(123);
    NEXT();
    goto **PC;
func_5811269264:
    extend(125);
    NEXT();
    goto **PC;
func_5811260912:
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
    PC = exp_5811260912;
    goto **PC;
func_5811261040:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5811258736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811258736;
    goto **PC;
func_5811269392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811269392;
    goto **PC;
func_5811269520:
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
    PC = exp_5811269520;
    goto **PC;
func_5811269648:
    extend(45);
    NEXT();
    goto **PC;
func_5811258656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811258656;
    goto **PC;
func_5811269776:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811269776;
    goto **PC;
func_5811270432:
    extend(95);
    NEXT();
    goto **PC;
func_5811270576:
    extend(64);
    NEXT();
    goto **PC;
func_5811270736:
    extend(35);
    NEXT();
    goto **PC;
func_5811270864:
    extend(37);
    NEXT();
    goto **PC;
func_5811271056:
    extend(38);
    NEXT();
    goto **PC;
func_5811271184:
    extend(61);
    NEXT();
    goto **PC;
func_5811271312:
    extend(126);
    NEXT();
    goto **PC;
func_5811271440:
    extend(96);
    NEXT();
    goto **PC;
func_5811270992:
    extend(39);
    NEXT();
    goto **PC;
func_5811271760:
    extend(34);
    NEXT();
    goto **PC;
func_5811270064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811270064;
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
    PC = func_5811257488_op0;
    goto **PC;
}
