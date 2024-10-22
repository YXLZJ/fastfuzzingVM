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
    static void *func_4955608608_op0[2] = { &&func_4955610432, &&RETURN };
    static void *func_4955608976_op0[2] = { &&func_4955611728, &&RETURN };
    static void *func_4955608976_op1[2] = { &&func_4955611984, &&RETURN };
    static void *func_4955608976_op2[2] = { &&func_4955612240, &&RETURN };
    static void *func_4955609392_op0[2] = { &&func_4955612752, &&RETURN };
    static void *func_4955609392_op1[2] = { &&func_4955610336, &&RETURN };
    static void *func_4955609392_op2[2] = { &&func_4955612944, &&RETURN };
    static void *func_4955609392_op3[2] = { &&func_4955613072, &&RETURN };
    static void *func_4955609392_op4[2] = { &&func_4955613200, &&RETURN };
    static void *func_4955609392_op5[2] = { &&func_4955613392, &&RETURN };
    static void *func_4955609392_op6[2] = { &&func_4955613520, &&RETURN };
    static void *func_4955609392_op7[2] = { &&func_4955613648, &&RETURN };
    static void *func_4955609392_op8[2] = { &&func_4955613776, &&RETURN };
    static void *func_4955609392_op9[2] = { &&func_4955613328, &&RETURN };
    static void *func_4955609488_op0[2] = { &&func_4955614352, &&RETURN };
    static void *func_4955609488_op1[2] = { &&func_4955611520, &&RETURN };
    static void *func_4955609488_op2[2] = { &&func_4955610864, &&RETURN };
    static void *func_4955609264_op0[2] = { &&func_4955612656, &&RETURN };
    static void *func_4955609264_op1[2] = { &&func_4955609616, &&RETURN };
    static void *func_4955609264_op2[2] = { &&func_4955609888, &&RETURN };
    static void *func_4955609184_op0[2] = { &&func_4955612496, &&RETURN };
    static void *func_4955609888_op0[2] = { &&func_4955615504, &&RETURN };
    static void *func_4955609888_op1[2] = { &&func_4955616176, &&RETURN };
    static void *func_4955609888_op2[2] = { &&func_4955616304, &&RETURN };
    static void *func_4955609888_op3[2] = { &&func_4955616432, &&RETURN };
    static void *func_4955609888_op4[2] = { &&func_4955616560, &&RETURN };
    static void *func_4955609888_op5[2] = { &&func_4955616752, &&RETURN };
    static void *func_4955609888_op6[2] = { &&func_4955616880, &&RETURN };
    static void *func_4955609888_op7[2] = { &&func_4955617008, &&RETURN };
    static void *func_4955609888_op8[2] = { &&func_4955617136, &&RETURN };
    static void *func_4955609104_op0[2] = { &&func_4955616688, &&RETURN };
    static void *func_4955609104_op1[2] = { &&func_4955615152, &&RETURN };
    static void *func_4955609616_op0[2] = { &&func_4955609392, &&RETURN };
    static void *func_4955609616_op1[2] = { &&func_4955615328, &&RETURN };
    static void *func_4955610144_op0[2] = { &&func_4955617392, &&RETURN };
    static void *func_4955609808_op0[2] = { &&func_4955618032, &&RETURN };
    static void *func_4955610080_op0[2] = { &&func_4955609808, &&HALT };
    static void *func_4955610496_op0[2] = { &&func_4955609104, &&RETURN };
    static void *func_4955610496_op1[2] = { &&func_4955610704, &&RETURN };
    static void *func_4955610496_op2[2] = { &&func_4955609184, &&RETURN };
    static void *func_4955610496_op3[2] = { &&func_4955608608, &&RETURN };
    static void *func_4955610496_op4[2] = { &&func_4955610144, &&RETURN };
    static void *func_4955610864_op0[2] = { &&func_4955618880, &&RETURN };
    static void *func_4955610864_op1[2] = { &&func_4955618160, &&RETURN };
    static void *func_4955610864_op2[2] = { &&func_4955609264, &&RETURN };
    static void *func_4955610704_op0[2] = { &&func_4955618816, &&RETURN };
    static void *exp_4955610432[5] = {&&func_4955609888, &&func_4955610624, &&func_4955609488, &&func_4955609680, &&RETURN };
    static void *exp_4955611728[4] = {&&func_4955609488, &&func_4955611856, &&func_4955609488, &&RETURN };
    static void *exp_4955611984[4] = {&&func_4955609488, &&func_4955612112, &&func_4955609488, &&RETURN };
    static void *exp_4955612240[4] = {&&func_4955609488, &&func_4955612368, &&func_4955609488, &&RETURN };
    static void *exp_4955614352[4] = {&&func_4955609488, &&func_4955614480, &&func_4955610864, &&RETURN };
    static void *exp_4955611520[4] = {&&func_4955609488, &&func_4955611648, &&func_4955610864, &&RETURN };
    static void *exp_4955612656[4] = {&&func_4955614832, &&func_4955609488, &&func_4955614960, &&RETURN };
    static void *exp_4955612496[12] = {&&func_4955615728, &&func_4955614832, &&func_4955608608, &&func_4955609680, &&func_4955608976, &&func_4955609680, &&func_4955608608, &&func_4955614960, &&func_4955615856, &&func_4955609808, &&func_4955610992, &&RETURN };
    static void *exp_4955616688[8] = {&&func_4955617904, &&func_4955614832, &&func_4955608976, &&func_4955614960, &&func_4955615856, &&func_4955609808, &&func_4955610992, &&RETURN };
    static void *exp_4955615152[12] = {&&func_4955617904, &&func_4955614832, &&func_4955608976, &&func_4955614960, &&func_4955615856, &&func_4955609808, &&func_4955610992, &&func_4955617728, &&func_4955615856, &&func_4955609808, &&func_4955610992, &&RETURN };
    static void *exp_4955615328[3] = {&&func_4955609392, &&func_4955609616, &&RETURN };
    static void *exp_4955617392[6] = {&&func_4955617520, &&func_4955614832, &&func_4955609488, &&func_4955614960, &&func_4955609680, &&RETURN };
    static void *exp_4955618032[3] = {&&func_4955610496, &&func_4955609808, &&RETURN };
    static void *exp_4955618880[4] = {&&func_4955610864, &&func_4955619008, &&func_4955609264, &&RETURN };
    static void *exp_4955618160[4] = {&&func_4955610864, &&func_4955613840, &&func_4955609264, &&RETURN };
    static void *exp_4955618816[8] = {&&func_4955614208, &&func_4955614832, &&func_4955608976, &&func_4955614960, &&func_4955615856, &&func_4955609808, &&func_4955610992, &&RETURN };

func_4955608608:
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
            PC = func_4955608608_op0;
            break;
    }
    goto **PC;
func_4955608976:
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
            PC = func_4955608976_op0;
            break;
        case 1:
            PC = func_4955608976_op1;
            break;
        case 2:
            PC = func_4955608976_op2;
            break;
    }
    goto **PC;
func_4955609392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609392_op0;
            break;
        case 1:
            PC = func_4955609392_op1;
            break;
        case 2:
            PC = func_4955609392_op2;
            break;
        case 3:
            PC = func_4955609392_op3;
            break;
        case 4:
            PC = func_4955609392_op4;
            break;
        case 5:
            PC = func_4955609392_op5;
            break;
        case 6:
            PC = func_4955609392_op6;
            break;
        case 7:
            PC = func_4955609392_op7;
            break;
        case 8:
            PC = func_4955609392_op8;
            break;
        case 9:
            PC = func_4955609392_op9;
            break;
    }
    goto **PC;
func_4955609488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609488_op0;
            break;
        case 1:
            PC = func_4955609488_op1;
            break;
        case 2:
            PC = func_4955609488_op2;
            break;
    }
    goto **PC;
func_4955609264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609264_op0;
            break;
        case 1:
            PC = func_4955609264_op1;
            break;
        case 2:
            PC = func_4955609264_op2;
            break;
    }
    goto **PC;
func_4955609184:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609184_op0;
            break;
    }
    goto **PC;
func_4955609888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609888_op0;
            break;
        case 1:
            PC = func_4955609888_op1;
            break;
        case 2:
            PC = func_4955609888_op2;
            break;
        case 3:
            PC = func_4955609888_op3;
            break;
        case 4:
            PC = func_4955609888_op4;
            break;
        case 5:
            PC = func_4955609888_op5;
            break;
        case 6:
            PC = func_4955609888_op6;
            break;
        case 7:
            PC = func_4955609888_op7;
            break;
        case 8:
            PC = func_4955609888_op8;
            break;
    }
    goto **PC;
func_4955609104:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609104_op0;
            break;
        case 1:
            PC = func_4955609104_op1;
            break;
    }
    goto **PC;
func_4955609616:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609616_op0;
            break;
        case 1:
            PC = func_4955609616_op1;
            break;
    }
    goto **PC;
func_4955610144:
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
            PC = func_4955610144_op0;
            break;
    }
    goto **PC;
func_4955609808:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4955609808_op0;
            break;
    }
    goto **PC;
func_4955610080:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4955610080_op0;
            break;
    }
    goto **PC;
func_4955610496:
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
            PC = func_4955610496_op0;
            break;
        case 1:
            PC = func_4955610496_op1;
            break;
        case 2:
            PC = func_4955610496_op2;
            break;
        case 3:
            PC = func_4955610496_op3;
            break;
        case 4:
            PC = func_4955610496_op4;
            break;
    }
    goto **PC;
func_4955610864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4955610864_op0;
            break;
        case 1:
            PC = func_4955610864_op1;
            break;
        case 2:
            PC = func_4955610864_op2;
            break;
    }
    goto **PC;
func_4955610704:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4955610704_op0;
            break;
    }
    goto **PC;
func_4955610432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955610432;
    goto **PC;
func_4955610624:
    extend(61);
    NEXT();
    goto **PC;
func_4955609680:
    extend(59);
    NEXT();
    goto **PC;
func_4955611728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955611728;
    goto **PC;
func_4955611856:
    extend(62);
    NEXT();
    goto **PC;
func_4955611984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955611984;
    goto **PC;
func_4955612112:
    extend(60);
    NEXT();
    goto **PC;
func_4955612240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955612240;
    goto **PC;
func_4955612368:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4955612752:
    extend(48);
    NEXT();
    goto **PC;
func_4955610336:
    extend(49);
    NEXT();
    goto **PC;
func_4955612944:
    extend(50);
    NEXT();
    goto **PC;
func_4955613072:
    extend(51);
    NEXT();
    goto **PC;
func_4955613200:
    extend(52);
    NEXT();
    goto **PC;
func_4955613392:
    extend(53);
    NEXT();
    goto **PC;
func_4955613520:
    extend(54);
    NEXT();
    goto **PC;
func_4955613648:
    extend(55);
    NEXT();
    goto **PC;
func_4955613776:
    extend(56);
    NEXT();
    goto **PC;
func_4955613328:
    extend(57);
    NEXT();
    goto **PC;
func_4955614352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955614352;
    goto **PC;
func_4955614480:
    extend(43);
    NEXT();
    goto **PC;
func_4955611520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955611520;
    goto **PC;
func_4955611648:
    extend(45);
    NEXT();
    goto **PC;
func_4955612656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955612656;
    goto **PC;
func_4955614832:
    extend(40);
    NEXT();
    goto **PC;
func_4955614960:
    extend(41);
    NEXT();
    goto **PC;
func_4955612496:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955612496;
    goto **PC;
func_4955615728:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_4955615856:
    extend(123);
    NEXT();
    goto **PC;
func_4955610992:
    extend(125);
    NEXT();
    goto **PC;
func_4955615504:
    extend(105);
    NEXT();
    goto **PC;
func_4955616176:
    extend(106);
    NEXT();
    goto **PC;
func_4955616304:
    extend(107);
    NEXT();
    goto **PC;
func_4955616432:
    extend(120);
    NEXT();
    goto **PC;
func_4955616560:
    extend(121);
    NEXT();
    goto **PC;
func_4955616752:
    extend(122);
    NEXT();
    goto **PC;
func_4955616880:
    extend(97);
    NEXT();
    goto **PC;
func_4955617008:
    extend(98);
    NEXT();
    goto **PC;
func_4955617136:
    extend(99);
    NEXT();
    goto **PC;
func_4955616688:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955616688;
    goto **PC;
func_4955617904:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4955615152:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955615152;
    goto **PC;
func_4955617728:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4955615328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955615328;
    goto **PC;
func_4955617392:
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
    PC = exp_4955617392;
    goto **PC;
func_4955617520:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4955618032:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955618032;
    goto **PC;
func_4955618880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955618880;
    goto **PC;
func_4955619008:
    extend(42);
    NEXT();
    goto **PC;
func_4955618160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955618160;
    goto **PC;
func_4955613840:
    extend(47);
    NEXT();
    goto **PC;
func_4955618816:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4955618816;
    goto **PC;
func_4955614208:
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
    PC = func_4955610080_op0;
    goto **PC;
}
