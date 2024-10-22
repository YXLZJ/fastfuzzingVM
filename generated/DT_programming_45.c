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
    static void *func_5593148816_op0[2] = { &&func_5593150912, &&RETURN };
    static void *func_5593149568_op0[2] = { &&func_5593152512, &&RETURN };
    static void *func_5593149568_op1[2] = { &&func_5593152768, &&RETURN };
    static void *func_5593149568_op2[2] = { &&func_5593153024, &&RETURN };
    static void *func_5593149568_op3[2] = { &&func_5593153312, &&RETURN };
    static void *func_5593149568_op4[2] = { &&func_5593153600, &&RETURN };
    static void *func_5593149568_op5[2] = { &&func_5593153952, &&RETURN };
    static void *func_5593149568_op6[2] = { &&func_5593154256, &&RETURN };
    static void *func_5593149728_op0[2] = { &&func_5593152384, &&RETURN };
    static void *func_5593149728_op1[2] = { &&func_5593151936, &&RETURN };
    static void *func_5593149728_op2[2] = { &&func_5593154832, &&RETURN };
    static void *func_5593149728_op3[2] = { &&func_5593154960, &&RETURN };
    static void *func_5593149728_op4[2] = { &&func_5593155088, &&RETURN };
    static void *func_5593149728_op5[2] = { &&func_5593155280, &&RETURN };
    static void *func_5593149728_op6[2] = { &&func_5593155408, &&RETURN };
    static void *func_5593149728_op7[2] = { &&func_5593155536, &&RETURN };
    static void *func_5593149728_op8[2] = { &&func_5593155664, &&RETURN };
    static void *func_5593149728_op9[2] = { &&func_5593155216, &&RETURN };
    static void *func_5593149440_op0[2] = { &&func_5593151872, &&RETURN };
    static void *func_5593149440_op1[2] = { &&func_5593152064, &&RETURN };
    static void *func_5593149440_op2[2] = { &&func_5593150976, &&RETURN };
    static void *func_5593149088_op0[2] = { &&func_5593156064, &&RETURN };
    static void *func_5593149088_op1[2] = { &&func_5593149008, &&RETURN };
    static void *func_5593149088_op2[2] = { &&func_5593149328, &&RETURN };
    static void *func_5593148688_op0[2] = { &&func_5593150816, &&RETURN };
    static void *func_5593149328_op0[2] = { &&func_5593156768, &&RETURN };
    static void *func_5593149328_op1[2] = { &&func_5593151488, &&RETURN };
    static void *func_5593149856_op0[2] = { &&func_5593157728, &&RETURN };
    static void *func_5593151488_op0[2] = { &&func_5593159200, &&RETURN };
    static void *func_5593151488_op1[2] = { &&func_5593159328, &&RETURN };
    static void *func_5593151488_op2[2] = { &&func_5593159456, &&RETURN };
    static void *func_5593151488_op3[2] = { &&func_5593159616, &&RETURN };
    static void *func_5593151488_op4[2] = { &&func_5593159744, &&RETURN };
    static void *func_5593151488_op5[2] = { &&func_5593159936, &&RETURN };
    static void *func_5593151488_op6[2] = { &&func_5593160064, &&RETURN };
    static void *func_5593151488_op7[2] = { &&func_5593154384, &&RETURN };
    static void *func_5593151488_op8[2] = { &&func_5593154512, &&RETURN };
    static void *func_5593151488_op9[2] = { &&func_5593159872, &&RETURN };
    static void *func_5593151488_op10[2] = { &&func_5593160128, &&RETURN };
    static void *func_5593151488_op11[2] = { &&func_5593160256, &&RETURN };
    static void *func_5593151488_op12[2] = { &&func_5593160384, &&RETURN };
    static void *func_5593151488_op13[2] = { &&func_5593160512, &&RETURN };
    static void *func_5593151488_op14[2] = { &&func_5593160640, &&RETURN };
    static void *func_5593151488_op15[2] = { &&func_5593160768, &&RETURN };
    static void *func_5593151488_op16[2] = { &&func_5593160896, &&RETURN };
    static void *func_5593151488_op17[2] = { &&func_5593154640, &&RETURN };
    static void *func_5593151488_op18[2] = { &&func_5593161280, &&RETURN };
    static void *func_5593151488_op19[2] = { &&func_5593161408, &&RETURN };
    static void *func_5593151488_op20[2] = { &&func_5593161536, &&RETURN };
    static void *func_5593151488_op21[2] = { &&func_5593161664, &&RETURN };
    static void *func_5593151488_op22[2] = { &&func_5593161792, &&RETURN };
    static void *func_5593151488_op23[2] = { &&func_5593161920, &&RETURN };
    static void *func_5593151488_op24[2] = { &&func_5593162048, &&RETURN };
    static void *func_5593151488_op25[2] = { &&func_5593162176, &&RETURN };
    static void *func_5593151488_op26[2] = { &&func_5593162304, &&RETURN };
    static void *func_5593151488_op27[2] = { &&func_5593162432, &&RETURN };
    static void *func_5593151488_op28[2] = { &&func_5593162560, &&RETURN };
    static void *func_5593151488_op29[2] = { &&func_5593162688, &&RETURN };
    static void *func_5593151488_op30[2] = { &&func_5593162816, &&RETURN };
    static void *func_5593151488_op31[2] = { &&func_5593162944, &&RETURN };
    static void *func_5593151488_op32[2] = { &&func_5593163072, &&RETURN };
    static void *func_5593151488_op33[2] = { &&func_5593161024, &&RETURN };
    static void *func_5593151488_op34[2] = { &&func_5593161152, &&RETURN };
    static void *func_5593151488_op35[2] = { &&func_5593163712, &&RETURN };
    static void *func_5593151488_op36[2] = { &&func_5593163840, &&RETURN };
    static void *func_5593151488_op37[2] = { &&func_5593163968, &&RETURN };
    static void *func_5593151488_op38[2] = { &&func_5593164096, &&RETURN };
    static void *func_5593151488_op39[2] = { &&func_5593164224, &&RETURN };
    static void *func_5593151488_op40[2] = { &&func_5593164352, &&RETURN };
    static void *func_5593151488_op41[2] = { &&func_5593164480, &&RETURN };
    static void *func_5593151488_op42[2] = { &&func_5593164608, &&RETURN };
    static void *func_5593151488_op43[2] = { &&func_5593164736, &&RETURN };
    static void *func_5593151488_op44[2] = { &&func_5593164864, &&RETURN };
    static void *func_5593151488_op45[2] = { &&func_5593164992, &&RETURN };
    static void *func_5593151488_op46[2] = { &&func_5593165120, &&RETURN };
    static void *func_5593151488_op47[2] = { &&func_5593165248, &&RETURN };
    static void *func_5593151488_op48[2] = { &&func_5593165376, &&RETURN };
    static void *func_5593151488_op49[2] = { &&func_5593165504, &&RETURN };
    static void *func_5593151488_op50[2] = { &&func_5593165632, &&RETURN };
    static void *func_5593151488_op51[2] = { &&func_5593165760, &&RETURN };
    static void *func_5593149008_op0[2] = { &&func_5593157552, &&RETURN };
    static void *func_5593149008_op1[2] = { &&func_5593149728, &&RETURN };
    static void *func_5593150048_op0[2] = { &&func_5593156896, &&RETURN };
    static void *func_5593150048_op1[2] = { &&func_5593150688, &&RETURN };
    static void *func_5593150256_op0[2] = { &&func_5593158128, &&RETURN };
    static void *func_5593150176_op0[2] = { &&func_5593150048, &&HALT };
    static void *func_5593150688_op0[2] = { &&func_5593150528, &&RETURN };
    static void *func_5593150688_op1[2] = { &&func_5593148816, &&RETURN };
    static void *func_5593150688_op2[2] = { &&func_5593149856, &&RETURN };
    static void *func_5593150688_op3[2] = { &&func_5593150448, &&RETURN };
    static void *func_5593150688_op4[2] = { &&func_5593148688, &&RETURN };
    static void *func_5593150688_op5[2] = { &&func_5593150256, &&RETURN };
    static void *func_5593150976_op0[2] = { &&func_5593158752, &&RETURN };
    static void *func_5593150976_op1[2] = { &&func_5593158384, &&RETURN };
    static void *func_5593150976_op2[2] = { &&func_5593149088, &&RETURN };
    static void *func_5593150528_op0[2] = { &&func_5593165968, &&RETURN };
    static void *func_5593150528_op1[2] = { &&func_5593166352, &&RETURN };
    static void *func_5593150528_op2[2] = { &&func_5593166608, &&RETURN };
    static void *func_5593150448_op0[2] = { &&func_5593165888, &&RETURN };
    static void *exp_5593150912[5] = {&&func_5593149328, &&func_5593151232, &&func_5593149440, &&func_5593151360, &&RETURN };
    static void *exp_5593152512[4] = {&&func_5593149440, &&func_5593152640, &&func_5593149440, &&RETURN };
    static void *exp_5593152768[4] = {&&func_5593149440, &&func_5593152896, &&func_5593149440, &&RETURN };
    static void *exp_5593153024[4] = {&&func_5593149440, &&func_5593153152, &&func_5593149440, &&RETURN };
    static void *exp_5593153312[4] = {&&func_5593149440, &&func_5593153440, &&func_5593149440, &&RETURN };
    static void *exp_5593153600[4] = {&&func_5593149568, &&func_5593153728, &&func_5593149568, &&RETURN };
    static void *exp_5593153952[4] = {&&func_5593149568, &&func_5593154080, &&func_5593149568, &&RETURN };
    static void *exp_5593154256[3] = {&&func_5593151744, &&func_5593149568, &&RETURN };
    static void *exp_5593151872[4] = {&&func_5593149440, &&func_5593156208, &&func_5593150976, &&RETURN };
    static void *exp_5593152064[4] = {&&func_5593149440, &&func_5593152192, &&func_5593150976, &&RETURN };
    static void *exp_5593156064[4] = {&&func_5593156432, &&func_5593149440, &&func_5593156560, &&RETURN };
    static void *exp_5593150816[8] = {&&func_5593157168, &&func_5593149328, &&func_5593156432, &&func_5593156560, &&func_5593151552, &&func_5593150048, &&func_5593157424, &&RETURN };
    static void *exp_5593156768[3] = {&&func_5593151488, &&func_5593149328, &&RETURN };
    static void *exp_5593157728[8] = {&&func_5593157856, &&func_5593156432, &&func_5593149568, &&func_5593156560, &&func_5593151552, &&func_5593150048, &&func_5593157424, &&RETURN };
    static void *exp_5593157552[3] = {&&func_5593149728, &&func_5593149008, &&RETURN };
    static void *exp_5593156896[3] = {&&func_5593150048, &&func_5593150688, &&RETURN };
    static void *exp_5593158128[4] = {&&func_5593158256, &&func_5593149440, &&func_5593151360, &&RETURN };
    static void *exp_5593158752[4] = {&&func_5593150976, &&func_5593158880, &&func_5593149088, &&RETURN };
    static void *exp_5593158384[4] = {&&func_5593150976, &&func_5593159008, &&func_5593149088, &&RETURN };
    static void *exp_5593165968[4] = {&&func_5593166096, &&func_5593149328, &&func_5593166224, &&RETURN };
    static void *exp_5593166352[4] = {&&func_5593166480, &&func_5593149328, &&func_5593166224, &&RETURN };
    static void *exp_5593166608[4] = {&&func_5593166736, &&func_5593149328, &&func_5593166224, &&RETURN };
    static void *exp_5593165888[8] = {&&func_5593158656, &&func_5593156432, &&func_5593149568, &&func_5593156560, &&func_5593151552, &&func_5593150048, &&func_5593157424, &&RETURN };

func_5593148816:
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
            PC = func_5593148816_op0;
            break;
    }
    goto **PC;
func_5593149568:
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
            PC = func_5593149568_op0;
            break;
        case 1:
            PC = func_5593149568_op1;
            break;
        case 2:
            PC = func_5593149568_op2;
            break;
        case 3:
            PC = func_5593149568_op3;
            break;
        case 4:
            PC = func_5593149568_op4;
            break;
        case 5:
            PC = func_5593149568_op5;
            break;
        case 6:
            PC = func_5593149568_op6;
            break;
    }
    goto **PC;
func_5593149728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5593149728_op0;
            break;
        case 1:
            PC = func_5593149728_op1;
            break;
        case 2:
            PC = func_5593149728_op2;
            break;
        case 3:
            PC = func_5593149728_op3;
            break;
        case 4:
            PC = func_5593149728_op4;
            break;
        case 5:
            PC = func_5593149728_op5;
            break;
        case 6:
            PC = func_5593149728_op6;
            break;
        case 7:
            PC = func_5593149728_op7;
            break;
        case 8:
            PC = func_5593149728_op8;
            break;
        case 9:
            PC = func_5593149728_op9;
            break;
    }
    goto **PC;
func_5593149440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5593149440_op0;
            break;
        case 1:
            PC = func_5593149440_op1;
            break;
        case 2:
            PC = func_5593149440_op2;
            break;
    }
    goto **PC;
func_5593149088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5593149088_op0;
            break;
        case 1:
            PC = func_5593149088_op1;
            break;
        case 2:
            PC = func_5593149088_op2;
            break;
    }
    goto **PC;
func_5593148688:
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
            PC = func_5593148688_op0;
            break;
    }
    goto **PC;
func_5593149328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5593149328_op0;
            break;
        case 1:
            PC = func_5593149328_op1;
            break;
    }
    goto **PC;
func_5593149856:
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
            PC = func_5593149856_op0;
            break;
    }
    goto **PC;
func_5593151488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5593151488_op0;
            break;
        case 1:
            PC = func_5593151488_op1;
            break;
        case 2:
            PC = func_5593151488_op2;
            break;
        case 3:
            PC = func_5593151488_op3;
            break;
        case 4:
            PC = func_5593151488_op4;
            break;
        case 5:
            PC = func_5593151488_op5;
            break;
        case 6:
            PC = func_5593151488_op6;
            break;
        case 7:
            PC = func_5593151488_op7;
            break;
        case 8:
            PC = func_5593151488_op8;
            break;
        case 9:
            PC = func_5593151488_op9;
            break;
        case 10:
            PC = func_5593151488_op10;
            break;
        case 11:
            PC = func_5593151488_op11;
            break;
        case 12:
            PC = func_5593151488_op12;
            break;
        case 13:
            PC = func_5593151488_op13;
            break;
        case 14:
            PC = func_5593151488_op14;
            break;
        case 15:
            PC = func_5593151488_op15;
            break;
        case 16:
            PC = func_5593151488_op16;
            break;
        case 17:
            PC = func_5593151488_op17;
            break;
        case 18:
            PC = func_5593151488_op18;
            break;
        case 19:
            PC = func_5593151488_op19;
            break;
        case 20:
            PC = func_5593151488_op20;
            break;
        case 21:
            PC = func_5593151488_op21;
            break;
        case 22:
            PC = func_5593151488_op22;
            break;
        case 23:
            PC = func_5593151488_op23;
            break;
        case 24:
            PC = func_5593151488_op24;
            break;
        case 25:
            PC = func_5593151488_op25;
            break;
        case 26:
            PC = func_5593151488_op26;
            break;
        case 27:
            PC = func_5593151488_op27;
            break;
        case 28:
            PC = func_5593151488_op28;
            break;
        case 29:
            PC = func_5593151488_op29;
            break;
        case 30:
            PC = func_5593151488_op30;
            break;
        case 31:
            PC = func_5593151488_op31;
            break;
        case 32:
            PC = func_5593151488_op32;
            break;
        case 33:
            PC = func_5593151488_op33;
            break;
        case 34:
            PC = func_5593151488_op34;
            break;
        case 35:
            PC = func_5593151488_op35;
            break;
        case 36:
            PC = func_5593151488_op36;
            break;
        case 37:
            PC = func_5593151488_op37;
            break;
        case 38:
            PC = func_5593151488_op38;
            break;
        case 39:
            PC = func_5593151488_op39;
            break;
        case 40:
            PC = func_5593151488_op40;
            break;
        case 41:
            PC = func_5593151488_op41;
            break;
        case 42:
            PC = func_5593151488_op42;
            break;
        case 43:
            PC = func_5593151488_op43;
            break;
        case 44:
            PC = func_5593151488_op44;
            break;
        case 45:
            PC = func_5593151488_op45;
            break;
        case 46:
            PC = func_5593151488_op46;
            break;
        case 47:
            PC = func_5593151488_op47;
            break;
        case 48:
            PC = func_5593151488_op48;
            break;
        case 49:
            PC = func_5593151488_op49;
            break;
        case 50:
            PC = func_5593151488_op50;
            break;
        case 51:
            PC = func_5593151488_op51;
            break;
    }
    goto **PC;
func_5593149008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5593149008_op0;
            break;
        case 1:
            PC = func_5593149008_op1;
            break;
    }
    goto **PC;
func_5593150048:
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
            PC = func_5593150048_op0;
            break;
        case 1:
            PC = func_5593150048_op1;
            break;
    }
    goto **PC;
func_5593150256:
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
            PC = func_5593150256_op0;
            break;
    }
    goto **PC;
func_5593150176:
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
            PC = func_5593150176_op0;
            break;
    }
    goto **PC;
func_5593150688:
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
            PC = func_5593150688_op0;
            break;
        case 1:
            PC = func_5593150688_op1;
            break;
        case 2:
            PC = func_5593150688_op2;
            break;
        case 3:
            PC = func_5593150688_op3;
            break;
        case 4:
            PC = func_5593150688_op4;
            break;
        case 5:
            PC = func_5593150688_op5;
            break;
    }
    goto **PC;
func_5593150976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5593150976_op0;
            break;
        case 1:
            PC = func_5593150976_op1;
            break;
        case 2:
            PC = func_5593150976_op2;
            break;
    }
    goto **PC;
func_5593150528:
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
            PC = func_5593150528_op0;
            break;
        case 1:
            PC = func_5593150528_op1;
            break;
        case 2:
            PC = func_5593150528_op2;
            break;
    }
    goto **PC;
func_5593150448:
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
            PC = func_5593150448_op0;
            break;
    }
    goto **PC;
func_5593150912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593150912;
    goto **PC;
func_5593151232:
    extend(61);
    NEXT();
    goto **PC;
func_5593151360:
    extend(59);
    NEXT();
    goto **PC;
func_5593152512:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593152512;
    goto **PC;
func_5593152640:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5593152768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593152768;
    goto **PC;
func_5593152896:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5593153024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593153024;
    goto **PC;
func_5593153152:
    extend(62);
    NEXT();
    goto **PC;
func_5593153312:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593153312;
    goto **PC;
func_5593153440:
    extend(60);
    NEXT();
    goto **PC;
func_5593153600:
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
    PC = exp_5593153600;
    goto **PC;
func_5593153728:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5593153952:
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
    PC = exp_5593153952;
    goto **PC;
func_5593154080:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5593154256:
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
    PC = exp_5593154256;
    goto **PC;
func_5593151744:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5593152384:
    extend(48);
    NEXT();
    goto **PC;
func_5593151936:
    extend(49);
    NEXT();
    goto **PC;
func_5593154832:
    extend(50);
    NEXT();
    goto **PC;
func_5593154960:
    extend(51);
    NEXT();
    goto **PC;
func_5593155088:
    extend(52);
    NEXT();
    goto **PC;
func_5593155280:
    extend(53);
    NEXT();
    goto **PC;
func_5593155408:
    extend(54);
    NEXT();
    goto **PC;
func_5593155536:
    extend(55);
    NEXT();
    goto **PC;
func_5593155664:
    extend(56);
    NEXT();
    goto **PC;
func_5593155216:
    extend(57);
    NEXT();
    goto **PC;
func_5593151872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593151872;
    goto **PC;
func_5593156208:
    extend(43);
    NEXT();
    goto **PC;
func_5593152064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593152064;
    goto **PC;
func_5593152192:
    extend(45);
    NEXT();
    goto **PC;
func_5593156064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593156064;
    goto **PC;
func_5593156432:
    extend(40);
    NEXT();
    goto **PC;
func_5593156560:
    extend(41);
    NEXT();
    goto **PC;
func_5593150816:
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
    PC = exp_5593150816;
    goto **PC;
func_5593157168:
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
func_5593151552:
    extend(123);
    NEXT();
    goto **PC;
func_5593157424:
    extend(125);
    NEXT();
    goto **PC;
func_5593156768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593156768;
    goto **PC;
func_5593157728:
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
    PC = exp_5593157728;
    goto **PC;
func_5593157856:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5593159200:
    extend(97);
    NEXT();
    goto **PC;
func_5593159328:
    extend(98);
    NEXT();
    goto **PC;
func_5593159456:
    extend(99);
    NEXT();
    goto **PC;
func_5593159616:
    extend(100);
    NEXT();
    goto **PC;
func_5593159744:
    extend(101);
    NEXT();
    goto **PC;
func_5593159936:
    extend(102);
    NEXT();
    goto **PC;
func_5593160064:
    extend(103);
    NEXT();
    goto **PC;
func_5593154384:
    extend(104);
    NEXT();
    goto **PC;
func_5593154512:
    extend(105);
    NEXT();
    goto **PC;
func_5593159872:
    extend(106);
    NEXT();
    goto **PC;
func_5593160128:
    extend(107);
    NEXT();
    goto **PC;
func_5593160256:
    extend(108);
    NEXT();
    goto **PC;
func_5593160384:
    extend(109);
    NEXT();
    goto **PC;
func_5593160512:
    extend(110);
    NEXT();
    goto **PC;
func_5593160640:
    extend(111);
    NEXT();
    goto **PC;
func_5593160768:
    extend(112);
    NEXT();
    goto **PC;
func_5593160896:
    extend(113);
    NEXT();
    goto **PC;
func_5593154640:
    extend(114);
    NEXT();
    goto **PC;
func_5593161280:
    extend(115);
    NEXT();
    goto **PC;
func_5593161408:
    extend(116);
    NEXT();
    goto **PC;
func_5593161536:
    extend(117);
    NEXT();
    goto **PC;
func_5593161664:
    extend(118);
    NEXT();
    goto **PC;
func_5593161792:
    extend(119);
    NEXT();
    goto **PC;
func_5593161920:
    extend(120);
    NEXT();
    goto **PC;
func_5593162048:
    extend(121);
    NEXT();
    goto **PC;
func_5593162176:
    extend(122);
    NEXT();
    goto **PC;
func_5593162304:
    extend(65);
    NEXT();
    goto **PC;
func_5593162432:
    extend(66);
    NEXT();
    goto **PC;
func_5593162560:
    extend(67);
    NEXT();
    goto **PC;
func_5593162688:
    extend(68);
    NEXT();
    goto **PC;
func_5593162816:
    extend(69);
    NEXT();
    goto **PC;
func_5593162944:
    extend(70);
    NEXT();
    goto **PC;
func_5593163072:
    extend(71);
    NEXT();
    goto **PC;
func_5593161024:
    extend(72);
    NEXT();
    goto **PC;
func_5593161152:
    extend(73);
    NEXT();
    goto **PC;
func_5593163712:
    extend(74);
    NEXT();
    goto **PC;
func_5593163840:
    extend(75);
    NEXT();
    goto **PC;
func_5593163968:
    extend(76);
    NEXT();
    goto **PC;
func_5593164096:
    extend(77);
    NEXT();
    goto **PC;
func_5593164224:
    extend(78);
    NEXT();
    goto **PC;
func_5593164352:
    extend(79);
    NEXT();
    goto **PC;
func_5593164480:
    extend(80);
    NEXT();
    goto **PC;
func_5593164608:
    extend(81);
    NEXT();
    goto **PC;
func_5593164736:
    extend(82);
    NEXT();
    goto **PC;
func_5593164864:
    extend(83);
    NEXT();
    goto **PC;
func_5593164992:
    extend(84);
    NEXT();
    goto **PC;
func_5593165120:
    extend(85);
    NEXT();
    goto **PC;
func_5593165248:
    extend(86);
    NEXT();
    goto **PC;
func_5593165376:
    extend(87);
    NEXT();
    goto **PC;
func_5593165504:
    extend(88);
    NEXT();
    goto **PC;
func_5593165632:
    extend(89);
    NEXT();
    goto **PC;
func_5593165760:
    extend(90);
    NEXT();
    goto **PC;
func_5593157552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593157552;
    goto **PC;
func_5593156896:
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
    PC = exp_5593156896;
    goto **PC;
func_5593158128:
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
    PC = exp_5593158128;
    goto **PC;
func_5593158256:
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
func_5593158752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593158752;
    goto **PC;
func_5593158880:
    extend(42);
    NEXT();
    goto **PC;
func_5593158384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593158384;
    goto **PC;
func_5593159008:
    extend(47);
    NEXT();
    goto **PC;
func_5593165968:
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
    PC = exp_5593165968;
    goto **PC;
func_5593166096:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5593166224:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5593166352:
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
    PC = exp_5593166352;
    goto **PC;
func_5593166480:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5593166608:
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
    PC = exp_5593166608;
    goto **PC;
func_5593166736:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5593165888:
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
    PC = exp_5593165888;
    goto **PC;
func_5593158656:
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
    PC = func_5593150176_op0;
    goto **PC;
}
