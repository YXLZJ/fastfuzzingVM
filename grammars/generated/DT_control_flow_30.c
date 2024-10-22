#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 30
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
    static void *func_5022717472_op0[2] = { &&func_5022719296, &&RETURN };
    static void *func_5022717840_op0[2] = { &&func_5022720592, &&RETURN };
    static void *func_5022717840_op1[2] = { &&func_5022720848, &&RETURN };
    static void *func_5022717840_op2[2] = { &&func_5022721104, &&RETURN };
    static void *func_5022718256_op0[2] = { &&func_5022721616, &&RETURN };
    static void *func_5022718256_op1[2] = { &&func_5022719200, &&RETURN };
    static void *func_5022718256_op2[2] = { &&func_5022721808, &&RETURN };
    static void *func_5022718256_op3[2] = { &&func_5022721936, &&RETURN };
    static void *func_5022718256_op4[2] = { &&func_5022722064, &&RETURN };
    static void *func_5022718256_op5[2] = { &&func_5022722256, &&RETURN };
    static void *func_5022718256_op6[2] = { &&func_5022722384, &&RETURN };
    static void *func_5022718256_op7[2] = { &&func_5022722512, &&RETURN };
    static void *func_5022718256_op8[2] = { &&func_5022722640, &&RETURN };
    static void *func_5022718256_op9[2] = { &&func_5022722192, &&RETURN };
    static void *func_5022718352_op0[2] = { &&func_5022723216, &&RETURN };
    static void *func_5022718352_op1[2] = { &&func_5022720384, &&RETURN };
    static void *func_5022718352_op2[2] = { &&func_5022719728, &&RETURN };
    static void *func_5022718128_op0[2] = { &&func_5022721520, &&RETURN };
    static void *func_5022718128_op1[2] = { &&func_5022718480, &&RETURN };
    static void *func_5022718128_op2[2] = { &&func_5022718752, &&RETURN };
    static void *func_5022718048_op0[2] = { &&func_5022721360, &&RETURN };
    static void *func_5022718752_op0[2] = { &&func_5022724368, &&RETURN };
    static void *func_5022718752_op1[2] = { &&func_5022725040, &&RETURN };
    static void *func_5022718752_op2[2] = { &&func_5022725168, &&RETURN };
    static void *func_5022718752_op3[2] = { &&func_5022725296, &&RETURN };
    static void *func_5022718752_op4[2] = { &&func_5022725424, &&RETURN };
    static void *func_5022718752_op5[2] = { &&func_5022725616, &&RETURN };
    static void *func_5022718752_op6[2] = { &&func_5022725744, &&RETURN };
    static void *func_5022718752_op7[2] = { &&func_5022725872, &&RETURN };
    static void *func_5022718752_op8[2] = { &&func_5022726000, &&RETURN };
    static void *func_5022717968_op0[2] = { &&func_5022725552, &&RETURN };
    static void *func_5022717968_op1[2] = { &&func_5022724016, &&RETURN };
    static void *func_5022718480_op0[2] = { &&func_5022718256, &&RETURN };
    static void *func_5022718480_op1[2] = { &&func_5022724192, &&RETURN };
    static void *func_5022719008_op0[2] = { &&func_5022726256, &&RETURN };
    static void *func_5022718672_op0[2] = { &&func_5022726896, &&RETURN };
    static void *func_5022718944_op0[2] = { &&func_5022718672, &&HALT };
    static void *func_5022719360_op0[2] = { &&func_5022717968, &&RETURN };
    static void *func_5022719360_op1[2] = { &&func_5022719568, &&RETURN };
    static void *func_5022719360_op2[2] = { &&func_5022718048, &&RETURN };
    static void *func_5022719360_op3[2] = { &&func_5022717472, &&RETURN };
    static void *func_5022719360_op4[2] = { &&func_5022719008, &&RETURN };
    static void *func_5022719728_op0[2] = { &&func_5022727744, &&RETURN };
    static void *func_5022719728_op1[2] = { &&func_5022727024, &&RETURN };
    static void *func_5022719728_op2[2] = { &&func_5022718128, &&RETURN };
    static void *func_5022719568_op0[2] = { &&func_5022727680, &&RETURN };
    static void *exp_5022719296[5] = {&&func_5022718752, &&func_5022719488, &&func_5022718352, &&func_5022718544, &&RETURN };
    static void *exp_5022720592[4] = {&&func_5022718352, &&func_5022720720, &&func_5022718352, &&RETURN };
    static void *exp_5022720848[4] = {&&func_5022718352, &&func_5022720976, &&func_5022718352, &&RETURN };
    static void *exp_5022721104[4] = {&&func_5022718352, &&func_5022721232, &&func_5022718352, &&RETURN };
    static void *exp_5022723216[4] = {&&func_5022718352, &&func_5022723344, &&func_5022719728, &&RETURN };
    static void *exp_5022720384[4] = {&&func_5022718352, &&func_5022720512, &&func_5022719728, &&RETURN };
    static void *exp_5022721520[4] = {&&func_5022723696, &&func_5022718352, &&func_5022723824, &&RETURN };
    static void *exp_5022721360[12] = {&&func_5022724592, &&func_5022723696, &&func_5022717472, &&func_5022718544, &&func_5022717840, &&func_5022718544, &&func_5022717472, &&func_5022723824, &&func_5022724720, &&func_5022718672, &&func_5022719856, &&RETURN };
    static void *exp_5022725552[8] = {&&func_5022726768, &&func_5022723696, &&func_5022717840, &&func_5022723824, &&func_5022724720, &&func_5022718672, &&func_5022719856, &&RETURN };
    static void *exp_5022724016[12] = {&&func_5022726768, &&func_5022723696, &&func_5022717840, &&func_5022723824, &&func_5022724720, &&func_5022718672, &&func_5022719856, &&func_5022726592, &&func_5022724720, &&func_5022718672, &&func_5022719856, &&RETURN };
    static void *exp_5022724192[3] = {&&func_5022718256, &&func_5022718480, &&RETURN };
    static void *exp_5022726256[6] = {&&func_5022726384, &&func_5022723696, &&func_5022718352, &&func_5022723824, &&func_5022718544, &&RETURN };
    static void *exp_5022726896[3] = {&&func_5022719360, &&func_5022718672, &&RETURN };
    static void *exp_5022727744[4] = {&&func_5022719728, &&func_5022727872, &&func_5022718128, &&RETURN };
    static void *exp_5022727024[4] = {&&func_5022719728, &&func_5022722704, &&func_5022718128, &&RETURN };
    static void *exp_5022727680[8] = {&&func_5022723072, &&func_5022723696, &&func_5022717840, &&func_5022723824, &&func_5022724720, &&func_5022718672, &&func_5022719856, &&RETURN };

func_5022717472:
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
            PC = func_5022717472_op0;
            break;
    }
    goto **PC;
func_5022717840:
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
            PC = func_5022717840_op0;
            break;
        case 1:
            PC = func_5022717840_op1;
            break;
        case 2:
            PC = func_5022717840_op2;
            break;
    }
    goto **PC;
func_5022718256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718256_op0;
            break;
        case 1:
            PC = func_5022718256_op1;
            break;
        case 2:
            PC = func_5022718256_op2;
            break;
        case 3:
            PC = func_5022718256_op3;
            break;
        case 4:
            PC = func_5022718256_op4;
            break;
        case 5:
            PC = func_5022718256_op5;
            break;
        case 6:
            PC = func_5022718256_op6;
            break;
        case 7:
            PC = func_5022718256_op7;
            break;
        case 8:
            PC = func_5022718256_op8;
            break;
        case 9:
            PC = func_5022718256_op9;
            break;
    }
    goto **PC;
func_5022718352:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718352_op0;
            break;
        case 1:
            PC = func_5022718352_op1;
            break;
        case 2:
            PC = func_5022718352_op2;
            break;
    }
    goto **PC;
func_5022718128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718128_op0;
            break;
        case 1:
            PC = func_5022718128_op1;
            break;
        case 2:
            PC = func_5022718128_op2;
            break;
    }
    goto **PC;
func_5022718048:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718048_op0;
            break;
    }
    goto **PC;
func_5022718752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718752_op0;
            break;
        case 1:
            PC = func_5022718752_op1;
            break;
        case 2:
            PC = func_5022718752_op2;
            break;
        case 3:
            PC = func_5022718752_op3;
            break;
        case 4:
            PC = func_5022718752_op4;
            break;
        case 5:
            PC = func_5022718752_op5;
            break;
        case 6:
            PC = func_5022718752_op6;
            break;
        case 7:
            PC = func_5022718752_op7;
            break;
        case 8:
            PC = func_5022718752_op8;
            break;
    }
    goto **PC;
func_5022717968:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022717968_op0;
            break;
        case 1:
            PC = func_5022717968_op1;
            break;
    }
    goto **PC;
func_5022718480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718480_op0;
            break;
        case 1:
            PC = func_5022718480_op1;
            break;
    }
    goto **PC;
func_5022719008:
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
            PC = func_5022719008_op0;
            break;
    }
    goto **PC;
func_5022718672:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718672_op0;
            break;
    }
    goto **PC;
func_5022718944:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022718944_op0;
            break;
    }
    goto **PC;
func_5022719360:
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
            PC = func_5022719360_op0;
            break;
        case 1:
            PC = func_5022719360_op1;
            break;
        case 2:
            PC = func_5022719360_op2;
            break;
        case 3:
            PC = func_5022719360_op3;
            break;
        case 4:
            PC = func_5022719360_op4;
            break;
    }
    goto **PC;
func_5022719728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022719728_op0;
            break;
        case 1:
            PC = func_5022719728_op1;
            break;
        case 2:
            PC = func_5022719728_op2;
            break;
    }
    goto **PC;
func_5022719568:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022719568_op0;
            break;
    }
    goto **PC;
func_5022719296:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022719296;
    goto **PC;
func_5022719488:
    extend(61);
    NEXT();
    goto **PC;
func_5022718544:
    extend(59);
    NEXT();
    goto **PC;
func_5022720592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022720592;
    goto **PC;
func_5022720720:
    extend(62);
    NEXT();
    goto **PC;
func_5022720848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022720848;
    goto **PC;
func_5022720976:
    extend(60);
    NEXT();
    goto **PC;
func_5022721104:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022721104;
    goto **PC;
func_5022721232:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5022721616:
    extend(48);
    NEXT();
    goto **PC;
func_5022719200:
    extend(49);
    NEXT();
    goto **PC;
func_5022721808:
    extend(50);
    NEXT();
    goto **PC;
func_5022721936:
    extend(51);
    NEXT();
    goto **PC;
func_5022722064:
    extend(52);
    NEXT();
    goto **PC;
func_5022722256:
    extend(53);
    NEXT();
    goto **PC;
func_5022722384:
    extend(54);
    NEXT();
    goto **PC;
func_5022722512:
    extend(55);
    NEXT();
    goto **PC;
func_5022722640:
    extend(56);
    NEXT();
    goto **PC;
func_5022722192:
    extend(57);
    NEXT();
    goto **PC;
func_5022723216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022723216;
    goto **PC;
func_5022723344:
    extend(43);
    NEXT();
    goto **PC;
func_5022720384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022720384;
    goto **PC;
func_5022720512:
    extend(45);
    NEXT();
    goto **PC;
func_5022721520:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022721520;
    goto **PC;
func_5022723696:
    extend(40);
    NEXT();
    goto **PC;
func_5022723824:
    extend(41);
    NEXT();
    goto **PC;
func_5022721360:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022721360;
    goto **PC;
func_5022724592:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5022724720:
    extend(123);
    NEXT();
    goto **PC;
func_5022719856:
    extend(125);
    NEXT();
    goto **PC;
func_5022724368:
    extend(105);
    NEXT();
    goto **PC;
func_5022725040:
    extend(106);
    NEXT();
    goto **PC;
func_5022725168:
    extend(107);
    NEXT();
    goto **PC;
func_5022725296:
    extend(120);
    NEXT();
    goto **PC;
func_5022725424:
    extend(121);
    NEXT();
    goto **PC;
func_5022725616:
    extend(122);
    NEXT();
    goto **PC;
func_5022725744:
    extend(97);
    NEXT();
    goto **PC;
func_5022725872:
    extend(98);
    NEXT();
    goto **PC;
func_5022726000:
    extend(99);
    NEXT();
    goto **PC;
func_5022725552:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022725552;
    goto **PC;
func_5022726768:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5022724016:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022724016;
    goto **PC;
func_5022726592:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5022724192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022724192;
    goto **PC;
func_5022726256:
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
    PC = exp_5022726256;
    goto **PC;
func_5022726384:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5022726896:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022726896;
    goto **PC;
func_5022727744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022727744;
    goto **PC;
func_5022727872:
    extend(42);
    NEXT();
    goto **PC;
func_5022727024:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022727024;
    goto **PC;
func_5022722704:
    extend(47);
    NEXT();
    goto **PC;
func_5022727680:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5022727680;
    goto **PC;
func_5022723072:
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
    PC = func_5022718944_op0;
    goto **PC;
}
