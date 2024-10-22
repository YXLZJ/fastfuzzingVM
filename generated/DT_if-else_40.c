#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 40
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
    static void *func_5366637280_op0[2] = { &&func_5366648304, &&RETURN };
    static void *func_5366646720_op0[2] = { &&func_5366648928, &&RETURN };
    static void *func_5366646720_op1[2] = { &&func_5366647376, &&RETURN };
    static void *func_5366646720_op2[2] = { &&func_5366649568, &&RETURN };
    static void *func_5366646640_op0[2] = { &&func_5366649824, &&RETURN };
    static void *func_5366646640_op1[2] = { &&func_5366648080, &&RETURN };
    static void *func_5366646640_op2[2] = { &&func_5366650112, &&RETURN };
    static void *func_5366646560_op0[2] = { &&func_5366647712, &&RETURN };
    static void *func_5366646560_op1[2] = { &&func_5366647184, &&RETURN };
    static void *func_5366647184_op0[2] = { &&func_5366650464, &&RETURN };
    static void *func_5366647184_op1[2] = { &&func_5366650592, &&RETURN };
    static void *func_5366647184_op2[2] = { &&func_5366650720, &&RETURN };
    static void *func_5366647184_op3[2] = { &&func_5366650848, &&RETURN };
    static void *func_5366647184_op4[2] = { &&func_5366650976, &&RETURN };
    static void *func_5366647184_op5[2] = { &&func_5366651168, &&RETURN };
    static void *func_5366646288_op0[2] = { &&func_5366650400, &&RETURN };
    static void *func_5366646288_op1[2] = { &&func_5366652592, &&RETURN };
    static void *func_5366647712_op0[2] = { &&func_5366651824, &&RETURN };
    static void *func_5366647712_op1[2] = { &&func_5366648816, &&RETURN };
    static void *func_5366647712_op2[2] = { &&func_5366653232, &&RETURN };
    static void *func_5366647712_op3[2] = { &&func_5366653360, &&RETURN };
    static void *func_5366647712_op4[2] = { &&func_5366653488, &&RETURN };
    static void *func_5366647712_op5[2] = { &&func_5366653680, &&RETURN };
    static void *func_5366647712_op6[2] = { &&func_5366653808, &&RETURN };
    static void *func_5366647712_op7[2] = { &&func_5366653936, &&RETURN };
    static void *func_5366647712_op8[2] = { &&func_5366654064, &&RETURN };
    static void *func_5366647712_op9[2] = { &&func_5366653616, &&RETURN };
    static void *func_5366646480_op0[2] = { &&func_5366654384, &&RETURN };
    static void *func_5366647008_op0[2] = { &&func_5366646288, &&HALT };
    static void *func_5366647072_op0[2] = { &&func_5366646288, &&RETURN };
    static void *func_5366647072_op1[2] = { &&func_5366637280, &&RETURN };
    static void *func_5366647072_op2[2] = { &&func_5366646480, &&RETURN };
    static void *func_5366647952_op0[2] = { &&func_5366651648, &&RETURN };
    static void *func_5366647952_op1[2] = { &&func_5366651360, &&RETURN };
    static void *func_5366648080_op0[2] = { &&func_5366646560, &&RETURN };
    static void *func_5366648080_op1[2] = { &&func_5366654784, &&RETURN };
    static void *exp_5366648304[5] = {&&func_5366647184, &&func_5366648432, &&func_5366646640, &&func_5366648560, &&RETURN };
    static void *exp_5366648928[4] = {&&func_5366646640, &&func_5366649056, &&func_5366646640, &&RETURN };
    static void *exp_5366647376[4] = {&&func_5366646640, &&func_5366649440, &&func_5366646640, &&RETURN };
    static void *exp_5366649568[4] = {&&func_5366646640, &&func_5366649696, &&func_5366646640, &&RETURN };
    static void *exp_5366649824[4] = {&&func_5366648080, &&func_5366649952, &&func_5366646640, &&RETURN };
    static void *exp_5366650112[4] = {&&func_5366648080, &&func_5366650240, &&func_5366646640, &&RETURN };
    static void *exp_5366650400[12] = {&&func_5366648208, &&func_5366649184, &&func_5366646720, &&func_5366649312, &&func_5366648752, &&func_5366647952, &&func_5366652656, &&func_5366652784, &&func_5366648752, &&func_5366647952, &&func_5366652656, &&RETURN };
    static void *exp_5366652592[8] = {&&func_5366648208, &&func_5366649184, &&func_5366646720, &&func_5366649312, &&func_5366648752, &&func_5366647952, &&func_5366652656, &&RETURN };
    static void *exp_5366654384[6] = {&&func_5366654512, &&func_5366649184, &&func_5366646640, &&func_5366649312, &&func_5366648560, &&RETURN };
    static void *exp_5366651648[3] = {&&func_5366647072, &&func_5366647952, &&RETURN };
    static void *exp_5366651360[1] = {&&RETURN };
    static void *exp_5366654784[4] = {&&func_5366646560, &&func_5366654912, &&func_5366648080, &&RETURN };

func_5366637280:
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
            PC = func_5366637280_op0;
            break;
    }
    goto **PC;
func_5366646720:
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
            PC = func_5366646720_op0;
            break;
        case 1:
            PC = func_5366646720_op1;
            break;
        case 2:
            PC = func_5366646720_op2;
            break;
    }
    goto **PC;
func_5366646640:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5366646640_op0;
            break;
        case 1:
            PC = func_5366646640_op1;
            break;
        case 2:
            PC = func_5366646640_op2;
            break;
    }
    goto **PC;
func_5366646560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5366646560_op0;
            break;
        case 1:
            PC = func_5366646560_op1;
            break;
    }
    goto **PC;
func_5366647184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5366647184_op0;
            break;
        case 1:
            PC = func_5366647184_op1;
            break;
        case 2:
            PC = func_5366647184_op2;
            break;
        case 3:
            PC = func_5366647184_op3;
            break;
        case 4:
            PC = func_5366647184_op4;
            break;
        case 5:
            PC = func_5366647184_op5;
            break;
    }
    goto **PC;
func_5366646288:
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
            PC = func_5366646288_op0;
            break;
        case 1:
            PC = func_5366646288_op1;
            break;
    }
    goto **PC;
func_5366647712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5366647712_op0;
            break;
        case 1:
            PC = func_5366647712_op1;
            break;
        case 2:
            PC = func_5366647712_op2;
            break;
        case 3:
            PC = func_5366647712_op3;
            break;
        case 4:
            PC = func_5366647712_op4;
            break;
        case 5:
            PC = func_5366647712_op5;
            break;
        case 6:
            PC = func_5366647712_op6;
            break;
        case 7:
            PC = func_5366647712_op7;
            break;
        case 8:
            PC = func_5366647712_op8;
            break;
        case 9:
            PC = func_5366647712_op9;
            break;
    }
    goto **PC;
func_5366646480:
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
            PC = func_5366646480_op0;
            break;
    }
    goto **PC;
func_5366647008:
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
            PC = func_5366647008_op0;
            break;
    }
    goto **PC;
func_5366647072:
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
            PC = func_5366647072_op0;
            break;
        case 1:
            PC = func_5366647072_op1;
            break;
        case 2:
            PC = func_5366647072_op2;
            break;
    }
    goto **PC;
func_5366647952:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5366647952_op0;
            break;
        case 1:
            PC = func_5366647952_op1;
            break;
    }
    goto **PC;
func_5366648080:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5366648080_op0;
            break;
        case 1:
            PC = func_5366648080_op1;
            break;
    }
    goto **PC;
func_5366648304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366648304;
    goto **PC;
func_5366648432:
    extend(61);
    NEXT();
    goto **PC;
func_5366648560:
    extend(59);
    NEXT();
    goto **PC;
func_5366648928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366648928;
    goto **PC;
func_5366649056:
    extend(62);
    NEXT();
    goto **PC;
func_5366647376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366647376;
    goto **PC;
func_5366649440:
    extend(60);
    NEXT();
    goto **PC;
func_5366649568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366649568;
    goto **PC;
func_5366649696:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5366649824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366649824;
    goto **PC;
func_5366649952:
    extend(43);
    NEXT();
    goto **PC;
func_5366650112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366650112;
    goto **PC;
func_5366650240:
    extend(45);
    NEXT();
    goto **PC;
func_5366650464:
    extend(120);
    NEXT();
    goto **PC;
func_5366650592:
    extend(121);
    NEXT();
    goto **PC;
func_5366650720:
    extend(122);
    NEXT();
    goto **PC;
func_5366650848:
    extend(97);
    NEXT();
    goto **PC;
func_5366650976:
    extend(98);
    NEXT();
    goto **PC;
func_5366651168:
    extend(99);
    NEXT();
    goto **PC;
func_5366650400:
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
    PC = exp_5366650400;
    goto **PC;
func_5366648208:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5366649184:
    extend(40);
    NEXT();
    goto **PC;
func_5366649312:
    extend(41);
    NEXT();
    goto **PC;
func_5366648752:
    extend(123);
    NEXT();
    goto **PC;
func_5366652656:
    extend(125);
    NEXT();
    goto **PC;
func_5366652784:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5366652592:
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
    PC = exp_5366652592;
    goto **PC;
func_5366651824:
    extend(48);
    NEXT();
    goto **PC;
func_5366648816:
    extend(49);
    NEXT();
    goto **PC;
func_5366653232:
    extend(50);
    NEXT();
    goto **PC;
func_5366653360:
    extend(51);
    NEXT();
    goto **PC;
func_5366653488:
    extend(52);
    NEXT();
    goto **PC;
func_5366653680:
    extend(53);
    NEXT();
    goto **PC;
func_5366653808:
    extend(54);
    NEXT();
    goto **PC;
func_5366653936:
    extend(55);
    NEXT();
    goto **PC;
func_5366654064:
    extend(56);
    NEXT();
    goto **PC;
func_5366653616:
    extend(57);
    NEXT();
    goto **PC;
func_5366654384:
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
    PC = exp_5366654384;
    goto **PC;
func_5366654512:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5366651648:
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
    PC = exp_5366651648;
    goto **PC;
func_5366651360:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366651360;
    goto **PC;
func_5366654784:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5366654784;
    goto **PC;
func_5366654912:
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
    PC = func_5366647008_op0;
    goto **PC;
}
