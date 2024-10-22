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
    static void *func_5375039008_op0[2] = { &&func_5375040832, &&RETURN };
    static void *func_5375039376_op0[2] = { &&func_5375042128, &&RETURN };
    static void *func_5375039376_op1[2] = { &&func_5375042384, &&RETURN };
    static void *func_5375039376_op2[2] = { &&func_5375042640, &&RETURN };
    static void *func_5375039792_op0[2] = { &&func_5375043152, &&RETURN };
    static void *func_5375039792_op1[2] = { &&func_5375040736, &&RETURN };
    static void *func_5375039792_op2[2] = { &&func_5375043344, &&RETURN };
    static void *func_5375039792_op3[2] = { &&func_5375043472, &&RETURN };
    static void *func_5375039792_op4[2] = { &&func_5375043600, &&RETURN };
    static void *func_5375039792_op5[2] = { &&func_5375043792, &&RETURN };
    static void *func_5375039792_op6[2] = { &&func_5375043920, &&RETURN };
    static void *func_5375039792_op7[2] = { &&func_5375044048, &&RETURN };
    static void *func_5375039792_op8[2] = { &&func_5375044176, &&RETURN };
    static void *func_5375039792_op9[2] = { &&func_5375043728, &&RETURN };
    static void *func_5375039888_op0[2] = { &&func_5375044752, &&RETURN };
    static void *func_5375039888_op1[2] = { &&func_5375041920, &&RETURN };
    static void *func_5375039888_op2[2] = { &&func_5375041264, &&RETURN };
    static void *func_5375039664_op0[2] = { &&func_5375043056, &&RETURN };
    static void *func_5375039664_op1[2] = { &&func_5375040016, &&RETURN };
    static void *func_5375039664_op2[2] = { &&func_5375040288, &&RETURN };
    static void *func_5375039584_op0[2] = { &&func_5375042896, &&RETURN };
    static void *func_5375040288_op0[2] = { &&func_5375045904, &&RETURN };
    static void *func_5375040288_op1[2] = { &&func_5375046576, &&RETURN };
    static void *func_5375040288_op2[2] = { &&func_5375046704, &&RETURN };
    static void *func_5375040288_op3[2] = { &&func_5375046832, &&RETURN };
    static void *func_5375040288_op4[2] = { &&func_5375046960, &&RETURN };
    static void *func_5375040288_op5[2] = { &&func_5375047152, &&RETURN };
    static void *func_5375040288_op6[2] = { &&func_5375047280, &&RETURN };
    static void *func_5375040288_op7[2] = { &&func_5375047408, &&RETURN };
    static void *func_5375040288_op8[2] = { &&func_5375047536, &&RETURN };
    static void *func_5375039504_op0[2] = { &&func_5375047088, &&RETURN };
    static void *func_5375039504_op1[2] = { &&func_5375045552, &&RETURN };
    static void *func_5375040016_op0[2] = { &&func_5375039792, &&RETURN };
    static void *func_5375040016_op1[2] = { &&func_5375045728, &&RETURN };
    static void *func_5375040544_op0[2] = { &&func_5375047792, &&RETURN };
    static void *func_5375040208_op0[2] = { &&func_5375048432, &&RETURN };
    static void *func_5375040480_op0[2] = { &&func_5375040208, &&HALT };
    static void *func_5375040896_op0[2] = { &&func_5375039504, &&RETURN };
    static void *func_5375040896_op1[2] = { &&func_5375041104, &&RETURN };
    static void *func_5375040896_op2[2] = { &&func_5375039584, &&RETURN };
    static void *func_5375040896_op3[2] = { &&func_5375039008, &&RETURN };
    static void *func_5375040896_op4[2] = { &&func_5375040544, &&RETURN };
    static void *func_5375041264_op0[2] = { &&func_5375049280, &&RETURN };
    static void *func_5375041264_op1[2] = { &&func_5375048560, &&RETURN };
    static void *func_5375041264_op2[2] = { &&func_5375039664, &&RETURN };
    static void *func_5375041104_op0[2] = { &&func_5375049216, &&RETURN };
    static void *exp_5375040832[5] = {&&func_5375040288, &&func_5375041024, &&func_5375039888, &&func_5375040080, &&RETURN };
    static void *exp_5375042128[4] = {&&func_5375039888, &&func_5375042256, &&func_5375039888, &&RETURN };
    static void *exp_5375042384[4] = {&&func_5375039888, &&func_5375042512, &&func_5375039888, &&RETURN };
    static void *exp_5375042640[4] = {&&func_5375039888, &&func_5375042768, &&func_5375039888, &&RETURN };
    static void *exp_5375044752[4] = {&&func_5375039888, &&func_5375044880, &&func_5375041264, &&RETURN };
    static void *exp_5375041920[4] = {&&func_5375039888, &&func_5375042048, &&func_5375041264, &&RETURN };
    static void *exp_5375043056[4] = {&&func_5375045232, &&func_5375039888, &&func_5375045360, &&RETURN };
    static void *exp_5375042896[12] = {&&func_5375046128, &&func_5375045232, &&func_5375039008, &&func_5375040080, &&func_5375039376, &&func_5375040080, &&func_5375039008, &&func_5375045360, &&func_5375046256, &&func_5375040208, &&func_5375041392, &&RETURN };
    static void *exp_5375047088[8] = {&&func_5375048304, &&func_5375045232, &&func_5375039376, &&func_5375045360, &&func_5375046256, &&func_5375040208, &&func_5375041392, &&RETURN };
    static void *exp_5375045552[12] = {&&func_5375048304, &&func_5375045232, &&func_5375039376, &&func_5375045360, &&func_5375046256, &&func_5375040208, &&func_5375041392, &&func_5375048128, &&func_5375046256, &&func_5375040208, &&func_5375041392, &&RETURN };
    static void *exp_5375045728[3] = {&&func_5375039792, &&func_5375040016, &&RETURN };
    static void *exp_5375047792[6] = {&&func_5375047920, &&func_5375045232, &&func_5375039888, &&func_5375045360, &&func_5375040080, &&RETURN };
    static void *exp_5375048432[3] = {&&func_5375040896, &&func_5375040208, &&RETURN };
    static void *exp_5375049280[4] = {&&func_5375041264, &&func_5375049408, &&func_5375039664, &&RETURN };
    static void *exp_5375048560[4] = {&&func_5375041264, &&func_5375044240, &&func_5375039664, &&RETURN };
    static void *exp_5375049216[8] = {&&func_5375044608, &&func_5375045232, &&func_5375039376, &&func_5375045360, &&func_5375046256, &&func_5375040208, &&func_5375041392, &&RETURN };

func_5375039008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039008_op0;
            break;
    }
    goto **PC;
func_5375039376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039376_op0;
            break;
        case 1:
            PC = func_5375039376_op1;
            break;
        case 2:
            PC = func_5375039376_op2;
            break;
    }
    goto **PC;
func_5375039792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039792_op0;
            break;
        case 1:
            PC = func_5375039792_op1;
            break;
        case 2:
            PC = func_5375039792_op2;
            break;
        case 3:
            PC = func_5375039792_op3;
            break;
        case 4:
            PC = func_5375039792_op4;
            break;
        case 5:
            PC = func_5375039792_op5;
            break;
        case 6:
            PC = func_5375039792_op6;
            break;
        case 7:
            PC = func_5375039792_op7;
            break;
        case 8:
            PC = func_5375039792_op8;
            break;
        case 9:
            PC = func_5375039792_op9;
            break;
    }
    goto **PC;
func_5375039888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039888_op0;
            break;
        case 1:
            PC = func_5375039888_op1;
            break;
        case 2:
            PC = func_5375039888_op2;
            break;
    }
    goto **PC;
func_5375039664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039664_op0;
            break;
        case 1:
            PC = func_5375039664_op1;
            break;
        case 2:
            PC = func_5375039664_op2;
            break;
    }
    goto **PC;
func_5375039584:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039584_op0;
            break;
    }
    goto **PC;
func_5375040288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040288_op0;
            break;
        case 1:
            PC = func_5375040288_op1;
            break;
        case 2:
            PC = func_5375040288_op2;
            break;
        case 3:
            PC = func_5375040288_op3;
            break;
        case 4:
            PC = func_5375040288_op4;
            break;
        case 5:
            PC = func_5375040288_op5;
            break;
        case 6:
            PC = func_5375040288_op6;
            break;
        case 7:
            PC = func_5375040288_op7;
            break;
        case 8:
            PC = func_5375040288_op8;
            break;
    }
    goto **PC;
func_5375039504:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375039504_op0;
            break;
        case 1:
            PC = func_5375039504_op1;
            break;
    }
    goto **PC;
func_5375040016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040016_op0;
            break;
        case 1:
            PC = func_5375040016_op1;
            break;
    }
    goto **PC;
func_5375040544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040544_op0;
            break;
    }
    goto **PC;
func_5375040208:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040208_op0;
            break;
    }
    goto **PC;
func_5375040480:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040480_op0;
            break;
    }
    goto **PC;
func_5375040896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5375040896_op0;
            break;
        case 1:
            PC = func_5375040896_op1;
            break;
        case 2:
            PC = func_5375040896_op2;
            break;
        case 3:
            PC = func_5375040896_op3;
            break;
        case 4:
            PC = func_5375040896_op4;
            break;
    }
    goto **PC;
func_5375041264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375041264_op0;
            break;
        case 1:
            PC = func_5375041264_op1;
            break;
        case 2:
            PC = func_5375041264_op2;
            break;
    }
    goto **PC;
func_5375041104:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375041104_op0;
            break;
    }
    goto **PC;
func_5375040832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375040832;
    goto **PC;
func_5375041024:
    extend(61);
    NEXT();
    goto **PC;
func_5375040080:
    extend(59);
    NEXT();
    goto **PC;
func_5375042128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375042128;
    goto **PC;
func_5375042256:
    extend(62);
    NEXT();
    goto **PC;
func_5375042384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375042384;
    goto **PC;
func_5375042512:
    extend(60);
    NEXT();
    goto **PC;
func_5375042640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375042640;
    goto **PC;
func_5375042768:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5375043152:
    extend(48);
    NEXT();
    goto **PC;
func_5375040736:
    extend(49);
    NEXT();
    goto **PC;
func_5375043344:
    extend(50);
    NEXT();
    goto **PC;
func_5375043472:
    extend(51);
    NEXT();
    goto **PC;
func_5375043600:
    extend(52);
    NEXT();
    goto **PC;
func_5375043792:
    extend(53);
    NEXT();
    goto **PC;
func_5375043920:
    extend(54);
    NEXT();
    goto **PC;
func_5375044048:
    extend(55);
    NEXT();
    goto **PC;
func_5375044176:
    extend(56);
    NEXT();
    goto **PC;
func_5375043728:
    extend(57);
    NEXT();
    goto **PC;
func_5375044752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375044752;
    goto **PC;
func_5375044880:
    extend(43);
    NEXT();
    goto **PC;
func_5375041920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375041920;
    goto **PC;
func_5375042048:
    extend(45);
    NEXT();
    goto **PC;
func_5375043056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375043056;
    goto **PC;
func_5375045232:
    extend(40);
    NEXT();
    goto **PC;
func_5375045360:
    extend(41);
    NEXT();
    goto **PC;
func_5375042896:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375042896;
    goto **PC;
func_5375046128:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5375046256:
    extend(123);
    NEXT();
    goto **PC;
func_5375041392:
    extend(125);
    NEXT();
    goto **PC;
func_5375045904:
    extend(105);
    NEXT();
    goto **PC;
func_5375046576:
    extend(106);
    NEXT();
    goto **PC;
func_5375046704:
    extend(107);
    NEXT();
    goto **PC;
func_5375046832:
    extend(120);
    NEXT();
    goto **PC;
func_5375046960:
    extend(121);
    NEXT();
    goto **PC;
func_5375047152:
    extend(122);
    NEXT();
    goto **PC;
func_5375047280:
    extend(97);
    NEXT();
    goto **PC;
func_5375047408:
    extend(98);
    NEXT();
    goto **PC;
func_5375047536:
    extend(99);
    NEXT();
    goto **PC;
func_5375047088:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375047088;
    goto **PC;
func_5375048304:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5375045552:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375045552;
    goto **PC;
func_5375048128:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5375045728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375045728;
    goto **PC;
func_5375047792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375047792;
    goto **PC;
func_5375047920:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5375048432:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375048432;
    goto **PC;
func_5375049280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375049280;
    goto **PC;
func_5375049408:
    extend(42);
    NEXT();
    goto **PC;
func_5375048560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375048560;
    goto **PC;
func_5375044240:
    extend(47);
    NEXT();
    goto **PC;
func_5375049216:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5375049216;
    goto **PC;
func_5375044608:
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
    PC = func_5375040480_op0;
    goto **PC;
}
