#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 30
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
    static void *func_4829766368_op0[2] = { &&func_4829777392, &&RETURN };
    static void *func_4829775808_op0[2] = { &&func_4829778016, &&RETURN };
    static void *func_4829775808_op1[2] = { &&func_4829776464, &&RETURN };
    static void *func_4829775808_op2[2] = { &&func_4829778656, &&RETURN };
    static void *func_4829775728_op0[2] = { &&func_4829778912, &&RETURN };
    static void *func_4829775728_op1[2] = { &&func_4829777168, &&RETURN };
    static void *func_4829775728_op2[2] = { &&func_4829779200, &&RETURN };
    static void *func_4829775648_op0[2] = { &&func_4829776800, &&RETURN };
    static void *func_4829775648_op1[2] = { &&func_4829776272, &&RETURN };
    static void *func_4829776272_op0[2] = { &&func_4829779552, &&RETURN };
    static void *func_4829776272_op1[2] = { &&func_4829779680, &&RETURN };
    static void *func_4829776272_op2[2] = { &&func_4829779808, &&RETURN };
    static void *func_4829776272_op3[2] = { &&func_4829779936, &&RETURN };
    static void *func_4829776272_op4[2] = { &&func_4829780064, &&RETURN };
    static void *func_4829776272_op5[2] = { &&func_4829780256, &&RETURN };
    static void *func_4829775376_op0[2] = { &&func_4829779488, &&RETURN };
    static void *func_4829775376_op1[2] = { &&func_4829781680, &&RETURN };
    static void *func_4829776800_op0[2] = { &&func_4829780912, &&RETURN };
    static void *func_4829776800_op1[2] = { &&func_4829777904, &&RETURN };
    static void *func_4829776800_op2[2] = { &&func_4829782320, &&RETURN };
    static void *func_4829776800_op3[2] = { &&func_4829782448, &&RETURN };
    static void *func_4829776800_op4[2] = { &&func_4829782576, &&RETURN };
    static void *func_4829776800_op5[2] = { &&func_4829782768, &&RETURN };
    static void *func_4829776800_op6[2] = { &&func_4829782896, &&RETURN };
    static void *func_4829776800_op7[2] = { &&func_4829783024, &&RETURN };
    static void *func_4829776800_op8[2] = { &&func_4829783152, &&RETURN };
    static void *func_4829776800_op9[2] = { &&func_4829782704, &&RETURN };
    static void *func_4829775568_op0[2] = { &&func_4829783472, &&RETURN };
    static void *func_4829776096_op0[2] = { &&func_4829775376, &&HALT };
    static void *func_4829776160_op0[2] = { &&func_4829775376, &&RETURN };
    static void *func_4829776160_op1[2] = { &&func_4829766368, &&RETURN };
    static void *func_4829776160_op2[2] = { &&func_4829775568, &&RETURN };
    static void *func_4829777040_op0[2] = { &&func_4829780736, &&RETURN };
    static void *func_4829777040_op1[2] = { &&func_4829780448, &&RETURN };
    static void *func_4829777168_op0[2] = { &&func_4829775648, &&RETURN };
    static void *func_4829777168_op1[2] = { &&func_4829783872, &&RETURN };
    static void *exp_4829777392[5] = {&&func_4829776272, &&func_4829777520, &&func_4829775728, &&func_4829777648, &&RETURN };
    static void *exp_4829778016[4] = {&&func_4829775728, &&func_4829778144, &&func_4829775728, &&RETURN };
    static void *exp_4829776464[4] = {&&func_4829775728, &&func_4829778528, &&func_4829775728, &&RETURN };
    static void *exp_4829778656[4] = {&&func_4829775728, &&func_4829778784, &&func_4829775728, &&RETURN };
    static void *exp_4829778912[4] = {&&func_4829777168, &&func_4829779040, &&func_4829775728, &&RETURN };
    static void *exp_4829779200[4] = {&&func_4829777168, &&func_4829779328, &&func_4829775728, &&RETURN };
    static void *exp_4829779488[12] = {&&func_4829777296, &&func_4829778272, &&func_4829775808, &&func_4829778400, &&func_4829777840, &&func_4829777040, &&func_4829781744, &&func_4829781872, &&func_4829777840, &&func_4829777040, &&func_4829781744, &&RETURN };
    static void *exp_4829781680[8] = {&&func_4829777296, &&func_4829778272, &&func_4829775808, &&func_4829778400, &&func_4829777840, &&func_4829777040, &&func_4829781744, &&RETURN };
    static void *exp_4829783472[6] = {&&func_4829783600, &&func_4829778272, &&func_4829775728, &&func_4829778400, &&func_4829777648, &&RETURN };
    static void *exp_4829780736[3] = {&&func_4829776160, &&func_4829777040, &&RETURN };
    static void *exp_4829780448[1] = {&&RETURN };
    static void *exp_4829783872[4] = {&&func_4829775648, &&func_4829784000, &&func_4829777168, &&RETURN };

func_4829766368:
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
            PC = func_4829766368_op0;
            break;
    }
    goto **PC;
func_4829775808:
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
            PC = func_4829775808_op0;
            break;
        case 1:
            PC = func_4829775808_op1;
            break;
        case 2:
            PC = func_4829775808_op2;
            break;
    }
    goto **PC;
func_4829775728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4829775728_op0;
            break;
        case 1:
            PC = func_4829775728_op1;
            break;
        case 2:
            PC = func_4829775728_op2;
            break;
    }
    goto **PC;
func_4829775648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4829775648_op0;
            break;
        case 1:
            PC = func_4829775648_op1;
            break;
    }
    goto **PC;
func_4829776272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4829776272_op0;
            break;
        case 1:
            PC = func_4829776272_op1;
            break;
        case 2:
            PC = func_4829776272_op2;
            break;
        case 3:
            PC = func_4829776272_op3;
            break;
        case 4:
            PC = func_4829776272_op4;
            break;
        case 5:
            PC = func_4829776272_op5;
            break;
    }
    goto **PC;
func_4829775376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4829775376_op0;
            break;
        case 1:
            PC = func_4829775376_op1;
            break;
    }
    goto **PC;
func_4829776800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4829776800_op0;
            break;
        case 1:
            PC = func_4829776800_op1;
            break;
        case 2:
            PC = func_4829776800_op2;
            break;
        case 3:
            PC = func_4829776800_op3;
            break;
        case 4:
            PC = func_4829776800_op4;
            break;
        case 5:
            PC = func_4829776800_op5;
            break;
        case 6:
            PC = func_4829776800_op6;
            break;
        case 7:
            PC = func_4829776800_op7;
            break;
        case 8:
            PC = func_4829776800_op8;
            break;
        case 9:
            PC = func_4829776800_op9;
            break;
    }
    goto **PC;
func_4829775568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
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
            PC = func_4829775568_op0;
            break;
    }
    goto **PC;
func_4829776096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4829776096_op0;
            break;
    }
    goto **PC;
func_4829776160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4829776160_op0;
            break;
        case 1:
            PC = func_4829776160_op1;
            break;
        case 2:
            PC = func_4829776160_op2;
            break;
    }
    goto **PC;
func_4829777040:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4829777040_op0;
            break;
        case 1:
            PC = func_4829777040_op1;
            break;
    }
    goto **PC;
func_4829777168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4829777168_op0;
            break;
        case 1:
            PC = func_4829777168_op1;
            break;
    }
    goto **PC;
func_4829777392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829777392;
    goto **PC;
func_4829777520:
    extend(61);
    NEXT();
    goto **PC;
func_4829777648:
    extend(59);
    NEXT();
    goto **PC;
func_4829778016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829778016;
    goto **PC;
func_4829778144:
    extend(62);
    NEXT();
    goto **PC;
func_4829776464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829776464;
    goto **PC;
func_4829778528:
    extend(60);
    NEXT();
    goto **PC;
func_4829778656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829778656;
    goto **PC;
func_4829778784:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4829778912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829778912;
    goto **PC;
func_4829779040:
    extend(43);
    NEXT();
    goto **PC;
func_4829779200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829779200;
    goto **PC;
func_4829779328:
    extend(45);
    NEXT();
    goto **PC;
func_4829779552:
    extend(120);
    NEXT();
    goto **PC;
func_4829779680:
    extend(121);
    NEXT();
    goto **PC;
func_4829779808:
    extend(122);
    NEXT();
    goto **PC;
func_4829779936:
    extend(97);
    NEXT();
    goto **PC;
func_4829780064:
    extend(98);
    NEXT();
    goto **PC;
func_4829780256:
    extend(99);
    NEXT();
    goto **PC;
func_4829779488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829779488;
    goto **PC;
func_4829777296:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_4829778272:
    extend(40);
    NEXT();
    goto **PC;
func_4829778400:
    extend(41);
    NEXT();
    goto **PC;
func_4829777840:
    extend(123);
    NEXT();
    goto **PC;
func_4829781744:
    extend(125);
    NEXT();
    goto **PC;
func_4829781872:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4829781680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829781680;
    goto **PC;
func_4829780912:
    extend(48);
    NEXT();
    goto **PC;
func_4829777904:
    extend(49);
    NEXT();
    goto **PC;
func_4829782320:
    extend(50);
    NEXT();
    goto **PC;
func_4829782448:
    extend(51);
    NEXT();
    goto **PC;
func_4829782576:
    extend(52);
    NEXT();
    goto **PC;
func_4829782768:
    extend(53);
    NEXT();
    goto **PC;
func_4829782896:
    extend(54);
    NEXT();
    goto **PC;
func_4829783024:
    extend(55);
    NEXT();
    goto **PC;
func_4829783152:
    extend(56);
    NEXT();
    goto **PC;
func_4829782704:
    extend(57);
    NEXT();
    goto **PC;
func_4829783472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829783472;
    goto **PC;
func_4829783600:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_4829780736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829780736;
    goto **PC;
func_4829780448:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829780448;
    goto **PC;
func_4829783872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829783872;
    goto **PC;
func_4829784000:
    extend(42);
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
    PC = func_4829776096_op0;
    goto **PC;
}
