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
    static void *func_5165329808_op0[2] = { &&func_5165331904, &&RETURN };
    static void *func_5165330560_op0[2] = { &&func_5165333504, &&RETURN };
    static void *func_5165330560_op1[2] = { &&func_5165333760, &&RETURN };
    static void *func_5165330560_op2[2] = { &&func_5165334016, &&RETURN };
    static void *func_5165330560_op3[2] = { &&func_5165334304, &&RETURN };
    static void *func_5165330560_op4[2] = { &&func_5165334592, &&RETURN };
    static void *func_5165330560_op5[2] = { &&func_5165334944, &&RETURN };
    static void *func_5165330560_op6[2] = { &&func_5165335248, &&RETURN };
    static void *func_5165330720_op0[2] = { &&func_5165333376, &&RETURN };
    static void *func_5165330720_op1[2] = { &&func_5165332928, &&RETURN };
    static void *func_5165330720_op2[2] = { &&func_5165335824, &&RETURN };
    static void *func_5165330720_op3[2] = { &&func_5165335952, &&RETURN };
    static void *func_5165330720_op4[2] = { &&func_5165336080, &&RETURN };
    static void *func_5165330720_op5[2] = { &&func_5165336272, &&RETURN };
    static void *func_5165330720_op6[2] = { &&func_5165336400, &&RETURN };
    static void *func_5165330720_op7[2] = { &&func_5165336528, &&RETURN };
    static void *func_5165330720_op8[2] = { &&func_5165336656, &&RETURN };
    static void *func_5165330720_op9[2] = { &&func_5165336208, &&RETURN };
    static void *func_5165330432_op0[2] = { &&func_5165332864, &&RETURN };
    static void *func_5165330432_op1[2] = { &&func_5165333056, &&RETURN };
    static void *func_5165330432_op2[2] = { &&func_5165331968, &&RETURN };
    static void *func_5165330080_op0[2] = { &&func_5165337056, &&RETURN };
    static void *func_5165330080_op1[2] = { &&func_5165330000, &&RETURN };
    static void *func_5165330080_op2[2] = { &&func_5165330320, &&RETURN };
    static void *func_5165329680_op0[2] = { &&func_5165331808, &&RETURN };
    static void *func_5165330320_op0[2] = { &&func_5165337760, &&RETURN };
    static void *func_5165330320_op1[2] = { &&func_5165332480, &&RETURN };
    static void *func_5165330848_op0[2] = { &&func_5165338720, &&RETURN };
    static void *func_5165332480_op0[2] = { &&func_5165340192, &&RETURN };
    static void *func_5165332480_op1[2] = { &&func_5165340320, &&RETURN };
    static void *func_5165332480_op2[2] = { &&func_5165340448, &&RETURN };
    static void *func_5165332480_op3[2] = { &&func_5165340608, &&RETURN };
    static void *func_5165332480_op4[2] = { &&func_5165340736, &&RETURN };
    static void *func_5165332480_op5[2] = { &&func_5165340928, &&RETURN };
    static void *func_5165332480_op6[2] = { &&func_5165341056, &&RETURN };
    static void *func_5165332480_op7[2] = { &&func_5165335376, &&RETURN };
    static void *func_5165332480_op8[2] = { &&func_5165335504, &&RETURN };
    static void *func_5165332480_op9[2] = { &&func_5165340864, &&RETURN };
    static void *func_5165332480_op10[2] = { &&func_5165341120, &&RETURN };
    static void *func_5165332480_op11[2] = { &&func_5165341248, &&RETURN };
    static void *func_5165332480_op12[2] = { &&func_5165341376, &&RETURN };
    static void *func_5165332480_op13[2] = { &&func_5165341504, &&RETURN };
    static void *func_5165332480_op14[2] = { &&func_5165341632, &&RETURN };
    static void *func_5165332480_op15[2] = { &&func_5165341760, &&RETURN };
    static void *func_5165332480_op16[2] = { &&func_5165341888, &&RETURN };
    static void *func_5165332480_op17[2] = { &&func_5165335632, &&RETURN };
    static void *func_5165332480_op18[2] = { &&func_5165342272, &&RETURN };
    static void *func_5165332480_op19[2] = { &&func_5165342400, &&RETURN };
    static void *func_5165332480_op20[2] = { &&func_5165342528, &&RETURN };
    static void *func_5165332480_op21[2] = { &&func_5165342656, &&RETURN };
    static void *func_5165332480_op22[2] = { &&func_5165342784, &&RETURN };
    static void *func_5165332480_op23[2] = { &&func_5165342912, &&RETURN };
    static void *func_5165332480_op24[2] = { &&func_5165343040, &&RETURN };
    static void *func_5165332480_op25[2] = { &&func_5165343168, &&RETURN };
    static void *func_5165332480_op26[2] = { &&func_5165343296, &&RETURN };
    static void *func_5165332480_op27[2] = { &&func_5165343424, &&RETURN };
    static void *func_5165332480_op28[2] = { &&func_5165343552, &&RETURN };
    static void *func_5165332480_op29[2] = { &&func_5165343680, &&RETURN };
    static void *func_5165332480_op30[2] = { &&func_5165343808, &&RETURN };
    static void *func_5165332480_op31[2] = { &&func_5165343936, &&RETURN };
    static void *func_5165332480_op32[2] = { &&func_5165344064, &&RETURN };
    static void *func_5165332480_op33[2] = { &&func_5165342016, &&RETURN };
    static void *func_5165332480_op34[2] = { &&func_5165342144, &&RETURN };
    static void *func_5165332480_op35[2] = { &&func_5165344704, &&RETURN };
    static void *func_5165332480_op36[2] = { &&func_5165344832, &&RETURN };
    static void *func_5165332480_op37[2] = { &&func_5165344960, &&RETURN };
    static void *func_5165332480_op38[2] = { &&func_5165345088, &&RETURN };
    static void *func_5165332480_op39[2] = { &&func_5165345216, &&RETURN };
    static void *func_5165332480_op40[2] = { &&func_5165345344, &&RETURN };
    static void *func_5165332480_op41[2] = { &&func_5165345472, &&RETURN };
    static void *func_5165332480_op42[2] = { &&func_5165345600, &&RETURN };
    static void *func_5165332480_op43[2] = { &&func_5165345728, &&RETURN };
    static void *func_5165332480_op44[2] = { &&func_5165345856, &&RETURN };
    static void *func_5165332480_op45[2] = { &&func_5165345984, &&RETURN };
    static void *func_5165332480_op46[2] = { &&func_5165346112, &&RETURN };
    static void *func_5165332480_op47[2] = { &&func_5165346240, &&RETURN };
    static void *func_5165332480_op48[2] = { &&func_5165346368, &&RETURN };
    static void *func_5165332480_op49[2] = { &&func_5165346496, &&RETURN };
    static void *func_5165332480_op50[2] = { &&func_5165346624, &&RETURN };
    static void *func_5165332480_op51[2] = { &&func_5165346752, &&RETURN };
    static void *func_5165330000_op0[2] = { &&func_5165338544, &&RETURN };
    static void *func_5165330000_op1[2] = { &&func_5165330720, &&RETURN };
    static void *func_5165331040_op0[2] = { &&func_5165337888, &&RETURN };
    static void *func_5165331040_op1[2] = { &&func_5165331680, &&RETURN };
    static void *func_5165331248_op0[2] = { &&func_5165339120, &&RETURN };
    static void *func_5165331168_op0[2] = { &&func_5165331040, &&HALT };
    static void *func_5165331680_op0[2] = { &&func_5165331520, &&RETURN };
    static void *func_5165331680_op1[2] = { &&func_5165329808, &&RETURN };
    static void *func_5165331680_op2[2] = { &&func_5165330848, &&RETURN };
    static void *func_5165331680_op3[2] = { &&func_5165331440, &&RETURN };
    static void *func_5165331680_op4[2] = { &&func_5165329680, &&RETURN };
    static void *func_5165331680_op5[2] = { &&func_5165331248, &&RETURN };
    static void *func_5165331968_op0[2] = { &&func_5165339744, &&RETURN };
    static void *func_5165331968_op1[2] = { &&func_5165339376, &&RETURN };
    static void *func_5165331968_op2[2] = { &&func_5165330080, &&RETURN };
    static void *func_5165331520_op0[2] = { &&func_5165346960, &&RETURN };
    static void *func_5165331520_op1[2] = { &&func_5165347344, &&RETURN };
    static void *func_5165331520_op2[2] = { &&func_5165347600, &&RETURN };
    static void *func_5165331440_op0[2] = { &&func_5165346880, &&RETURN };
    static void *exp_5165331904[5] = {&&func_5165330320, &&func_5165332224, &&func_5165330432, &&func_5165332352, &&RETURN };
    static void *exp_5165333504[4] = {&&func_5165330432, &&func_5165333632, &&func_5165330432, &&RETURN };
    static void *exp_5165333760[4] = {&&func_5165330432, &&func_5165333888, &&func_5165330432, &&RETURN };
    static void *exp_5165334016[4] = {&&func_5165330432, &&func_5165334144, &&func_5165330432, &&RETURN };
    static void *exp_5165334304[4] = {&&func_5165330432, &&func_5165334432, &&func_5165330432, &&RETURN };
    static void *exp_5165334592[4] = {&&func_5165330560, &&func_5165334720, &&func_5165330560, &&RETURN };
    static void *exp_5165334944[4] = {&&func_5165330560, &&func_5165335072, &&func_5165330560, &&RETURN };
    static void *exp_5165335248[3] = {&&func_5165332736, &&func_5165330560, &&RETURN };
    static void *exp_5165332864[4] = {&&func_5165330432, &&func_5165337200, &&func_5165331968, &&RETURN };
    static void *exp_5165333056[4] = {&&func_5165330432, &&func_5165333184, &&func_5165331968, &&RETURN };
    static void *exp_5165337056[4] = {&&func_5165337424, &&func_5165330432, &&func_5165337552, &&RETURN };
    static void *exp_5165331808[8] = {&&func_5165338160, &&func_5165330320, &&func_5165337424, &&func_5165337552, &&func_5165332544, &&func_5165331040, &&func_5165338416, &&RETURN };
    static void *exp_5165337760[3] = {&&func_5165332480, &&func_5165330320, &&RETURN };
    static void *exp_5165338720[8] = {&&func_5165338848, &&func_5165337424, &&func_5165330560, &&func_5165337552, &&func_5165332544, &&func_5165331040, &&func_5165338416, &&RETURN };
    static void *exp_5165338544[3] = {&&func_5165330720, &&func_5165330000, &&RETURN };
    static void *exp_5165337888[3] = {&&func_5165331040, &&func_5165331680, &&RETURN };
    static void *exp_5165339120[4] = {&&func_5165339248, &&func_5165330432, &&func_5165332352, &&RETURN };
    static void *exp_5165339744[4] = {&&func_5165331968, &&func_5165339872, &&func_5165330080, &&RETURN };
    static void *exp_5165339376[4] = {&&func_5165331968, &&func_5165340000, &&func_5165330080, &&RETURN };
    static void *exp_5165346960[4] = {&&func_5165347088, &&func_5165330320, &&func_5165347216, &&RETURN };
    static void *exp_5165347344[4] = {&&func_5165347472, &&func_5165330320, &&func_5165347216, &&RETURN };
    static void *exp_5165347600[4] = {&&func_5165347728, &&func_5165330320, &&func_5165347216, &&RETURN };
    static void *exp_5165346880[8] = {&&func_5165339648, &&func_5165337424, &&func_5165330560, &&func_5165337552, &&func_5165332544, &&func_5165331040, &&func_5165338416, &&RETURN };

func_5165329808:
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
            PC = func_5165329808_op0;
            break;
    }
    goto **PC;
func_5165330560:
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
            PC = func_5165330560_op0;
            break;
        case 1:
            PC = func_5165330560_op1;
            break;
        case 2:
            PC = func_5165330560_op2;
            break;
        case 3:
            PC = func_5165330560_op3;
            break;
        case 4:
            PC = func_5165330560_op4;
            break;
        case 5:
            PC = func_5165330560_op5;
            break;
        case 6:
            PC = func_5165330560_op6;
            break;
    }
    goto **PC;
func_5165330720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5165330720_op0;
            break;
        case 1:
            PC = func_5165330720_op1;
            break;
        case 2:
            PC = func_5165330720_op2;
            break;
        case 3:
            PC = func_5165330720_op3;
            break;
        case 4:
            PC = func_5165330720_op4;
            break;
        case 5:
            PC = func_5165330720_op5;
            break;
        case 6:
            PC = func_5165330720_op6;
            break;
        case 7:
            PC = func_5165330720_op7;
            break;
        case 8:
            PC = func_5165330720_op8;
            break;
        case 9:
            PC = func_5165330720_op9;
            break;
    }
    goto **PC;
func_5165330432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165330432_op0;
            break;
        case 1:
            PC = func_5165330432_op1;
            break;
        case 2:
            PC = func_5165330432_op2;
            break;
    }
    goto **PC;
func_5165330080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165330080_op0;
            break;
        case 1:
            PC = func_5165330080_op1;
            break;
        case 2:
            PC = func_5165330080_op2;
            break;
    }
    goto **PC;
func_5165329680:
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
            PC = func_5165329680_op0;
            break;
    }
    goto **PC;
func_5165330320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165330320_op0;
            break;
        case 1:
            PC = func_5165330320_op1;
            break;
    }
    goto **PC;
func_5165330848:
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
            PC = func_5165330848_op0;
            break;
    }
    goto **PC;
func_5165332480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5165332480_op0;
            break;
        case 1:
            PC = func_5165332480_op1;
            break;
        case 2:
            PC = func_5165332480_op2;
            break;
        case 3:
            PC = func_5165332480_op3;
            break;
        case 4:
            PC = func_5165332480_op4;
            break;
        case 5:
            PC = func_5165332480_op5;
            break;
        case 6:
            PC = func_5165332480_op6;
            break;
        case 7:
            PC = func_5165332480_op7;
            break;
        case 8:
            PC = func_5165332480_op8;
            break;
        case 9:
            PC = func_5165332480_op9;
            break;
        case 10:
            PC = func_5165332480_op10;
            break;
        case 11:
            PC = func_5165332480_op11;
            break;
        case 12:
            PC = func_5165332480_op12;
            break;
        case 13:
            PC = func_5165332480_op13;
            break;
        case 14:
            PC = func_5165332480_op14;
            break;
        case 15:
            PC = func_5165332480_op15;
            break;
        case 16:
            PC = func_5165332480_op16;
            break;
        case 17:
            PC = func_5165332480_op17;
            break;
        case 18:
            PC = func_5165332480_op18;
            break;
        case 19:
            PC = func_5165332480_op19;
            break;
        case 20:
            PC = func_5165332480_op20;
            break;
        case 21:
            PC = func_5165332480_op21;
            break;
        case 22:
            PC = func_5165332480_op22;
            break;
        case 23:
            PC = func_5165332480_op23;
            break;
        case 24:
            PC = func_5165332480_op24;
            break;
        case 25:
            PC = func_5165332480_op25;
            break;
        case 26:
            PC = func_5165332480_op26;
            break;
        case 27:
            PC = func_5165332480_op27;
            break;
        case 28:
            PC = func_5165332480_op28;
            break;
        case 29:
            PC = func_5165332480_op29;
            break;
        case 30:
            PC = func_5165332480_op30;
            break;
        case 31:
            PC = func_5165332480_op31;
            break;
        case 32:
            PC = func_5165332480_op32;
            break;
        case 33:
            PC = func_5165332480_op33;
            break;
        case 34:
            PC = func_5165332480_op34;
            break;
        case 35:
            PC = func_5165332480_op35;
            break;
        case 36:
            PC = func_5165332480_op36;
            break;
        case 37:
            PC = func_5165332480_op37;
            break;
        case 38:
            PC = func_5165332480_op38;
            break;
        case 39:
            PC = func_5165332480_op39;
            break;
        case 40:
            PC = func_5165332480_op40;
            break;
        case 41:
            PC = func_5165332480_op41;
            break;
        case 42:
            PC = func_5165332480_op42;
            break;
        case 43:
            PC = func_5165332480_op43;
            break;
        case 44:
            PC = func_5165332480_op44;
            break;
        case 45:
            PC = func_5165332480_op45;
            break;
        case 46:
            PC = func_5165332480_op46;
            break;
        case 47:
            PC = func_5165332480_op47;
            break;
        case 48:
            PC = func_5165332480_op48;
            break;
        case 49:
            PC = func_5165332480_op49;
            break;
        case 50:
            PC = func_5165332480_op50;
            break;
        case 51:
            PC = func_5165332480_op51;
            break;
    }
    goto **PC;
func_5165330000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165330000_op0;
            break;
        case 1:
            PC = func_5165330000_op1;
            break;
    }
    goto **PC;
func_5165331040:
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
            PC = func_5165331040_op0;
            break;
        case 1:
            PC = func_5165331040_op1;
            break;
    }
    goto **PC;
func_5165331248:
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
            PC = func_5165331248_op0;
            break;
    }
    goto **PC;
func_5165331168:
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
            PC = func_5165331168_op0;
            break;
    }
    goto **PC;
func_5165331680:
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
            PC = func_5165331680_op0;
            break;
        case 1:
            PC = func_5165331680_op1;
            break;
        case 2:
            PC = func_5165331680_op2;
            break;
        case 3:
            PC = func_5165331680_op3;
            break;
        case 4:
            PC = func_5165331680_op4;
            break;
        case 5:
            PC = func_5165331680_op5;
            break;
    }
    goto **PC;
func_5165331968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165331968_op0;
            break;
        case 1:
            PC = func_5165331968_op1;
            break;
        case 2:
            PC = func_5165331968_op2;
            break;
    }
    goto **PC;
func_5165331520:
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
            PC = func_5165331520_op0;
            break;
        case 1:
            PC = func_5165331520_op1;
            break;
        case 2:
            PC = func_5165331520_op2;
            break;
    }
    goto **PC;
func_5165331440:
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
            PC = func_5165331440_op0;
            break;
    }
    goto **PC;
func_5165331904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165331904;
    goto **PC;
func_5165332224:
    extend(61);
    NEXT();
    goto **PC;
func_5165332352:
    extend(59);
    NEXT();
    goto **PC;
func_5165333504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165333504;
    goto **PC;
func_5165333632:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5165333760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165333760;
    goto **PC;
func_5165333888:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_5165334016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165334016;
    goto **PC;
func_5165334144:
    extend(62);
    NEXT();
    goto **PC;
func_5165334304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165334304;
    goto **PC;
func_5165334432:
    extend(60);
    NEXT();
    goto **PC;
func_5165334592:
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
    PC = exp_5165334592;
    goto **PC;
func_5165334720:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5165334944:
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
    PC = exp_5165334944;
    goto **PC;
func_5165335072:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5165335248:
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
    PC = exp_5165335248;
    goto **PC;
func_5165332736:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_5165333376:
    extend(48);
    NEXT();
    goto **PC;
func_5165332928:
    extend(49);
    NEXT();
    goto **PC;
func_5165335824:
    extend(50);
    NEXT();
    goto **PC;
func_5165335952:
    extend(51);
    NEXT();
    goto **PC;
func_5165336080:
    extend(52);
    NEXT();
    goto **PC;
func_5165336272:
    extend(53);
    NEXT();
    goto **PC;
func_5165336400:
    extend(54);
    NEXT();
    goto **PC;
func_5165336528:
    extend(55);
    NEXT();
    goto **PC;
func_5165336656:
    extend(56);
    NEXT();
    goto **PC;
func_5165336208:
    extend(57);
    NEXT();
    goto **PC;
func_5165332864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165332864;
    goto **PC;
func_5165337200:
    extend(43);
    NEXT();
    goto **PC;
func_5165333056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165333056;
    goto **PC;
func_5165333184:
    extend(45);
    NEXT();
    goto **PC;
func_5165337056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165337056;
    goto **PC;
func_5165337424:
    extend(40);
    NEXT();
    goto **PC;
func_5165337552:
    extend(41);
    NEXT();
    goto **PC;
func_5165331808:
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
    PC = exp_5165331808;
    goto **PC;
func_5165338160:
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
func_5165332544:
    extend(123);
    NEXT();
    goto **PC;
func_5165338416:
    extend(125);
    NEXT();
    goto **PC;
func_5165337760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165337760;
    goto **PC;
func_5165338720:
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
    PC = exp_5165338720;
    goto **PC;
func_5165338848:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5165340192:
    extend(97);
    NEXT();
    goto **PC;
func_5165340320:
    extend(98);
    NEXT();
    goto **PC;
func_5165340448:
    extend(99);
    NEXT();
    goto **PC;
func_5165340608:
    extend(100);
    NEXT();
    goto **PC;
func_5165340736:
    extend(101);
    NEXT();
    goto **PC;
func_5165340928:
    extend(102);
    NEXT();
    goto **PC;
func_5165341056:
    extend(103);
    NEXT();
    goto **PC;
func_5165335376:
    extend(104);
    NEXT();
    goto **PC;
func_5165335504:
    extend(105);
    NEXT();
    goto **PC;
func_5165340864:
    extend(106);
    NEXT();
    goto **PC;
func_5165341120:
    extend(107);
    NEXT();
    goto **PC;
func_5165341248:
    extend(108);
    NEXT();
    goto **PC;
func_5165341376:
    extend(109);
    NEXT();
    goto **PC;
func_5165341504:
    extend(110);
    NEXT();
    goto **PC;
func_5165341632:
    extend(111);
    NEXT();
    goto **PC;
func_5165341760:
    extend(112);
    NEXT();
    goto **PC;
func_5165341888:
    extend(113);
    NEXT();
    goto **PC;
func_5165335632:
    extend(114);
    NEXT();
    goto **PC;
func_5165342272:
    extend(115);
    NEXT();
    goto **PC;
func_5165342400:
    extend(116);
    NEXT();
    goto **PC;
func_5165342528:
    extend(117);
    NEXT();
    goto **PC;
func_5165342656:
    extend(118);
    NEXT();
    goto **PC;
func_5165342784:
    extend(119);
    NEXT();
    goto **PC;
func_5165342912:
    extend(120);
    NEXT();
    goto **PC;
func_5165343040:
    extend(121);
    NEXT();
    goto **PC;
func_5165343168:
    extend(122);
    NEXT();
    goto **PC;
func_5165343296:
    extend(65);
    NEXT();
    goto **PC;
func_5165343424:
    extend(66);
    NEXT();
    goto **PC;
func_5165343552:
    extend(67);
    NEXT();
    goto **PC;
func_5165343680:
    extend(68);
    NEXT();
    goto **PC;
func_5165343808:
    extend(69);
    NEXT();
    goto **PC;
func_5165343936:
    extend(70);
    NEXT();
    goto **PC;
func_5165344064:
    extend(71);
    NEXT();
    goto **PC;
func_5165342016:
    extend(72);
    NEXT();
    goto **PC;
func_5165342144:
    extend(73);
    NEXT();
    goto **PC;
func_5165344704:
    extend(74);
    NEXT();
    goto **PC;
func_5165344832:
    extend(75);
    NEXT();
    goto **PC;
func_5165344960:
    extend(76);
    NEXT();
    goto **PC;
func_5165345088:
    extend(77);
    NEXT();
    goto **PC;
func_5165345216:
    extend(78);
    NEXT();
    goto **PC;
func_5165345344:
    extend(79);
    NEXT();
    goto **PC;
func_5165345472:
    extend(80);
    NEXT();
    goto **PC;
func_5165345600:
    extend(81);
    NEXT();
    goto **PC;
func_5165345728:
    extend(82);
    NEXT();
    goto **PC;
func_5165345856:
    extend(83);
    NEXT();
    goto **PC;
func_5165345984:
    extend(84);
    NEXT();
    goto **PC;
func_5165346112:
    extend(85);
    NEXT();
    goto **PC;
func_5165346240:
    extend(86);
    NEXT();
    goto **PC;
func_5165346368:
    extend(87);
    NEXT();
    goto **PC;
func_5165346496:
    extend(88);
    NEXT();
    goto **PC;
func_5165346624:
    extend(89);
    NEXT();
    goto **PC;
func_5165346752:
    extend(90);
    NEXT();
    goto **PC;
func_5165338544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165338544;
    goto **PC;
func_5165337888:
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
    PC = exp_5165337888;
    goto **PC;
func_5165339120:
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
    PC = exp_5165339120;
    goto **PC;
func_5165339248:
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
func_5165339744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165339744;
    goto **PC;
func_5165339872:
    extend(42);
    NEXT();
    goto **PC;
func_5165339376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165339376;
    goto **PC;
func_5165340000:
    extend(47);
    NEXT();
    goto **PC;
func_5165346960:
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
    PC = exp_5165346960;
    goto **PC;
func_5165347088:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5165347216:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_5165347344:
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
    PC = exp_5165347344;
    goto **PC;
func_5165347472:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5165347600:
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
    PC = exp_5165347600;
    goto **PC;
func_5165347728:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_5165346880:
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
    PC = exp_5165346880;
    goto **PC;
func_5165339648:
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
    PC = func_5165331168_op0;
    goto **PC;
}
