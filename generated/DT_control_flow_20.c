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
    static void *func_5325748928_op0[2] = { &&func_5325750752, &&RETURN };
    static void *func_5325749296_op0[2] = { &&func_5325752048, &&RETURN };
    static void *func_5325749296_op1[2] = { &&func_5325752304, &&RETURN };
    static void *func_5325749296_op2[2] = { &&func_5325752560, &&RETURN };
    static void *func_5325749712_op0[2] = { &&func_5325753072, &&RETURN };
    static void *func_5325749712_op1[2] = { &&func_5325750656, &&RETURN };
    static void *func_5325749712_op2[2] = { &&func_5325753264, &&RETURN };
    static void *func_5325749712_op3[2] = { &&func_5325753392, &&RETURN };
    static void *func_5325749712_op4[2] = { &&func_5325753520, &&RETURN };
    static void *func_5325749712_op5[2] = { &&func_5325753712, &&RETURN };
    static void *func_5325749712_op6[2] = { &&func_5325753840, &&RETURN };
    static void *func_5325749712_op7[2] = { &&func_5325753968, &&RETURN };
    static void *func_5325749712_op8[2] = { &&func_5325754096, &&RETURN };
    static void *func_5325749712_op9[2] = { &&func_5325753648, &&RETURN };
    static void *func_5325749808_op0[2] = { &&func_5325754672, &&RETURN };
    static void *func_5325749808_op1[2] = { &&func_5325751840, &&RETURN };
    static void *func_5325749808_op2[2] = { &&func_5325751184, &&RETURN };
    static void *func_5325749584_op0[2] = { &&func_5325752976, &&RETURN };
    static void *func_5325749584_op1[2] = { &&func_5325749936, &&RETURN };
    static void *func_5325749584_op2[2] = { &&func_5325750208, &&RETURN };
    static void *func_5325749504_op0[2] = { &&func_5325752816, &&RETURN };
    static void *func_5325750208_op0[2] = { &&func_5325755824, &&RETURN };
    static void *func_5325750208_op1[2] = { &&func_5325756496, &&RETURN };
    static void *func_5325750208_op2[2] = { &&func_5325756624, &&RETURN };
    static void *func_5325750208_op3[2] = { &&func_5325756752, &&RETURN };
    static void *func_5325750208_op4[2] = { &&func_5325756880, &&RETURN };
    static void *func_5325750208_op5[2] = { &&func_5325757072, &&RETURN };
    static void *func_5325750208_op6[2] = { &&func_5325757200, &&RETURN };
    static void *func_5325750208_op7[2] = { &&func_5325757328, &&RETURN };
    static void *func_5325750208_op8[2] = { &&func_5325757456, &&RETURN };
    static void *func_5325749424_op0[2] = { &&func_5325757008, &&RETURN };
    static void *func_5325749424_op1[2] = { &&func_5325755472, &&RETURN };
    static void *func_5325749936_op0[2] = { &&func_5325749712, &&RETURN };
    static void *func_5325749936_op1[2] = { &&func_5325755648, &&RETURN };
    static void *func_5325750464_op0[2] = { &&func_5325757712, &&RETURN };
    static void *func_5325750128_op0[2] = { &&func_5325758352, &&RETURN };
    static void *func_5325750400_op0[2] = { &&func_5325750128, &&HALT };
    static void *func_5325750816_op0[2] = { &&func_5325749424, &&RETURN };
    static void *func_5325750816_op1[2] = { &&func_5325751024, &&RETURN };
    static void *func_5325750816_op2[2] = { &&func_5325749504, &&RETURN };
    static void *func_5325750816_op3[2] = { &&func_5325748928, &&RETURN };
    static void *func_5325750816_op4[2] = { &&func_5325750464, &&RETURN };
    static void *func_5325751184_op0[2] = { &&func_5325759200, &&RETURN };
    static void *func_5325751184_op1[2] = { &&func_5325758480, &&RETURN };
    static void *func_5325751184_op2[2] = { &&func_5325749584, &&RETURN };
    static void *func_5325751024_op0[2] = { &&func_5325759136, &&RETURN };
    static void *exp_5325750752[5] = {&&func_5325750208, &&func_5325750944, &&func_5325749808, &&func_5325750000, &&RETURN };
    static void *exp_5325752048[4] = {&&func_5325749808, &&func_5325752176, &&func_5325749808, &&RETURN };
    static void *exp_5325752304[4] = {&&func_5325749808, &&func_5325752432, &&func_5325749808, &&RETURN };
    static void *exp_5325752560[4] = {&&func_5325749808, &&func_5325752688, &&func_5325749808, &&RETURN };
    static void *exp_5325754672[4] = {&&func_5325749808, &&func_5325754800, &&func_5325751184, &&RETURN };
    static void *exp_5325751840[4] = {&&func_5325749808, &&func_5325751968, &&func_5325751184, &&RETURN };
    static void *exp_5325752976[4] = {&&func_5325755152, &&func_5325749808, &&func_5325755280, &&RETURN };
    static void *exp_5325752816[12] = {&&func_5325756048, &&func_5325755152, &&func_5325748928, &&func_5325750000, &&func_5325749296, &&func_5325750000, &&func_5325748928, &&func_5325755280, &&func_5325756176, &&func_5325750128, &&func_5325751312, &&RETURN };
    static void *exp_5325757008[8] = {&&func_5325758224, &&func_5325755152, &&func_5325749296, &&func_5325755280, &&func_5325756176, &&func_5325750128, &&func_5325751312, &&RETURN };
    static void *exp_5325755472[12] = {&&func_5325758224, &&func_5325755152, &&func_5325749296, &&func_5325755280, &&func_5325756176, &&func_5325750128, &&func_5325751312, &&func_5325758048, &&func_5325756176, &&func_5325750128, &&func_5325751312, &&RETURN };
    static void *exp_5325755648[3] = {&&func_5325749712, &&func_5325749936, &&RETURN };
    static void *exp_5325757712[6] = {&&func_5325757840, &&func_5325755152, &&func_5325749808, &&func_5325755280, &&func_5325750000, &&RETURN };
    static void *exp_5325758352[3] = {&&func_5325750816, &&func_5325750128, &&RETURN };
    static void *exp_5325759200[4] = {&&func_5325751184, &&func_5325759328, &&func_5325749584, &&RETURN };
    static void *exp_5325758480[4] = {&&func_5325751184, &&func_5325754160, &&func_5325749584, &&RETURN };
    static void *exp_5325759136[8] = {&&func_5325754528, &&func_5325755152, &&func_5325749296, &&func_5325755280, &&func_5325756176, &&func_5325750128, &&func_5325751312, &&RETURN };

func_5325748928:
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
            PC = func_5325748928_op0;
            break;
    }
    goto **PC;
func_5325749296:
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
            PC = func_5325749296_op0;
            break;
        case 1:
            PC = func_5325749296_op1;
            break;
        case 2:
            PC = func_5325749296_op2;
            break;
    }
    goto **PC;
func_5325749712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749712_op0;
            break;
        case 1:
            PC = func_5325749712_op1;
            break;
        case 2:
            PC = func_5325749712_op2;
            break;
        case 3:
            PC = func_5325749712_op3;
            break;
        case 4:
            PC = func_5325749712_op4;
            break;
        case 5:
            PC = func_5325749712_op5;
            break;
        case 6:
            PC = func_5325749712_op6;
            break;
        case 7:
            PC = func_5325749712_op7;
            break;
        case 8:
            PC = func_5325749712_op8;
            break;
        case 9:
            PC = func_5325749712_op9;
            break;
    }
    goto **PC;
func_5325749808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749808_op0;
            break;
        case 1:
            PC = func_5325749808_op1;
            break;
        case 2:
            PC = func_5325749808_op2;
            break;
    }
    goto **PC;
func_5325749584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749584_op0;
            break;
        case 1:
            PC = func_5325749584_op1;
            break;
        case 2:
            PC = func_5325749584_op2;
            break;
    }
    goto **PC;
func_5325749504:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749504_op0;
            break;
    }
    goto **PC;
func_5325750208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5325750208_op0;
            break;
        case 1:
            PC = func_5325750208_op1;
            break;
        case 2:
            PC = func_5325750208_op2;
            break;
        case 3:
            PC = func_5325750208_op3;
            break;
        case 4:
            PC = func_5325750208_op4;
            break;
        case 5:
            PC = func_5325750208_op5;
            break;
        case 6:
            PC = func_5325750208_op6;
            break;
        case 7:
            PC = func_5325750208_op7;
            break;
        case 8:
            PC = func_5325750208_op8;
            break;
    }
    goto **PC;
func_5325749424:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749424_op0;
            break;
        case 1:
            PC = func_5325749424_op1;
            break;
    }
    goto **PC;
func_5325749936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5325749936_op0;
            break;
        case 1:
            PC = func_5325749936_op1;
            break;
    }
    goto **PC;
func_5325750464:
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
            PC = func_5325750464_op0;
            break;
    }
    goto **PC;
func_5325750128:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5325750128_op0;
            break;
    }
    goto **PC;
func_5325750400:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5325750400_op0;
            break;
    }
    goto **PC;
func_5325750816:
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
            PC = func_5325750816_op0;
            break;
        case 1:
            PC = func_5325750816_op1;
            break;
        case 2:
            PC = func_5325750816_op2;
            break;
        case 3:
            PC = func_5325750816_op3;
            break;
        case 4:
            PC = func_5325750816_op4;
            break;
    }
    goto **PC;
func_5325751184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5325751184_op0;
            break;
        case 1:
            PC = func_5325751184_op1;
            break;
        case 2:
            PC = func_5325751184_op2;
            break;
    }
    goto **PC;
func_5325751024:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5325751024_op0;
            break;
    }
    goto **PC;
func_5325750752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325750752;
    goto **PC;
func_5325750944:
    extend(61);
    NEXT();
    goto **PC;
func_5325750000:
    extend(59);
    NEXT();
    goto **PC;
func_5325752048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752048;
    goto **PC;
func_5325752176:
    extend(62);
    NEXT();
    goto **PC;
func_5325752304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752304;
    goto **PC;
func_5325752432:
    extend(60);
    NEXT();
    goto **PC;
func_5325752560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752560;
    goto **PC;
func_5325752688:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5325753072:
    extend(48);
    NEXT();
    goto **PC;
func_5325750656:
    extend(49);
    NEXT();
    goto **PC;
func_5325753264:
    extend(50);
    NEXT();
    goto **PC;
func_5325753392:
    extend(51);
    NEXT();
    goto **PC;
func_5325753520:
    extend(52);
    NEXT();
    goto **PC;
func_5325753712:
    extend(53);
    NEXT();
    goto **PC;
func_5325753840:
    extend(54);
    NEXT();
    goto **PC;
func_5325753968:
    extend(55);
    NEXT();
    goto **PC;
func_5325754096:
    extend(56);
    NEXT();
    goto **PC;
func_5325753648:
    extend(57);
    NEXT();
    goto **PC;
func_5325754672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325754672;
    goto **PC;
func_5325754800:
    extend(43);
    NEXT();
    goto **PC;
func_5325751840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325751840;
    goto **PC;
func_5325751968:
    extend(45);
    NEXT();
    goto **PC;
func_5325752976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752976;
    goto **PC;
func_5325755152:
    extend(40);
    NEXT();
    goto **PC;
func_5325755280:
    extend(41);
    NEXT();
    goto **PC;
func_5325752816:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325752816;
    goto **PC;
func_5325756048:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5325756176:
    extend(123);
    NEXT();
    goto **PC;
func_5325751312:
    extend(125);
    NEXT();
    goto **PC;
func_5325755824:
    extend(105);
    NEXT();
    goto **PC;
func_5325756496:
    extend(106);
    NEXT();
    goto **PC;
func_5325756624:
    extend(107);
    NEXT();
    goto **PC;
func_5325756752:
    extend(120);
    NEXT();
    goto **PC;
func_5325756880:
    extend(121);
    NEXT();
    goto **PC;
func_5325757072:
    extend(122);
    NEXT();
    goto **PC;
func_5325757200:
    extend(97);
    NEXT();
    goto **PC;
func_5325757328:
    extend(98);
    NEXT();
    goto **PC;
func_5325757456:
    extend(99);
    NEXT();
    goto **PC;
func_5325757008:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325757008;
    goto **PC;
func_5325758224:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5325755472:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325755472;
    goto **PC;
func_5325758048:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5325755648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325755648;
    goto **PC;
func_5325757712:
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
    PC = exp_5325757712;
    goto **PC;
func_5325757840:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5325758352:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325758352;
    goto **PC;
func_5325759200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325759200;
    goto **PC;
func_5325759328:
    extend(42);
    NEXT();
    goto **PC;
func_5325758480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325758480;
    goto **PC;
func_5325754160:
    extend(47);
    NEXT();
    goto **PC;
func_5325759136:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5325759136;
    goto **PC;
func_5325754528:
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
    PC = func_5325750400_op0;
    goto **PC;
}
