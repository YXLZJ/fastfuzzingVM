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
    static void *func_4829772976_op0[2] = { &&func_4829774608, &&RETURN };
    static void *func_4829772976_op1[2] = { &&func_4829774992, &&RETURN };
    static void *func_4829773536_op0[2] = { &&func_4829775456, &&RETURN };
    static void *func_4829773536_op1[2] = { &&func_4829775584, &&RETURN };
    static void *func_4829773536_op2[2] = { &&func_4829775712, &&RETURN };
    static void *func_4829773536_op3[2] = { &&func_4829774304, &&RETURN };
    static void *func_4829773536_op4[2] = { &&func_4829776096, &&RETURN };
    static void *func_4829773536_op5[2] = { &&func_4829776288, &&RETURN };
    static void *func_4829773536_op6[2] = { &&func_4829776416, &&RETURN };
    static void *func_4829773536_op7[2] = { &&func_4829776544, &&RETURN };
    static void *func_4829773536_op8[2] = { &&func_4829776672, &&RETURN };
    static void *func_4829773536_op9[2] = { &&func_4829776224, &&RETURN };
    static void *func_4829773344_op0[2] = { &&func_4829774160, &&RETURN };
    static void *func_4829773344_op1[2] = { &&func_4829774672, &&RETURN };
    static void *func_4829773104_op0[2] = { &&func_4829775200, &&RETURN };
    static void *func_4829773104_op1[2] = { &&func_4829773888, &&RETURN };
    static void *func_4829773280_op0[2] = { &&func_4829773536, &&RETURN };
    static void *func_4829773280_op1[2] = { &&func_4829775328, &&RETURN };
    static void *func_4829773760_op0[2] = { &&func_4829777264, &&RETURN };
    static void *func_4829773760_op1[2] = { &&func_4829777696, &&RETURN };
    static void *func_4829773888_op0[2] = { &&func_4829777840, &&RETURN };
    static void *func_4829773680_op0[2] = { &&func_4829774672, &&HALT };
    static void *func_4829774240_op0[2] = { &&func_4829777184, &&RETURN };
    static void *func_4829774240_op1[2] = { &&func_4829778608, &&RETURN };
    static void *func_4829774240_op2[2] = { &&func_4829778736, &&RETURN };
    static void *func_4829774240_op3[2] = { &&func_4829778896, &&RETURN };
    static void *func_4829774240_op4[2] = { &&func_4829779024, &&RETURN };
    static void *func_4829774672_op0[2] = { &&func_4829773760, &&RETURN };
    static void *func_4829774672_op1[2] = { &&func_4829772976, &&RETURN };
    static void *func_4829774672_op2[2] = { &&func_4829774240, &&RETURN };
    static void *func_4829774672_op3[2] = { &&func_4829773280, &&RETURN };
    static void *func_4829774672_op4[2] = { &&func_4829778448, &&RETURN };
    static void *func_4829774672_op5[2] = { &&func_4829779552, &&RETURN };
    static void *func_4829774672_op6[2] = { &&func_4829779680, &&RETURN };
    static void *exp_4829774608[4] = {&&func_4829774864, &&func_4829773344, &&func_4829774432, &&RETURN };
    static void *exp_4829774992[3] = {&&func_4829774864, &&func_4829774432, &&RETURN };
    static void *exp_4829774160[4] = {&&func_4829774672, &&func_4829777056, &&func_4829773344, &&RETURN };
    static void *exp_4829775200[4] = {&&func_4829773888, &&func_4829777056, &&func_4829773104, &&RETURN };
    static void *exp_4829775328[3] = {&&func_4829773536, &&func_4829773280, &&RETURN };
    static void *exp_4829777264[4] = {&&func_4829777392, &&func_4829773104, &&func_4829777520, &&RETURN };
    static void *exp_4829777696[3] = {&&func_4829777392, &&func_4829777520, &&RETURN };
    static void *exp_4829777840[4] = {&&func_4829774240, &&func_4829775840, &&func_4829774672, &&RETURN };

func_4829772976:
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
            PC = func_4829772976_op0;
            break;
        case 1:
            PC = func_4829772976_op1;
            break;
    }
    goto **PC;
func_4829773536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4829773536_op0;
            break;
        case 1:
            PC = func_4829773536_op1;
            break;
        case 2:
            PC = func_4829773536_op2;
            break;
        case 3:
            PC = func_4829773536_op3;
            break;
        case 4:
            PC = func_4829773536_op4;
            break;
        case 5:
            PC = func_4829773536_op5;
            break;
        case 6:
            PC = func_4829773536_op6;
            break;
        case 7:
            PC = func_4829773536_op7;
            break;
        case 8:
            PC = func_4829773536_op8;
            break;
        case 9:
            PC = func_4829773536_op9;
            break;
    }
    goto **PC;
func_4829773344:
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
            PC = func_4829773344_op0;
            break;
        case 1:
            PC = func_4829773344_op1;
            break;
    }
    goto **PC;
func_4829773104:
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
            PC = func_4829773104_op0;
            break;
        case 1:
            PC = func_4829773104_op1;
            break;
    }
    goto **PC;
func_4829773280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4829773280_op0;
            break;
        case 1:
            PC = func_4829773280_op1;
            break;
    }
    goto **PC;
func_4829773760:
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
            PC = func_4829773760_op0;
            break;
        case 1:
            PC = func_4829773760_op1;
            break;
    }
    goto **PC;
func_4829773888:
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
            PC = func_4829773888_op0;
            break;
    }
    goto **PC;
func_4829773680:
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
            PC = func_4829773680_op0;
            break;
    }
    goto **PC;
func_4829774240:
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
            PC = func_4829774240_op0;
            break;
        case 1:
            PC = func_4829774240_op1;
            break;
        case 2:
            PC = func_4829774240_op2;
            break;
        case 3:
            PC = func_4829774240_op3;
            break;
        case 4:
            PC = func_4829774240_op4;
            break;
    }
    goto **PC;
func_4829774672:
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
            PC = func_4829774672_op0;
            break;
        case 1:
            PC = func_4829774672_op1;
            break;
        case 2:
            PC = func_4829774672_op2;
            break;
        case 3:
            PC = func_4829774672_op3;
            break;
        case 4:
            PC = func_4829774672_op4;
            break;
        case 5:
            PC = func_4829774672_op5;
            break;
        case 6:
            PC = func_4829774672_op6;
            break;
    }
    goto **PC;
func_4829774608:
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
    PC = exp_4829774608;
    goto **PC;
func_4829774864:
    extend(91);
    NEXT();
    goto **PC;
func_4829774432:
    extend(93);
    NEXT();
    goto **PC;
func_4829774992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829774992;
    goto **PC;
func_4829775456:
    extend(48);
    NEXT();
    goto **PC;
func_4829775584:
    extend(49);
    NEXT();
    goto **PC;
func_4829775712:
    extend(50);
    NEXT();
    goto **PC;
func_4829774304:
    extend(51);
    NEXT();
    goto **PC;
func_4829776096:
    extend(52);
    NEXT();
    goto **PC;
func_4829776288:
    extend(53);
    NEXT();
    goto **PC;
func_4829776416:
    extend(54);
    NEXT();
    goto **PC;
func_4829776544:
    extend(55);
    NEXT();
    goto **PC;
func_4829776672:
    extend(56);
    NEXT();
    goto **PC;
func_4829776224:
    extend(57);
    NEXT();
    goto **PC;
func_4829774160:
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
    PC = exp_4829774160;
    goto **PC;
func_4829777056:
    extend(44);
    NEXT();
    goto **PC;
func_4829775200:
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
    PC = exp_4829775200;
    goto **PC;
func_4829775328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829775328;
    goto **PC;
func_4829777264:
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
    PC = exp_4829777264;
    goto **PC;
func_4829777392:
    extend(123);
    NEXT();
    goto **PC;
func_4829777520:
    extend(125);
    NEXT();
    goto **PC;
func_4829777696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4829777696;
    goto **PC;
func_4829777840:
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
    PC = exp_4829777840;
    goto **PC;
func_4829775840:
    extend(58);
    NEXT();
    goto **PC;
func_4829777184:
    extend(34);
    extend(97);
    extend(34);
    NEXT();
    goto **PC;
func_4829778608:
    extend(34);
    extend(98);
    extend(34);
    NEXT();
    goto **PC;
func_4829778736:
    extend(34);
    extend(99);
    extend(34);
    NEXT();
    goto **PC;
func_4829778896:
    extend(34);
    extend(100);
    extend(34);
    NEXT();
    goto **PC;
func_4829779024:
    extend(34);
    extend(101);
    extend(34);
    NEXT();
    goto **PC;
func_4829778448:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
    goto **PC;
func_4829779552:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4829779680:
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
    PC = func_4829773680_op0;
    goto **PC;
}
