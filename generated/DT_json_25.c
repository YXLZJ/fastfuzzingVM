#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 25
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
    static void *func_5358255280_op0[2] = { &&func_5358256912, &&RETURN };
    static void *func_5358255280_op1[2] = { &&func_5358257296, &&RETURN };
    static void *func_5358255840_op0[2] = { &&func_5358257760, &&RETURN };
    static void *func_5358255840_op1[2] = { &&func_5358257888, &&RETURN };
    static void *func_5358255840_op2[2] = { &&func_5358258016, &&RETURN };
    static void *func_5358255840_op3[2] = { &&func_5358256608, &&RETURN };
    static void *func_5358255840_op4[2] = { &&func_5358258400, &&RETURN };
    static void *func_5358255840_op5[2] = { &&func_5358258592, &&RETURN };
    static void *func_5358255840_op6[2] = { &&func_5358258720, &&RETURN };
    static void *func_5358255840_op7[2] = { &&func_5358258848, &&RETURN };
    static void *func_5358255840_op8[2] = { &&func_5358258976, &&RETURN };
    static void *func_5358255840_op9[2] = { &&func_5358258528, &&RETURN };
    static void *func_5358255648_op0[2] = { &&func_5358256464, &&RETURN };
    static void *func_5358255648_op1[2] = { &&func_5358256976, &&RETURN };
    static void *func_5358255408_op0[2] = { &&func_5358257504, &&RETURN };
    static void *func_5358255408_op1[2] = { &&func_5358256192, &&RETURN };
    static void *func_5358255584_op0[2] = { &&func_5358255840, &&RETURN };
    static void *func_5358255584_op1[2] = { &&func_5358257632, &&RETURN };
    static void *func_5358256064_op0[2] = { &&func_5358259568, &&RETURN };
    static void *func_5358256064_op1[2] = { &&func_5358260000, &&RETURN };
    static void *func_5358256192_op0[2] = { &&func_5358260144, &&RETURN };
    static void *func_5358255984_op0[2] = { &&func_5358256976, &&HALT };
    static void *func_5358256544_op0[2] = { &&func_5358259488, &&RETURN };
    static void *func_5358256544_op1[2] = { &&func_5358260912, &&RETURN };
    static void *func_5358256544_op2[2] = { &&func_5358261040, &&RETURN };
    static void *func_5358256544_op3[2] = { &&func_5358261200, &&RETURN };
    static void *func_5358256544_op4[2] = { &&func_5358261328, &&RETURN };
    static void *func_5358256976_op0[2] = { &&func_5358256064, &&RETURN };
    static void *func_5358256976_op1[2] = { &&func_5358255280, &&RETURN };
    static void *func_5358256976_op2[2] = { &&func_5358256544, &&RETURN };
    static void *func_5358256976_op3[2] = { &&func_5358255584, &&RETURN };
    static void *func_5358256976_op4[2] = { &&func_5358260752, &&RETURN };
    static void *func_5358256976_op5[2] = { &&func_5358261856, &&RETURN };
    static void *func_5358256976_op6[2] = { &&func_5358261984, &&RETURN };
    static void *exp_5358256912[4] = {&&func_5358257168, &&func_5358255648, &&func_5358256736, &&RETURN };
    static void *exp_5358257296[3] = {&&func_5358257168, &&func_5358256736, &&RETURN };
    static void *exp_5358256464[4] = {&&func_5358256976, &&func_5358259360, &&func_5358255648, &&RETURN };
    static void *exp_5358257504[4] = {&&func_5358256192, &&func_5358259360, &&func_5358255408, &&RETURN };
    static void *exp_5358257632[3] = {&&func_5358255840, &&func_5358255584, &&RETURN };
    static void *exp_5358259568[4] = {&&func_5358259696, &&func_5358255408, &&func_5358259824, &&RETURN };
    static void *exp_5358260000[3] = {&&func_5358259696, &&func_5358259824, &&RETURN };
    static void *exp_5358260144[4] = {&&func_5358256544, &&func_5358258144, &&func_5358256976, &&RETURN };

func_5358255280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255280_op0;
            break;
        case 1:
            PC = func_5358255280_op1;
            break;
    }
    goto **PC;
func_5358255840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255840_op0;
            break;
        case 1:
            PC = func_5358255840_op1;
            break;
        case 2:
            PC = func_5358255840_op2;
            break;
        case 3:
            PC = func_5358255840_op3;
            break;
        case 4:
            PC = func_5358255840_op4;
            break;
        case 5:
            PC = func_5358255840_op5;
            break;
        case 6:
            PC = func_5358255840_op6;
            break;
        case 7:
            PC = func_5358255840_op7;
            break;
        case 8:
            PC = func_5358255840_op8;
            break;
        case 9:
            PC = func_5358255840_op9;
            break;
    }
    goto **PC;
func_5358255648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255648_op0;
            break;
        case 1:
            PC = func_5358255648_op1;
            break;
    }
    goto **PC;
func_5358255408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255408_op0;
            break;
        case 1:
            PC = func_5358255408_op1;
            break;
    }
    goto **PC;
func_5358255584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255584_op0;
            break;
        case 1:
            PC = func_5358255584_op1;
            break;
    }
    goto **PC;
func_5358256064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5358256064_op0;
            break;
        case 1:
            PC = func_5358256064_op1;
            break;
    }
    goto **PC;
func_5358256192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5358256192_op0;
            break;
    }
    goto **PC;
func_5358255984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5358255984_op0;
            break;
    }
    goto **PC;
func_5358256544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        goto **PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5358256544_op0;
            break;
        case 1:
            PC = func_5358256544_op1;
            break;
        case 2:
            PC = func_5358256544_op2;
            break;
        case 3:
            PC = func_5358256544_op3;
            break;
        case 4:
            PC = func_5358256544_op4;
            break;
    }
    goto **PC;
func_5358256976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5358256976_op0;
            break;
        case 1:
            PC = func_5358256976_op1;
            break;
        case 2:
            PC = func_5358256976_op2;
            break;
        case 3:
            PC = func_5358256976_op3;
            break;
        case 4:
            PC = func_5358256976_op4;
            break;
        case 5:
            PC = func_5358256976_op5;
            break;
        case 6:
            PC = func_5358256976_op6;
            break;
    }
    goto **PC;
func_5358256912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358256912;
    goto **PC;
func_5358257168:
    extend(91);
    NEXT();
    goto **PC;
func_5358256736:
    extend(93);
    NEXT();
    goto **PC;
func_5358257296:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358257296;
    goto **PC;
func_5358257760:
    extend(48);
    NEXT();
    goto **PC;
func_5358257888:
    extend(49);
    NEXT();
    goto **PC;
func_5358258016:
    extend(50);
    NEXT();
    goto **PC;
func_5358256608:
    extend(51);
    NEXT();
    goto **PC;
func_5358258400:
    extend(52);
    NEXT();
    goto **PC;
func_5358258592:
    extend(53);
    NEXT();
    goto **PC;
func_5358258720:
    extend(54);
    NEXT();
    goto **PC;
func_5358258848:
    extend(55);
    NEXT();
    goto **PC;
func_5358258976:
    extend(56);
    NEXT();
    goto **PC;
func_5358258528:
    extend(57);
    NEXT();
    goto **PC;
func_5358256464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358256464;
    goto **PC;
func_5358259360:
    extend(44);
    NEXT();
    goto **PC;
func_5358257504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358257504;
    goto **PC;
func_5358257632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358257632;
    goto **PC;
func_5358259568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358259568;
    goto **PC;
func_5358259696:
    extend(123);
    NEXT();
    goto **PC;
func_5358259824:
    extend(125);
    NEXT();
    goto **PC;
func_5358260000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358260000;
    goto **PC;
func_5358260144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5358260144;
    goto **PC;
func_5358258144:
    extend(58);
    NEXT();
    goto **PC;
func_5358259488:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5358260912:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5358261040:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5358261200:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5358261328:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5358260752:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5358261856:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5358261984:
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC = func_5358255984_op0;
    goto **PC;
}
