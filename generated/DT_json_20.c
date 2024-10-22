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
    static void *func_5099242336_op0[2] = { &&func_5099243984, &&RETURN };
    static void *func_5099242336_op1[2] = { &&func_5108679008, &&RETURN };
    static void *func_5099242912_op0[2] = { &&func_5108679760, &&RETURN };
    static void *func_5099242912_op1[2] = { &&func_5108679888, &&RETURN };
    static void *func_5099242912_op2[2] = { &&func_5108680016, &&RETURN };
    static void *func_5099242912_op3[2] = { &&func_5108680400, &&RETURN };
    static void *func_5099242912_op4[2] = { &&func_5108680528, &&RETURN };
    static void *func_5099242912_op5[2] = { &&func_5108680720, &&RETURN };
    static void *func_5099242912_op6[2] = { &&func_5108680848, &&RETURN };
    static void *func_5099242912_op7[2] = { &&func_5108680976, &&RETURN };
    static void *func_5099242912_op8[2] = { &&func_5108681104, &&RETURN };
    static void *func_5099242912_op9[2] = { &&func_5108680656, &&RETURN };
    static void *func_5099242720_op0[2] = { &&func_5108679600, &&RETURN };
    static void *func_5099242720_op1[2] = { &&func_5099244048, &&RETURN };
    static void *func_5099242480_op0[2] = { &&func_5108679360, &&RETURN };
    static void *func_5099242480_op1[2] = { &&func_5099243264, &&RETURN };
    static void *func_5099242656_op0[2] = { &&func_5099242912, &&RETURN };
    static void *func_5099242656_op1[2] = { &&func_5108679296, &&RETURN };
    static void *func_5099243136_op0[2] = { &&func_5108681760, &&RETURN };
    static void *func_5099243136_op1[2] = { &&func_5108682192, &&RETURN };
    static void *func_5099243264_op0[2] = { &&func_5108682320, &&RETURN };
    static void *func_5099243056_op0[2] = { &&func_5099244048, &&HALT };
    static void *func_5099243616_op0[2] = { &&func_5108682928, &&RETURN };
    static void *func_5099243616_op1[2] = { &&func_5108683056, &&RETURN };
    static void *func_5099243616_op2[2] = { &&func_5108683184, &&RETURN };
    static void *func_5099243616_op3[2] = { &&func_5108683344, &&RETURN };
    static void *func_5099243616_op4[2] = { &&func_5108683472, &&RETURN };
    static void *func_5099244048_op0[2] = { &&func_5099243136, &&RETURN };
    static void *func_5099244048_op1[2] = { &&func_5099242336, &&RETURN };
    static void *func_5099244048_op2[2] = { &&func_5099243616, &&RETURN };
    static void *func_5099244048_op3[2] = { &&func_5099242656, &&RETURN };
    static void *func_5099244048_op4[2] = { &&func_5108681664, &&RETURN };
    static void *func_5099244048_op5[2] = { &&func_5108684000, &&RETURN };
    static void *func_5099244048_op6[2] = { &&func_5108684128, &&RETURN };
    static void *exp_5099243984[4] = {&&func_5099244240, &&func_5099242720, &&func_5108678800, &&RETURN };
    static void *exp_5108679008[3] = {&&func_5099244240, &&func_5108678800, &&RETURN };
    static void *exp_5108679600[4] = {&&func_5099244048, &&func_5108681424, &&func_5099242720, &&RETURN };
    static void *exp_5108679360[4] = {&&func_5099243264, &&func_5108681424, &&func_5099242480, &&RETURN };
    static void *exp_5108679296[3] = {&&func_5099242912, &&func_5099242656, &&RETURN };
    static void *exp_5108681760[4] = {&&func_5108681888, &&func_5099242480, &&func_5108682016, &&RETURN };
    static void *exp_5108682192[3] = {&&func_5108681888, &&func_5108682016, &&RETURN };
    static void *exp_5108682320[4] = {&&func_5099243616, &&func_5108680144, &&func_5099244048, &&RETURN };

func_5099242336:
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
            PC = func_5099242336_op0;
            break;
        case 1:
            PC = func_5099242336_op1;
            break;
    }
    goto **PC;
func_5099242912:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5099242912_op0;
            break;
        case 1:
            PC = func_5099242912_op1;
            break;
        case 2:
            PC = func_5099242912_op2;
            break;
        case 3:
            PC = func_5099242912_op3;
            break;
        case 4:
            PC = func_5099242912_op4;
            break;
        case 5:
            PC = func_5099242912_op5;
            break;
        case 6:
            PC = func_5099242912_op6;
            break;
        case 7:
            PC = func_5099242912_op7;
            break;
        case 8:
            PC = func_5099242912_op8;
            break;
        case 9:
            PC = func_5099242912_op9;
            break;
    }
    goto **PC;
func_5099242720:
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
            PC = func_5099242720_op0;
            break;
        case 1:
            PC = func_5099242720_op1;
            break;
    }
    goto **PC;
func_5099242480:
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
            PC = func_5099242480_op0;
            break;
        case 1:
            PC = func_5099242480_op1;
            break;
    }
    goto **PC;
func_5099242656:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5099242656_op0;
            break;
        case 1:
            PC = func_5099242656_op1;
            break;
    }
    goto **PC;
func_5099243136:
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
            PC = func_5099243136_op0;
            break;
        case 1:
            PC = func_5099243136_op1;
            break;
    }
    goto **PC;
func_5099243264:
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
            PC = func_5099243264_op0;
            break;
    }
    goto **PC;
func_5099243056:
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
            PC = func_5099243056_op0;
            break;
    }
    goto **PC;
func_5099243616:
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
            PC = func_5099243616_op0;
            break;
        case 1:
            PC = func_5099243616_op1;
            break;
        case 2:
            PC = func_5099243616_op2;
            break;
        case 3:
            PC = func_5099243616_op3;
            break;
        case 4:
            PC = func_5099243616_op4;
            break;
    }
    goto **PC;
func_5099244048:
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
            PC = func_5099244048_op0;
            break;
        case 1:
            PC = func_5099244048_op1;
            break;
        case 2:
            PC = func_5099244048_op2;
            break;
        case 3:
            PC = func_5099244048_op3;
            break;
        case 4:
            PC = func_5099244048_op4;
            break;
        case 5:
            PC = func_5099244048_op5;
            break;
        case 6:
            PC = func_5099244048_op6;
            break;
    }
    goto **PC;
func_5099243984:
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
    PC = exp_5099243984;
    goto **PC;
func_5099244240:
    extend(91);
    NEXT();
    goto **PC;
func_5108678800:
    extend(93);
    NEXT();
    goto **PC;
func_5108679008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5108679008;
    goto **PC;
func_5108679760:
    extend(48);
    NEXT();
    goto **PC;
func_5108679888:
    extend(49);
    NEXT();
    goto **PC;
func_5108680016:
    extend(50);
    NEXT();
    goto **PC;
func_5108680400:
    extend(51);
    NEXT();
    goto **PC;
func_5108680528:
    extend(52);
    NEXT();
    goto **PC;
func_5108680720:
    extend(53);
    NEXT();
    goto **PC;
func_5108680848:
    extend(54);
    NEXT();
    goto **PC;
func_5108680976:
    extend(55);
    NEXT();
    goto **PC;
func_5108681104:
    extend(56);
    NEXT();
    goto **PC;
func_5108680656:
    extend(57);
    NEXT();
    goto **PC;
func_5108679600:
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
    PC = exp_5108679600;
    goto **PC;
func_5108681424:
    extend(44);
    NEXT();
    goto **PC;
func_5108679360:
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
    PC = exp_5108679360;
    goto **PC;
func_5108679296:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5108679296;
    goto **PC;
func_5108681760:
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
    PC = exp_5108681760;
    goto **PC;
func_5108681888:
    extend(123);
    NEXT();
    goto **PC;
func_5108682016:
    extend(125);
    NEXT();
    goto **PC;
func_5108682192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5108682192;
    goto **PC;
func_5108682320:
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
    PC = exp_5108682320;
    goto **PC;
func_5108680144:
    extend(58);
    NEXT();
    goto **PC;
func_5108682928:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5108683056:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5108683184:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5108683344:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5108683472:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5108681664:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5108684000:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5108684128:
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
    PC = func_5099243056_op0;
    goto **PC;
}
