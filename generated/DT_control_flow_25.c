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
    static void *func_5165323808_op0[2] = { &&func_5165325632, &&RETURN };
    static void *func_5165324176_op0[2] = { &&func_5165326928, &&RETURN };
    static void *func_5165324176_op1[2] = { &&func_5165327184, &&RETURN };
    static void *func_5165324176_op2[2] = { &&func_5165327440, &&RETURN };
    static void *func_5165324592_op0[2] = { &&func_5165327952, &&RETURN };
    static void *func_5165324592_op1[2] = { &&func_5165325536, &&RETURN };
    static void *func_5165324592_op2[2] = { &&func_5165328144, &&RETURN };
    static void *func_5165324592_op3[2] = { &&func_5165328272, &&RETURN };
    static void *func_5165324592_op4[2] = { &&func_5165328400, &&RETURN };
    static void *func_5165324592_op5[2] = { &&func_5165328592, &&RETURN };
    static void *func_5165324592_op6[2] = { &&func_5165328720, &&RETURN };
    static void *func_5165324592_op7[2] = { &&func_5165328848, &&RETURN };
    static void *func_5165324592_op8[2] = { &&func_5165328976, &&RETURN };
    static void *func_5165324592_op9[2] = { &&func_5165328528, &&RETURN };
    static void *func_5165324688_op0[2] = { &&func_5165329552, &&RETURN };
    static void *func_5165324688_op1[2] = { &&func_5165326720, &&RETURN };
    static void *func_5165324688_op2[2] = { &&func_5165326064, &&RETURN };
    static void *func_5165324464_op0[2] = { &&func_5165327856, &&RETURN };
    static void *func_5165324464_op1[2] = { &&func_5165324816, &&RETURN };
    static void *func_5165324464_op2[2] = { &&func_5165325088, &&RETURN };
    static void *func_5165324384_op0[2] = { &&func_5165327696, &&RETURN };
    static void *func_5165325088_op0[2] = { &&func_5165330704, &&RETURN };
    static void *func_5165325088_op1[2] = { &&func_5165331376, &&RETURN };
    static void *func_5165325088_op2[2] = { &&func_5165331504, &&RETURN };
    static void *func_5165325088_op3[2] = { &&func_5165331632, &&RETURN };
    static void *func_5165325088_op4[2] = { &&func_5165331760, &&RETURN };
    static void *func_5165325088_op5[2] = { &&func_5165331952, &&RETURN };
    static void *func_5165325088_op6[2] = { &&func_5165332080, &&RETURN };
    static void *func_5165325088_op7[2] = { &&func_5165332208, &&RETURN };
    static void *func_5165325088_op8[2] = { &&func_5165332336, &&RETURN };
    static void *func_5165324304_op0[2] = { &&func_5165331888, &&RETURN };
    static void *func_5165324304_op1[2] = { &&func_5165330352, &&RETURN };
    static void *func_5165324816_op0[2] = { &&func_5165324592, &&RETURN };
    static void *func_5165324816_op1[2] = { &&func_5165330528, &&RETURN };
    static void *func_5165325344_op0[2] = { &&func_5165332592, &&RETURN };
    static void *func_5165325008_op0[2] = { &&func_5165333232, &&RETURN };
    static void *func_5165325280_op0[2] = { &&func_5165325008, &&HALT };
    static void *func_5165325696_op0[2] = { &&func_5165324304, &&RETURN };
    static void *func_5165325696_op1[2] = { &&func_5165325904, &&RETURN };
    static void *func_5165325696_op2[2] = { &&func_5165324384, &&RETURN };
    static void *func_5165325696_op3[2] = { &&func_5165323808, &&RETURN };
    static void *func_5165325696_op4[2] = { &&func_5165325344, &&RETURN };
    static void *func_5165326064_op0[2] = { &&func_5165334080, &&RETURN };
    static void *func_5165326064_op1[2] = { &&func_5165333360, &&RETURN };
    static void *func_5165326064_op2[2] = { &&func_5165324464, &&RETURN };
    static void *func_5165325904_op0[2] = { &&func_5165334016, &&RETURN };
    static void *exp_5165325632[5] = {&&func_5165325088, &&func_5165325824, &&func_5165324688, &&func_5165324880, &&RETURN };
    static void *exp_5165326928[4] = {&&func_5165324688, &&func_5165327056, &&func_5165324688, &&RETURN };
    static void *exp_5165327184[4] = {&&func_5165324688, &&func_5165327312, &&func_5165324688, &&RETURN };
    static void *exp_5165327440[4] = {&&func_5165324688, &&func_5165327568, &&func_5165324688, &&RETURN };
    static void *exp_5165329552[4] = {&&func_5165324688, &&func_5165329680, &&func_5165326064, &&RETURN };
    static void *exp_5165326720[4] = {&&func_5165324688, &&func_5165326848, &&func_5165326064, &&RETURN };
    static void *exp_5165327856[4] = {&&func_5165330032, &&func_5165324688, &&func_5165330160, &&RETURN };
    static void *exp_5165327696[12] = {&&func_5165330928, &&func_5165330032, &&func_5165323808, &&func_5165324880, &&func_5165324176, &&func_5165324880, &&func_5165323808, &&func_5165330160, &&func_5165331056, &&func_5165325008, &&func_5165326192, &&RETURN };
    static void *exp_5165331888[8] = {&&func_5165333104, &&func_5165330032, &&func_5165324176, &&func_5165330160, &&func_5165331056, &&func_5165325008, &&func_5165326192, &&RETURN };
    static void *exp_5165330352[12] = {&&func_5165333104, &&func_5165330032, &&func_5165324176, &&func_5165330160, &&func_5165331056, &&func_5165325008, &&func_5165326192, &&func_5165332928, &&func_5165331056, &&func_5165325008, &&func_5165326192, &&RETURN };
    static void *exp_5165330528[3] = {&&func_5165324592, &&func_5165324816, &&RETURN };
    static void *exp_5165332592[6] = {&&func_5165332720, &&func_5165330032, &&func_5165324688, &&func_5165330160, &&func_5165324880, &&RETURN };
    static void *exp_5165333232[3] = {&&func_5165325696, &&func_5165325008, &&RETURN };
    static void *exp_5165334080[4] = {&&func_5165326064, &&func_5165334208, &&func_5165324464, &&RETURN };
    static void *exp_5165333360[4] = {&&func_5165326064, &&func_5165329040, &&func_5165324464, &&RETURN };
    static void *exp_5165334016[8] = {&&func_5165329408, &&func_5165330032, &&func_5165324176, &&func_5165330160, &&func_5165331056, &&func_5165325008, &&func_5165326192, &&RETURN };

func_5165323808:
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
            PC = func_5165323808_op0;
            break;
    }
    goto **PC;
func_5165324176:
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
            PC = func_5165324176_op0;
            break;
        case 1:
            PC = func_5165324176_op1;
            break;
        case 2:
            PC = func_5165324176_op2;
            break;
    }
    goto **PC;
func_5165324592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324592_op0;
            break;
        case 1:
            PC = func_5165324592_op1;
            break;
        case 2:
            PC = func_5165324592_op2;
            break;
        case 3:
            PC = func_5165324592_op3;
            break;
        case 4:
            PC = func_5165324592_op4;
            break;
        case 5:
            PC = func_5165324592_op5;
            break;
        case 6:
            PC = func_5165324592_op6;
            break;
        case 7:
            PC = func_5165324592_op7;
            break;
        case 8:
            PC = func_5165324592_op8;
            break;
        case 9:
            PC = func_5165324592_op9;
            break;
    }
    goto **PC;
func_5165324688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324688_op0;
            break;
        case 1:
            PC = func_5165324688_op1;
            break;
        case 2:
            PC = func_5165324688_op2;
            break;
    }
    goto **PC;
func_5165324464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324464_op0;
            break;
        case 1:
            PC = func_5165324464_op1;
            break;
        case 2:
            PC = func_5165324464_op2;
            break;
    }
    goto **PC;
func_5165324384:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324384_op0;
            break;
    }
    goto **PC;
func_5165325088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5165325088_op0;
            break;
        case 1:
            PC = func_5165325088_op1;
            break;
        case 2:
            PC = func_5165325088_op2;
            break;
        case 3:
            PC = func_5165325088_op3;
            break;
        case 4:
            PC = func_5165325088_op4;
            break;
        case 5:
            PC = func_5165325088_op5;
            break;
        case 6:
            PC = func_5165325088_op6;
            break;
        case 7:
            PC = func_5165325088_op7;
            break;
        case 8:
            PC = func_5165325088_op8;
            break;
    }
    goto **PC;
func_5165324304:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324304_op0;
            break;
        case 1:
            PC = func_5165324304_op1;
            break;
    }
    goto **PC;
func_5165324816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5165324816_op0;
            break;
        case 1:
            PC = func_5165324816_op1;
            break;
    }
    goto **PC;
func_5165325344:
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
            PC = func_5165325344_op0;
            break;
    }
    goto **PC;
func_5165325008:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5165325008_op0;
            break;
    }
    goto **PC;
func_5165325280:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5165325280_op0;
            break;
    }
    goto **PC;
func_5165325696:
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
            PC = func_5165325696_op0;
            break;
        case 1:
            PC = func_5165325696_op1;
            break;
        case 2:
            PC = func_5165325696_op2;
            break;
        case 3:
            PC = func_5165325696_op3;
            break;
        case 4:
            PC = func_5165325696_op4;
            break;
    }
    goto **PC;
func_5165326064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5165326064_op0;
            break;
        case 1:
            PC = func_5165326064_op1;
            break;
        case 2:
            PC = func_5165326064_op2;
            break;
    }
    goto **PC;
func_5165325904:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5165325904_op0;
            break;
    }
    goto **PC;
func_5165325632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165325632;
    goto **PC;
func_5165325824:
    extend(61);
    NEXT();
    goto **PC;
func_5165324880:
    extend(59);
    NEXT();
    goto **PC;
func_5165326928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165326928;
    goto **PC;
func_5165327056:
    extend(62);
    NEXT();
    goto **PC;
func_5165327184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165327184;
    goto **PC;
func_5165327312:
    extend(60);
    NEXT();
    goto **PC;
func_5165327440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165327440;
    goto **PC;
func_5165327568:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5165327952:
    extend(48);
    NEXT();
    goto **PC;
func_5165325536:
    extend(49);
    NEXT();
    goto **PC;
func_5165328144:
    extend(50);
    NEXT();
    goto **PC;
func_5165328272:
    extend(51);
    NEXT();
    goto **PC;
func_5165328400:
    extend(52);
    NEXT();
    goto **PC;
func_5165328592:
    extend(53);
    NEXT();
    goto **PC;
func_5165328720:
    extend(54);
    NEXT();
    goto **PC;
func_5165328848:
    extend(55);
    NEXT();
    goto **PC;
func_5165328976:
    extend(56);
    NEXT();
    goto **PC;
func_5165328528:
    extend(57);
    NEXT();
    goto **PC;
func_5165329552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165329552;
    goto **PC;
func_5165329680:
    extend(43);
    NEXT();
    goto **PC;
func_5165326720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165326720;
    goto **PC;
func_5165326848:
    extend(45);
    NEXT();
    goto **PC;
func_5165327856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165327856;
    goto **PC;
func_5165330032:
    extend(40);
    NEXT();
    goto **PC;
func_5165330160:
    extend(41);
    NEXT();
    goto **PC;
func_5165327696:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165327696;
    goto **PC;
func_5165330928:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5165331056:
    extend(123);
    NEXT();
    goto **PC;
func_5165326192:
    extend(125);
    NEXT();
    goto **PC;
func_5165330704:
    extend(105);
    NEXT();
    goto **PC;
func_5165331376:
    extend(106);
    NEXT();
    goto **PC;
func_5165331504:
    extend(107);
    NEXT();
    goto **PC;
func_5165331632:
    extend(120);
    NEXT();
    goto **PC;
func_5165331760:
    extend(121);
    NEXT();
    goto **PC;
func_5165331952:
    extend(122);
    NEXT();
    goto **PC;
func_5165332080:
    extend(97);
    NEXT();
    goto **PC;
func_5165332208:
    extend(98);
    NEXT();
    goto **PC;
func_5165332336:
    extend(99);
    NEXT();
    goto **PC;
func_5165331888:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165331888;
    goto **PC;
func_5165333104:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5165330352:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165330352;
    goto **PC;
func_5165332928:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5165330528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165330528;
    goto **PC;
func_5165332592:
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
    PC = exp_5165332592;
    goto **PC;
func_5165332720:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5165333232:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165333232;
    goto **PC;
func_5165334080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165334080;
    goto **PC;
func_5165334208:
    extend(42);
    NEXT();
    goto **PC;
func_5165333360:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165333360;
    goto **PC;
func_5165329040:
    extend(47);
    NEXT();
    goto **PC;
func_5165334016:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5165334016;
    goto **PC;
func_5165329408:
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
    PC = func_5165325280_op0;
    goto **PC;
}
