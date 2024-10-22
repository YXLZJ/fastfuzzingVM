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
    static void *func_4796218544_op0[2] = { &&func_4796220176, &&RETURN };
    static void *func_4796218544_op1[2] = { &&func_4796220560, &&RETURN };
    static void *func_4796219104_op0[2] = { &&func_4796221024, &&RETURN };
    static void *func_4796219104_op1[2] = { &&func_4796221152, &&RETURN };
    static void *func_4796219104_op2[2] = { &&func_4796221280, &&RETURN };
    static void *func_4796219104_op3[2] = { &&func_4796219872, &&RETURN };
    static void *func_4796219104_op4[2] = { &&func_4796221664, &&RETURN };
    static void *func_4796219104_op5[2] = { &&func_4796221856, &&RETURN };
    static void *func_4796219104_op6[2] = { &&func_4796221984, &&RETURN };
    static void *func_4796219104_op7[2] = { &&func_4796222112, &&RETURN };
    static void *func_4796219104_op8[2] = { &&func_4796222240, &&RETURN };
    static void *func_4796219104_op9[2] = { &&func_4796221792, &&RETURN };
    static void *func_4796218912_op0[2] = { &&func_4796219728, &&RETURN };
    static void *func_4796218912_op1[2] = { &&func_4796220240, &&RETURN };
    static void *func_4796218672_op0[2] = { &&func_4796220768, &&RETURN };
    static void *func_4796218672_op1[2] = { &&func_4796219456, &&RETURN };
    static void *func_4796218848_op0[2] = { &&func_4796219104, &&RETURN };
    static void *func_4796218848_op1[2] = { &&func_4796220896, &&RETURN };
    static void *func_4796219328_op0[2] = { &&func_4796222832, &&RETURN };
    static void *func_4796219328_op1[2] = { &&func_4796223264, &&RETURN };
    static void *func_4796219456_op0[2] = { &&func_4796223408, &&RETURN };
    static void *func_4796219248_op0[2] = { &&func_4796220240, &&HALT };
    static void *func_4796219808_op0[2] = { &&func_4796222752, &&RETURN };
    static void *func_4796219808_op1[2] = { &&func_4796224176, &&RETURN };
    static void *func_4796219808_op2[2] = { &&func_4796224304, &&RETURN };
    static void *func_4796219808_op3[2] = { &&func_4796224464, &&RETURN };
    static void *func_4796219808_op4[2] = { &&func_4796224592, &&RETURN };
    static void *func_4796220240_op0[2] = { &&func_4796219328, &&RETURN };
    static void *func_4796220240_op1[2] = { &&func_4796218544, &&RETURN };
    static void *func_4796220240_op2[2] = { &&func_4796219808, &&RETURN };
    static void *func_4796220240_op3[2] = { &&func_4796218848, &&RETURN };
    static void *func_4796220240_op4[2] = { &&func_4796224016, &&RETURN };
    static void *func_4796220240_op5[2] = { &&func_4796225120, &&RETURN };
    static void *func_4796220240_op6[2] = { &&func_4796225248, &&RETURN };
    static void *exp_4796220176[4] = {&&func_4796220432, &&func_4796218912, &&func_4796220000, &&RETURN };
    static void *exp_4796220560[3] = {&&func_4796220432, &&func_4796220000, &&RETURN };
    static void *exp_4796219728[4] = {&&func_4796220240, &&func_4796222624, &&func_4796218912, &&RETURN };
    static void *exp_4796220768[4] = {&&func_4796219456, &&func_4796222624, &&func_4796218672, &&RETURN };
    static void *exp_4796220896[3] = {&&func_4796219104, &&func_4796218848, &&RETURN };
    static void *exp_4796222832[4] = {&&func_4796222960, &&func_4796218672, &&func_4796223088, &&RETURN };
    static void *exp_4796223264[3] = {&&func_4796222960, &&func_4796223088, &&RETURN };
    static void *exp_4796223408[4] = {&&func_4796219808, &&func_4796221408, &&func_4796220240, &&RETURN };

func_4796218544:
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
            PC = func_4796218544_op0;
            break;
        case 1:
            PC = func_4796218544_op1;
            break;
    }
    goto **PC;
func_4796219104:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4796219104_op0;
            break;
        case 1:
            PC = func_4796219104_op1;
            break;
        case 2:
            PC = func_4796219104_op2;
            break;
        case 3:
            PC = func_4796219104_op3;
            break;
        case 4:
            PC = func_4796219104_op4;
            break;
        case 5:
            PC = func_4796219104_op5;
            break;
        case 6:
            PC = func_4796219104_op6;
            break;
        case 7:
            PC = func_4796219104_op7;
            break;
        case 8:
            PC = func_4796219104_op8;
            break;
        case 9:
            PC = func_4796219104_op9;
            break;
    }
    goto **PC;
func_4796218912:
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
            PC = func_4796218912_op0;
            break;
        case 1:
            PC = func_4796218912_op1;
            break;
    }
    goto **PC;
func_4796218672:
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
            PC = func_4796218672_op0;
            break;
        case 1:
            PC = func_4796218672_op1;
            break;
    }
    goto **PC;
func_4796218848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796218848_op0;
            break;
        case 1:
            PC = func_4796218848_op1;
            break;
    }
    goto **PC;
func_4796219328:
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
            PC = func_4796219328_op0;
            break;
        case 1:
            PC = func_4796219328_op1;
            break;
    }
    goto **PC;
func_4796219456:
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
            PC = func_4796219456_op0;
            break;
    }
    goto **PC;
func_4796219248:
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
            PC = func_4796219248_op0;
            break;
    }
    goto **PC;
func_4796219808:
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
            PC = func_4796219808_op0;
            break;
        case 1:
            PC = func_4796219808_op1;
            break;
        case 2:
            PC = func_4796219808_op2;
            break;
        case 3:
            PC = func_4796219808_op3;
            break;
        case 4:
            PC = func_4796219808_op4;
            break;
    }
    goto **PC;
func_4796220240:
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
            PC = func_4796220240_op0;
            break;
        case 1:
            PC = func_4796220240_op1;
            break;
        case 2:
            PC = func_4796220240_op2;
            break;
        case 3:
            PC = func_4796220240_op3;
            break;
        case 4:
            PC = func_4796220240_op4;
            break;
        case 5:
            PC = func_4796220240_op5;
            break;
        case 6:
            PC = func_4796220240_op6;
            break;
    }
    goto **PC;
func_4796220176:
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
    PC = exp_4796220176;
    goto **PC;
func_4796220432:
    extend(91);
    NEXT();
    goto **PC;
func_4796220000:
    extend(93);
    NEXT();
    goto **PC;
func_4796220560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796220560;
    goto **PC;
func_4796221024:
    extend(48);
    NEXT();
    goto **PC;
func_4796221152:
    extend(49);
    NEXT();
    goto **PC;
func_4796221280:
    extend(50);
    NEXT();
    goto **PC;
func_4796219872:
    extend(51);
    NEXT();
    goto **PC;
func_4796221664:
    extend(52);
    NEXT();
    goto **PC;
func_4796221856:
    extend(53);
    NEXT();
    goto **PC;
func_4796221984:
    extend(54);
    NEXT();
    goto **PC;
func_4796222112:
    extend(55);
    NEXT();
    goto **PC;
func_4796222240:
    extend(56);
    NEXT();
    goto **PC;
func_4796221792:
    extend(57);
    NEXT();
    goto **PC;
func_4796219728:
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
    PC = exp_4796219728;
    goto **PC;
func_4796222624:
    extend(44);
    NEXT();
    goto **PC;
func_4796220768:
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
    PC = exp_4796220768;
    goto **PC;
func_4796220896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796220896;
    goto **PC;
func_4796222832:
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
    PC = exp_4796222832;
    goto **PC;
func_4796222960:
    extend(123);
    NEXT();
    goto **PC;
func_4796223088:
    extend(125);
    NEXT();
    goto **PC;
func_4796223264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796223264;
    goto **PC;
func_4796223408:
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
    PC = exp_4796223408;
    goto **PC;
func_4796221408:
    extend(58);
    NEXT();
    goto **PC;
func_4796222752:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_4796224176:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_4796224304:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_4796224464:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_4796224592:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_4796224016:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_4796225120:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4796225248:
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
    PC = func_4796219248_op0;
    goto **PC;
}
