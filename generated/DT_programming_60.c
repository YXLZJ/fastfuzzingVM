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
    static void *func_5274381712_op0[2] = { &&func_5274383808, &&RETURN };
    static void *func_5274382464_op0[2] = { &&func_5274385408, &&RETURN };
    static void *func_5274382464_op1[2] = { &&func_5274385664, &&RETURN };
    static void *func_5274382464_op2[2] = { &&func_5274385920, &&RETURN };
    static void *func_5274382464_op3[2] = { &&func_5274386208, &&RETURN };
    static void *func_5274382464_op4[2] = { &&func_5274386496, &&RETURN };
    static void *func_5274382464_op5[2] = { &&func_5274386848, &&RETURN };
    static void *func_5274382464_op6[2] = { &&func_5274387152, &&RETURN };
    static void *func_5274382624_op0[2] = { &&func_5274385280, &&RETURN };
    static void *func_5274382624_op1[2] = { &&func_5274384832, &&RETURN };
    static void *func_5274382624_op2[2] = { &&func_5274387728, &&RETURN };
    static void *func_5274382624_op3[2] = { &&func_5274387856, &&RETURN };
    static void *func_5274382624_op4[2] = { &&func_5274387984, &&RETURN };
    static void *func_5274382624_op5[2] = { &&func_5274388176, &&RETURN };
    static void *func_5274382624_op6[2] = { &&func_5274388304, &&RETURN };
    static void *func_5274382624_op7[2] = { &&func_5274388432, &&RETURN };
    static void *func_5274382624_op8[2] = { &&func_5274388560, &&RETURN };
    static void *func_5274382624_op9[2] = { &&func_5274388112, &&RETURN };
    static void *func_5274382336_op0[2] = { &&func_5274384768, &&RETURN };
    static void *func_5274382336_op1[2] = { &&func_5274384960, &&RETURN };
    static void *func_5274382336_op2[2] = { &&func_5274383872, &&RETURN };
    static void *func_5274381984_op0[2] = { &&func_5274388960, &&RETURN };
    static void *func_5274381984_op1[2] = { &&func_5274381904, &&RETURN };
    static void *func_5274381984_op2[2] = { &&func_5274382224, &&RETURN };
    static void *func_5274381584_op0[2] = { &&func_5274383712, &&RETURN };
    static void *func_5274382224_op0[2] = { &&func_5274389664, &&RETURN };
    static void *func_5274382224_op1[2] = { &&func_5274384384, &&RETURN };
    static void *func_5274382752_op0[2] = { &&func_5274390624, &&RETURN };
    static void *func_5274384384_op0[2] = { &&func_5274392096, &&RETURN };
    static void *func_5274384384_op1[2] = { &&func_5274392224, &&RETURN };
    static void *func_5274384384_op2[2] = { &&func_5274392352, &&RETURN };
    static void *func_5274384384_op3[2] = { &&func_5274392512, &&RETURN };
    static void *func_5274384384_op4[2] = { &&func_5274392640, &&RETURN };
    static void *func_5274384384_op5[2] = { &&func_5274392832, &&RETURN };
    static void *func_5274384384_op6[2] = { &&func_5274392960, &&RETURN };
    static void *func_5274384384_op7[2] = { &&func_5274387280, &&RETURN };
    static void *func_5274384384_op8[2] = { &&func_5274387408, &&RETURN };
    static void *func_5274384384_op9[2] = { &&func_5274392768, &&RETURN };
    static void *func_5274384384_op10[2] = { &&func_5274393024, &&RETURN };
    static void *func_5274384384_op11[2] = { &&func_5274393152, &&RETURN };
    static void *func_5274384384_op12[2] = { &&func_5274393280, &&RETURN };
    static void *func_5274384384_op13[2] = { &&func_5274393408, &&RETURN };
    static void *func_5274384384_op14[2] = { &&func_5274393536, &&RETURN };
    static void *func_5274384384_op15[2] = { &&func_5274393664, &&RETURN };
    static void *func_5274384384_op16[2] = { &&func_5274393792, &&RETURN };
    static void *func_5274384384_op17[2] = { &&func_5274387536, &&RETURN };
    static void *func_5274384384_op18[2] = { &&func_5274394176, &&RETURN };
    static void *func_5274384384_op19[2] = { &&func_5274394304, &&RETURN };
    static void *func_5274384384_op20[2] = { &&func_5274394432, &&RETURN };
    static void *func_5274384384_op21[2] = { &&func_5274394560, &&RETURN };
    static void *func_5274384384_op22[2] = { &&func_5274394688, &&RETURN };
    static void *func_5274384384_op23[2] = { &&func_5274394816, &&RETURN };
    static void *func_5274384384_op24[2] = { &&func_5274394944, &&RETURN };
    static void *func_5274384384_op25[2] = { &&func_5274395072, &&RETURN };
    static void *func_5274384384_op26[2] = { &&func_5274395200, &&RETURN };
    static void *func_5274384384_op27[2] = { &&func_5274395328, &&RETURN };
    static void *func_5274384384_op28[2] = { &&func_5274395456, &&RETURN };
    static void *func_5274384384_op29[2] = { &&func_5274395584, &&RETURN };
    static void *func_5274384384_op30[2] = { &&func_5274395712, &&RETURN };
    static void *func_5274384384_op31[2] = { &&func_5274395840, &&RETURN };
    static void *func_5274384384_op32[2] = { &&func_5274395968, &&RETURN };
    static void *func_5274384384_op33[2] = { &&func_5274393920, &&RETURN };
    static void *func_5274384384_op34[2] = { &&func_5274394048, &&RETURN };
    static void *func_5274384384_op35[2] = { &&func_5274396608, &&RETURN };
    static void *func_5274384384_op36[2] = { &&func_5274396736, &&RETURN };
    static void *func_5274384384_op37[2] = { &&func_5274396864, &&RETURN };
    static void *func_5274384384_op38[2] = { &&func_5274396992, &&RETURN };
    static void *func_5274384384_op39[2] = { &&func_5274397120, &&RETURN };
    static void *func_5274384384_op40[2] = { &&func_5274397248, &&RETURN };
    static void *func_5274384384_op41[2] = { &&func_5274397376, &&RETURN };
    static void *func_5274384384_op42[2] = { &&func_5274397504, &&RETURN };
    static void *func_5274384384_op43[2] = { &&func_5274397632, &&RETURN };
    static void *func_5274384384_op44[2] = { &&func_5274397760, &&RETURN };
    static void *func_5274384384_op45[2] = { &&func_5274397888, &&RETURN };
    static void *func_5274384384_op46[2] = { &&func_5274398016, &&RETURN };
    static void *func_5274384384_op47[2] = { &&func_5274398144, &&RETURN };
    static void *func_5274384384_op48[2] = { &&func_5274398272, &&RETURN };
    static void *func_5274384384_op49[2] = { &&func_5274398400, &&RETURN };
    static void *func_5274384384_op50[2] = { &&func_5274398528, &&RETURN };
    static void *func_5274384384_op51[2] = { &&func_5274398656, &&RETURN };
    static void *func_5274381904_op0[2] = { &&func_5274390448, &&RETURN };
    static void *func_5274381904_op1[2] = { &&func_5274382624, &&RETURN };
    static void *func_5274382944_op0[2] = { &&func_5274389792, &&RETURN };
    static void *func_5274382944_op1[2] = { &&func_5274383584, &&RETURN };
    static void *func_5274383152_op0[2] = { &&func_5274391024, &&RETURN };
    static void *func_5274383072_op0[2] = { &&func_5274382944, &&HALT };
    static void *func_5274383584_op0[2] = { &&func_5274383424, &&RETURN };
    static void *func_5274383584_op1[2] = { &&func_5274381712, &&RETURN };
    static void *func_5274383584_op2[2] = { &&func_5274382752, &&RETURN };
    static void *func_5274383584_op3[2] = { &&func_5274383344, &&RETURN };
    static void *func_5274383584_op4[2] = { &&func_5274381584, &&RETURN };
    static void *func_5274383584_op5[2] = { &&func_5274383152, &&RETURN };
    static void *func_5274383872_op0[2] = { &&func_5274391648, &&RETURN };
    static void *func_5274383872_op1[2] = { &&func_5274391280, &&RETURN };
    static void *func_5274383872_op2[2] = { &&func_5274381984, &&RETURN };
    static void *func_5274383424_op0[2] = { &&func_5274398864, &&RETURN };
    static void *func_5274383424_op1[2] = { &&func_5274399248, &&RETURN };
    static void *func_5274383424_op2[2] = { &&func_5274399504, &&RETURN };
    static void *func_5274383344_op0[2] = { &&func_5274398784, &&RETURN };
    static void *exp_5274383808[5] = {&&func_5274382224, &&func_5274384128, &&func_5274382336, &&func_5274384256, &&RETURN };
    static void *exp_5274385408[4] = {&&func_5274382336, &&func_5274385536, &&func_5274382336, &&RETURN };
    static void *exp_5274385664[4] = {&&func_5274382336, &&func_5274385792, &&func_5274382336, &&RETURN };
    static void *exp_5274385920[4] = {&&func_5274382336, &&func_5274386048, &&func_5274382336, &&RETURN };
    static void *exp_5274386208[4] = {&&func_5274382336, &&func_5274386336, &&func_5274382336, &&RETURN };
    static void *exp_5274386496[4] = {&&func_5274382464, &&func_5274386624, &&func_5274382464, &&RETURN };
    static void *exp_5274386848[4] = {&&func_5274382464, &&func_5274386976, &&func_5274382464, &&RETURN };
    static void *exp_5274387152[3] = {&&func_5274384640, &&func_5274382464, &&RETURN };
    static void *exp_5274384768[4] = {&&func_5274382336, &&func_5274389104, &&func_5274383872, &&RETURN };
    static void *exp_5274384960[4] = {&&func_5274382336, &&func_5274385088, &&func_5274383872, &&RETURN };
    static void *exp_5274388960[4] = {&&func_5274389328, &&func_5274382336, &&func_5274389456, &&RETURN };
    static void *exp_5274383712[8] = {&&func_5274390064, &&func_5274382224, &&func_5274389328, &&func_5274389456, &&func_5274384448, &&func_5274382944, &&func_5274390320, &&RETURN };
    static void *exp_5274389664[3] = {&&func_5274384384, &&func_5274382224, &&RETURN };
    static void *exp_5274390624[8] = {&&func_5274390752, &&func_5274389328, &&func_5274382464, &&func_5274389456, &&func_5274384448, &&func_5274382944, &&func_5274390320, &&RETURN };
    static void *exp_5274390448[3] = {&&func_5274382624, &&func_5274381904, &&RETURN };
    static void *exp_5274389792[3] = {&&func_5274382944, &&func_5274383584, &&RETURN };
    static void *exp_5274391024[4] = {&&func_5274391152, &&func_5274382336, &&func_5274384256, &&RETURN };
    static void *exp_5274391648[4] = {&&func_5274383872, &&func_5274391776, &&func_5274381984, &&RETURN };
    static void *exp_5274391280[4] = {&&func_5274383872, &&func_5274391904, &&func_5274381984, &&RETURN };
    static void *exp_5274398864[4] = {&&func_5274398992, &&func_5274382224, &&func_5274399120, &&RETURN };
    static void *exp_5274399248[4] = {&&func_5274399376, &&func_5274382224, &&func_5274399120, &&RETURN };
    static void *exp_5274399504[4] = {&&func_5274399632, &&func_5274382224, &&func_5274399120, &&RETURN };
    static void *exp_5274398784[8] = {&&func_5274391552, &&func_5274389328, &&func_5274382464, &&func_5274389456, &&func_5274384448, &&func_5274382944, &&func_5274390320, &&RETURN };

func_5274381712:
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
            PC = func_5274381712_op0;
            break;
    }
    goto **PC;
func_5274382464:
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
            PC = func_5274382464_op0;
            break;
        case 1:
            PC = func_5274382464_op1;
            break;
        case 2:
            PC = func_5274382464_op2;
            break;
        case 3:
            PC = func_5274382464_op3;
            break;
        case 4:
            PC = func_5274382464_op4;
            break;
        case 5:
            PC = func_5274382464_op5;
            break;
        case 6:
            PC = func_5274382464_op6;
            break;
    }
    goto **PC;
func_5274382624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5274382624_op0;
            break;
        case 1:
            PC = func_5274382624_op1;
            break;
        case 2:
            PC = func_5274382624_op2;
            break;
        case 3:
            PC = func_5274382624_op3;
            break;
        case 4:
            PC = func_5274382624_op4;
            break;
        case 5:
            PC = func_5274382624_op5;
            break;
        case 6:
            PC = func_5274382624_op6;
            break;
        case 7:
            PC = func_5274382624_op7;
            break;
        case 8:
            PC = func_5274382624_op8;
            break;
        case 9:
            PC = func_5274382624_op9;
            break;
    }
    goto **PC;
func_5274382336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274382336_op0;
            break;
        case 1:
            PC = func_5274382336_op1;
            break;
        case 2:
            PC = func_5274382336_op2;
            break;
    }
    goto **PC;
func_5274381984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274381984_op0;
            break;
        case 1:
            PC = func_5274381984_op1;
            break;
        case 2:
            PC = func_5274381984_op2;
            break;
    }
    goto **PC;
func_5274381584:
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
            PC = func_5274381584_op0;
            break;
    }
    goto **PC;
func_5274382224:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5274382224_op0;
            break;
        case 1:
            PC = func_5274382224_op1;
            break;
    }
    goto **PC;
func_5274382752:
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
            PC = func_5274382752_op0;
            break;
    }
    goto **PC;
func_5274384384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5274384384_op0;
            break;
        case 1:
            PC = func_5274384384_op1;
            break;
        case 2:
            PC = func_5274384384_op2;
            break;
        case 3:
            PC = func_5274384384_op3;
            break;
        case 4:
            PC = func_5274384384_op4;
            break;
        case 5:
            PC = func_5274384384_op5;
            break;
        case 6:
            PC = func_5274384384_op6;
            break;
        case 7:
            PC = func_5274384384_op7;
            break;
        case 8:
            PC = func_5274384384_op8;
            break;
        case 9:
            PC = func_5274384384_op9;
            break;
        case 10:
            PC = func_5274384384_op10;
            break;
        case 11:
            PC = func_5274384384_op11;
            break;
        case 12:
            PC = func_5274384384_op12;
            break;
        case 13:
            PC = func_5274384384_op13;
            break;
        case 14:
            PC = func_5274384384_op14;
            break;
        case 15:
            PC = func_5274384384_op15;
            break;
        case 16:
            PC = func_5274384384_op16;
            break;
        case 17:
            PC = func_5274384384_op17;
            break;
        case 18:
            PC = func_5274384384_op18;
            break;
        case 19:
            PC = func_5274384384_op19;
            break;
        case 20:
            PC = func_5274384384_op20;
            break;
        case 21:
            PC = func_5274384384_op21;
            break;
        case 22:
            PC = func_5274384384_op22;
            break;
        case 23:
            PC = func_5274384384_op23;
            break;
        case 24:
            PC = func_5274384384_op24;
            break;
        case 25:
            PC = func_5274384384_op25;
            break;
        case 26:
            PC = func_5274384384_op26;
            break;
        case 27:
            PC = func_5274384384_op27;
            break;
        case 28:
            PC = func_5274384384_op28;
            break;
        case 29:
            PC = func_5274384384_op29;
            break;
        case 30:
            PC = func_5274384384_op30;
            break;
        case 31:
            PC = func_5274384384_op31;
            break;
        case 32:
            PC = func_5274384384_op32;
            break;
        case 33:
            PC = func_5274384384_op33;
            break;
        case 34:
            PC = func_5274384384_op34;
            break;
        case 35:
            PC = func_5274384384_op35;
            break;
        case 36:
            PC = func_5274384384_op36;
            break;
        case 37:
            PC = func_5274384384_op37;
            break;
        case 38:
            PC = func_5274384384_op38;
            break;
        case 39:
            PC = func_5274384384_op39;
            break;
        case 40:
            PC = func_5274384384_op40;
            break;
        case 41:
            PC = func_5274384384_op41;
            break;
        case 42:
            PC = func_5274384384_op42;
            break;
        case 43:
            PC = func_5274384384_op43;
            break;
        case 44:
            PC = func_5274384384_op44;
            break;
        case 45:
            PC = func_5274384384_op45;
            break;
        case 46:
            PC = func_5274384384_op46;
            break;
        case 47:
            PC = func_5274384384_op47;
            break;
        case 48:
            PC = func_5274384384_op48;
            break;
        case 49:
            PC = func_5274384384_op49;
            break;
        case 50:
            PC = func_5274384384_op50;
            break;
        case 51:
            PC = func_5274384384_op51;
            break;
    }
    goto **PC;
func_5274381904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5274381904_op0;
            break;
        case 1:
            PC = func_5274381904_op1;
            break;
    }
    goto **PC;
func_5274382944:
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
            PC = func_5274382944_op0;
            break;
        case 1:
            PC = func_5274382944_op1;
            break;
    }
    goto **PC;
func_5274383152:
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
            PC = func_5274383152_op0;
            break;
    }
    goto **PC;
func_5274383072:
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
            PC = func_5274383072_op0;
            break;
    }
    goto **PC;
func_5274383584:
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
            PC = func_5274383584_op0;
            break;
        case 1:
            PC = func_5274383584_op1;
            break;
        case 2:
            PC = func_5274383584_op2;
            break;
        case 3:
            PC = func_5274383584_op3;
            break;
        case 4:
            PC = func_5274383584_op4;
            break;
        case 5:
            PC = func_5274383584_op5;
            break;
    }
    goto **PC;
func_5274383872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5274383872_op0;
            break;
        case 1:
            PC = func_5274383872_op1;
            break;
        case 2:
            PC = func_5274383872_op2;
            break;
    }
    goto **PC;
func_5274383424:
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
            PC = func_5274383424_op0;
            break;
        case 1:
            PC = func_5274383424_op1;
            break;
        case 2:
            PC = func_5274383424_op2;
            break;
    }
    goto **PC;
func_5274383344:
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
            PC = func_5274383344_op0;
            break;
    }
    goto **PC;
func_5274383808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274383808;
    goto **PC;
func_5274384128:
    extend(61);
    NEXT();
    goto **PC;
func_5274384256:
    extend(59);
    NEXT();
    goto **PC;
func_5274385408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274385408;
    goto **PC;
func_5274385536:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5274385664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274385664;
    goto **PC;
func_5274385792:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5274385920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274385920;
    goto **PC;
func_5274386048:
    extend(62);
    NEXT();
    goto **PC;
func_5274386208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274386208;
    goto **PC;
func_5274386336:
    extend(60);
    NEXT();
    goto **PC;
func_5274386496:
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
    PC = exp_5274386496;
    goto **PC;
func_5274386624:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5274386848:
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
    PC = exp_5274386848;
    goto **PC;
func_5274386976:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5274387152:
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
    PC = exp_5274387152;
    goto **PC;
func_5274384640:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5274385280:
    extend(48);
    NEXT();
    goto **PC;
func_5274384832:
    extend(49);
    NEXT();
    goto **PC;
func_5274387728:
    extend(50);
    NEXT();
    goto **PC;
func_5274387856:
    extend(51);
    NEXT();
    goto **PC;
func_5274387984:
    extend(52);
    NEXT();
    goto **PC;
func_5274388176:
    extend(53);
    NEXT();
    goto **PC;
func_5274388304:
    extend(54);
    NEXT();
    goto **PC;
func_5274388432:
    extend(55);
    NEXT();
    goto **PC;
func_5274388560:
    extend(56);
    NEXT();
    goto **PC;
func_5274388112:
    extend(57);
    NEXT();
    goto **PC;
func_5274384768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274384768;
    goto **PC;
func_5274389104:
    extend(43);
    NEXT();
    goto **PC;
func_5274384960:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274384960;
    goto **PC;
func_5274385088:
    extend(45);
    NEXT();
    goto **PC;
func_5274388960:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274388960;
    goto **PC;
func_5274389328:
    extend(40);
    NEXT();
    goto **PC;
func_5274389456:
    extend(41);
    NEXT();
    goto **PC;
func_5274383712:
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
    PC = exp_5274383712;
    goto **PC;
func_5274390064:
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
func_5274384448:
    extend(123);
    NEXT();
    goto **PC;
func_5274390320:
    extend(125);
    NEXT();
    goto **PC;
func_5274389664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274389664;
    goto **PC;
func_5274390624:
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
    PC = exp_5274390624;
    goto **PC;
func_5274390752:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5274392096:
    extend(97);
    NEXT();
    goto **PC;
func_5274392224:
    extend(98);
    NEXT();
    goto **PC;
func_5274392352:
    extend(99);
    NEXT();
    goto **PC;
func_5274392512:
    extend(100);
    NEXT();
    goto **PC;
func_5274392640:
    extend(101);
    NEXT();
    goto **PC;
func_5274392832:
    extend(102);
    NEXT();
    goto **PC;
func_5274392960:
    extend(103);
    NEXT();
    goto **PC;
func_5274387280:
    extend(104);
    NEXT();
    goto **PC;
func_5274387408:
    extend(105);
    NEXT();
    goto **PC;
func_5274392768:
    extend(106);
    NEXT();
    goto **PC;
func_5274393024:
    extend(107);
    NEXT();
    goto **PC;
func_5274393152:
    extend(108);
    NEXT();
    goto **PC;
func_5274393280:
    extend(109);
    NEXT();
    goto **PC;
func_5274393408:
    extend(110);
    NEXT();
    goto **PC;
func_5274393536:
    extend(111);
    NEXT();
    goto **PC;
func_5274393664:
    extend(112);
    NEXT();
    goto **PC;
func_5274393792:
    extend(113);
    NEXT();
    goto **PC;
func_5274387536:
    extend(114);
    NEXT();
    goto **PC;
func_5274394176:
    extend(115);
    NEXT();
    goto **PC;
func_5274394304:
    extend(116);
    NEXT();
    goto **PC;
func_5274394432:
    extend(117);
    NEXT();
    goto **PC;
func_5274394560:
    extend(118);
    NEXT();
    goto **PC;
func_5274394688:
    extend(119);
    NEXT();
    goto **PC;
func_5274394816:
    extend(120);
    NEXT();
    goto **PC;
func_5274394944:
    extend(121);
    NEXT();
    goto **PC;
func_5274395072:
    extend(122);
    NEXT();
    goto **PC;
func_5274395200:
    extend(65);
    NEXT();
    goto **PC;
func_5274395328:
    extend(66);
    NEXT();
    goto **PC;
func_5274395456:
    extend(67);
    NEXT();
    goto **PC;
func_5274395584:
    extend(68);
    NEXT();
    goto **PC;
func_5274395712:
    extend(69);
    NEXT();
    goto **PC;
func_5274395840:
    extend(70);
    NEXT();
    goto **PC;
func_5274395968:
    extend(71);
    NEXT();
    goto **PC;
func_5274393920:
    extend(72);
    NEXT();
    goto **PC;
func_5274394048:
    extend(73);
    NEXT();
    goto **PC;
func_5274396608:
    extend(74);
    NEXT();
    goto **PC;
func_5274396736:
    extend(75);
    NEXT();
    goto **PC;
func_5274396864:
    extend(76);
    NEXT();
    goto **PC;
func_5274396992:
    extend(77);
    NEXT();
    goto **PC;
func_5274397120:
    extend(78);
    NEXT();
    goto **PC;
func_5274397248:
    extend(79);
    NEXT();
    goto **PC;
func_5274397376:
    extend(80);
    NEXT();
    goto **PC;
func_5274397504:
    extend(81);
    NEXT();
    goto **PC;
func_5274397632:
    extend(82);
    NEXT();
    goto **PC;
func_5274397760:
    extend(83);
    NEXT();
    goto **PC;
func_5274397888:
    extend(84);
    NEXT();
    goto **PC;
func_5274398016:
    extend(85);
    NEXT();
    goto **PC;
func_5274398144:
    extend(86);
    NEXT();
    goto **PC;
func_5274398272:
    extend(87);
    NEXT();
    goto **PC;
func_5274398400:
    extend(88);
    NEXT();
    goto **PC;
func_5274398528:
    extend(89);
    NEXT();
    goto **PC;
func_5274398656:
    extend(90);
    NEXT();
    goto **PC;
func_5274390448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274390448;
    goto **PC;
func_5274389792:
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
    PC = exp_5274389792;
    goto **PC;
func_5274391024:
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
    PC = exp_5274391024;
    goto **PC;
func_5274391152:
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
func_5274391648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274391648;
    goto **PC;
func_5274391776:
    extend(42);
    NEXT();
    goto **PC;
func_5274391280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5274391280;
    goto **PC;
func_5274391904:
    extend(47);
    NEXT();
    goto **PC;
func_5274398864:
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
    PC = exp_5274398864;
    goto **PC;
func_5274398992:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5274399120:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5274399248:
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
    PC = exp_5274399248;
    goto **PC;
func_5274399376:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5274399504:
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
    PC = exp_5274399504;
    goto **PC;
func_5274399632:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5274398784:
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
    PC = exp_5274398784;
    goto **PC;
func_5274391552:
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
    PC = func_5274383072_op0;
    goto **PC;
}
