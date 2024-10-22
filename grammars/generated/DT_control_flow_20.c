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
    static void *func_5467313696_op0[2] = { &&func_5467315520, &&RETURN };
    static void *func_5467314064_op0[2] = { &&func_5467316816, &&RETURN };
    static void *func_5467314064_op1[2] = { &&func_5467317072, &&RETURN };
    static void *func_5467314064_op2[2] = { &&func_5467317328, &&RETURN };
    static void *func_5467314480_op0[2] = { &&func_5467317840, &&RETURN };
    static void *func_5467314480_op1[2] = { &&func_5467315424, &&RETURN };
    static void *func_5467314480_op2[2] = { &&func_5467318032, &&RETURN };
    static void *func_5467314480_op3[2] = { &&func_5467318160, &&RETURN };
    static void *func_5467314480_op4[2] = { &&func_5467318288, &&RETURN };
    static void *func_5467314480_op5[2] = { &&func_5467318480, &&RETURN };
    static void *func_5467314480_op6[2] = { &&func_5467318608, &&RETURN };
    static void *func_5467314480_op7[2] = { &&func_5467318736, &&RETURN };
    static void *func_5467314480_op8[2] = { &&func_5467318864, &&RETURN };
    static void *func_5467314480_op9[2] = { &&func_5467318416, &&RETURN };
    static void *func_5467314576_op0[2] = { &&func_5467319440, &&RETURN };
    static void *func_5467314576_op1[2] = { &&func_5467316608, &&RETURN };
    static void *func_5467314576_op2[2] = { &&func_5467315952, &&RETURN };
    static void *func_5467314352_op0[2] = { &&func_5467317744, &&RETURN };
    static void *func_5467314352_op1[2] = { &&func_5467314704, &&RETURN };
    static void *func_5467314352_op2[2] = { &&func_5467314976, &&RETURN };
    static void *func_5467314272_op0[2] = { &&func_5467317584, &&RETURN };
    static void *func_5467314976_op0[2] = { &&func_5467320592, &&RETURN };
    static void *func_5467314976_op1[2] = { &&func_5467321264, &&RETURN };
    static void *func_5467314976_op2[2] = { &&func_5467321392, &&RETURN };
    static void *func_5467314976_op3[2] = { &&func_5467321520, &&RETURN };
    static void *func_5467314976_op4[2] = { &&func_5467321648, &&RETURN };
    static void *func_5467314976_op5[2] = { &&func_5467321840, &&RETURN };
    static void *func_5467314976_op6[2] = { &&func_5467321968, &&RETURN };
    static void *func_5467314976_op7[2] = { &&func_5467322096, &&RETURN };
    static void *func_5467314976_op8[2] = { &&func_5467322224, &&RETURN };
    static void *func_5467314192_op0[2] = { &&func_5467321776, &&RETURN };
    static void *func_5467314192_op1[2] = { &&func_5467320240, &&RETURN };
    static void *func_5467314704_op0[2] = { &&func_5467314480, &&RETURN };
    static void *func_5467314704_op1[2] = { &&func_5467320416, &&RETURN };
    static void *func_5467315232_op0[2] = { &&func_5467322480, &&RETURN };
    static void *func_5467314896_op0[2] = { &&func_5467323120, &&RETURN };
    static void *func_5467315168_op0[2] = { &&func_5467314896, &&HALT };
    static void *func_5467315584_op0[2] = { &&func_5467314192, &&RETURN };
    static void *func_5467315584_op1[2] = { &&func_5467315792, &&RETURN };
    static void *func_5467315584_op2[2] = { &&func_5467314272, &&RETURN };
    static void *func_5467315584_op3[2] = { &&func_5467313696, &&RETURN };
    static void *func_5467315584_op4[2] = { &&func_5467315232, &&RETURN };
    static void *func_5467315952_op0[2] = { &&func_5467323968, &&RETURN };
    static void *func_5467315952_op1[2] = { &&func_5467323248, &&RETURN };
    static void *func_5467315952_op2[2] = { &&func_5467314352, &&RETURN };
    static void *func_5467315792_op0[2] = { &&func_5467323904, &&RETURN };
    static void *exp_5467315520[5] = {&&func_5467314976, &&func_5467315712, &&func_5467314576, &&func_5467314768, &&RETURN };
    static void *exp_5467316816[4] = {&&func_5467314576, &&func_5467316944, &&func_5467314576, &&RETURN };
    static void *exp_5467317072[4] = {&&func_5467314576, &&func_5467317200, &&func_5467314576, &&RETURN };
    static void *exp_5467317328[4] = {&&func_5467314576, &&func_5467317456, &&func_5467314576, &&RETURN };
    static void *exp_5467319440[4] = {&&func_5467314576, &&func_5467319568, &&func_5467315952, &&RETURN };
    static void *exp_5467316608[4] = {&&func_5467314576, &&func_5467316736, &&func_5467315952, &&RETURN };
    static void *exp_5467317744[4] = {&&func_5467319920, &&func_5467314576, &&func_5467320048, &&RETURN };
    static void *exp_5467317584[12] = {&&func_5467320816, &&func_5467319920, &&func_5467313696, &&func_5467314768, &&func_5467314064, &&func_5467314768, &&func_5467313696, &&func_5467320048, &&func_5467320944, &&func_5467314896, &&func_5467316080, &&RETURN };
    static void *exp_5467321776[8] = {&&func_5467322992, &&func_5467319920, &&func_5467314064, &&func_5467320048, &&func_5467320944, &&func_5467314896, &&func_5467316080, &&RETURN };
    static void *exp_5467320240[12] = {&&func_5467322992, &&func_5467319920, &&func_5467314064, &&func_5467320048, &&func_5467320944, &&func_5467314896, &&func_5467316080, &&func_5467322816, &&func_5467320944, &&func_5467314896, &&func_5467316080, &&RETURN };
    static void *exp_5467320416[3] = {&&func_5467314480, &&func_5467314704, &&RETURN };
    static void *exp_5467322480[6] = {&&func_5467322608, &&func_5467319920, &&func_5467314576, &&func_5467320048, &&func_5467314768, &&RETURN };
    static void *exp_5467323120[3] = {&&func_5467315584, &&func_5467314896, &&RETURN };
    static void *exp_5467323968[4] = {&&func_5467315952, &&func_5467324096, &&func_5467314352, &&RETURN };
    static void *exp_5467323248[4] = {&&func_5467315952, &&func_5467318928, &&func_5467314352, &&RETURN };
    static void *exp_5467323904[8] = {&&func_5467319296, &&func_5467319920, &&func_5467314064, &&func_5467320048, &&func_5467320944, &&func_5467314896, &&func_5467316080, &&RETURN };

func_5467313696:
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
            PC = func_5467313696_op0;
            break;
    }
    goto **PC;
func_5467314064:
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
            PC = func_5467314064_op0;
            break;
        case 1:
            PC = func_5467314064_op1;
            break;
        case 2:
            PC = func_5467314064_op2;
            break;
    }
    goto **PC;
func_5467314480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314480_op0;
            break;
        case 1:
            PC = func_5467314480_op1;
            break;
        case 2:
            PC = func_5467314480_op2;
            break;
        case 3:
            PC = func_5467314480_op3;
            break;
        case 4:
            PC = func_5467314480_op4;
            break;
        case 5:
            PC = func_5467314480_op5;
            break;
        case 6:
            PC = func_5467314480_op6;
            break;
        case 7:
            PC = func_5467314480_op7;
            break;
        case 8:
            PC = func_5467314480_op8;
            break;
        case 9:
            PC = func_5467314480_op9;
            break;
    }
    goto **PC;
func_5467314576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314576_op0;
            break;
        case 1:
            PC = func_5467314576_op1;
            break;
        case 2:
            PC = func_5467314576_op2;
            break;
    }
    goto **PC;
func_5467314352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314352_op0;
            break;
        case 1:
            PC = func_5467314352_op1;
            break;
        case 2:
            PC = func_5467314352_op2;
            break;
    }
    goto **PC;
func_5467314272:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314272_op0;
            break;
    }
    goto **PC;
func_5467314976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314976_op0;
            break;
        case 1:
            PC = func_5467314976_op1;
            break;
        case 2:
            PC = func_5467314976_op2;
            break;
        case 3:
            PC = func_5467314976_op3;
            break;
        case 4:
            PC = func_5467314976_op4;
            break;
        case 5:
            PC = func_5467314976_op5;
            break;
        case 6:
            PC = func_5467314976_op6;
            break;
        case 7:
            PC = func_5467314976_op7;
            break;
        case 8:
            PC = func_5467314976_op8;
            break;
    }
    goto **PC;
func_5467314192:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314192_op0;
            break;
        case 1:
            PC = func_5467314192_op1;
            break;
    }
    goto **PC;
func_5467314704:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314704_op0;
            break;
        case 1:
            PC = func_5467314704_op1;
            break;
    }
    goto **PC;
func_5467315232:
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
            PC = func_5467315232_op0;
            break;
    }
    goto **PC;
func_5467314896:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5467314896_op0;
            break;
    }
    goto **PC;
func_5467315168:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5467315168_op0;
            break;
    }
    goto **PC;
func_5467315584:
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
            PC = func_5467315584_op0;
            break;
        case 1:
            PC = func_5467315584_op1;
            break;
        case 2:
            PC = func_5467315584_op2;
            break;
        case 3:
            PC = func_5467315584_op3;
            break;
        case 4:
            PC = func_5467315584_op4;
            break;
    }
    goto **PC;
func_5467315952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5467315952_op0;
            break;
        case 1:
            PC = func_5467315952_op1;
            break;
        case 2:
            PC = func_5467315952_op2;
            break;
    }
    goto **PC;
func_5467315792:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5467315792_op0;
            break;
    }
    goto **PC;
func_5467315520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467315520;
    goto **PC;
func_5467315712:
    extend(61);
    NEXT();
    goto **PC;
func_5467314768:
    extend(59);
    NEXT();
    goto **PC;
func_5467316816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467316816;
    goto **PC;
func_5467316944:
    extend(62);
    NEXT();
    goto **PC;
func_5467317072:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467317072;
    goto **PC;
func_5467317200:
    extend(60);
    NEXT();
    goto **PC;
func_5467317328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467317328;
    goto **PC;
func_5467317456:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5467317840:
    extend(48);
    NEXT();
    goto **PC;
func_5467315424:
    extend(49);
    NEXT();
    goto **PC;
func_5467318032:
    extend(50);
    NEXT();
    goto **PC;
func_5467318160:
    extend(51);
    NEXT();
    goto **PC;
func_5467318288:
    extend(52);
    NEXT();
    goto **PC;
func_5467318480:
    extend(53);
    NEXT();
    goto **PC;
func_5467318608:
    extend(54);
    NEXT();
    goto **PC;
func_5467318736:
    extend(55);
    NEXT();
    goto **PC;
func_5467318864:
    extend(56);
    NEXT();
    goto **PC;
func_5467318416:
    extend(57);
    NEXT();
    goto **PC;
func_5467319440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467319440;
    goto **PC;
func_5467319568:
    extend(43);
    NEXT();
    goto **PC;
func_5467316608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467316608;
    goto **PC;
func_5467316736:
    extend(45);
    NEXT();
    goto **PC;
func_5467317744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467317744;
    goto **PC;
func_5467319920:
    extend(40);
    NEXT();
    goto **PC;
func_5467320048:
    extend(41);
    NEXT();
    goto **PC;
func_5467317584:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467317584;
    goto **PC;
func_5467320816:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5467320944:
    extend(123);
    NEXT();
    goto **PC;
func_5467316080:
    extend(125);
    NEXT();
    goto **PC;
func_5467320592:
    extend(105);
    NEXT();
    goto **PC;
func_5467321264:
    extend(106);
    NEXT();
    goto **PC;
func_5467321392:
    extend(107);
    NEXT();
    goto **PC;
func_5467321520:
    extend(120);
    NEXT();
    goto **PC;
func_5467321648:
    extend(121);
    NEXT();
    goto **PC;
func_5467321840:
    extend(122);
    NEXT();
    goto **PC;
func_5467321968:
    extend(97);
    NEXT();
    goto **PC;
func_5467322096:
    extend(98);
    NEXT();
    goto **PC;
func_5467322224:
    extend(99);
    NEXT();
    goto **PC;
func_5467321776:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467321776;
    goto **PC;
func_5467322992:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5467320240:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467320240;
    goto **PC;
func_5467322816:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5467320416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467320416;
    goto **PC;
func_5467322480:
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
    PC = exp_5467322480;
    goto **PC;
func_5467322608:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5467323120:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467323120;
    goto **PC;
func_5467323968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467323968;
    goto **PC;
func_5467324096:
    extend(42);
    NEXT();
    goto **PC;
func_5467323248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467323248;
    goto **PC;
func_5467318928:
    extend(47);
    NEXT();
    goto **PC;
func_5467323904:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5467323904;
    goto **PC;
func_5467319296:
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
    PC = func_5467315168_op0;
    goto **PC;
}
