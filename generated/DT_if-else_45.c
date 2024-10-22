#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 45
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
    static void *func_4980761312_op0[2] = { &&func_4980772336, &&RETURN };
    static void *func_4980770752_op0[2] = { &&func_4980772960, &&RETURN };
    static void *func_4980770752_op1[2] = { &&func_4980771408, &&RETURN };
    static void *func_4980770752_op2[2] = { &&func_4980773600, &&RETURN };
    static void *func_4980770672_op0[2] = { &&func_4980773856, &&RETURN };
    static void *func_4980770672_op1[2] = { &&func_4980772112, &&RETURN };
    static void *func_4980770672_op2[2] = { &&func_4980774144, &&RETURN };
    static void *func_4980770592_op0[2] = { &&func_4980771744, &&RETURN };
    static void *func_4980770592_op1[2] = { &&func_4980771216, &&RETURN };
    static void *func_4980771216_op0[2] = { &&func_4980774496, &&RETURN };
    static void *func_4980771216_op1[2] = { &&func_4980774624, &&RETURN };
    static void *func_4980771216_op2[2] = { &&func_4980774752, &&RETURN };
    static void *func_4980771216_op3[2] = { &&func_4980774880, &&RETURN };
    static void *func_4980771216_op4[2] = { &&func_4980775008, &&RETURN };
    static void *func_4980771216_op5[2] = { &&func_4980775200, &&RETURN };
    static void *func_4980770320_op0[2] = { &&func_4980774432, &&RETURN };
    static void *func_4980770320_op1[2] = { &&func_4980776624, &&RETURN };
    static void *func_4980771744_op0[2] = { &&func_4980775856, &&RETURN };
    static void *func_4980771744_op1[2] = { &&func_4980772848, &&RETURN };
    static void *func_4980771744_op2[2] = { &&func_4980777264, &&RETURN };
    static void *func_4980771744_op3[2] = { &&func_4980777392, &&RETURN };
    static void *func_4980771744_op4[2] = { &&func_4980777520, &&RETURN };
    static void *func_4980771744_op5[2] = { &&func_4980777712, &&RETURN };
    static void *func_4980771744_op6[2] = { &&func_4980777840, &&RETURN };
    static void *func_4980771744_op7[2] = { &&func_4980777968, &&RETURN };
    static void *func_4980771744_op8[2] = { &&func_4980778096, &&RETURN };
    static void *func_4980771744_op9[2] = { &&func_4980777648, &&RETURN };
    static void *func_4980770512_op0[2] = { &&func_4980778416, &&RETURN };
    static void *func_4980771040_op0[2] = { &&func_4980770320, &&HALT };
    static void *func_4980771104_op0[2] = { &&func_4980770320, &&RETURN };
    static void *func_4980771104_op1[2] = { &&func_4980761312, &&RETURN };
    static void *func_4980771104_op2[2] = { &&func_4980770512, &&RETURN };
    static void *func_4980771984_op0[2] = { &&func_4980775680, &&RETURN };
    static void *func_4980771984_op1[2] = { &&func_4980775392, &&RETURN };
    static void *func_4980772112_op0[2] = { &&func_4980770592, &&RETURN };
    static void *func_4980772112_op1[2] = { &&func_4980778816, &&RETURN };
    static void *exp_4980772336[5] = {&&func_4980771216, &&func_4980772464, &&func_4980770672, &&func_4980772592, &&RETURN };
    static void *exp_4980772960[4] = {&&func_4980770672, &&func_4980773088, &&func_4980770672, &&RETURN };
    static void *exp_4980771408[4] = {&&func_4980770672, &&func_4980773472, &&func_4980770672, &&RETURN };
    static void *exp_4980773600[4] = {&&func_4980770672, &&func_4980773728, &&func_4980770672, &&RETURN };
    static void *exp_4980773856[4] = {&&func_4980772112, &&func_4980773984, &&func_4980770672, &&RETURN };
    static void *exp_4980774144[4] = {&&func_4980772112, &&func_4980774272, &&func_4980770672, &&RETURN };
    static void *exp_4980774432[12] = {&&func_4980772240, &&func_4980773216, &&func_4980770752, &&func_4980773344, &&func_4980772784, &&func_4980771984, &&func_4980776688, &&func_4980776816, &&func_4980772784, &&func_4980771984, &&func_4980776688, &&RETURN };
    static void *exp_4980776624[8] = {&&func_4980772240, &&func_4980773216, &&func_4980770752, &&func_4980773344, &&func_4980772784, &&func_4980771984, &&func_4980776688, &&RETURN };
    static void *exp_4980778416[6] = {&&func_4980778544, &&func_4980773216, &&func_4980770672, &&func_4980773344, &&func_4980772592, &&RETURN };
    static void *exp_4980775680[3] = {&&func_4980771104, &&func_4980771984, &&RETURN };
    static void *exp_4980775392[1] = {&&RETURN };
    static void *exp_4980778816[4] = {&&func_4980770592, &&func_4980778944, &&func_4980772112, &&RETURN };

func_4980761312:
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
            PC = func_4980761312_op0;
            break;
    }
    goto **PC;
func_4980770752:
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
            PC = func_4980770752_op0;
            break;
        case 1:
            PC = func_4980770752_op1;
            break;
        case 2:
            PC = func_4980770752_op2;
            break;
    }
    goto **PC;
func_4980770672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4980770672_op0;
            break;
        case 1:
            PC = func_4980770672_op1;
            break;
        case 2:
            PC = func_4980770672_op2;
            break;
    }
    goto **PC;
func_4980770592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4980770592_op0;
            break;
        case 1:
            PC = func_4980770592_op1;
            break;
    }
    goto **PC;
func_4980771216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4980771216_op0;
            break;
        case 1:
            PC = func_4980771216_op1;
            break;
        case 2:
            PC = func_4980771216_op2;
            break;
        case 3:
            PC = func_4980771216_op3;
            break;
        case 4:
            PC = func_4980771216_op4;
            break;
        case 5:
            PC = func_4980771216_op5;
            break;
    }
    goto **PC;
func_4980770320:
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
            PC = func_4980770320_op0;
            break;
        case 1:
            PC = func_4980770320_op1;
            break;
    }
    goto **PC;
func_4980771744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4980771744_op0;
            break;
        case 1:
            PC = func_4980771744_op1;
            break;
        case 2:
            PC = func_4980771744_op2;
            break;
        case 3:
            PC = func_4980771744_op3;
            break;
        case 4:
            PC = func_4980771744_op4;
            break;
        case 5:
            PC = func_4980771744_op5;
            break;
        case 6:
            PC = func_4980771744_op6;
            break;
        case 7:
            PC = func_4980771744_op7;
            break;
        case 8:
            PC = func_4980771744_op8;
            break;
        case 9:
            PC = func_4980771744_op9;
            break;
    }
    goto **PC;
func_4980770512:
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
            PC = func_4980770512_op0;
            break;
    }
    goto **PC;
func_4980771040:
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
            PC = func_4980771040_op0;
            break;
    }
    goto **PC;
func_4980771104:
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
            PC = func_4980771104_op0;
            break;
        case 1:
            PC = func_4980771104_op1;
            break;
        case 2:
            PC = func_4980771104_op2;
            break;
    }
    goto **PC;
func_4980771984:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4980771984_op0;
            break;
        case 1:
            PC = func_4980771984_op1;
            break;
    }
    goto **PC;
func_4980772112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4980772112_op0;
            break;
        case 1:
            PC = func_4980772112_op1;
            break;
    }
    goto **PC;
func_4980772336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980772336;
    goto **PC;
func_4980772464:
    extend(61);
    NEXT();
    goto **PC;
func_4980772592:
    extend(59);
    NEXT();
    goto **PC;
func_4980772960:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980772960;
    goto **PC;
func_4980773088:
    extend(62);
    NEXT();
    goto **PC;
func_4980771408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980771408;
    goto **PC;
func_4980773472:
    extend(60);
    NEXT();
    goto **PC;
func_4980773600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980773600;
    goto **PC;
func_4980773728:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4980773856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980773856;
    goto **PC;
func_4980773984:
    extend(43);
    NEXT();
    goto **PC;
func_4980774144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980774144;
    goto **PC;
func_4980774272:
    extend(45);
    NEXT();
    goto **PC;
func_4980774496:
    extend(120);
    NEXT();
    goto **PC;
func_4980774624:
    extend(121);
    NEXT();
    goto **PC;
func_4980774752:
    extend(122);
    NEXT();
    goto **PC;
func_4980774880:
    extend(97);
    NEXT();
    goto **PC;
func_4980775008:
    extend(98);
    NEXT();
    goto **PC;
func_4980775200:
    extend(99);
    NEXT();
    goto **PC;
func_4980774432:
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
    PC = exp_4980774432;
    goto **PC;
func_4980772240:
    extend(105);
    extend(102);
    NEXT();
    goto **PC;
func_4980773216:
    extend(40);
    NEXT();
    goto **PC;
func_4980773344:
    extend(41);
    NEXT();
    goto **PC;
func_4980772784:
    extend(123);
    NEXT();
    goto **PC;
func_4980776688:
    extend(125);
    NEXT();
    goto **PC;
func_4980776816:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4980776624:
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
    PC = exp_4980776624;
    goto **PC;
func_4980775856:
    extend(48);
    NEXT();
    goto **PC;
func_4980772848:
    extend(49);
    NEXT();
    goto **PC;
func_4980777264:
    extend(50);
    NEXT();
    goto **PC;
func_4980777392:
    extend(51);
    NEXT();
    goto **PC;
func_4980777520:
    extend(52);
    NEXT();
    goto **PC;
func_4980777712:
    extend(53);
    NEXT();
    goto **PC;
func_4980777840:
    extend(54);
    NEXT();
    goto **PC;
func_4980777968:
    extend(55);
    NEXT();
    goto **PC;
func_4980778096:
    extend(56);
    NEXT();
    goto **PC;
func_4980777648:
    extend(57);
    NEXT();
    goto **PC;
func_4980778416:
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
    PC = exp_4980778416;
    goto **PC;
func_4980778544:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto **PC;
func_4980775680:
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
    PC = exp_4980775680;
    goto **PC;
func_4980775392:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980775392;
    goto **PC;
func_4980778816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4980778816;
    goto **PC;
func_4980778944:
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
    PC = func_4980771040_op0;
    goto **PC;
}
