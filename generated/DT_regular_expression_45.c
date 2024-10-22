#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 45
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
    static void *func_5098206272_op0[2] = { &&func_5098226016, &&RETURN };
    static void *func_5098206272_op1[2] = { &&func_5098225376, &&RETURN };
    static void *func_5098222784_op0[2] = { &&func_5098225936, &&RETURN };
    static void *func_5098222992_op0[2] = { &&func_5098225680, &&RETURN };
    static void *func_5098222992_op1[2] = { &&func_5098224368, &&RETURN };
    static void *func_5098222992_op2[2] = { &&func_5098223984, &&RETURN };
    static void *func_5098223200_op0[2] = { &&func_5098224240, &&RETURN };
    static void *func_5098223200_op1[2] = { &&func_5098226208, &&RETURN };
    static void *func_5098222656_op0[2] = { &&func_5098226656, &&RETURN };
    static void *func_5098223856_op0[2] = { &&func_5098227152, &&RETURN };
    static void *func_5098223856_op1[2] = { &&func_5098227280, &&RETURN };
    static void *func_5098223856_op2[2] = { &&func_5098227408, &&RETURN };
    static void *func_5098223856_op3[2] = { &&func_5098227568, &&RETURN };
    static void *func_5098223856_op4[2] = { &&func_5098227696, &&RETURN };
    static void *func_5098223856_op5[2] = { &&func_5098225056, &&RETURN };
    static void *func_5098223856_op6[2] = { &&func_5098228272, &&RETURN };
    static void *func_5098223856_op7[2] = { &&func_5098228400, &&RETURN };
    static void *func_5098223856_op8[2] = { &&func_5098228528, &&RETURN };
    static void *func_5098223856_op9[2] = { &&func_5098224992, &&RETURN };
    static void *func_5098223984_op0[2] = { &&func_5098223536, &&RETURN };
    static void *func_5098223984_op1[2] = { &&func_5098222784, &&RETURN };
    static void *func_5098223984_op2[2] = { &&func_5098223760, &&RETURN };
    static void *func_5098223984_op3[2] = { &&func_5098223200, &&RETURN };
    static void *func_5098223984_op4[2] = { &&func_5098225248, &&RETURN };
    static void *func_5098223760_op0[2] = { &&func_5098226848, &&RETURN };
    static void *func_5098223536_op0[2] = { &&func_5098228848, &&RETURN };
    static void *func_5098225552_op0[2] = { &&func_5098230576, &&RETURN };
    static void *func_5098225552_op1[2] = { &&func_5098230704, &&RETURN };
    static void *func_5098225552_op2[2] = { &&func_5098230832, &&RETURN };
    static void *func_5098225552_op3[2] = { &&func_5098230992, &&RETURN };
    static void *func_5098225552_op4[2] = { &&func_5098231120, &&RETURN };
    static void *func_5098225552_op5[2] = { &&func_5098231312, &&RETURN };
    static void *func_5098225552_op6[2] = { &&func_5098231440, &&RETURN };
    static void *func_5098225552_op7[2] = { &&func_5098231568, &&RETURN };
    static void *func_5098225552_op8[2] = { &&func_5098231696, &&RETURN };
    static void *func_5098225552_op9[2] = { &&func_5098231248, &&RETURN };
    static void *func_5098225552_op10[2] = { &&func_5098232016, &&RETURN };
    static void *func_5098225552_op11[2] = { &&func_5098232144, &&RETURN };
    static void *func_5098225552_op12[2] = { &&func_5098232272, &&RETURN };
    static void *func_5098225552_op13[2] = { &&func_5098232400, &&RETURN };
    static void *func_5098225552_op14[2] = { &&func_5098232528, &&RETURN };
    static void *func_5098225552_op15[2] = { &&func_5098232656, &&RETURN };
    static void *func_5098225552_op16[2] = { &&func_5098232784, &&RETURN };
    static void *func_5098225552_op17[2] = { &&func_5098231824, &&RETURN };
    static void *func_5098225552_op18[2] = { &&func_5098233168, &&RETURN };
    static void *func_5098225552_op19[2] = { &&func_5098233296, &&RETURN };
    static void *func_5098225552_op20[2] = { &&func_5098233424, &&RETURN };
    static void *func_5098225552_op21[2] = { &&func_5098233552, &&RETURN };
    static void *func_5098225552_op22[2] = { &&func_5098233680, &&RETURN };
    static void *func_5098225552_op23[2] = { &&func_5098227824, &&RETURN };
    static void *func_5098225552_op24[2] = { &&func_5098227952, &&RETURN };
    static void *func_5098225552_op25[2] = { &&func_5098228080, &&RETURN };
    static void *func_5098225552_op26[2] = { &&func_5098228208, &&RETURN };
    static void *func_5098225552_op27[2] = { &&func_5098233808, &&RETURN };
    static void *func_5098225552_op28[2] = { &&func_5098233936, &&RETURN };
    static void *func_5098225552_op29[2] = { &&func_5098234064, &&RETURN };
    static void *func_5098225552_op30[2] = { &&func_5098234192, &&RETURN };
    static void *func_5098225552_op31[2] = { &&func_5098234320, &&RETURN };
    static void *func_5098225552_op32[2] = { &&func_5098234448, &&RETURN };
    static void *func_5098225552_op33[2] = { &&func_5098232912, &&RETURN };
    static void *func_5098225552_op34[2] = { &&func_5098233040, &&RETURN };
    static void *func_5098225552_op35[2] = { &&func_5098235088, &&RETURN };
    static void *func_5098225552_op36[2] = { &&func_5098235216, &&RETURN };
    static void *func_5098225552_op37[2] = { &&func_5098235344, &&RETURN };
    static void *func_5098225552_op38[2] = { &&func_5098235472, &&RETURN };
    static void *func_5098225552_op39[2] = { &&func_5098235600, &&RETURN };
    static void *func_5098225552_op40[2] = { &&func_5098235728, &&RETURN };
    static void *func_5098225552_op41[2] = { &&func_5098235856, &&RETURN };
    static void *func_5098225552_op42[2] = { &&func_5098235984, &&RETURN };
    static void *func_5098225552_op43[2] = { &&func_5098236112, &&RETURN };
    static void *func_5098225552_op44[2] = { &&func_5098236240, &&RETURN };
    static void *func_5098225552_op45[2] = { &&func_5098236368, &&RETURN };
    static void *func_5098225552_op46[2] = { &&func_5098236496, &&RETURN };
    static void *func_5098225552_op47[2] = { &&func_5098236624, &&RETURN };
    static void *func_5098225552_op48[2] = { &&func_5098236752, &&RETURN };
    static void *func_5098225552_op49[2] = { &&func_5098236880, &&RETURN };
    static void *func_5098225552_op50[2] = { &&func_5098237008, &&RETURN };
    static void *func_5098225552_op51[2] = { &&func_5098237136, &&RETURN };
    static void *func_5098224672_op0[2] = { &&func_5098226528, &&RETURN };
    static void *func_5098224672_op1[2] = { &&func_5098225936, &&RETURN };
    static void *func_5098224672_op2[2] = { &&func_5098229664, &&RETURN };
    static void *func_5098224672_op3[2] = { &&func_5098229824, &&RETURN };
    static void *func_5098224672_op4[2] = { &&func_5098229952, &&RETURN };
    static void *func_5098224672_op5[2] = { &&func_5098230144, &&RETURN };
    static void *func_5098224672_op6[2] = { &&func_5098226848, &&RETURN };
    static void *func_5098224672_op7[2] = { &&func_5098230272, &&RETURN };
    static void *func_5098224672_op8[2] = { &&func_5098228976, &&RETURN };
    static void *func_5098224672_op9[2] = { &&func_5098229104, &&RETURN };
    static void *func_5098224672_op10[2] = { &&func_5098230080, &&RETURN };
    static void *func_5098224672_op11[2] = { &&func_5098237328, &&RETURN };
    static void *func_5098224672_op12[2] = { &&func_5098237456, &&RETURN };
    static void *func_5098224672_op13[2] = { &&func_5098237584, &&RETURN };
    static void *func_5098224112_op0[2] = { &&func_5098229232, &&RETURN };
    static void *func_5098224240_op0[2] = { &&func_5098225552, &&RETURN };
    static void *func_5098224240_op1[2] = { &&func_5098223856, &&RETURN };
    static void *func_5098224240_op2[2] = { &&func_5098226336, &&RETURN };
    static void *func_5098224368_op0[2] = { &&func_5098227056, &&RETURN };
    static void *func_5098224496_op0[2] = { &&func_5098237712, &&RETURN };
    static void *func_5098224800_op0[2] = { &&func_5098237840, &&RETURN };
    static void *func_5098223456_op0[2] = { &&func_5098224800, &&RETURN };
    static void *func_5098223456_op1[2] = { &&func_5098223200, &&RETURN };
    static void *func_5098223600_op0[2] = { &&func_5098223456, &&RETURN };
    static void *func_5098223600_op1[2] = { &&func_5098226976, &&RETURN };
    static void *func_5098225248_op0[2] = { &&func_5098224496, &&RETURN };
    static void *func_5098225248_op1[2] = { &&func_5098224112, &&RETURN };
    static void *func_5098225376_op0[2] = { &&func_5098222656, &&RETURN };
    static void *func_5098225376_op1[2] = { &&func_5098222992, &&RETURN };
    static void *func_5098225680_op0[2] = { &&func_5098238096, &&RETURN };
    static void *func_5098225808_op0[2] = { &&func_5098206272, &&HALT };
    static void *func_5098226336_op0[2] = { &&func_5098238752, &&RETURN };
    static void *func_5098226336_op1[2] = { &&func_5098237968, &&RETURN };
    static void *func_5098226336_op2[2] = { &&func_5098238896, &&RETURN };
    static void *func_5098226336_op3[2] = { &&func_5098239056, &&RETURN };
    static void *func_5098226336_op4[2] = { &&func_5098239184, &&RETURN };
    static void *func_5098226336_op5[2] = { &&func_5098239376, &&RETURN };
    static void *func_5098226336_op6[2] = { &&func_5098239504, &&RETURN };
    static void *func_5098226336_op7[2] = { &&func_5098239632, &&RETURN };
    static void *func_5098226336_op8[2] = { &&func_5098239760, &&RETURN };
    static void *func_5098226336_op9[2] = { &&func_5098239312, &&RETURN };
    static void *func_5098226336_op10[2] = { &&func_5098240080, &&RETURN };
    static void *func_5098226016_op0[2] = { &&func_5098238384, &&RETURN };
    static void *exp_5098226208[3] = {&&func_5098226528, &&func_5098224672, &&RETURN };
    static void *exp_5098226656[3] = {&&func_5098225376, &&func_5098222992, &&RETURN };
    static void *exp_5098228848[4] = {&&func_5098228976, &&func_5098206272, &&func_5098229104, &&RETURN };
    static void *exp_5098229232[4] = {&&func_5098229360, &&func_5098223600, &&func_5098237328, &&RETURN };
    static void *exp_5098227056[3] = {&&func_5098223984, &&func_5098229824, &&RETURN };
    static void *exp_5098237712[4] = {&&func_5098230080, &&func_5098223600, &&func_5098237328, &&RETURN };
    static void *exp_5098237840[4] = {&&func_5098223200, &&func_5098237968, &&func_5098223200, &&RETURN };
    static void *exp_5098226976[3] = {&&func_5098223456, &&func_5098223600, &&RETURN };
    static void *exp_5098238096[3] = {&&func_5098223984, &&func_5098229664, &&RETURN };
    static void *exp_5098238384[4] = {&&func_5098206272, &&func_5098230272, &&func_5098225376, &&RETURN };

func_5098206272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5098206272_op0;
            break;
        case 1:
            PC = func_5098206272_op1;
            break;
    }
    goto **PC;
func_5098222784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098222784_op0;
            break;
    }
    goto **PC;
func_5098222992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5098222992_op0;
            break;
        case 1:
            PC = func_5098222992_op1;
            break;
        case 2:
            PC = func_5098222992_op2;
            break;
    }
    goto **PC;
func_5098223200:
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
            PC = func_5098223200_op0;
            break;
        case 1:
            PC = func_5098223200_op1;
            break;
    }
    goto **PC;
func_5098222656:
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
            PC = func_5098222656_op0;
            break;
    }
    goto **PC;
func_5098223856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5098223856_op0;
            break;
        case 1:
            PC = func_5098223856_op1;
            break;
        case 2:
            PC = func_5098223856_op2;
            break;
        case 3:
            PC = func_5098223856_op3;
            break;
        case 4:
            PC = func_5098223856_op4;
            break;
        case 5:
            PC = func_5098223856_op5;
            break;
        case 6:
            PC = func_5098223856_op6;
            break;
        case 7:
            PC = func_5098223856_op7;
            break;
        case 8:
            PC = func_5098223856_op8;
            break;
        case 9:
            PC = func_5098223856_op9;
            break;
    }
    goto **PC;
func_5098223984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5098223984_op0;
            break;
        case 1:
            PC = func_5098223984_op1;
            break;
        case 2:
            PC = func_5098223984_op2;
            break;
        case 3:
            PC = func_5098223984_op3;
            break;
        case 4:
            PC = func_5098223984_op4;
            break;
    }
    goto **PC;
func_5098223760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098223760_op0;
            break;
    }
    goto **PC;
func_5098223536:
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
            PC = func_5098223536_op0;
            break;
    }
    goto **PC;
func_5098225552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5098225552_op0;
            break;
        case 1:
            PC = func_5098225552_op1;
            break;
        case 2:
            PC = func_5098225552_op2;
            break;
        case 3:
            PC = func_5098225552_op3;
            break;
        case 4:
            PC = func_5098225552_op4;
            break;
        case 5:
            PC = func_5098225552_op5;
            break;
        case 6:
            PC = func_5098225552_op6;
            break;
        case 7:
            PC = func_5098225552_op7;
            break;
        case 8:
            PC = func_5098225552_op8;
            break;
        case 9:
            PC = func_5098225552_op9;
            break;
        case 10:
            PC = func_5098225552_op10;
            break;
        case 11:
            PC = func_5098225552_op11;
            break;
        case 12:
            PC = func_5098225552_op12;
            break;
        case 13:
            PC = func_5098225552_op13;
            break;
        case 14:
            PC = func_5098225552_op14;
            break;
        case 15:
            PC = func_5098225552_op15;
            break;
        case 16:
            PC = func_5098225552_op16;
            break;
        case 17:
            PC = func_5098225552_op17;
            break;
        case 18:
            PC = func_5098225552_op18;
            break;
        case 19:
            PC = func_5098225552_op19;
            break;
        case 20:
            PC = func_5098225552_op20;
            break;
        case 21:
            PC = func_5098225552_op21;
            break;
        case 22:
            PC = func_5098225552_op22;
            break;
        case 23:
            PC = func_5098225552_op23;
            break;
        case 24:
            PC = func_5098225552_op24;
            break;
        case 25:
            PC = func_5098225552_op25;
            break;
        case 26:
            PC = func_5098225552_op26;
            break;
        case 27:
            PC = func_5098225552_op27;
            break;
        case 28:
            PC = func_5098225552_op28;
            break;
        case 29:
            PC = func_5098225552_op29;
            break;
        case 30:
            PC = func_5098225552_op30;
            break;
        case 31:
            PC = func_5098225552_op31;
            break;
        case 32:
            PC = func_5098225552_op32;
            break;
        case 33:
            PC = func_5098225552_op33;
            break;
        case 34:
            PC = func_5098225552_op34;
            break;
        case 35:
            PC = func_5098225552_op35;
            break;
        case 36:
            PC = func_5098225552_op36;
            break;
        case 37:
            PC = func_5098225552_op37;
            break;
        case 38:
            PC = func_5098225552_op38;
            break;
        case 39:
            PC = func_5098225552_op39;
            break;
        case 40:
            PC = func_5098225552_op40;
            break;
        case 41:
            PC = func_5098225552_op41;
            break;
        case 42:
            PC = func_5098225552_op42;
            break;
        case 43:
            PC = func_5098225552_op43;
            break;
        case 44:
            PC = func_5098225552_op44;
            break;
        case 45:
            PC = func_5098225552_op45;
            break;
        case 46:
            PC = func_5098225552_op46;
            break;
        case 47:
            PC = func_5098225552_op47;
            break;
        case 48:
            PC = func_5098225552_op48;
            break;
        case 49:
            PC = func_5098225552_op49;
            break;
        case 50:
            PC = func_5098225552_op50;
            break;
        case 51:
            PC = func_5098225552_op51;
            break;
    }
    goto **PC;
func_5098224672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5098224672_op0;
            break;
        case 1:
            PC = func_5098224672_op1;
            break;
        case 2:
            PC = func_5098224672_op2;
            break;
        case 3:
            PC = func_5098224672_op3;
            break;
        case 4:
            PC = func_5098224672_op4;
            break;
        case 5:
            PC = func_5098224672_op5;
            break;
        case 6:
            PC = func_5098224672_op6;
            break;
        case 7:
            PC = func_5098224672_op7;
            break;
        case 8:
            PC = func_5098224672_op8;
            break;
        case 9:
            PC = func_5098224672_op9;
            break;
        case 10:
            PC = func_5098224672_op10;
            break;
        case 11:
            PC = func_5098224672_op11;
            break;
        case 12:
            PC = func_5098224672_op12;
            break;
        case 13:
            PC = func_5098224672_op13;
            break;
    }
    goto **PC;
func_5098224112:
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
            PC = func_5098224112_op0;
            break;
    }
    goto **PC;
func_5098224240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5098224240_op0;
            break;
        case 1:
            PC = func_5098224240_op1;
            break;
        case 2:
            PC = func_5098224240_op2;
            break;
    }
    goto **PC;
func_5098224368:
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
            PC = func_5098224368_op0;
            break;
    }
    goto **PC;
func_5098224496:
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
            PC = func_5098224496_op0;
            break;
    }
    goto **PC;
func_5098224800:
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
            PC = func_5098224800_op0;
            break;
    }
    goto **PC;
func_5098223456:
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
            PC = func_5098223456_op0;
            break;
        case 1:
            PC = func_5098223456_op1;
            break;
    }
    goto **PC;
func_5098223600:
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
            PC = func_5098223600_op0;
            break;
        case 1:
            PC = func_5098223600_op1;
            break;
    }
    goto **PC;
func_5098225248:
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
            PC = func_5098225248_op0;
            break;
        case 1:
            PC = func_5098225248_op1;
            break;
    }
    goto **PC;
func_5098225376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5098225376_op0;
            break;
        case 1:
            PC = func_5098225376_op1;
            break;
    }
    goto **PC;
func_5098225680:
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
            PC = func_5098225680_op0;
            break;
    }
    goto **PC;
func_5098225808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098225808_op0;
            break;
    }
    goto **PC;
func_5098226336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5098226336_op0;
            break;
        case 1:
            PC = func_5098226336_op1;
            break;
        case 2:
            PC = func_5098226336_op2;
            break;
        case 3:
            PC = func_5098226336_op3;
            break;
        case 4:
            PC = func_5098226336_op4;
            break;
        case 5:
            PC = func_5098226336_op5;
            break;
        case 6:
            PC = func_5098226336_op6;
            break;
        case 7:
            PC = func_5098226336_op7;
            break;
        case 8:
            PC = func_5098226336_op8;
            break;
        case 9:
            PC = func_5098226336_op9;
            break;
        case 10:
            PC = func_5098226336_op10;
            break;
    }
    goto **PC;
func_5098226016:
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
            PC = func_5098226016_op0;
            break;
    }
    goto **PC;
func_5098225936:
    extend(46);
    NEXT();
    goto **PC;
func_5098226208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098226208;
    goto **PC;
func_5098226528:
    extend(92);
    NEXT();
    goto **PC;
func_5098226656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098226656;
    goto **PC;
func_5098227152:
    extend(48);
    NEXT();
    goto **PC;
func_5098227280:
    extend(49);
    NEXT();
    goto **PC;
func_5098227408:
    extend(50);
    NEXT();
    goto **PC;
func_5098227568:
    extend(51);
    NEXT();
    goto **PC;
func_5098227696:
    extend(52);
    NEXT();
    goto **PC;
func_5098225056:
    extend(53);
    NEXT();
    goto **PC;
func_5098228272:
    extend(54);
    NEXT();
    goto **PC;
func_5098228400:
    extend(55);
    NEXT();
    goto **PC;
func_5098228528:
    extend(56);
    NEXT();
    goto **PC;
func_5098224992:
    extend(57);
    NEXT();
    goto **PC;
func_5098226848:
    extend(36);
    NEXT();
    goto **PC;
func_5098228848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098228848;
    goto **PC;
func_5098228976:
    extend(40);
    NEXT();
    goto **PC;
func_5098229104:
    extend(41);
    NEXT();
    goto **PC;
func_5098230576:
    extend(97);
    NEXT();
    goto **PC;
func_5098230704:
    extend(98);
    NEXT();
    goto **PC;
func_5098230832:
    extend(99);
    NEXT();
    goto **PC;
func_5098230992:
    extend(100);
    NEXT();
    goto **PC;
func_5098231120:
    extend(101);
    NEXT();
    goto **PC;
func_5098231312:
    extend(102);
    NEXT();
    goto **PC;
func_5098231440:
    extend(103);
    NEXT();
    goto **PC;
func_5098231568:
    extend(104);
    NEXT();
    goto **PC;
func_5098231696:
    extend(105);
    NEXT();
    goto **PC;
func_5098231248:
    extend(106);
    NEXT();
    goto **PC;
func_5098232016:
    extend(107);
    NEXT();
    goto **PC;
func_5098232144:
    extend(108);
    NEXT();
    goto **PC;
func_5098232272:
    extend(109);
    NEXT();
    goto **PC;
func_5098232400:
    extend(110);
    NEXT();
    goto **PC;
func_5098232528:
    extend(111);
    NEXT();
    goto **PC;
func_5098232656:
    extend(112);
    NEXT();
    goto **PC;
func_5098232784:
    extend(113);
    NEXT();
    goto **PC;
func_5098231824:
    extend(114);
    NEXT();
    goto **PC;
func_5098233168:
    extend(115);
    NEXT();
    goto **PC;
func_5098233296:
    extend(116);
    NEXT();
    goto **PC;
func_5098233424:
    extend(117);
    NEXT();
    goto **PC;
func_5098233552:
    extend(118);
    NEXT();
    goto **PC;
func_5098233680:
    extend(119);
    NEXT();
    goto **PC;
func_5098227824:
    extend(120);
    NEXT();
    goto **PC;
func_5098227952:
    extend(121);
    NEXT();
    goto **PC;
func_5098228080:
    extend(122);
    NEXT();
    goto **PC;
func_5098228208:
    extend(65);
    NEXT();
    goto **PC;
func_5098233808:
    extend(66);
    NEXT();
    goto **PC;
func_5098233936:
    extend(67);
    NEXT();
    goto **PC;
func_5098234064:
    extend(68);
    NEXT();
    goto **PC;
func_5098234192:
    extend(69);
    NEXT();
    goto **PC;
func_5098234320:
    extend(70);
    NEXT();
    goto **PC;
func_5098234448:
    extend(71);
    NEXT();
    goto **PC;
func_5098232912:
    extend(72);
    NEXT();
    goto **PC;
func_5098233040:
    extend(73);
    NEXT();
    goto **PC;
func_5098235088:
    extend(74);
    NEXT();
    goto **PC;
func_5098235216:
    extend(75);
    NEXT();
    goto **PC;
func_5098235344:
    extend(76);
    NEXT();
    goto **PC;
func_5098235472:
    extend(77);
    NEXT();
    goto **PC;
func_5098235600:
    extend(78);
    NEXT();
    goto **PC;
func_5098235728:
    extend(79);
    NEXT();
    goto **PC;
func_5098235856:
    extend(80);
    NEXT();
    goto **PC;
func_5098235984:
    extend(81);
    NEXT();
    goto **PC;
func_5098236112:
    extend(82);
    NEXT();
    goto **PC;
func_5098236240:
    extend(83);
    NEXT();
    goto **PC;
func_5098236368:
    extend(84);
    NEXT();
    goto **PC;
func_5098236496:
    extend(85);
    NEXT();
    goto **PC;
func_5098236624:
    extend(86);
    NEXT();
    goto **PC;
func_5098236752:
    extend(87);
    NEXT();
    goto **PC;
func_5098236880:
    extend(88);
    NEXT();
    goto **PC;
func_5098237008:
    extend(89);
    NEXT();
    goto **PC;
func_5098237136:
    extend(90);
    NEXT();
    goto **PC;
func_5098229664:
    extend(42);
    NEXT();
    goto **PC;
func_5098229824:
    extend(43);
    NEXT();
    goto **PC;
func_5098229952:
    extend(63);
    NEXT();
    goto **PC;
func_5098230144:
    extend(94);
    NEXT();
    goto **PC;
func_5098230272:
    extend(124);
    NEXT();
    goto **PC;
func_5098230080:
    extend(91);
    NEXT();
    goto **PC;
func_5098237328:
    extend(93);
    NEXT();
    goto **PC;
func_5098237456:
    extend(123);
    NEXT();
    goto **PC;
func_5098237584:
    extend(125);
    NEXT();
    goto **PC;
func_5098229232:
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
    PC = exp_5098229232;
    goto **PC;
func_5098229360:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5098227056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098227056;
    goto **PC;
func_5098237712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098237712;
    goto **PC;
func_5098237840:
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
    PC = exp_5098237840;
    goto **PC;
func_5098237968:
    extend(45);
    NEXT();
    goto **PC;
func_5098226976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098226976;
    goto **PC;
func_5098238096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098238096;
    goto **PC;
func_5098238752:
    extend(95);
    NEXT();
    goto **PC;
func_5098238896:
    extend(64);
    NEXT();
    goto **PC;
func_5098239056:
    extend(35);
    NEXT();
    goto **PC;
func_5098239184:
    extend(37);
    NEXT();
    goto **PC;
func_5098239376:
    extend(38);
    NEXT();
    goto **PC;
func_5098239504:
    extend(61);
    NEXT();
    goto **PC;
func_5098239632:
    extend(126);
    NEXT();
    goto **PC;
func_5098239760:
    extend(96);
    NEXT();
    goto **PC;
func_5098239312:
    extend(39);
    NEXT();
    goto **PC;
func_5098240080:
    extend(34);
    NEXT();
    goto **PC;
func_5098238384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098238384;
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
    PC = func_5098225808_op0;
    goto **PC;
}
