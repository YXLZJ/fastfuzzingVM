#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 40
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
    static void *func_5299532864_op0[2] = { &&func_5299552608, &&RETURN };
    static void *func_5299532864_op1[2] = { &&func_5299551968, &&RETURN };
    static void *func_5299549376_op0[2] = { &&func_5299552528, &&RETURN };
    static void *func_5299549584_op0[2] = { &&func_5299552272, &&RETURN };
    static void *func_5299549584_op1[2] = { &&func_5299550960, &&RETURN };
    static void *func_5299549584_op2[2] = { &&func_5299550576, &&RETURN };
    static void *func_5299549792_op0[2] = { &&func_5299550832, &&RETURN };
    static void *func_5299549792_op1[2] = { &&func_5299552800, &&RETURN };
    static void *func_5299549248_op0[2] = { &&func_5299553248, &&RETURN };
    static void *func_5299550448_op0[2] = { &&func_5299553744, &&RETURN };
    static void *func_5299550448_op1[2] = { &&func_5299553872, &&RETURN };
    static void *func_5299550448_op2[2] = { &&func_5299554000, &&RETURN };
    static void *func_5299550448_op3[2] = { &&func_5299554160, &&RETURN };
    static void *func_5299550448_op4[2] = { &&func_5299554288, &&RETURN };
    static void *func_5299550448_op5[2] = { &&func_5299551648, &&RETURN };
    static void *func_5299550448_op6[2] = { &&func_5299554864, &&RETURN };
    static void *func_5299550448_op7[2] = { &&func_5299554992, &&RETURN };
    static void *func_5299550448_op8[2] = { &&func_5299555120, &&RETURN };
    static void *func_5299550448_op9[2] = { &&func_5299551584, &&RETURN };
    static void *func_5299550576_op0[2] = { &&func_5299550128, &&RETURN };
    static void *func_5299550576_op1[2] = { &&func_5299549376, &&RETURN };
    static void *func_5299550576_op2[2] = { &&func_5299550352, &&RETURN };
    static void *func_5299550576_op3[2] = { &&func_5299549792, &&RETURN };
    static void *func_5299550576_op4[2] = { &&func_5299551840, &&RETURN };
    static void *func_5299550352_op0[2] = { &&func_5299553440, &&RETURN };
    static void *func_5299550128_op0[2] = { &&func_5299555440, &&RETURN };
    static void *func_5299552144_op0[2] = { &&func_5299557168, &&RETURN };
    static void *func_5299552144_op1[2] = { &&func_5299557296, &&RETURN };
    static void *func_5299552144_op2[2] = { &&func_5299557424, &&RETURN };
    static void *func_5299552144_op3[2] = { &&func_5299557584, &&RETURN };
    static void *func_5299552144_op4[2] = { &&func_5299557712, &&RETURN };
    static void *func_5299552144_op5[2] = { &&func_5299557904, &&RETURN };
    static void *func_5299552144_op6[2] = { &&func_5299558032, &&RETURN };
    static void *func_5299552144_op7[2] = { &&func_5299558160, &&RETURN };
    static void *func_5299552144_op8[2] = { &&func_5299558288, &&RETURN };
    static void *func_5299552144_op9[2] = { &&func_5299557840, &&RETURN };
    static void *func_5299552144_op10[2] = { &&func_5299558608, &&RETURN };
    static void *func_5299552144_op11[2] = { &&func_5299558736, &&RETURN };
    static void *func_5299552144_op12[2] = { &&func_5299558864, &&RETURN };
    static void *func_5299552144_op13[2] = { &&func_5299558992, &&RETURN };
    static void *func_5299552144_op14[2] = { &&func_5299559120, &&RETURN };
    static void *func_5299552144_op15[2] = { &&func_5299559248, &&RETURN };
    static void *func_5299552144_op16[2] = { &&func_5299559376, &&RETURN };
    static void *func_5299552144_op17[2] = { &&func_5299558416, &&RETURN };
    static void *func_5299552144_op18[2] = { &&func_5299559760, &&RETURN };
    static void *func_5299552144_op19[2] = { &&func_5299559888, &&RETURN };
    static void *func_5299552144_op20[2] = { &&func_5299560016, &&RETURN };
    static void *func_5299552144_op21[2] = { &&func_5299560144, &&RETURN };
    static void *func_5299552144_op22[2] = { &&func_5299560272, &&RETURN };
    static void *func_5299552144_op23[2] = { &&func_5299554416, &&RETURN };
    static void *func_5299552144_op24[2] = { &&func_5299554544, &&RETURN };
    static void *func_5299552144_op25[2] = { &&func_5299554672, &&RETURN };
    static void *func_5299552144_op26[2] = { &&func_5299554800, &&RETURN };
    static void *func_5299552144_op27[2] = { &&func_5299560400, &&RETURN };
    static void *func_5299552144_op28[2] = { &&func_5299560528, &&RETURN };
    static void *func_5299552144_op29[2] = { &&func_5299560656, &&RETURN };
    static void *func_5299552144_op30[2] = { &&func_5299560784, &&RETURN };
    static void *func_5299552144_op31[2] = { &&func_5299560912, &&RETURN };
    static void *func_5299552144_op32[2] = { &&func_5299561040, &&RETURN };
    static void *func_5299552144_op33[2] = { &&func_5299559504, &&RETURN };
    static void *func_5299552144_op34[2] = { &&func_5299559632, &&RETURN };
    static void *func_5299552144_op35[2] = { &&func_5299561680, &&RETURN };
    static void *func_5299552144_op36[2] = { &&func_5299561808, &&RETURN };
    static void *func_5299552144_op37[2] = { &&func_5299561936, &&RETURN };
    static void *func_5299552144_op38[2] = { &&func_5299562064, &&RETURN };
    static void *func_5299552144_op39[2] = { &&func_5299562192, &&RETURN };
    static void *func_5299552144_op40[2] = { &&func_5299562320, &&RETURN };
    static void *func_5299552144_op41[2] = { &&func_5299562448, &&RETURN };
    static void *func_5299552144_op42[2] = { &&func_5299562576, &&RETURN };
    static void *func_5299552144_op43[2] = { &&func_5299562704, &&RETURN };
    static void *func_5299552144_op44[2] = { &&func_5299562832, &&RETURN };
    static void *func_5299552144_op45[2] = { &&func_5299562960, &&RETURN };
    static void *func_5299552144_op46[2] = { &&func_5299563088, &&RETURN };
    static void *func_5299552144_op47[2] = { &&func_5299563216, &&RETURN };
    static void *func_5299552144_op48[2] = { &&func_5299563344, &&RETURN };
    static void *func_5299552144_op49[2] = { &&func_5299563472, &&RETURN };
    static void *func_5299552144_op50[2] = { &&func_5299563600, &&RETURN };
    static void *func_5299552144_op51[2] = { &&func_5299563728, &&RETURN };
    static void *func_5299551264_op0[2] = { &&func_5299553120, &&RETURN };
    static void *func_5299551264_op1[2] = { &&func_5299552528, &&RETURN };
    static void *func_5299551264_op2[2] = { &&func_5299556256, &&RETURN };
    static void *func_5299551264_op3[2] = { &&func_5299556416, &&RETURN };
    static void *func_5299551264_op4[2] = { &&func_5299556544, &&RETURN };
    static void *func_5299551264_op5[2] = { &&func_5299556736, &&RETURN };
    static void *func_5299551264_op6[2] = { &&func_5299553440, &&RETURN };
    static void *func_5299551264_op7[2] = { &&func_5299556864, &&RETURN };
    static void *func_5299551264_op8[2] = { &&func_5299555568, &&RETURN };
    static void *func_5299551264_op9[2] = { &&func_5299555696, &&RETURN };
    static void *func_5299551264_op10[2] = { &&func_5299556672, &&RETURN };
    static void *func_5299551264_op11[2] = { &&func_5299563920, &&RETURN };
    static void *func_5299551264_op12[2] = { &&func_5299564048, &&RETURN };
    static void *func_5299551264_op13[2] = { &&func_5299564176, &&RETURN };
    static void *func_5299550704_op0[2] = { &&func_5299555824, &&RETURN };
    static void *func_5299550832_op0[2] = { &&func_5299552144, &&RETURN };
    static void *func_5299550832_op1[2] = { &&func_5299550448, &&RETURN };
    static void *func_5299550832_op2[2] = { &&func_5299552928, &&RETURN };
    static void *func_5299550960_op0[2] = { &&func_5299553648, &&RETURN };
    static void *func_5299551088_op0[2] = { &&func_5299564304, &&RETURN };
    static void *func_5299551392_op0[2] = { &&func_5299564432, &&RETURN };
    static void *func_5299550048_op0[2] = { &&func_5299551392, &&RETURN };
    static void *func_5299550048_op1[2] = { &&func_5299549792, &&RETURN };
    static void *func_5299550192_op0[2] = { &&func_5299550048, &&RETURN };
    static void *func_5299550192_op1[2] = { &&func_5299553568, &&RETURN };
    static void *func_5299551840_op0[2] = { &&func_5299551088, &&RETURN };
    static void *func_5299551840_op1[2] = { &&func_5299550704, &&RETURN };
    static void *func_5299551968_op0[2] = { &&func_5299549248, &&RETURN };
    static void *func_5299551968_op1[2] = { &&func_5299549584, &&RETURN };
    static void *func_5299552272_op0[2] = { &&func_5299564688, &&RETURN };
    static void *func_5299552400_op0[2] = { &&func_5299532864, &&HALT };
    static void *func_5299552928_op0[2] = { &&func_5299565344, &&RETURN };
    static void *func_5299552928_op1[2] = { &&func_5299564560, &&RETURN };
    static void *func_5299552928_op2[2] = { &&func_5299565488, &&RETURN };
    static void *func_5299552928_op3[2] = { &&func_5299565648, &&RETURN };
    static void *func_5299552928_op4[2] = { &&func_5299565776, &&RETURN };
    static void *func_5299552928_op5[2] = { &&func_5299565968, &&RETURN };
    static void *func_5299552928_op6[2] = { &&func_5299566096, &&RETURN };
    static void *func_5299552928_op7[2] = { &&func_5299566224, &&RETURN };
    static void *func_5299552928_op8[2] = { &&func_5299566352, &&RETURN };
    static void *func_5299552928_op9[2] = { &&func_5299565904, &&RETURN };
    static void *func_5299552928_op10[2] = { &&func_5299566672, &&RETURN };
    static void *func_5299552608_op0[2] = { &&func_5299564976, &&RETURN };
    static void *exp_5299552800[3] = {&&func_5299553120, &&func_5299551264, &&RETURN };
    static void *exp_5299553248[3] = {&&func_5299551968, &&func_5299549584, &&RETURN };
    static void *exp_5299555440[4] = {&&func_5299555568, &&func_5299532864, &&func_5299555696, &&RETURN };
    static void *exp_5299555824[4] = {&&func_5299555952, &&func_5299550192, &&func_5299563920, &&RETURN };
    static void *exp_5299553648[3] = {&&func_5299550576, &&func_5299556416, &&RETURN };
    static void *exp_5299564304[4] = {&&func_5299556672, &&func_5299550192, &&func_5299563920, &&RETURN };
    static void *exp_5299564432[4] = {&&func_5299549792, &&func_5299564560, &&func_5299549792, &&RETURN };
    static void *exp_5299553568[3] = {&&func_5299550048, &&func_5299550192, &&RETURN };
    static void *exp_5299564688[3] = {&&func_5299550576, &&func_5299556256, &&RETURN };
    static void *exp_5299564976[4] = {&&func_5299532864, &&func_5299556864, &&func_5299551968, &&RETURN };

func_5299532864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299532864_op0;
            break;
        case 1:
            PC = func_5299532864_op1;
            break;
    }
    goto **PC;
func_5299549376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549376_op0;
            break;
    }
    goto **PC;
func_5299549584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549584_op0;
            break;
        case 1:
            PC = func_5299549584_op1;
            break;
        case 2:
            PC = func_5299549584_op2;
            break;
    }
    goto **PC;
func_5299549792:
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
            PC = func_5299549792_op0;
            break;
        case 1:
            PC = func_5299549792_op1;
            break;
    }
    goto **PC;
func_5299549248:
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
            PC = func_5299549248_op0;
            break;
    }
    goto **PC;
func_5299550448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550448_op0;
            break;
        case 1:
            PC = func_5299550448_op1;
            break;
        case 2:
            PC = func_5299550448_op2;
            break;
        case 3:
            PC = func_5299550448_op3;
            break;
        case 4:
            PC = func_5299550448_op4;
            break;
        case 5:
            PC = func_5299550448_op5;
            break;
        case 6:
            PC = func_5299550448_op6;
            break;
        case 7:
            PC = func_5299550448_op7;
            break;
        case 8:
            PC = func_5299550448_op8;
            break;
        case 9:
            PC = func_5299550448_op9;
            break;
    }
    goto **PC;
func_5299550576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550576_op0;
            break;
        case 1:
            PC = func_5299550576_op1;
            break;
        case 2:
            PC = func_5299550576_op2;
            break;
        case 3:
            PC = func_5299550576_op3;
            break;
        case 4:
            PC = func_5299550576_op4;
            break;
    }
    goto **PC;
func_5299550352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550352_op0;
            break;
    }
    goto **PC;
func_5299550128:
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
            PC = func_5299550128_op0;
            break;
    }
    goto **PC;
func_5299552144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552144_op0;
            break;
        case 1:
            PC = func_5299552144_op1;
            break;
        case 2:
            PC = func_5299552144_op2;
            break;
        case 3:
            PC = func_5299552144_op3;
            break;
        case 4:
            PC = func_5299552144_op4;
            break;
        case 5:
            PC = func_5299552144_op5;
            break;
        case 6:
            PC = func_5299552144_op6;
            break;
        case 7:
            PC = func_5299552144_op7;
            break;
        case 8:
            PC = func_5299552144_op8;
            break;
        case 9:
            PC = func_5299552144_op9;
            break;
        case 10:
            PC = func_5299552144_op10;
            break;
        case 11:
            PC = func_5299552144_op11;
            break;
        case 12:
            PC = func_5299552144_op12;
            break;
        case 13:
            PC = func_5299552144_op13;
            break;
        case 14:
            PC = func_5299552144_op14;
            break;
        case 15:
            PC = func_5299552144_op15;
            break;
        case 16:
            PC = func_5299552144_op16;
            break;
        case 17:
            PC = func_5299552144_op17;
            break;
        case 18:
            PC = func_5299552144_op18;
            break;
        case 19:
            PC = func_5299552144_op19;
            break;
        case 20:
            PC = func_5299552144_op20;
            break;
        case 21:
            PC = func_5299552144_op21;
            break;
        case 22:
            PC = func_5299552144_op22;
            break;
        case 23:
            PC = func_5299552144_op23;
            break;
        case 24:
            PC = func_5299552144_op24;
            break;
        case 25:
            PC = func_5299552144_op25;
            break;
        case 26:
            PC = func_5299552144_op26;
            break;
        case 27:
            PC = func_5299552144_op27;
            break;
        case 28:
            PC = func_5299552144_op28;
            break;
        case 29:
            PC = func_5299552144_op29;
            break;
        case 30:
            PC = func_5299552144_op30;
            break;
        case 31:
            PC = func_5299552144_op31;
            break;
        case 32:
            PC = func_5299552144_op32;
            break;
        case 33:
            PC = func_5299552144_op33;
            break;
        case 34:
            PC = func_5299552144_op34;
            break;
        case 35:
            PC = func_5299552144_op35;
            break;
        case 36:
            PC = func_5299552144_op36;
            break;
        case 37:
            PC = func_5299552144_op37;
            break;
        case 38:
            PC = func_5299552144_op38;
            break;
        case 39:
            PC = func_5299552144_op39;
            break;
        case 40:
            PC = func_5299552144_op40;
            break;
        case 41:
            PC = func_5299552144_op41;
            break;
        case 42:
            PC = func_5299552144_op42;
            break;
        case 43:
            PC = func_5299552144_op43;
            break;
        case 44:
            PC = func_5299552144_op44;
            break;
        case 45:
            PC = func_5299552144_op45;
            break;
        case 46:
            PC = func_5299552144_op46;
            break;
        case 47:
            PC = func_5299552144_op47;
            break;
        case 48:
            PC = func_5299552144_op48;
            break;
        case 49:
            PC = func_5299552144_op49;
            break;
        case 50:
            PC = func_5299552144_op50;
            break;
        case 51:
            PC = func_5299552144_op51;
            break;
    }
    goto **PC;
func_5299551264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5299551264_op0;
            break;
        case 1:
            PC = func_5299551264_op1;
            break;
        case 2:
            PC = func_5299551264_op2;
            break;
        case 3:
            PC = func_5299551264_op3;
            break;
        case 4:
            PC = func_5299551264_op4;
            break;
        case 5:
            PC = func_5299551264_op5;
            break;
        case 6:
            PC = func_5299551264_op6;
            break;
        case 7:
            PC = func_5299551264_op7;
            break;
        case 8:
            PC = func_5299551264_op8;
            break;
        case 9:
            PC = func_5299551264_op9;
            break;
        case 10:
            PC = func_5299551264_op10;
            break;
        case 11:
            PC = func_5299551264_op11;
            break;
        case 12:
            PC = func_5299551264_op12;
            break;
        case 13:
            PC = func_5299551264_op13;
            break;
    }
    goto **PC;
func_5299550704:
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
            PC = func_5299550704_op0;
            break;
    }
    goto **PC;
func_5299550832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550832_op0;
            break;
        case 1:
            PC = func_5299550832_op1;
            break;
        case 2:
            PC = func_5299550832_op2;
            break;
    }
    goto **PC;
func_5299550960:
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
            PC = func_5299550960_op0;
            break;
    }
    goto **PC;
func_5299551088:
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
            PC = func_5299551088_op0;
            break;
    }
    goto **PC;
func_5299551392:
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
            PC = func_5299551392_op0;
            break;
    }
    goto **PC;
func_5299550048:
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
            PC = func_5299550048_op0;
            break;
        case 1:
            PC = func_5299550048_op1;
            break;
    }
    goto **PC;
func_5299550192:
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
            PC = func_5299550192_op0;
            break;
        case 1:
            PC = func_5299550192_op1;
            break;
    }
    goto **PC;
func_5299551840:
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
            PC = func_5299551840_op0;
            break;
        case 1:
            PC = func_5299551840_op1;
            break;
    }
    goto **PC;
func_5299551968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299551968_op0;
            break;
        case 1:
            PC = func_5299551968_op1;
            break;
    }
    goto **PC;
func_5299552272:
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
            PC = func_5299552272_op0;
            break;
    }
    goto **PC;
func_5299552400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552400_op0;
            break;
    }
    goto **PC;
func_5299552928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5299552928_op0;
            break;
        case 1:
            PC = func_5299552928_op1;
            break;
        case 2:
            PC = func_5299552928_op2;
            break;
        case 3:
            PC = func_5299552928_op3;
            break;
        case 4:
            PC = func_5299552928_op4;
            break;
        case 5:
            PC = func_5299552928_op5;
            break;
        case 6:
            PC = func_5299552928_op6;
            break;
        case 7:
            PC = func_5299552928_op7;
            break;
        case 8:
            PC = func_5299552928_op8;
            break;
        case 9:
            PC = func_5299552928_op9;
            break;
        case 10:
            PC = func_5299552928_op10;
            break;
    }
    goto **PC;
func_5299552608:
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
            PC = func_5299552608_op0;
            break;
    }
    goto **PC;
func_5299552528:
    extend(46);
    NEXT();
    goto **PC;
func_5299552800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299552800;
    goto **PC;
func_5299553120:
    extend(92);
    NEXT();
    goto **PC;
func_5299553248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299553248;
    goto **PC;
func_5299553744:
    extend(48);
    NEXT();
    goto **PC;
func_5299553872:
    extend(49);
    NEXT();
    goto **PC;
func_5299554000:
    extend(50);
    NEXT();
    goto **PC;
func_5299554160:
    extend(51);
    NEXT();
    goto **PC;
func_5299554288:
    extend(52);
    NEXT();
    goto **PC;
func_5299551648:
    extend(53);
    NEXT();
    goto **PC;
func_5299554864:
    extend(54);
    NEXT();
    goto **PC;
func_5299554992:
    extend(55);
    NEXT();
    goto **PC;
func_5299555120:
    extend(56);
    NEXT();
    goto **PC;
func_5299551584:
    extend(57);
    NEXT();
    goto **PC;
func_5299553440:
    extend(36);
    NEXT();
    goto **PC;
func_5299555440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299555440;
    goto **PC;
func_5299555568:
    extend(40);
    NEXT();
    goto **PC;
func_5299555696:
    extend(41);
    NEXT();
    goto **PC;
func_5299557168:
    extend(97);
    NEXT();
    goto **PC;
func_5299557296:
    extend(98);
    NEXT();
    goto **PC;
func_5299557424:
    extend(99);
    NEXT();
    goto **PC;
func_5299557584:
    extend(100);
    NEXT();
    goto **PC;
func_5299557712:
    extend(101);
    NEXT();
    goto **PC;
func_5299557904:
    extend(102);
    NEXT();
    goto **PC;
func_5299558032:
    extend(103);
    NEXT();
    goto **PC;
func_5299558160:
    extend(104);
    NEXT();
    goto **PC;
func_5299558288:
    extend(105);
    NEXT();
    goto **PC;
func_5299557840:
    extend(106);
    NEXT();
    goto **PC;
func_5299558608:
    extend(107);
    NEXT();
    goto **PC;
func_5299558736:
    extend(108);
    NEXT();
    goto **PC;
func_5299558864:
    extend(109);
    NEXT();
    goto **PC;
func_5299558992:
    extend(110);
    NEXT();
    goto **PC;
func_5299559120:
    extend(111);
    NEXT();
    goto **PC;
func_5299559248:
    extend(112);
    NEXT();
    goto **PC;
func_5299559376:
    extend(113);
    NEXT();
    goto **PC;
func_5299558416:
    extend(114);
    NEXT();
    goto **PC;
func_5299559760:
    extend(115);
    NEXT();
    goto **PC;
func_5299559888:
    extend(116);
    NEXT();
    goto **PC;
func_5299560016:
    extend(117);
    NEXT();
    goto **PC;
func_5299560144:
    extend(118);
    NEXT();
    goto **PC;
func_5299560272:
    extend(119);
    NEXT();
    goto **PC;
func_5299554416:
    extend(120);
    NEXT();
    goto **PC;
func_5299554544:
    extend(121);
    NEXT();
    goto **PC;
func_5299554672:
    extend(122);
    NEXT();
    goto **PC;
func_5299554800:
    extend(65);
    NEXT();
    goto **PC;
func_5299560400:
    extend(66);
    NEXT();
    goto **PC;
func_5299560528:
    extend(67);
    NEXT();
    goto **PC;
func_5299560656:
    extend(68);
    NEXT();
    goto **PC;
func_5299560784:
    extend(69);
    NEXT();
    goto **PC;
func_5299560912:
    extend(70);
    NEXT();
    goto **PC;
func_5299561040:
    extend(71);
    NEXT();
    goto **PC;
func_5299559504:
    extend(72);
    NEXT();
    goto **PC;
func_5299559632:
    extend(73);
    NEXT();
    goto **PC;
func_5299561680:
    extend(74);
    NEXT();
    goto **PC;
func_5299561808:
    extend(75);
    NEXT();
    goto **PC;
func_5299561936:
    extend(76);
    NEXT();
    goto **PC;
func_5299562064:
    extend(77);
    NEXT();
    goto **PC;
func_5299562192:
    extend(78);
    NEXT();
    goto **PC;
func_5299562320:
    extend(79);
    NEXT();
    goto **PC;
func_5299562448:
    extend(80);
    NEXT();
    goto **PC;
func_5299562576:
    extend(81);
    NEXT();
    goto **PC;
func_5299562704:
    extend(82);
    NEXT();
    goto **PC;
func_5299562832:
    extend(83);
    NEXT();
    goto **PC;
func_5299562960:
    extend(84);
    NEXT();
    goto **PC;
func_5299563088:
    extend(85);
    NEXT();
    goto **PC;
func_5299563216:
    extend(86);
    NEXT();
    goto **PC;
func_5299563344:
    extend(87);
    NEXT();
    goto **PC;
func_5299563472:
    extend(88);
    NEXT();
    goto **PC;
func_5299563600:
    extend(89);
    NEXT();
    goto **PC;
func_5299563728:
    extend(90);
    NEXT();
    goto **PC;
func_5299556256:
    extend(42);
    NEXT();
    goto **PC;
func_5299556416:
    extend(43);
    NEXT();
    goto **PC;
func_5299556544:
    extend(63);
    NEXT();
    goto **PC;
func_5299556736:
    extend(94);
    NEXT();
    goto **PC;
func_5299556864:
    extend(124);
    NEXT();
    goto **PC;
func_5299556672:
    extend(91);
    NEXT();
    goto **PC;
func_5299563920:
    extend(93);
    NEXT();
    goto **PC;
func_5299564048:
    extend(123);
    NEXT();
    goto **PC;
func_5299564176:
    extend(125);
    NEXT();
    goto **PC;
func_5299555824:
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
    PC = exp_5299555824;
    goto **PC;
func_5299555952:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5299553648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299553648;
    goto **PC;
func_5299564304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299564304;
    goto **PC;
func_5299564432:
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
    PC = exp_5299564432;
    goto **PC;
func_5299564560:
    extend(45);
    NEXT();
    goto **PC;
func_5299553568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299553568;
    goto **PC;
func_5299564688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299564688;
    goto **PC;
func_5299565344:
    extend(95);
    NEXT();
    goto **PC;
func_5299565488:
    extend(64);
    NEXT();
    goto **PC;
func_5299565648:
    extend(35);
    NEXT();
    goto **PC;
func_5299565776:
    extend(37);
    NEXT();
    goto **PC;
func_5299565968:
    extend(38);
    NEXT();
    goto **PC;
func_5299566096:
    extend(61);
    NEXT();
    goto **PC;
func_5299566224:
    extend(126);
    NEXT();
    goto **PC;
func_5299566352:
    extend(96);
    NEXT();
    goto **PC;
func_5299565904:
    extend(39);
    NEXT();
    goto **PC;
func_5299566672:
    extend(34);
    NEXT();
    goto **PC;
func_5299564976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5299564976;
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
    PC = func_5299552400_op0;
    goto **PC;
}
