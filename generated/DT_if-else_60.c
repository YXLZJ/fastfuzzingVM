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
    static void *func_4888486624_op0[2] = { &&func_4888497648, &&RETURN };
    static void *func_4888496064_op0[2] = { &&func_4888498272, &&RETURN };
    static void *func_4888496064_op1[2] = { &&func_4888496720, &&RETURN };
    static void *func_4888496064_op2[2] = { &&func_4888498912, &&RETURN };
    static void *func_4888495984_op0[2] = { &&func_4888499168, &&RETURN };
    static void *func_4888495984_op1[2] = { &&func_4888497424, &&RETURN };
    static void *func_4888495984_op2[2] = { &&func_4888499456, &&RETURN };
    static void *func_4888495904_op0[2] = { &&func_4888497056, &&RETURN };
    static void *func_4888495904_op1[2] = { &&func_4888496528, &&RETURN };
    static void *func_4888496528_op0[2] = { &&func_4888499808, &&RETURN };
    static void *func_4888496528_op1[2] = { &&func_4888499936, &&RETURN };
    static void *func_4888496528_op2[2] = { &&func_4888500064, &&RETURN };
    static void *func_4888496528_op3[2] = { &&func_4888500192, &&RETURN };
    static void *func_4888496528_op4[2] = { &&func_4888500320, &&RETURN };
    static void *func_4888496528_op5[2] = { &&func_4888500512, &&RETURN };
    static void *func_4888495632_op0[2] = { &&func_4888499744, &&RETURN };
    static void *func_4888495632_op1[2] = { &&func_4888501936, &&RETURN };
    static void *func_4888497056_op0[2] = { &&func_4888501168, &&RETURN };
    static void *func_4888497056_op1[2] = { &&func_4888498160, &&RETURN };
    static void *func_4888497056_op2[2] = { &&func_4888502576, &&RETURN };
    static void *func_4888497056_op3[2] = { &&func_4888502704, &&RETURN };
    static void *func_4888497056_op4[2] = { &&func_4888502832, &&RETURN };
    static void *func_4888497056_op5[2] = { &&func_4888503024, &&RETURN };
    static void *func_4888497056_op6[2] = { &&func_4888503152, &&RETURN };
    static void *func_4888497056_op7[2] = { &&func_4888503280, &&RETURN };
    static void *func_4888497056_op8[2] = { &&func_4888503408, &&RETURN };
    static void *func_4888497056_op9[2] = { &&func_4888502960, &&RETURN };
    static void *func_4888495824_op0[2] = { &&func_4888503728, &&RETURN };
    static void *func_4888496352_op0[2] = { &&func_4888495632, &&HALT };
    static void *func_4888496416_op0[2] = { &&func_4888495632, &&RETURN };
    static void *func_4888496416_op1[2] = { &&func_4888486624, &&RETURN };
    static void *func_4888496416_op2[2] = { &&func_4888495824, &&RETURN };
    static void *func_4888497296_op0[2] = { &&func_4888500992, &&RETURN };
    static void *func_4888497296_op1[2] = { &&func_4888500704, &&RETURN };
    static void *func_4888497424_op0[2] = { &&func_4888495904, &&RETURN };
    static void *func_4888497424_op1[2] = { &&func_4888504128, &&RETURN };
    static void *exp_4888497648[5] = {&&func_4888496528, &&func_4888497776, &&func_4888495984, &&func_4888497904, &&RETURN };
    static void *exp_4888498272[4] = {&&func_4888495984, &&func_4888498400, &&func_4888495984, &&RETURN };
    static void *exp_4888496720[4] = {&&func_4888495984, &&func_4888498784, &&func_4888495984, &&RETURN };
    static void *exp_4888498912[4] = {&&func_4888495984, &&func_4888499040, &&func_4888495984, &&RETURN };
    static void *exp_4888499168[4] = {&&func_4888497424, &&func_4888499296, &&func_4888495984, &&RETURN };
    static void *exp_4888499456[4] = {&&func_4888497424, &&func_4888499584, &&func_4888495984, &&RETURN };
    static void *exp_4888499744[12] = {&&func_4888497552, &&func_4888498528, &&func_4888496064, &&func_4888498656, &&func_4888498096, &&func_4888497296, &&func_4888502000, &&func_4888502128, &&func_4888498096, &&func_4888497296, &&func_4888502000, &&RETURN };
    static void *exp_4888501936[8] = {&&func_4888497552, &&func_4888498528, &&func_4888496064, &&func_4888498656, &&func_4888498096, &&func_4888497296, &&func_4888502000, &&RETURN };
    static void *exp_4888503728[6] = {&&func_4888503856, &&func_4888498528, &&func_4888495984, &&func_4888498656, &&func_4888497904, &&RETURN };
    static void *exp_4888500992[3] = {&&func_4888496416, &&func_4888497296, &&RETURN };
    static void *exp_4888500704[1] = {&&RETURN };
    static void *exp_4888504128[4] = {&&func_4888495904, &&func_4888504256, &&func_4888497424, &&RETURN };

func_4888486624:
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
            PC = func_4888486624_op0;
            break;
    }
    goto **PC;
func_4888496064:
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
            PC = func_4888496064_op0;
            break;
        case 1:
            PC = func_4888496064_op1;
            break;
        case 2:
            PC = func_4888496064_op2;
            break;
    }
    goto **PC;
func_4888495984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495984_op0;
            break;
        case 1:
            PC = func_4888495984_op1;
            break;
        case 2:
            PC = func_4888495984_op2;
            break;
    }
    goto **PC;
func_4888495904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888495904_op0;
            break;
        case 1:
            PC = func_4888495904_op1;
            break;
    }
    goto **PC;
func_4888496528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4888496528_op0;
            break;
        case 1:
            PC = func_4888496528_op1;
            break;
        case 2:
            PC = func_4888496528_op2;
            break;
        case 3:
            PC = func_4888496528_op3;
            break;
        case 4:
            PC = func_4888496528_op4;
            break;
        case 5:
            PC = func_4888496528_op5;
            break;
    }
    goto **PC;
func_4888495632:
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
            PC = func_4888495632_op0;
            break;
        case 1:
            PC = func_4888495632_op1;
            break;
    }
    goto **PC;
func_4888497056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4888497056_op0;
            break;
        case 1:
            PC = func_4888497056_op1;
            break;
        case 2:
            PC = func_4888497056_op2;
            break;
        case 3:
            PC = func_4888497056_op3;
            break;
        case 4:
            PC = func_4888497056_op4;
            break;
        case 5:
            PC = func_4888497056_op5;
            break;
        case 6:
            PC = func_4888497056_op6;
            break;
        case 7:
            PC = func_4888497056_op7;
            break;
        case 8:
            PC = func_4888497056_op8;
            break;
        case 9:
            PC = func_4888497056_op9;
            break;
    }
    goto **PC;
func_4888495824:
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
            PC = func_4888495824_op0;
            break;
    }
    goto **PC;
func_4888496352:
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
            PC = func_4888496352_op0;
            break;
    }
    goto **PC;
func_4888496416:
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
            PC = func_4888496416_op0;
            break;
        case 1:
            PC = func_4888496416_op1;
            break;
        case 2:
            PC = func_4888496416_op2;
            break;
    }
    goto **PC;
func_4888497296:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888497296_op0;
            break;
        case 1:
            PC = func_4888497296_op1;
            break;
    }
    goto **PC;
func_4888497424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4888497424_op0;
            break;
        case 1:
            PC = func_4888497424_op1;
            break;
    }
    goto **PC;
func_4888497648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888497648;
    goto **PC;
func_4888497776:
    extend(61);
    NEXT();
    goto **PC;
func_4888497904:
    extend(59);
    NEXT();
    goto **PC;
func_4888498272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888498272;
    goto **PC;
func_4888498400:
    extend(62);
    NEXT();
    goto **PC;
func_4888496720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888496720;
    goto **PC;
func_4888498784:
    extend(60);
    NEXT();
    goto **PC;
func_4888498912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888498912;
    goto **PC;
func_4888499040:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4888499168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888499168;
    goto **PC;
func_4888499296:
    extend(43);
    NEXT();
    goto **PC;
func_4888499456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888499456;
    goto **PC;
func_4888499584:
    extend(45);
    NEXT();
    goto **PC;
func_4888499808:
    extend(120);
    NEXT();
    goto **PC;
func_4888499936:
    extend(121);
    NEXT();
    goto **PC;
func_4888500064:
    extend(122);
    NEXT();
    goto **PC;
func_4888500192:
    extend(97);
    NEXT();
    goto **PC;
func_4888500320:
    extend(98);
    NEXT();
    goto **PC;
func_4888500512:
    extend(99);
    NEXT();
    goto **PC;
func_4888499744:
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
    PC = exp_4888499744;
    goto **PC;
func_4888497552:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_4888498528:
    extend(40);
    NEXT();
    goto **PC;
func_4888498656:
    extend(41);
    NEXT();
    goto **PC;
func_4888498096:
    extend(123);
    NEXT();
    goto **PC;
func_4888502000:
    extend(125);
    NEXT();
    goto **PC;
func_4888502128:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4888501936:
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
    PC = exp_4888501936;
    goto **PC;
func_4888501168:
    extend(48);
    NEXT();
    goto **PC;
func_4888498160:
    extend(49);
    NEXT();
    goto **PC;
func_4888502576:
    extend(50);
    NEXT();
    goto **PC;
func_4888502704:
    extend(51);
    NEXT();
    goto **PC;
func_4888502832:
    extend(52);
    NEXT();
    goto **PC;
func_4888503024:
    extend(53);
    NEXT();
    goto **PC;
func_4888503152:
    extend(54);
    NEXT();
    goto **PC;
func_4888503280:
    extend(55);
    NEXT();
    goto **PC;
func_4888503408:
    extend(56);
    NEXT();
    goto **PC;
func_4888502960:
    extend(57);
    NEXT();
    goto **PC;
func_4888503728:
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
    PC = exp_4888503728;
    goto **PC;
func_4888503856:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_4888500992:
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
    PC = exp_4888500992;
    goto **PC;
func_4888500704:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888500704;
    goto **PC;
func_4888504128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4888504128;
    goto **PC;
func_4888504256:
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
    PC = func_4888496352_op0;
    goto **PC;
}
