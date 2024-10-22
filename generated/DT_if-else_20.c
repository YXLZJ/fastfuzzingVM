#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 20
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
    static void *func_5198865120_op0[2] = { &&func_5198876144, &&RETURN };
    static void *func_5198874560_op0[2] = { &&func_5198876768, &&RETURN };
    static void *func_5198874560_op1[2] = { &&func_5198875216, &&RETURN };
    static void *func_5198874560_op2[2] = { &&func_5198877408, &&RETURN };
    static void *func_5198874480_op0[2] = { &&func_5198877664, &&RETURN };
    static void *func_5198874480_op1[2] = { &&func_5198875920, &&RETURN };
    static void *func_5198874480_op2[2] = { &&func_5198877952, &&RETURN };
    static void *func_5198874400_op0[2] = { &&func_5198875552, &&RETURN };
    static void *func_5198874400_op1[2] = { &&func_5198875024, &&RETURN };
    static void *func_5198875024_op0[2] = { &&func_5198878304, &&RETURN };
    static void *func_5198875024_op1[2] = { &&func_5198878432, &&RETURN };
    static void *func_5198875024_op2[2] = { &&func_5198878560, &&RETURN };
    static void *func_5198875024_op3[2] = { &&func_5198878688, &&RETURN };
    static void *func_5198875024_op4[2] = { &&func_5198878816, &&RETURN };
    static void *func_5198875024_op5[2] = { &&func_5198879008, &&RETURN };
    static void *func_5198874128_op0[2] = { &&func_5198878240, &&RETURN };
    static void *func_5198874128_op1[2] = { &&func_5198880432, &&RETURN };
    static void *func_5198875552_op0[2] = { &&func_5198879664, &&RETURN };
    static void *func_5198875552_op1[2] = { &&func_5198876656, &&RETURN };
    static void *func_5198875552_op2[2] = { &&func_5198881072, &&RETURN };
    static void *func_5198875552_op3[2] = { &&func_5198881200, &&RETURN };
    static void *func_5198875552_op4[2] = { &&func_5198881328, &&RETURN };
    static void *func_5198875552_op5[2] = { &&func_5198881520, &&RETURN };
    static void *func_5198875552_op6[2] = { &&func_5198881648, &&RETURN };
    static void *func_5198875552_op7[2] = { &&func_5198881776, &&RETURN };
    static void *func_5198875552_op8[2] = { &&func_5198881904, &&RETURN };
    static void *func_5198875552_op9[2] = { &&func_5198881456, &&RETURN };
    static void *func_5198874320_op0[2] = { &&func_5198882224, &&RETURN };
    static void *func_5198874848_op0[2] = { &&func_5198874128, &&HALT };
    static void *func_5198874912_op0[2] = { &&func_5198874128, &&RETURN };
    static void *func_5198874912_op1[2] = { &&func_5198865120, &&RETURN };
    static void *func_5198874912_op2[2] = { &&func_5198874320, &&RETURN };
    static void *func_5198875792_op0[2] = { &&func_5198879488, &&RETURN };
    static void *func_5198875792_op1[2] = { &&func_5198879200, &&RETURN };
    static void *func_5198875920_op0[2] = { &&func_5198874400, &&RETURN };
    static void *func_5198875920_op1[2] = { &&func_5198882624, &&RETURN };
    static void *exp_5198876144[5] = {&&func_5198875024, &&func_5198876272, &&func_5198874480, &&func_5198876400, &&RETURN };
    static void *exp_5198876768[4] = {&&func_5198874480, &&func_5198876896, &&func_5198874480, &&RETURN };
    static void *exp_5198875216[4] = {&&func_5198874480, &&func_5198877280, &&func_5198874480, &&RETURN };
    static void *exp_5198877408[4] = {&&func_5198874480, &&func_5198877536, &&func_5198874480, &&RETURN };
    static void *exp_5198877664[4] = {&&func_5198875920, &&func_5198877792, &&func_5198874480, &&RETURN };
    static void *exp_5198877952[4] = {&&func_5198875920, &&func_5198878080, &&func_5198874480, &&RETURN };
    static void *exp_5198878240[12] = {&&func_5198876048, &&func_5198877024, &&func_5198874560, &&func_5198877152, &&func_5198876592, &&func_5198875792, &&func_5198880496, &&func_5198880624, &&func_5198876592, &&func_5198875792, &&func_5198880496, &&RETURN };
    static void *exp_5198880432[8] = {&&func_5198876048, &&func_5198877024, &&func_5198874560, &&func_5198877152, &&func_5198876592, &&func_5198875792, &&func_5198880496, &&RETURN };
    static void *exp_5198882224[6] = {&&func_5198882352, &&func_5198877024, &&func_5198874480, &&func_5198877152, &&func_5198876400, &&RETURN };
    static void *exp_5198879488[3] = {&&func_5198874912, &&func_5198875792, &&RETURN };
    static void *exp_5198879200[1] = {&&RETURN };
    static void *exp_5198882624[4] = {&&func_5198874400, &&func_5198882752, &&func_5198875920, &&RETURN };

func_5198865120:
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
            PC = func_5198865120_op0;
            break;
    }
    goto **PC;
func_5198874560:
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
            PC = func_5198874560_op0;
            break;
        case 1:
            PC = func_5198874560_op1;
            break;
        case 2:
            PC = func_5198874560_op2;
            break;
    }
    goto **PC;
func_5198874480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5198874480_op0;
            break;
        case 1:
            PC = func_5198874480_op1;
            break;
        case 2:
            PC = func_5198874480_op2;
            break;
    }
    goto **PC;
func_5198874400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198874400_op0;
            break;
        case 1:
            PC = func_5198874400_op1;
            break;
    }
    goto **PC;
func_5198875024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5198875024_op0;
            break;
        case 1:
            PC = func_5198875024_op1;
            break;
        case 2:
            PC = func_5198875024_op2;
            break;
        case 3:
            PC = func_5198875024_op3;
            break;
        case 4:
            PC = func_5198875024_op4;
            break;
        case 5:
            PC = func_5198875024_op5;
            break;
    }
    goto **PC;
func_5198874128:
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
            PC = func_5198874128_op0;
            break;
        case 1:
            PC = func_5198874128_op1;
            break;
    }
    goto **PC;
func_5198875552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5198875552_op0;
            break;
        case 1:
            PC = func_5198875552_op1;
            break;
        case 2:
            PC = func_5198875552_op2;
            break;
        case 3:
            PC = func_5198875552_op3;
            break;
        case 4:
            PC = func_5198875552_op4;
            break;
        case 5:
            PC = func_5198875552_op5;
            break;
        case 6:
            PC = func_5198875552_op6;
            break;
        case 7:
            PC = func_5198875552_op7;
            break;
        case 8:
            PC = func_5198875552_op8;
            break;
        case 9:
            PC = func_5198875552_op9;
            break;
    }
    goto **PC;
func_5198874320:
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
            PC = func_5198874320_op0;
            break;
    }
    goto **PC;
func_5198874848:
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
            PC = func_5198874848_op0;
            break;
    }
    goto **PC;
func_5198874912:
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
            PC = func_5198874912_op0;
            break;
        case 1:
            PC = func_5198874912_op1;
            break;
        case 2:
            PC = func_5198874912_op2;
            break;
    }
    goto **PC;
func_5198875792:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198875792_op0;
            break;
        case 1:
            PC = func_5198875792_op1;
            break;
    }
    goto **PC;
func_5198875920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5198875920_op0;
            break;
        case 1:
            PC = func_5198875920_op1;
            break;
    }
    goto **PC;
func_5198876144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198876144;
    goto **PC;
func_5198876272:
    extend(61);
    NEXT();
    goto **PC;
func_5198876400:
    extend(59);
    NEXT();
    goto **PC;
func_5198876768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198876768;
    goto **PC;
func_5198876896:
    extend(62);
    NEXT();
    goto **PC;
func_5198875216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198875216;
    goto **PC;
func_5198877280:
    extend(60);
    NEXT();
    goto **PC;
func_5198877408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198877408;
    goto **PC;
func_5198877536:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5198877664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198877664;
    goto **PC;
func_5198877792:
    extend(43);
    NEXT();
    goto **PC;
func_5198877952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198877952;
    goto **PC;
func_5198878080:
    extend(45);
    NEXT();
    goto **PC;
func_5198878304:
    extend(120);
    NEXT();
    goto **PC;
func_5198878432:
    extend(121);
    NEXT();
    goto **PC;
func_5198878560:
    extend(122);
    NEXT();
    goto **PC;
func_5198878688:
    extend(97);
    NEXT();
    goto **PC;
func_5198878816:
    extend(98);
    NEXT();
    goto **PC;
func_5198879008:
    extend(99);
    NEXT();
    goto **PC;
func_5198878240:
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
    PC = exp_5198878240;
    goto **PC;
func_5198876048:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5198877024:
    extend(40);
    NEXT();
    goto **PC;
func_5198877152:
    extend(41);
    NEXT();
    goto **PC;
func_5198876592:
    extend(123);
    NEXT();
    goto **PC;
func_5198880496:
    extend(125);
    NEXT();
    goto **PC;
func_5198880624:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5198880432:
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
    PC = exp_5198880432;
    goto **PC;
func_5198879664:
    extend(48);
    NEXT();
    goto **PC;
func_5198876656:
    extend(49);
    NEXT();
    goto **PC;
func_5198881072:
    extend(50);
    NEXT();
    goto **PC;
func_5198881200:
    extend(51);
    NEXT();
    goto **PC;
func_5198881328:
    extend(52);
    NEXT();
    goto **PC;
func_5198881520:
    extend(53);
    NEXT();
    goto **PC;
func_5198881648:
    extend(54);
    NEXT();
    goto **PC;
func_5198881776:
    extend(55);
    NEXT();
    goto **PC;
func_5198881904:
    extend(56);
    NEXT();
    goto **PC;
func_5198881456:
    extend(57);
    NEXT();
    goto **PC;
func_5198882224:
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
    PC = exp_5198882224;
    goto **PC;
func_5198882352:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5198879488:
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
    PC = exp_5198879488;
    goto **PC;
func_5198879200:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198879200;
    goto **PC;
func_5198882624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5198882624;
    goto **PC;
func_5198882752:
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
    PC = func_5198874848_op0;
    goto **PC;
}
