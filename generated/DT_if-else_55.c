#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 55
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
    static void *func_5089813216_op0[2] = { &&func_5089824240, &&RETURN };
    static void *func_5089822656_op0[2] = { &&func_5089824864, &&RETURN };
    static void *func_5089822656_op1[2] = { &&func_5089823312, &&RETURN };
    static void *func_5089822656_op2[2] = { &&func_5089825504, &&RETURN };
    static void *func_5089822576_op0[2] = { &&func_5089825760, &&RETURN };
    static void *func_5089822576_op1[2] = { &&func_5089824016, &&RETURN };
    static void *func_5089822576_op2[2] = { &&func_5089826048, &&RETURN };
    static void *func_5089822496_op0[2] = { &&func_5089823648, &&RETURN };
    static void *func_5089822496_op1[2] = { &&func_5089823120, &&RETURN };
    static void *func_5089823120_op0[2] = { &&func_5089826400, &&RETURN };
    static void *func_5089823120_op1[2] = { &&func_5089826528, &&RETURN };
    static void *func_5089823120_op2[2] = { &&func_5089826656, &&RETURN };
    static void *func_5089823120_op3[2] = { &&func_5089826784, &&RETURN };
    static void *func_5089823120_op4[2] = { &&func_5089826912, &&RETURN };
    static void *func_5089823120_op5[2] = { &&func_5089827104, &&RETURN };
    static void *func_5089822224_op0[2] = { &&func_5089826336, &&RETURN };
    static void *func_5089822224_op1[2] = { &&func_5089828528, &&RETURN };
    static void *func_5089823648_op0[2] = { &&func_5089827760, &&RETURN };
    static void *func_5089823648_op1[2] = { &&func_5089824752, &&RETURN };
    static void *func_5089823648_op2[2] = { &&func_5089829168, &&RETURN };
    static void *func_5089823648_op3[2] = { &&func_5089829296, &&RETURN };
    static void *func_5089823648_op4[2] = { &&func_5089829424, &&RETURN };
    static void *func_5089823648_op5[2] = { &&func_5089829616, &&RETURN };
    static void *func_5089823648_op6[2] = { &&func_5089829744, &&RETURN };
    static void *func_5089823648_op7[2] = { &&func_5089829872, &&RETURN };
    static void *func_5089823648_op8[2] = { &&func_5089830000, &&RETURN };
    static void *func_5089823648_op9[2] = { &&func_5089829552, &&RETURN };
    static void *func_5089822416_op0[2] = { &&func_5089830320, &&RETURN };
    static void *func_5089822944_op0[2] = { &&func_5089822224, &&HALT };
    static void *func_5089823008_op0[2] = { &&func_5089822224, &&RETURN };
    static void *func_5089823008_op1[2] = { &&func_5089813216, &&RETURN };
    static void *func_5089823008_op2[2] = { &&func_5089822416, &&RETURN };
    static void *func_5089823888_op0[2] = { &&func_5089827584, &&RETURN };
    static void *func_5089823888_op1[2] = { &&func_5089827296, &&RETURN };
    static void *func_5089824016_op0[2] = { &&func_5089822496, &&RETURN };
    static void *func_5089824016_op1[2] = { &&func_5089830720, &&RETURN };
    static void *exp_5089824240[5] = {&&func_5089823120, &&func_5089824368, &&func_5089822576, &&func_5089824496, &&RETURN };
    static void *exp_5089824864[4] = {&&func_5089822576, &&func_5089824992, &&func_5089822576, &&RETURN };
    static void *exp_5089823312[4] = {&&func_5089822576, &&func_5089825376, &&func_5089822576, &&RETURN };
    static void *exp_5089825504[4] = {&&func_5089822576, &&func_5089825632, &&func_5089822576, &&RETURN };
    static void *exp_5089825760[4] = {&&func_5089824016, &&func_5089825888, &&func_5089822576, &&RETURN };
    static void *exp_5089826048[4] = {&&func_5089824016, &&func_5089826176, &&func_5089822576, &&RETURN };
    static void *exp_5089826336[12] = {&&func_5089824144, &&func_5089825120, &&func_5089822656, &&func_5089825248, &&func_5089824688, &&func_5089823888, &&func_5089828592, &&func_5089828720, &&func_5089824688, &&func_5089823888, &&func_5089828592, &&RETURN };
    static void *exp_5089828528[8] = {&&func_5089824144, &&func_5089825120, &&func_5089822656, &&func_5089825248, &&func_5089824688, &&func_5089823888, &&func_5089828592, &&RETURN };
    static void *exp_5089830320[6] = {&&func_5089830448, &&func_5089825120, &&func_5089822576, &&func_5089825248, &&func_5089824496, &&RETURN };
    static void *exp_5089827584[3] = {&&func_5089823008, &&func_5089823888, &&RETURN };
    static void *exp_5089827296[1] = {&&RETURN };
    static void *exp_5089830720[4] = {&&func_5089822496, &&func_5089830848, &&func_5089824016, &&RETURN };

func_5089813216:
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
            PC = func_5089813216_op0;
            break;
    }
    goto **PC;
func_5089822656:
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
            PC = func_5089822656_op0;
            break;
        case 1:
            PC = func_5089822656_op1;
            break;
        case 2:
            PC = func_5089822656_op2;
            break;
    }
    goto **PC;
func_5089822576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5089822576_op0;
            break;
        case 1:
            PC = func_5089822576_op1;
            break;
        case 2:
            PC = func_5089822576_op2;
            break;
    }
    goto **PC;
func_5089822496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5089822496_op0;
            break;
        case 1:
            PC = func_5089822496_op1;
            break;
    }
    goto **PC;
func_5089823120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5089823120_op0;
            break;
        case 1:
            PC = func_5089823120_op1;
            break;
        case 2:
            PC = func_5089823120_op2;
            break;
        case 3:
            PC = func_5089823120_op3;
            break;
        case 4:
            PC = func_5089823120_op4;
            break;
        case 5:
            PC = func_5089823120_op5;
            break;
    }
    goto **PC;
func_5089822224:
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
            PC = func_5089822224_op0;
            break;
        case 1:
            PC = func_5089822224_op1;
            break;
    }
    goto **PC;
func_5089823648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5089823648_op0;
            break;
        case 1:
            PC = func_5089823648_op1;
            break;
        case 2:
            PC = func_5089823648_op2;
            break;
        case 3:
            PC = func_5089823648_op3;
            break;
        case 4:
            PC = func_5089823648_op4;
            break;
        case 5:
            PC = func_5089823648_op5;
            break;
        case 6:
            PC = func_5089823648_op6;
            break;
        case 7:
            PC = func_5089823648_op7;
            break;
        case 8:
            PC = func_5089823648_op8;
            break;
        case 9:
            PC = func_5089823648_op9;
            break;
    }
    goto **PC;
func_5089822416:
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
            PC = func_5089822416_op0;
            break;
    }
    goto **PC;
func_5089822944:
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
            PC = func_5089822944_op0;
            break;
    }
    goto **PC;
func_5089823008:
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
            PC = func_5089823008_op0;
            break;
        case 1:
            PC = func_5089823008_op1;
            break;
        case 2:
            PC = func_5089823008_op2;
            break;
    }
    goto **PC;
func_5089823888:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5089823888_op0;
            break;
        case 1:
            PC = func_5089823888_op1;
            break;
    }
    goto **PC;
func_5089824016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5089824016_op0;
            break;
        case 1:
            PC = func_5089824016_op1;
            break;
    }
    goto **PC;
func_5089824240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089824240;
    goto **PC;
func_5089824368:
    extend(61);
    NEXT();
    goto **PC;
func_5089824496:
    extend(59);
    NEXT();
    goto **PC;
func_5089824864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089824864;
    goto **PC;
func_5089824992:
    extend(62);
    NEXT();
    goto **PC;
func_5089823312:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089823312;
    goto **PC;
func_5089825376:
    extend(60);
    NEXT();
    goto **PC;
func_5089825504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089825504;
    goto **PC;
func_5089825632:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5089825760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089825760;
    goto **PC;
func_5089825888:
    extend(43);
    NEXT();
    goto **PC;
func_5089826048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089826048;
    goto **PC;
func_5089826176:
    extend(45);
    NEXT();
    goto **PC;
func_5089826400:
    extend(120);
    NEXT();
    goto **PC;
func_5089826528:
    extend(121);
    NEXT();
    goto **PC;
func_5089826656:
    extend(122);
    NEXT();
    goto **PC;
func_5089826784:
    extend(97);
    NEXT();
    goto **PC;
func_5089826912:
    extend(98);
    NEXT();
    goto **PC;
func_5089827104:
    extend(99);
    NEXT();
    goto **PC;
func_5089826336:
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
    PC = exp_5089826336;
    goto **PC;
func_5089824144:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_5089825120:
    extend(40);
    NEXT();
    goto **PC;
func_5089825248:
    extend(41);
    NEXT();
    goto **PC;
func_5089824688:
    extend(123);
    NEXT();
    goto **PC;
func_5089828592:
    extend(125);
    NEXT();
    goto **PC;
func_5089828720:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5089828528:
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
    PC = exp_5089828528;
    goto **PC;
func_5089827760:
    extend(48);
    NEXT();
    goto **PC;
func_5089824752:
    extend(49);
    NEXT();
    goto **PC;
func_5089829168:
    extend(50);
    NEXT();
    goto **PC;
func_5089829296:
    extend(51);
    NEXT();
    goto **PC;
func_5089829424:
    extend(52);
    NEXT();
    goto **PC;
func_5089829616:
    extend(53);
    NEXT();
    goto **PC;
func_5089829744:
    extend(54);
    NEXT();
    goto **PC;
func_5089829872:
    extend(55);
    NEXT();
    goto **PC;
func_5089830000:
    extend(56);
    NEXT();
    goto **PC;
func_5089829552:
    extend(57);
    NEXT();
    goto **PC;
func_5089830320:
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
    PC = exp_5089830320;
    goto **PC;
func_5089830448:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_5089827584:
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
    PC = exp_5089827584;
    goto **PC;
func_5089827296:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089827296;
    goto **PC;
func_5089830720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5089830720;
    goto **PC;
func_5089830848:
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
    PC = func_5089822944_op0;
    goto **PC;
}
