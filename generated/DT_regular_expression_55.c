#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 55
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
    static void *func_5593134144_op0[2] = { &&func_5593153888, &&RETURN };
    static void *func_5593134144_op1[2] = { &&func_5593153248, &&RETURN };
    static void *func_5593150656_op0[2] = { &&func_5593153808, &&RETURN };
    static void *func_5593150864_op0[2] = { &&func_5593153552, &&RETURN };
    static void *func_5593150864_op1[2] = { &&func_5593152240, &&RETURN };
    static void *func_5593150864_op2[2] = { &&func_5593151856, &&RETURN };
    static void *func_5593151072_op0[2] = { &&func_5593152112, &&RETURN };
    static void *func_5593151072_op1[2] = { &&func_5593154080, &&RETURN };
    static void *func_5593150528_op0[2] = { &&func_5593154528, &&RETURN };
    static void *func_5593151728_op0[2] = { &&func_5593155024, &&RETURN };
    static void *func_5593151728_op1[2] = { &&func_5593155152, &&RETURN };
    static void *func_5593151728_op2[2] = { &&func_5593155280, &&RETURN };
    static void *func_5593151728_op3[2] = { &&func_5593155440, &&RETURN };
    static void *func_5593151728_op4[2] = { &&func_5593155568, &&RETURN };
    static void *func_5593151728_op5[2] = { &&func_5593152928, &&RETURN };
    static void *func_5593151728_op6[2] = { &&func_5593156144, &&RETURN };
    static void *func_5593151728_op7[2] = { &&func_5593156272, &&RETURN };
    static void *func_5593151728_op8[2] = { &&func_5593156400, &&RETURN };
    static void *func_5593151728_op9[2] = { &&func_5593152864, &&RETURN };
    static void *func_5593151856_op0[2] = { &&func_5593151408, &&RETURN };
    static void *func_5593151856_op1[2] = { &&func_5593150656, &&RETURN };
    static void *func_5593151856_op2[2] = { &&func_5593151632, &&RETURN };
    static void *func_5593151856_op3[2] = { &&func_5593151072, &&RETURN };
    static void *func_5593151856_op4[2] = { &&func_5593153120, &&RETURN };
    static void *func_5593151632_op0[2] = { &&func_5593154720, &&RETURN };
    static void *func_5593151408_op0[2] = { &&func_5593156720, &&RETURN };
    static void *func_5593153424_op0[2] = { &&func_5593158448, &&RETURN };
    static void *func_5593153424_op1[2] = { &&func_5593158576, &&RETURN };
    static void *func_5593153424_op2[2] = { &&func_5593158704, &&RETURN };
    static void *func_5593153424_op3[2] = { &&func_5593158864, &&RETURN };
    static void *func_5593153424_op4[2] = { &&func_5593158992, &&RETURN };
    static void *func_5593153424_op5[2] = { &&func_5593159184, &&RETURN };
    static void *func_5593153424_op6[2] = { &&func_5593159312, &&RETURN };
    static void *func_5593153424_op7[2] = { &&func_5593159440, &&RETURN };
    static void *func_5593153424_op8[2] = { &&func_5593159568, &&RETURN };
    static void *func_5593153424_op9[2] = { &&func_5593159120, &&RETURN };
    static void *func_5593153424_op10[2] = { &&func_5593159888, &&RETURN };
    static void *func_5593153424_op11[2] = { &&func_5593160016, &&RETURN };
    static void *func_5593153424_op12[2] = { &&func_5593160144, &&RETURN };
    static void *func_5593153424_op13[2] = { &&func_5593160272, &&RETURN };
    static void *func_5593153424_op14[2] = { &&func_5593160400, &&RETURN };
    static void *func_5593153424_op15[2] = { &&func_5593160528, &&RETURN };
    static void *func_5593153424_op16[2] = { &&func_5593160656, &&RETURN };
    static void *func_5593153424_op17[2] = { &&func_5593159696, &&RETURN };
    static void *func_5593153424_op18[2] = { &&func_5593161040, &&RETURN };
    static void *func_5593153424_op19[2] = { &&func_5593161168, &&RETURN };
    static void *func_5593153424_op20[2] = { &&func_5593161296, &&RETURN };
    static void *func_5593153424_op21[2] = { &&func_5593161424, &&RETURN };
    static void *func_5593153424_op22[2] = { &&func_5593161552, &&RETURN };
    static void *func_5593153424_op23[2] = { &&func_5593155696, &&RETURN };
    static void *func_5593153424_op24[2] = { &&func_5593155824, &&RETURN };
    static void *func_5593153424_op25[2] = { &&func_5593155952, &&RETURN };
    static void *func_5593153424_op26[2] = { &&func_5593156080, &&RETURN };
    static void *func_5593153424_op27[2] = { &&func_5593161680, &&RETURN };
    static void *func_5593153424_op28[2] = { &&func_5593161808, &&RETURN };
    static void *func_5593153424_op29[2] = { &&func_5593161936, &&RETURN };
    static void *func_5593153424_op30[2] = { &&func_5593162064, &&RETURN };
    static void *func_5593153424_op31[2] = { &&func_5593162192, &&RETURN };
    static void *func_5593153424_op32[2] = { &&func_5593162320, &&RETURN };
    static void *func_5593153424_op33[2] = { &&func_5593160784, &&RETURN };
    static void *func_5593153424_op34[2] = { &&func_5593160912, &&RETURN };
    static void *func_5593153424_op35[2] = { &&func_5593162960, &&RETURN };
    static void *func_5593153424_op36[2] = { &&func_5593163088, &&RETURN };
    static void *func_5593153424_op37[2] = { &&func_5593163216, &&RETURN };
    static void *func_5593153424_op38[2] = { &&func_5593163344, &&RETURN };
    static void *func_5593153424_op39[2] = { &&func_5593163472, &&RETURN };
    static void *func_5593153424_op40[2] = { &&func_5593163600, &&RETURN };
    static void *func_5593153424_op41[2] = { &&func_5593163728, &&RETURN };
    static void *func_5593153424_op42[2] = { &&func_5593163856, &&RETURN };
    static void *func_5593153424_op43[2] = { &&func_5593163984, &&RETURN };
    static void *func_5593153424_op44[2] = { &&func_5593164112, &&RETURN };
    static void *func_5593153424_op45[2] = { &&func_5593164240, &&RETURN };
    static void *func_5593153424_op46[2] = { &&func_5593164368, &&RETURN };
    static void *func_5593153424_op47[2] = { &&func_5593164496, &&RETURN };
    static void *func_5593153424_op48[2] = { &&func_5593164624, &&RETURN };
    static void *func_5593153424_op49[2] = { &&func_5593164752, &&RETURN };
    static void *func_5593153424_op50[2] = { &&func_5593164880, &&RETURN };
    static void *func_5593153424_op51[2] = { &&func_5593165008, &&RETURN };
    static void *func_5593152544_op0[2] = { &&func_5593154400, &&RETURN };
    static void *func_5593152544_op1[2] = { &&func_5593153808, &&RETURN };
    static void *func_5593152544_op2[2] = { &&func_5593157536, &&RETURN };
    static void *func_5593152544_op3[2] = { &&func_5593157696, &&RETURN };
    static void *func_5593152544_op4[2] = { &&func_5593157824, &&RETURN };
    static void *func_5593152544_op5[2] = { &&func_5593158016, &&RETURN };
    static void *func_5593152544_op6[2] = { &&func_5593154720, &&RETURN };
    static void *func_5593152544_op7[2] = { &&func_5593158144, &&RETURN };
    static void *func_5593152544_op8[2] = { &&func_5593156848, &&RETURN };
    static void *func_5593152544_op9[2] = { &&func_5593156976, &&RETURN };
    static void *func_5593152544_op10[2] = { &&func_5593157952, &&RETURN };
    static void *func_5593152544_op11[2] = { &&func_5593165200, &&RETURN };
    static void *func_5593152544_op12[2] = { &&func_5593165328, &&RETURN };
    static void *func_5593152544_op13[2] = { &&func_5593165456, &&RETURN };
    static void *func_5593151984_op0[2] = { &&func_5593157104, &&RETURN };
    static void *func_5593152112_op0[2] = { &&func_5593153424, &&RETURN };
    static void *func_5593152112_op1[2] = { &&func_5593151728, &&RETURN };
    static void *func_5593152112_op2[2] = { &&func_5593154208, &&RETURN };
    static void *func_5593152240_op0[2] = { &&func_5593154928, &&RETURN };
    static void *func_5593152368_op0[2] = { &&func_5593165584, &&RETURN };
    static void *func_5593152672_op0[2] = { &&func_5593165712, &&RETURN };
    static void *func_5593151328_op0[2] = { &&func_5593152672, &&RETURN };
    static void *func_5593151328_op1[2] = { &&func_5593151072, &&RETURN };
    static void *func_5593151472_op0[2] = { &&func_5593151328, &&RETURN };
    static void *func_5593151472_op1[2] = { &&func_5593154848, &&RETURN };
    static void *func_5593153120_op0[2] = { &&func_5593152368, &&RETURN };
    static void *func_5593153120_op1[2] = { &&func_5593151984, &&RETURN };
    static void *func_5593153248_op0[2] = { &&func_5593150528, &&RETURN };
    static void *func_5593153248_op1[2] = { &&func_5593150864, &&RETURN };
    static void *func_5593153552_op0[2] = { &&func_5593165968, &&RETURN };
    static void *func_5593153680_op0[2] = { &&func_5593134144, &&HALT };
    static void *func_5593154208_op0[2] = { &&func_5593166624, &&RETURN };
    static void *func_5593154208_op1[2] = { &&func_5593165840, &&RETURN };
    static void *func_5593154208_op2[2] = { &&func_5593166768, &&RETURN };
    static void *func_5593154208_op3[2] = { &&func_5593166928, &&RETURN };
    static void *func_5593154208_op4[2] = { &&func_5593167056, &&RETURN };
    static void *func_5593154208_op5[2] = { &&func_5593167248, &&RETURN };
    static void *func_5593154208_op6[2] = { &&func_5593167376, &&RETURN };
    static void *func_5593154208_op7[2] = { &&func_5593167504, &&RETURN };
    static void *func_5593154208_op8[2] = { &&func_5593167632, &&RETURN };
    static void *func_5593154208_op9[2] = { &&func_5593167184, &&RETURN };
    static void *func_5593154208_op10[2] = { &&func_5593167952, &&RETURN };
    static void *func_5593153888_op0[2] = { &&func_5593166256, &&RETURN };
    static void *exp_5593154080[3] = {&&func_5593154400, &&func_5593152544, &&RETURN };
    static void *exp_5593154528[3] = {&&func_5593153248, &&func_5593150864, &&RETURN };
    static void *exp_5593156720[4] = {&&func_5593156848, &&func_5593134144, &&func_5593156976, &&RETURN };
    static void *exp_5593157104[4] = {&&func_5593157232, &&func_5593151472, &&func_5593165200, &&RETURN };
    static void *exp_5593154928[3] = {&&func_5593151856, &&func_5593157696, &&RETURN };
    static void *exp_5593165584[4] = {&&func_5593157952, &&func_5593151472, &&func_5593165200, &&RETURN };
    static void *exp_5593165712[4] = {&&func_5593151072, &&func_5593165840, &&func_5593151072, &&RETURN };
    static void *exp_5593154848[3] = {&&func_5593151328, &&func_5593151472, &&RETURN };
    static void *exp_5593165968[3] = {&&func_5593151856, &&func_5593157536, &&RETURN };
    static void *exp_5593166256[4] = {&&func_5593134144, &&func_5593158144, &&func_5593153248, &&RETURN };

func_5593134144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5593134144_op0;
            break;
        case 1:
            PC = func_5593134144_op1;
            break;
    }
    goto **PC;
func_5593150656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5593150656_op0;
            break;
    }
    goto **PC;
func_5593150864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5593150864_op0;
            break;
        case 1:
            PC = func_5593150864_op1;
            break;
        case 2:
            PC = func_5593150864_op2;
            break;
    }
    goto **PC;
func_5593151072:
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
            PC = func_5593151072_op0;
            break;
        case 1:
            PC = func_5593151072_op1;
            break;
    }
    goto **PC;
func_5593150528:
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
            PC = func_5593150528_op0;
            break;
    }
    goto **PC;
func_5593151728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5593151728_op0;
            break;
        case 1:
            PC = func_5593151728_op1;
            break;
        case 2:
            PC = func_5593151728_op2;
            break;
        case 3:
            PC = func_5593151728_op3;
            break;
        case 4:
            PC = func_5593151728_op4;
            break;
        case 5:
            PC = func_5593151728_op5;
            break;
        case 6:
            PC = func_5593151728_op6;
            break;
        case 7:
            PC = func_5593151728_op7;
            break;
        case 8:
            PC = func_5593151728_op8;
            break;
        case 9:
            PC = func_5593151728_op9;
            break;
    }
    goto **PC;
func_5593151856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5593151856_op0;
            break;
        case 1:
            PC = func_5593151856_op1;
            break;
        case 2:
            PC = func_5593151856_op2;
            break;
        case 3:
            PC = func_5593151856_op3;
            break;
        case 4:
            PC = func_5593151856_op4;
            break;
    }
    goto **PC;
func_5593151632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(36);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5593151632_op0;
            break;
    }
    goto **PC;
func_5593151408:
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
            PC = func_5593151408_op0;
            break;
    }
    goto **PC;
func_5593153424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5593153424_op0;
            break;
        case 1:
            PC = func_5593153424_op1;
            break;
        case 2:
            PC = func_5593153424_op2;
            break;
        case 3:
            PC = func_5593153424_op3;
            break;
        case 4:
            PC = func_5593153424_op4;
            break;
        case 5:
            PC = func_5593153424_op5;
            break;
        case 6:
            PC = func_5593153424_op6;
            break;
        case 7:
            PC = func_5593153424_op7;
            break;
        case 8:
            PC = func_5593153424_op8;
            break;
        case 9:
            PC = func_5593153424_op9;
            break;
        case 10:
            PC = func_5593153424_op10;
            break;
        case 11:
            PC = func_5593153424_op11;
            break;
        case 12:
            PC = func_5593153424_op12;
            break;
        case 13:
            PC = func_5593153424_op13;
            break;
        case 14:
            PC = func_5593153424_op14;
            break;
        case 15:
            PC = func_5593153424_op15;
            break;
        case 16:
            PC = func_5593153424_op16;
            break;
        case 17:
            PC = func_5593153424_op17;
            break;
        case 18:
            PC = func_5593153424_op18;
            break;
        case 19:
            PC = func_5593153424_op19;
            break;
        case 20:
            PC = func_5593153424_op20;
            break;
        case 21:
            PC = func_5593153424_op21;
            break;
        case 22:
            PC = func_5593153424_op22;
            break;
        case 23:
            PC = func_5593153424_op23;
            break;
        case 24:
            PC = func_5593153424_op24;
            break;
        case 25:
            PC = func_5593153424_op25;
            break;
        case 26:
            PC = func_5593153424_op26;
            break;
        case 27:
            PC = func_5593153424_op27;
            break;
        case 28:
            PC = func_5593153424_op28;
            break;
        case 29:
            PC = func_5593153424_op29;
            break;
        case 30:
            PC = func_5593153424_op30;
            break;
        case 31:
            PC = func_5593153424_op31;
            break;
        case 32:
            PC = func_5593153424_op32;
            break;
        case 33:
            PC = func_5593153424_op33;
            break;
        case 34:
            PC = func_5593153424_op34;
            break;
        case 35:
            PC = func_5593153424_op35;
            break;
        case 36:
            PC = func_5593153424_op36;
            break;
        case 37:
            PC = func_5593153424_op37;
            break;
        case 38:
            PC = func_5593153424_op38;
            break;
        case 39:
            PC = func_5593153424_op39;
            break;
        case 40:
            PC = func_5593153424_op40;
            break;
        case 41:
            PC = func_5593153424_op41;
            break;
        case 42:
            PC = func_5593153424_op42;
            break;
        case 43:
            PC = func_5593153424_op43;
            break;
        case 44:
            PC = func_5593153424_op44;
            break;
        case 45:
            PC = func_5593153424_op45;
            break;
        case 46:
            PC = func_5593153424_op46;
            break;
        case 47:
            PC = func_5593153424_op47;
            break;
        case 48:
            PC = func_5593153424_op48;
            break;
        case 49:
            PC = func_5593153424_op49;
            break;
        case 50:
            PC = func_5593153424_op50;
            break;
        case 51:
            PC = func_5593153424_op51;
            break;
    }
    goto **PC;
func_5593152544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(14);
    store();
    switch (branch) {
        case 0:
            PC = func_5593152544_op0;
            break;
        case 1:
            PC = func_5593152544_op1;
            break;
        case 2:
            PC = func_5593152544_op2;
            break;
        case 3:
            PC = func_5593152544_op3;
            break;
        case 4:
            PC = func_5593152544_op4;
            break;
        case 5:
            PC = func_5593152544_op5;
            break;
        case 6:
            PC = func_5593152544_op6;
            break;
        case 7:
            PC = func_5593152544_op7;
            break;
        case 8:
            PC = func_5593152544_op8;
            break;
        case 9:
            PC = func_5593152544_op9;
            break;
        case 10:
            PC = func_5593152544_op10;
            break;
        case 11:
            PC = func_5593152544_op11;
            break;
        case 12:
            PC = func_5593152544_op12;
            break;
        case 13:
            PC = func_5593152544_op13;
            break;
    }
    goto **PC;
func_5593151984:
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
            PC = func_5593151984_op0;
            break;
    }
    goto **PC;
func_5593152112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5593152112_op0;
            break;
        case 1:
            PC = func_5593152112_op1;
            break;
        case 2:
            PC = func_5593152112_op2;
            break;
    }
    goto **PC;
func_5593152240:
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
            PC = func_5593152240_op0;
            break;
    }
    goto **PC;
func_5593152368:
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
            PC = func_5593152368_op0;
            break;
    }
    goto **PC;
func_5593152672:
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
            PC = func_5593152672_op0;
            break;
    }
    goto **PC;
func_5593151328:
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
            PC = func_5593151328_op0;
            break;
        case 1:
            PC = func_5593151328_op1;
            break;
    }
    goto **PC;
func_5593151472:
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
            PC = func_5593151472_op0;
            break;
        case 1:
            PC = func_5593151472_op1;
            break;
    }
    goto **PC;
func_5593153120:
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
            PC = func_5593153120_op0;
            break;
        case 1:
            PC = func_5593153120_op1;
            break;
    }
    goto **PC;
func_5593153248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5593153248_op0;
            break;
        case 1:
            PC = func_5593153248_op1;
            break;
    }
    goto **PC;
func_5593153552:
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
            PC = func_5593153552_op0;
            break;
    }
    goto **PC;
func_5593153680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5593153680_op0;
            break;
    }
    goto **PC;
func_5593154208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(11);
    store();
    switch (branch) {
        case 0:
            PC = func_5593154208_op0;
            break;
        case 1:
            PC = func_5593154208_op1;
            break;
        case 2:
            PC = func_5593154208_op2;
            break;
        case 3:
            PC = func_5593154208_op3;
            break;
        case 4:
            PC = func_5593154208_op4;
            break;
        case 5:
            PC = func_5593154208_op5;
            break;
        case 6:
            PC = func_5593154208_op6;
            break;
        case 7:
            PC = func_5593154208_op7;
            break;
        case 8:
            PC = func_5593154208_op8;
            break;
        case 9:
            PC = func_5593154208_op9;
            break;
        case 10:
            PC = func_5593154208_op10;
            break;
    }
    goto **PC;
func_5593153888:
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
            PC = func_5593153888_op0;
            break;
    }
    goto **PC;
func_5593153808:
    extend(46);
    NEXT();
    goto **PC;
func_5593154080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593154080;
    goto **PC;
func_5593154400:
    extend(92);
    NEXT();
    goto **PC;
func_5593154528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593154528;
    goto **PC;
func_5593155024:
    extend(48);
    NEXT();
    goto **PC;
func_5593155152:
    extend(49);
    NEXT();
    goto **PC;
func_5593155280:
    extend(50);
    NEXT();
    goto **PC;
func_5593155440:
    extend(51);
    NEXT();
    goto **PC;
func_5593155568:
    extend(52);
    NEXT();
    goto **PC;
func_5593152928:
    extend(53);
    NEXT();
    goto **PC;
func_5593156144:
    extend(54);
    NEXT();
    goto **PC;
func_5593156272:
    extend(55);
    NEXT();
    goto **PC;
func_5593156400:
    extend(56);
    NEXT();
    goto **PC;
func_5593152864:
    extend(57);
    NEXT();
    goto **PC;
func_5593154720:
    extend(36);
    NEXT();
    goto **PC;
func_5593156720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593156720;
    goto **PC;
func_5593156848:
    extend(40);
    NEXT();
    goto **PC;
func_5593156976:
    extend(41);
    NEXT();
    goto **PC;
func_5593158448:
    extend(97);
    NEXT();
    goto **PC;
func_5593158576:
    extend(98);
    NEXT();
    goto **PC;
func_5593158704:
    extend(99);
    NEXT();
    goto **PC;
func_5593158864:
    extend(100);
    NEXT();
    goto **PC;
func_5593158992:
    extend(101);
    NEXT();
    goto **PC;
func_5593159184:
    extend(102);
    NEXT();
    goto **PC;
func_5593159312:
    extend(103);
    NEXT();
    goto **PC;
func_5593159440:
    extend(104);
    NEXT();
    goto **PC;
func_5593159568:
    extend(105);
    NEXT();
    goto **PC;
func_5593159120:
    extend(106);
    NEXT();
    goto **PC;
func_5593159888:
    extend(107);
    NEXT();
    goto **PC;
func_5593160016:
    extend(108);
    NEXT();
    goto **PC;
func_5593160144:
    extend(109);
    NEXT();
    goto **PC;
func_5593160272:
    extend(110);
    NEXT();
    goto **PC;
func_5593160400:
    extend(111);
    NEXT();
    goto **PC;
func_5593160528:
    extend(112);
    NEXT();
    goto **PC;
func_5593160656:
    extend(113);
    NEXT();
    goto **PC;
func_5593159696:
    extend(114);
    NEXT();
    goto **PC;
func_5593161040:
    extend(115);
    NEXT();
    goto **PC;
func_5593161168:
    extend(116);
    NEXT();
    goto **PC;
func_5593161296:
    extend(117);
    NEXT();
    goto **PC;
func_5593161424:
    extend(118);
    NEXT();
    goto **PC;
func_5593161552:
    extend(119);
    NEXT();
    goto **PC;
func_5593155696:
    extend(120);
    NEXT();
    goto **PC;
func_5593155824:
    extend(121);
    NEXT();
    goto **PC;
func_5593155952:
    extend(122);
    NEXT();
    goto **PC;
func_5593156080:
    extend(65);
    NEXT();
    goto **PC;
func_5593161680:
    extend(66);
    NEXT();
    goto **PC;
func_5593161808:
    extend(67);
    NEXT();
    goto **PC;
func_5593161936:
    extend(68);
    NEXT();
    goto **PC;
func_5593162064:
    extend(69);
    NEXT();
    goto **PC;
func_5593162192:
    extend(70);
    NEXT();
    goto **PC;
func_5593162320:
    extend(71);
    NEXT();
    goto **PC;
func_5593160784:
    extend(72);
    NEXT();
    goto **PC;
func_5593160912:
    extend(73);
    NEXT();
    goto **PC;
func_5593162960:
    extend(74);
    NEXT();
    goto **PC;
func_5593163088:
    extend(75);
    NEXT();
    goto **PC;
func_5593163216:
    extend(76);
    NEXT();
    goto **PC;
func_5593163344:
    extend(77);
    NEXT();
    goto **PC;
func_5593163472:
    extend(78);
    NEXT();
    goto **PC;
func_5593163600:
    extend(79);
    NEXT();
    goto **PC;
func_5593163728:
    extend(80);
    NEXT();
    goto **PC;
func_5593163856:
    extend(81);
    NEXT();
    goto **PC;
func_5593163984:
    extend(82);
    NEXT();
    goto **PC;
func_5593164112:
    extend(83);
    NEXT();
    goto **PC;
func_5593164240:
    extend(84);
    NEXT();
    goto **PC;
func_5593164368:
    extend(85);
    NEXT();
    goto **PC;
func_5593164496:
    extend(86);
    NEXT();
    goto **PC;
func_5593164624:
    extend(87);
    NEXT();
    goto **PC;
func_5593164752:
    extend(88);
    NEXT();
    goto **PC;
func_5593164880:
    extend(89);
    NEXT();
    goto **PC;
func_5593165008:
    extend(90);
    NEXT();
    goto **PC;
func_5593157536:
    extend(42);
    NEXT();
    goto **PC;
func_5593157696:
    extend(43);
    NEXT();
    goto **PC;
func_5593157824:
    extend(63);
    NEXT();
    goto **PC;
func_5593158016:
    extend(94);
    NEXT();
    goto **PC;
func_5593158144:
    extend(124);
    NEXT();
    goto **PC;
func_5593157952:
    extend(91);
    NEXT();
    goto **PC;
func_5593165200:
    extend(93);
    NEXT();
    goto **PC;
func_5593165328:
    extend(123);
    NEXT();
    goto **PC;
func_5593165456:
    extend(125);
    NEXT();
    goto **PC;
func_5593157104:
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
    PC = exp_5593157104;
    goto **PC;
func_5593157232:
    extend(91);
    extend(94);
    NEXT();
    goto **PC;
func_5593154928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(43);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593154928;
    goto **PC;
func_5593165584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593165584;
    goto **PC;
func_5593165712:
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
    PC = exp_5593165712;
    goto **PC;
func_5593165840:
    extend(45);
    NEXT();
    goto **PC;
func_5593154848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593154848;
    goto **PC;
func_5593165968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593165968;
    goto **PC;
func_5593166624:
    extend(95);
    NEXT();
    goto **PC;
func_5593166768:
    extend(64);
    NEXT();
    goto **PC;
func_5593166928:
    extend(35);
    NEXT();
    goto **PC;
func_5593167056:
    extend(37);
    NEXT();
    goto **PC;
func_5593167248:
    extend(38);
    NEXT();
    goto **PC;
func_5593167376:
    extend(61);
    NEXT();
    goto **PC;
func_5593167504:
    extend(126);
    NEXT();
    goto **PC;
func_5593167632:
    extend(96);
    NEXT();
    goto **PC;
func_5593167184:
    extend(39);
    NEXT();
    goto **PC;
func_5593167952:
    extend(34);
    NEXT();
    goto **PC;
func_5593166256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5593166256;
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
    PC = func_5593153680_op0;
    goto **PC;
}
