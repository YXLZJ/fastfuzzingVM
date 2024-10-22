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
    static void *func_5828017328_op0[2] = { &&func_5828018960, &&RETURN };
    static void *func_5828017328_op1[2] = { &&func_5828019344, &&RETURN };
    static void *func_5828017888_op0[2] = { &&func_5828019808, &&RETURN };
    static void *func_5828017888_op1[2] = { &&func_5828019936, &&RETURN };
    static void *func_5828017888_op2[2] = { &&func_5828020064, &&RETURN };
    static void *func_5828017888_op3[2] = { &&func_5828018656, &&RETURN };
    static void *func_5828017888_op4[2] = { &&func_5828020448, &&RETURN };
    static void *func_5828017888_op5[2] = { &&func_5828020640, &&RETURN };
    static void *func_5828017888_op6[2] = { &&func_5828020768, &&RETURN };
    static void *func_5828017888_op7[2] = { &&func_5828020896, &&RETURN };
    static void *func_5828017888_op8[2] = { &&func_5828021024, &&RETURN };
    static void *func_5828017888_op9[2] = { &&func_5828020576, &&RETURN };
    static void *func_5828017696_op0[2] = { &&func_5828018512, &&RETURN };
    static void *func_5828017696_op1[2] = { &&func_5828019024, &&RETURN };
    static void *func_5828017456_op0[2] = { &&func_5828019552, &&RETURN };
    static void *func_5828017456_op1[2] = { &&func_5828018240, &&RETURN };
    static void *func_5828017632_op0[2] = { &&func_5828017888, &&RETURN };
    static void *func_5828017632_op1[2] = { &&func_5828019680, &&RETURN };
    static void *func_5828018112_op0[2] = { &&func_5828021616, &&RETURN };
    static void *func_5828018112_op1[2] = { &&func_5828022048, &&RETURN };
    static void *func_5828018240_op0[2] = { &&func_5828022192, &&RETURN };
    static void *func_5828018032_op0[2] = { &&func_5828019024, &&HALT };
    static void *func_5828018592_op0[2] = { &&func_5828021536, &&RETURN };
    static void *func_5828018592_op1[2] = { &&func_5828022960, &&RETURN };
    static void *func_5828018592_op2[2] = { &&func_5828023088, &&RETURN };
    static void *func_5828018592_op3[2] = { &&func_5828023248, &&RETURN };
    static void *func_5828018592_op4[2] = { &&func_5828023376, &&RETURN };
    static void *func_5828019024_op0[2] = { &&func_5828018112, &&RETURN };
    static void *func_5828019024_op1[2] = { &&func_5828017328, &&RETURN };
    static void *func_5828019024_op2[2] = { &&func_5828018592, &&RETURN };
    static void *func_5828019024_op3[2] = { &&func_5828017632, &&RETURN };
    static void *func_5828019024_op4[2] = { &&func_5828022800, &&RETURN };
    static void *func_5828019024_op5[2] = { &&func_5828023904, &&RETURN };
    static void *func_5828019024_op6[2] = { &&func_5828024032, &&RETURN };
    static void *exp_5828018960[4] = {&&func_5828019216, &&func_5828017696, &&func_5828018784, &&RETURN };
    static void *exp_5828019344[3] = {&&func_5828019216, &&func_5828018784, &&RETURN };
    static void *exp_5828018512[4] = {&&func_5828019024, &&func_5828021408, &&func_5828017696, &&RETURN };
    static void *exp_5828019552[4] = {&&func_5828018240, &&func_5828021408, &&func_5828017456, &&RETURN };
    static void *exp_5828019680[3] = {&&func_5828017888, &&func_5828017632, &&RETURN };
    static void *exp_5828021616[4] = {&&func_5828021744, &&func_5828017456, &&func_5828021872, &&RETURN };
    static void *exp_5828022048[3] = {&&func_5828021744, &&func_5828021872, &&RETURN };
    static void *exp_5828022192[4] = {&&func_5828018592, &&func_5828020192, &&func_5828019024, &&RETURN };

func_5828017328:
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
            PC = func_5828017328_op0;
            break;
        case 1:
            PC = func_5828017328_op1;
            break;
    }
    goto **PC;
func_5828017888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5828017888_op0;
            break;
        case 1:
            PC = func_5828017888_op1;
            break;
        case 2:
            PC = func_5828017888_op2;
            break;
        case 3:
            PC = func_5828017888_op3;
            break;
        case 4:
            PC = func_5828017888_op4;
            break;
        case 5:
            PC = func_5828017888_op5;
            break;
        case 6:
            PC = func_5828017888_op6;
            break;
        case 7:
            PC = func_5828017888_op7;
            break;
        case 8:
            PC = func_5828017888_op8;
            break;
        case 9:
            PC = func_5828017888_op9;
            break;
    }
    goto **PC;
func_5828017696:
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
            PC = func_5828017696_op0;
            break;
        case 1:
            PC = func_5828017696_op1;
            break;
    }
    goto **PC;
func_5828017456:
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
            PC = func_5828017456_op0;
            break;
        case 1:
            PC = func_5828017456_op1;
            break;
    }
    goto **PC;
func_5828017632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5828017632_op0;
            break;
        case 1:
            PC = func_5828017632_op1;
            break;
    }
    goto **PC;
func_5828018112:
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
            PC = func_5828018112_op0;
            break;
        case 1:
            PC = func_5828018112_op1;
            break;
    }
    goto **PC;
func_5828018240:
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
            PC = func_5828018240_op0;
            break;
    }
    goto **PC;
func_5828018032:
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
            PC = func_5828018032_op0;
            break;
    }
    goto **PC;
func_5828018592:
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
            PC = func_5828018592_op0;
            break;
        case 1:
            PC = func_5828018592_op1;
            break;
        case 2:
            PC = func_5828018592_op2;
            break;
        case 3:
            PC = func_5828018592_op3;
            break;
        case 4:
            PC = func_5828018592_op4;
            break;
    }
    goto **PC;
func_5828019024:
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
            PC = func_5828019024_op0;
            break;
        case 1:
            PC = func_5828019024_op1;
            break;
        case 2:
            PC = func_5828019024_op2;
            break;
        case 3:
            PC = func_5828019024_op3;
            break;
        case 4:
            PC = func_5828019024_op4;
            break;
        case 5:
            PC = func_5828019024_op5;
            break;
        case 6:
            PC = func_5828019024_op6;
            break;
    }
    goto **PC;
func_5828018960:
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
    PC = exp_5828018960;
    goto **PC;
func_5828019216:
    extend(91);
    NEXT();
    goto **PC;
func_5828018784:
    extend(93);
    NEXT();
    goto **PC;
func_5828019344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828019344;
    goto **PC;
func_5828019808:
    extend(48);
    NEXT();
    goto **PC;
func_5828019936:
    extend(49);
    NEXT();
    goto **PC;
func_5828020064:
    extend(50);
    NEXT();
    goto **PC;
func_5828018656:
    extend(51);
    NEXT();
    goto **PC;
func_5828020448:
    extend(52);
    NEXT();
    goto **PC;
func_5828020640:
    extend(53);
    NEXT();
    goto **PC;
func_5828020768:
    extend(54);
    NEXT();
    goto **PC;
func_5828020896:
    extend(55);
    NEXT();
    goto **PC;
func_5828021024:
    extend(56);
    NEXT();
    goto **PC;
func_5828020576:
    extend(57);
    NEXT();
    goto **PC;
func_5828018512:
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
    PC = exp_5828018512;
    goto **PC;
func_5828021408:
    extend(44);
    NEXT();
    goto **PC;
func_5828019552:
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
    PC = exp_5828019552;
    goto **PC;
func_5828019680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828019680;
    goto **PC;
func_5828021616:
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
    PC = exp_5828021616;
    goto **PC;
func_5828021744:
    extend(123);
    NEXT();
    goto **PC;
func_5828021872:
    extend(125);
    NEXT();
    goto **PC;
func_5828022048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5828022048;
    goto **PC;
func_5828022192:
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
    PC = exp_5828022192;
    goto **PC;
func_5828020192:
    extend(58);
    NEXT();
    goto **PC;
func_5828021536:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_5828022960:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_5828023088:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_5828023248:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_5828023376:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_5828022800:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_5828023904:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5828024032:
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
    PC = func_5828018032_op0;
    goto **PC;
}
