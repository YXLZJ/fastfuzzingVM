#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 35
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
    static void *func_5802844896_op0[2] = { &&func_5802855920, &&RETURN };
    static void *func_5802854336_op0[2] = { &&func_5802856544, &&RETURN };
    static void *func_5802854336_op1[2] = { &&func_5802854992, &&RETURN };
    static void *func_5802854336_op2[2] = { &&func_5802857184, &&RETURN };
    static void *func_5802854256_op0[2] = { &&func_5802857440, &&RETURN };
    static void *func_5802854256_op1[2] = { &&func_5802855696, &&RETURN };
    static void *func_5802854256_op2[2] = { &&func_5802857728, &&RETURN };
    static void *func_5802854176_op0[2] = { &&func_5802855328, &&RETURN };
    static void *func_5802854176_op1[2] = { &&func_5802854800, &&RETURN };
    static void *func_5802854800_op0[2] = { &&func_5802858080, &&RETURN };
    static void *func_5802854800_op1[2] = { &&func_5802858208, &&RETURN };
    static void *func_5802854800_op2[2] = { &&func_5802858336, &&RETURN };
    static void *func_5802854800_op3[2] = { &&func_5802858464, &&RETURN };
    static void *func_5802854800_op4[2] = { &&func_5802858592, &&RETURN };
    static void *func_5802854800_op5[2] = { &&func_5802858784, &&RETURN };
    static void *func_5802853904_op0[2] = { &&func_5802858016, &&RETURN };
    static void *func_5802853904_op1[2] = { &&func_5802860208, &&RETURN };
    static void *func_5802855328_op0[2] = { &&func_5802859440, &&RETURN };
    static void *func_5802855328_op1[2] = { &&func_5802856432, &&RETURN };
    static void *func_5802855328_op2[2] = { &&func_5802860848, &&RETURN };
    static void *func_5802855328_op3[2] = { &&func_5802860976, &&RETURN };
    static void *func_5802855328_op4[2] = { &&func_5802861104, &&RETURN };
    static void *func_5802855328_op5[2] = { &&func_5802861296, &&RETURN };
    static void *func_5802855328_op6[2] = { &&func_5802861424, &&RETURN };
    static void *func_5802855328_op7[2] = { &&func_5802861552, &&RETURN };
    static void *func_5802855328_op8[2] = { &&func_5802861680, &&RETURN };
    static void *func_5802855328_op9[2] = { &&func_5802861232, &&RETURN };
    static void *func_5802854096_op0[2] = { &&func_5802862000, &&RETURN };
    static void *func_5802854624_op0[2] = { &&func_5802853904, &&HALT };
    static void *func_5802854688_op0[2] = { &&func_5802853904, &&RETURN };
    static void *func_5802854688_op1[2] = { &&func_5802844896, &&RETURN };
    static void *func_5802854688_op2[2] = { &&func_5802854096, &&RETURN };
    static void *func_5802855568_op0[2] = { &&func_5802859264, &&RETURN };
    static void *func_5802855568_op1[2] = { &&func_5802858976, &&RETURN };
    static void *func_5802855696_op0[2] = { &&func_5802854176, &&RETURN };
    static void *func_5802855696_op1[2] = { &&func_5802862400, &&RETURN };
    static void *exp_5802855920[5] = {&&func_5802854800, &&func_5802856048, &&func_5802854256, &&func_5802856176, &&RETURN };
    static void *exp_5802856544[4] = {&&func_5802854256, &&func_5802856672, &&func_5802854256, &&RETURN };
    static void *exp_5802854992[4] = {&&func_5802854256, &&func_5802857056, &&func_5802854256, &&RETURN };
    static void *exp_5802857184[4] = {&&func_5802854256, &&func_5802857312, &&func_5802854256, &&RETURN };
    static void *exp_5802857440[4] = {&&func_5802855696, &&func_5802857568, &&func_5802854256, &&RETURN };
    static void *exp_5802857728[4] = {&&func_5802855696, &&func_5802857856, &&func_5802854256, &&RETURN };
    static void *exp_5802858016[12] = {&&func_5802855824, &&func_5802856800, &&func_5802854336, &&func_5802856928, &&func_5802856368, &&func_5802855568, &&func_5802860272, &&func_5802860400, &&func_5802856368, &&func_5802855568, &&func_5802860272, &&RETURN };
    static void *exp_5802860208[8] = {&&func_5802855824, &&func_5802856800, &&func_5802854336, &&func_5802856928, &&func_5802856368, &&func_5802855568, &&func_5802860272, &&RETURN };
    static void *exp_5802862000[6] = {&&func_5802862128, &&func_5802856800, &&func_5802854256, &&func_5802856928, &&func_5802856176, &&RETURN };
    static void *exp_5802859264[3] = {&&func_5802854688, &&func_5802855568, &&RETURN };
    static void *exp_5802858976[1] = {&&RETURN };
    static void *exp_5802862400[4] = {&&func_5802854176, &&func_5802862528, &&func_5802855696, &&RETURN };

func_5802844896:
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
            PC = func_5802844896_op0;
            break;
    }
    goto **PC;
func_5802854336:
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
            PC = func_5802854336_op0;
            break;
        case 1:
            PC = func_5802854336_op1;
            break;
        case 2:
            PC = func_5802854336_op2;
            break;
    }
    goto **PC;
func_5802854256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854256_op0;
            break;
        case 1:
            PC = func_5802854256_op1;
            break;
        case 2:
            PC = func_5802854256_op2;
            break;
    }
    goto **PC;
func_5802854176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854176_op0;
            break;
        case 1:
            PC = func_5802854176_op1;
            break;
    }
    goto **PC;
func_5802854800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5802854800_op0;
            break;
        case 1:
            PC = func_5802854800_op1;
            break;
        case 2:
            PC = func_5802854800_op2;
            break;
        case 3:
            PC = func_5802854800_op3;
            break;
        case 4:
            PC = func_5802854800_op4;
            break;
        case 5:
            PC = func_5802854800_op5;
            break;
    }
    goto **PC;
func_5802853904:
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
            PC = func_5802853904_op0;
            break;
        case 1:
            PC = func_5802853904_op1;
            break;
    }
    goto **PC;
func_5802855328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855328_op0;
            break;
        case 1:
            PC = func_5802855328_op1;
            break;
        case 2:
            PC = func_5802855328_op2;
            break;
        case 3:
            PC = func_5802855328_op3;
            break;
        case 4:
            PC = func_5802855328_op4;
            break;
        case 5:
            PC = func_5802855328_op5;
            break;
        case 6:
            PC = func_5802855328_op6;
            break;
        case 7:
            PC = func_5802855328_op7;
            break;
        case 8:
            PC = func_5802855328_op8;
            break;
        case 9:
            PC = func_5802855328_op9;
            break;
    }
    goto **PC;
func_5802854096:
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
            PC = func_5802854096_op0;
            break;
    }
    goto **PC;
func_5802854624:
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
            PC = func_5802854624_op0;
            break;
    }
    goto **PC;
func_5802854688:
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
            PC = func_5802854688_op0;
            break;
        case 1:
            PC = func_5802854688_op1;
            break;
        case 2:
            PC = func_5802854688_op2;
            break;
    }
    goto **PC;
func_5802855568:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855568_op0;
            break;
        case 1:
            PC = func_5802855568_op1;
            break;
    }
    goto **PC;
func_5802855696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5802855696_op0;
            break;
        case 1:
            PC = func_5802855696_op1;
            break;
    }
    goto **PC;
func_5802855920:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802855920;
    goto **PC;
func_5802856048:
    extend(61);
    NEXT();
    goto **PC;
func_5802856176:
    extend(59);
    NEXT();
    goto **PC;
func_5802856544:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802856544;
    goto **PC;
func_5802856672:
    extend(62);
    NEXT();
    goto **PC;
func_5802854992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802854992;
    goto **PC;
func_5802857056:
    extend(60);
    NEXT();
    goto **PC;
func_5802857184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802857184;
    goto **PC;
func_5802857312:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5802857440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802857440;
    goto **PC;
func_5802857568:
    extend(43);
    NEXT();
    goto **PC;
func_5802857728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802857728;
    goto **PC;
func_5802857856:
    extend(45);
    NEXT();
    goto **PC;
func_5802858080:
    extend(120);
    NEXT();
    goto **PC;
func_5802858208:
    extend(121);
    NEXT();
    goto **PC;
func_5802858336:
    extend(122);
    NEXT();
    goto **PC;
func_5802858464:
    extend(97);
    NEXT();
    goto **PC;
func_5802858592:
    extend(98);
    NEXT();
    goto **PC;
func_5802858784:
    extend(99);
    NEXT();
    goto **PC;
func_5802858016:
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
    PC = exp_5802858016;
    goto **PC;
func_5802855824:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5802856800:
    extend(40);
    NEXT();
    goto **PC;
func_5802856928:
    extend(41);
    NEXT();
    goto **PC;
func_5802856368:
    extend(123);
    NEXT();
    goto **PC;
func_5802860272:
    extend(125);
    NEXT();
    goto **PC;
func_5802860400:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5802860208:
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
    PC = exp_5802860208;
    goto **PC;
func_5802859440:
    extend(48);
    NEXT();
    goto **PC;
func_5802856432:
    extend(49);
    NEXT();
    goto **PC;
func_5802860848:
    extend(50);
    NEXT();
    goto **PC;
func_5802860976:
    extend(51);
    NEXT();
    goto **PC;
func_5802861104:
    extend(52);
    NEXT();
    goto **PC;
func_5802861296:
    extend(53);
    NEXT();
    goto **PC;
func_5802861424:
    extend(54);
    NEXT();
    goto **PC;
func_5802861552:
    extend(55);
    NEXT();
    goto **PC;
func_5802861680:
    extend(56);
    NEXT();
    goto **PC;
func_5802861232:
    extend(57);
    NEXT();
    goto **PC;
func_5802862000:
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
    PC = exp_5802862000;
    goto **PC;
func_5802862128:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5802859264:
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
    PC = exp_5802859264;
    goto **PC;
func_5802858976:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802858976;
    goto **PC;
func_5802862400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5802862400;
    goto **PC;
func_5802862528:
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
    PC = func_5802854624_op0;
    goto **PC;
}
