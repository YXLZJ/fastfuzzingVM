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
    static void *func_4930436272_op0[2] = { &&func_4930437904, &&RETURN };
    static void *func_4930436272_op1[2] = { &&func_4930438288, &&RETURN };
    static void *func_4930436832_op0[2] = { &&func_4930438752, &&RETURN };
    static void *func_4930436832_op1[2] = { &&func_4930438880, &&RETURN };
    static void *func_4930436832_op2[2] = { &&func_4930439008, &&RETURN };
    static void *func_4930436832_op3[2] = { &&func_4930437600, &&RETURN };
    static void *func_4930436832_op4[2] = { &&func_4930439392, &&RETURN };
    static void *func_4930436832_op5[2] = { &&func_4930439584, &&RETURN };
    static void *func_4930436832_op6[2] = { &&func_4930439712, &&RETURN };
    static void *func_4930436832_op7[2] = { &&func_4930439840, &&RETURN };
    static void *func_4930436832_op8[2] = { &&func_4930439968, &&RETURN };
    static void *func_4930436832_op9[2] = { &&func_4930439520, &&RETURN };
    static void *func_4930436640_op0[2] = { &&func_4930437456, &&RETURN };
    static void *func_4930436640_op1[2] = { &&func_4930437968, &&RETURN };
    static void *func_4930436400_op0[2] = { &&func_4930438496, &&RETURN };
    static void *func_4930436400_op1[2] = { &&func_4930437184, &&RETURN };
    static void *func_4930436576_op0[2] = { &&func_4930436832, &&RETURN };
    static void *func_4930436576_op1[2] = { &&func_4930438624, &&RETURN };
    static void *func_4930437056_op0[2] = { &&func_4930440560, &&RETURN };
    static void *func_4930437056_op1[2] = { &&func_4930440992, &&RETURN };
    static void *func_4930437184_op0[2] = { &&func_4930441136, &&RETURN };
    static void *func_4930436976_op0[2] = { &&func_4930437968, &&HALT };
    static void *func_4930437536_op0[2] = { &&func_4930440480, &&RETURN };
    static void *func_4930437536_op1[2] = { &&func_4930441904, &&RETURN };
    static void *func_4930437536_op2[2] = { &&func_4930442032, &&RETURN };
    static void *func_4930437536_op3[2] = { &&func_4930442192, &&RETURN };
    static void *func_4930437536_op4[2] = { &&func_4930442320, &&RETURN };
    static void *func_4930437968_op0[2] = { &&func_4930437056, &&RETURN };
    static void *func_4930437968_op1[2] = { &&func_4930436272, &&RETURN };
    static void *func_4930437968_op2[2] = { &&func_4930437536, &&RETURN };
    static void *func_4930437968_op3[2] = { &&func_4930436576, &&RETURN };
    static void *func_4930437968_op4[2] = { &&func_4930441744, &&RETURN };
    static void *func_4930437968_op5[2] = { &&func_4930442848, &&RETURN };
    static void *func_4930437968_op6[2] = { &&func_4930442976, &&RETURN };
    static void *exp_4930437904[4] = {&&func_4930438160, &&func_4930436640, &&func_4930437728, &&RETURN };
    static void *exp_4930438288[3] = {&&func_4930438160, &&func_4930437728, &&RETURN };
    static void *exp_4930437456[4] = {&&func_4930437968, &&func_4930440352, &&func_4930436640, &&RETURN };
    static void *exp_4930438496[4] = {&&func_4930437184, &&func_4930440352, &&func_4930436400, &&RETURN };
    static void *exp_4930438624[3] = {&&func_4930436832, &&func_4930436576, &&RETURN };
    static void *exp_4930440560[4] = {&&func_4930440688, &&func_4930436400, &&func_4930440816, &&RETURN };
    static void *exp_4930440992[3] = {&&func_4930440688, &&func_4930440816, &&RETURN };
    static void *exp_4930441136[4] = {&&func_4930437536, &&func_4930439136, &&func_4930437968, &&RETURN };

func_4930436272:
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
            PC = func_4930436272_op0;
            break;
        case 1:
            PC = func_4930436272_op1;
            break;
    }
    goto **PC;
func_4930436832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4930436832_op0;
            break;
        case 1:
            PC = func_4930436832_op1;
            break;
        case 2:
            PC = func_4930436832_op2;
            break;
        case 3:
            PC = func_4930436832_op3;
            break;
        case 4:
            PC = func_4930436832_op4;
            break;
        case 5:
            PC = func_4930436832_op5;
            break;
        case 6:
            PC = func_4930436832_op6;
            break;
        case 7:
            PC = func_4930436832_op7;
            break;
        case 8:
            PC = func_4930436832_op8;
            break;
        case 9:
            PC = func_4930436832_op9;
            break;
    }
    goto **PC;
func_4930436640:
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
            PC = func_4930436640_op0;
            break;
        case 1:
            PC = func_4930436640_op1;
            break;
    }
    goto **PC;
func_4930436400:
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
            PC = func_4930436400_op0;
            break;
        case 1:
            PC = func_4930436400_op1;
            break;
    }
    goto **PC;
func_4930436576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4930436576_op0;
            break;
        case 1:
            PC = func_4930436576_op1;
            break;
    }
    goto **PC;
func_4930437056:
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
            PC = func_4930437056_op0;
            break;
        case 1:
            PC = func_4930437056_op1;
            break;
    }
    goto **PC;
func_4930437184:
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
            PC = func_4930437184_op0;
            break;
    }
    goto **PC;
func_4930436976:
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
            PC = func_4930436976_op0;
            break;
    }
    goto **PC;
func_4930437536:
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
            PC = func_4930437536_op0;
            break;
        case 1:
            PC = func_4930437536_op1;
            break;
        case 2:
            PC = func_4930437536_op2;
            break;
        case 3:
            PC = func_4930437536_op3;
            break;
        case 4:
            PC = func_4930437536_op4;
            break;
    }
    goto **PC;
func_4930437968:
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
            PC = func_4930437968_op0;
            break;
        case 1:
            PC = func_4930437968_op1;
            break;
        case 2:
            PC = func_4930437968_op2;
            break;
        case 3:
            PC = func_4930437968_op3;
            break;
        case 4:
            PC = func_4930437968_op4;
            break;
        case 5:
            PC = func_4930437968_op5;
            break;
        case 6:
            PC = func_4930437968_op6;
            break;
    }
    goto **PC;
func_4930437904:
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
    PC = exp_4930437904;
    goto **PC;
func_4930438160:
    extend(91);
    NEXT();
    goto **PC;
func_4930437728:
    extend(93);
    NEXT();
    goto **PC;
func_4930438288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930438288;
    goto **PC;
func_4930438752:
    extend(48);
    NEXT();
    goto **PC;
func_4930438880:
    extend(49);
    NEXT();
    goto **PC;
func_4930439008:
    extend(50);
    NEXT();
    goto **PC;
func_4930437600:
    extend(51);
    NEXT();
    goto **PC;
func_4930439392:
    extend(52);
    NEXT();
    goto **PC;
func_4930439584:
    extend(53);
    NEXT();
    goto **PC;
func_4930439712:
    extend(54);
    NEXT();
    goto **PC;
func_4930439840:
    extend(55);
    NEXT();
    goto **PC;
func_4930439968:
    extend(56);
    NEXT();
    goto **PC;
func_4930439520:
    extend(57);
    NEXT();
    goto **PC;
func_4930437456:
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
    PC = exp_4930437456;
    goto **PC;
func_4930440352:
    extend(44);
    NEXT();
    goto **PC;
func_4930438496:
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
    PC = exp_4930438496;
    goto **PC;
func_4930438624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930438624;
    goto **PC;
func_4930440560:
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
    PC = exp_4930440560;
    goto **PC;
func_4930440688:
    extend(123);
    NEXT();
    goto **PC;
func_4930440816:
    extend(125);
    NEXT();
    goto **PC;
func_4930440992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930440992;
    goto **PC;
func_4930441136:
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
    PC = exp_4930441136;
    goto **PC;
func_4930439136:
    extend(58);
    NEXT();
    goto **PC;
func_4930440480:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_4930441904:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_4930442032:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_4930442192:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_4930442320:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_4930441744:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_4930442848:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4930442976:
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
    PC = func_4930436976_op0;
    goto **PC;
}
