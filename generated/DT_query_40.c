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
    static void *func_5458909808_op0[2] = { &&func_5458921056, &&RETURN };
    static void *func_5458909808_op1[2] = { &&func_5458921552, &&RETURN };
    static void *func_5458909808_op2[2] = { &&func_5458921680, &&RETURN };
    static void *func_5458909808_op3[2] = { &&func_5458921840, &&RETURN };
    static void *func_5458920016_op0[2] = { &&func_5458922048, &&RETURN };
    static void *func_5458920016_op1[2] = { &&func_5458922176, &&RETURN };
    static void *func_5458920320_op0[2] = { &&func_5458921424, &&RETURN };
    static void *func_5458920320_op1[2] = { &&func_5458920240, &&RETURN };
    static void *func_5458920320_op2[2] = { &&func_5458923232, &&RETURN };
    static void *func_5458920672_op0[2] = { &&func_5458923824, &&RETURN };
    static void *func_5458920672_op1[2] = { &&func_5458921968, &&RETURN };
    static void *func_5458920672_op2[2] = { &&func_5458924016, &&RETURN };
    static void *func_5458920672_op3[2] = { &&func_5458924176, &&RETURN };
    static void *func_5458920672_op4[2] = { &&func_5458924304, &&RETURN };
    static void *func_5458920672_op5[2] = { &&func_5458924496, &&RETURN };
    static void *func_5458920672_op6[2] = { &&func_5458924624, &&RETURN };
    static void *func_5458920672_op7[2] = { &&func_5458924752, &&RETURN };
    static void *func_5458920672_op8[2] = { &&func_5458924880, &&RETURN };
    static void *func_5458920672_op9[2] = { &&func_5458924432, &&RETURN };
    static void *func_5458920384_op0[2] = { &&func_5458920672, &&RETURN };
    static void *func_5458920384_op1[2] = { &&func_5458922688, &&RETURN };
    static void *func_5458919936_op0[2] = { &&func_5458921312, &&RETURN };
    static void *func_5458919808_op0[2] = { &&func_5458919936, &&HALT };
    static void *func_5458921136_op0[2] = { &&func_5458926032, &&RETURN };
    static void *func_5458921136_op1[2] = { &&func_5458926160, &&RETURN };
    static void *func_5458921136_op2[2] = { &&func_5458926288, &&RETURN };
    static void *func_5458921136_op3[2] = { &&func_5458926448, &&RETURN };
    static void *func_5458921136_op4[2] = { &&func_5458926576, &&RETURN };
    static void *func_5458921136_op5[2] = { &&func_5458926768, &&RETURN };
    static void *func_5458921136_op6[2] = { &&func_5458926896, &&RETURN };
    static void *func_5458921136_op7[2] = { &&func_5458927024, &&RETURN };
    static void *func_5458921136_op8[2] = { &&func_5458927152, &&RETURN };
    static void *func_5458921136_op9[2] = { &&func_5458926704, &&RETURN };
    static void *func_5458920176_op0[2] = { &&func_5458925920, &&RETURN };
    static void *func_5458920176_op1[2] = { &&func_5458923552, &&RETURN };
    static void *func_5458920176_op2[2] = { &&func_5458923680, &&RETURN };
    static void *func_5458920800_op0[2] = { &&func_5458920384, &&RETURN };
    static void *func_5458920800_op1[2] = { &&func_5458921136, &&RETURN };
    static void *func_5458920928_op0[2] = { &&func_5458925840, &&RETURN };
    static void *exp_5458922176[4] = {&&func_5458909808, &&func_5458922560, &&func_5458920016, &&RETURN };
    static void *exp_5458921424[4] = {&&func_5458909808, &&func_5458922912, &&func_5458920800, &&RETURN };
    static void *exp_5458920240[4] = {&&func_5458920320, &&func_5458923104, &&func_5458920320, &&RETURN };
    static void *exp_5458923232[4] = {&&func_5458920320, &&func_5458923360, &&func_5458920320, &&RETURN };
    static void *exp_5458922688[3] = {&&func_5458920672, &&func_5458920384, &&RETURN };
    static void *exp_5458921312[6] = {&&func_5458925520, &&func_5458920016, &&func_5458925648, &&func_5458920176, &&func_5458920928, &&RETURN };
    static void *exp_5458925840[3] = {&&func_5458927664, &&func_5458920320, &&RETURN };

func_5458909808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        goto **PC;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5458909808_op0;
            break;
        case 1:
            PC = func_5458909808_op1;
            break;
        case 2:
            PC = func_5458909808_op2;
            break;
        case 3:
            PC = func_5458909808_op3;
            break;
    }
    goto **PC;
func_5458920016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920016_op0;
            break;
        case 1:
            PC = func_5458920016_op1;
            break;
    }
    goto **PC;
func_5458920320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920320_op0;
            break;
        case 1:
            PC = func_5458920320_op1;
            break;
        case 2:
            PC = func_5458920320_op2;
            break;
    }
    goto **PC;
func_5458920672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920672_op0;
            break;
        case 1:
            PC = func_5458920672_op1;
            break;
        case 2:
            PC = func_5458920672_op2;
            break;
        case 3:
            PC = func_5458920672_op3;
            break;
        case 4:
            PC = func_5458920672_op4;
            break;
        case 5:
            PC = func_5458920672_op5;
            break;
        case 6:
            PC = func_5458920672_op6;
            break;
        case 7:
            PC = func_5458920672_op7;
            break;
        case 8:
            PC = func_5458920672_op8;
            break;
        case 9:
            PC = func_5458920672_op9;
            break;
    }
    goto **PC;
func_5458920384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920384_op0;
            break;
        case 1:
            PC = func_5458920384_op1;
            break;
    }
    goto **PC;
func_5458919936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5458919936_op0;
            break;
    }
    goto **PC;
func_5458919808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5458919808_op0;
            break;
    }
    goto **PC;
func_5458921136:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5458921136_op0;
            break;
        case 1:
            PC = func_5458921136_op1;
            break;
        case 2:
            PC = func_5458921136_op2;
            break;
        case 3:
            PC = func_5458921136_op3;
            break;
        case 4:
            PC = func_5458921136_op4;
            break;
        case 5:
            PC = func_5458921136_op5;
            break;
        case 6:
            PC = func_5458921136_op6;
            break;
        case 7:
            PC = func_5458921136_op7;
            break;
        case 8:
            PC = func_5458921136_op8;
            break;
        case 9:
            PC = func_5458921136_op9;
            break;
    }
    goto **PC;
func_5458920176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920176_op0;
            break;
        case 1:
            PC = func_5458920176_op1;
            break;
        case 2:
            PC = func_5458920176_op2;
            break;
    }
    goto **PC;
func_5458920800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920800_op0;
            break;
        case 1:
            PC = func_5458920800_op1;
            break;
    }
    goto **PC;
func_5458920928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5458920928_op0;
            break;
    }
    goto **PC;
func_5458921056:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5458921552:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5458921680:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5458921840:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5458922048:
    extend(42);
    NEXT();
    goto **PC;
func_5458922176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458922176;
    goto **PC;
func_5458922560:
    extend(44);
    NEXT();
    goto **PC;
func_5458921424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458921424;
    goto **PC;
func_5458922912:
    extend(61);
    NEXT();
    goto **PC;
func_5458920240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458920240;
    goto **PC;
func_5458923104:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5458923232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458923232;
    goto **PC;
func_5458923360:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5458923824:
    extend(48);
    NEXT();
    goto **PC;
func_5458921968:
    extend(49);
    NEXT();
    goto **PC;
func_5458924016:
    extend(50);
    NEXT();
    goto **PC;
func_5458924176:
    extend(51);
    NEXT();
    goto **PC;
func_5458924304:
    extend(52);
    NEXT();
    goto **PC;
func_5458924496:
    extend(53);
    NEXT();
    goto **PC;
func_5458924624:
    extend(54);
    NEXT();
    goto **PC;
func_5458924752:
    extend(55);
    NEXT();
    goto **PC;
func_5458924880:
    extend(56);
    NEXT();
    goto **PC;
func_5458924432:
    extend(57);
    NEXT();
    goto **PC;
func_5458922688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458922688;
    goto **PC;
func_5458921312:
    if(stack_top == frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458921312;
    goto **PC;
func_5458925520:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5458925648:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5458926032:
    extend(97);
    NEXT();
    goto **PC;
func_5458926160:
    extend(98);
    NEXT();
    goto **PC;
func_5458926288:
    extend(99);
    NEXT();
    goto **PC;
func_5458926448:
    extend(100);
    NEXT();
    goto **PC;
func_5458926576:
    extend(101);
    NEXT();
    goto **PC;
func_5458926768:
    extend(102);
    NEXT();
    goto **PC;
func_5458926896:
    extend(103);
    NEXT();
    goto **PC;
func_5458927024:
    extend(104);
    NEXT();
    goto **PC;
func_5458927152:
    extend(105);
    NEXT();
    goto **PC;
func_5458926704:
    extend(106);
    NEXT();
    goto **PC;
func_5458925920:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5458923552:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5458923680:
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
    goto **PC;
func_5458925840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5458925840;
    goto **PC;
func_5458927664:
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC = func_5458919808_op0;
    goto **PC;
}
