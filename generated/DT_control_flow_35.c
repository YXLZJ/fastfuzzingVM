#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 35
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
    static void *func_4896888352_op0[2] = { &&func_4896890176, &&RETURN };
    static void *func_4896888720_op0[2] = { &&func_4896891472, &&RETURN };
    static void *func_4896888720_op1[2] = { &&func_4896891728, &&RETURN };
    static void *func_4896888720_op2[2] = { &&func_4896891984, &&RETURN };
    static void *func_4896889136_op0[2] = { &&func_4896892496, &&RETURN };
    static void *func_4896889136_op1[2] = { &&func_4896890080, &&RETURN };
    static void *func_4896889136_op2[2] = { &&func_4896892688, &&RETURN };
    static void *func_4896889136_op3[2] = { &&func_4896892816, &&RETURN };
    static void *func_4896889136_op4[2] = { &&func_4896892944, &&RETURN };
    static void *func_4896889136_op5[2] = { &&func_4896893136, &&RETURN };
    static void *func_4896889136_op6[2] = { &&func_4896893264, &&RETURN };
    static void *func_4896889136_op7[2] = { &&func_4896893392, &&RETURN };
    static void *func_4896889136_op8[2] = { &&func_4896893520, &&RETURN };
    static void *func_4896889136_op9[2] = { &&func_4896893072, &&RETURN };
    static void *func_4896889232_op0[2] = { &&func_4896894096, &&RETURN };
    static void *func_4896889232_op1[2] = { &&func_4896891264, &&RETURN };
    static void *func_4896889232_op2[2] = { &&func_4896890608, &&RETURN };
    static void *func_4896889008_op0[2] = { &&func_4896892400, &&RETURN };
    static void *func_4896889008_op1[2] = { &&func_4896889360, &&RETURN };
    static void *func_4896889008_op2[2] = { &&func_4896889632, &&RETURN };
    static void *func_4896888928_op0[2] = { &&func_4896892240, &&RETURN };
    static void *func_4896889632_op0[2] = { &&func_4896895248, &&RETURN };
    static void *func_4896889632_op1[2] = { &&func_4896895920, &&RETURN };
    static void *func_4896889632_op2[2] = { &&func_4896896048, &&RETURN };
    static void *func_4896889632_op3[2] = { &&func_4896896176, &&RETURN };
    static void *func_4896889632_op4[2] = { &&func_4896896304, &&RETURN };
    static void *func_4896889632_op5[2] = { &&func_4896896496, &&RETURN };
    static void *func_4896889632_op6[2] = { &&func_4896896624, &&RETURN };
    static void *func_4896889632_op7[2] = { &&func_4896896752, &&RETURN };
    static void *func_4896889632_op8[2] = { &&func_4896896880, &&RETURN };
    static void *func_4896888848_op0[2] = { &&func_4896896432, &&RETURN };
    static void *func_4896888848_op1[2] = { &&func_4896894896, &&RETURN };
    static void *func_4896889360_op0[2] = { &&func_4896889136, &&RETURN };
    static void *func_4896889360_op1[2] = { &&func_4896895072, &&RETURN };
    static void *func_4896889888_op0[2] = { &&func_4896897136, &&RETURN };
    static void *func_4896889552_op0[2] = { &&func_4896897776, &&RETURN };
    static void *func_4896889824_op0[2] = { &&func_4896889552, &&HALT };
    static void *func_4896890240_op0[2] = { &&func_4896888848, &&RETURN };
    static void *func_4896890240_op1[2] = { &&func_4896890448, &&RETURN };
    static void *func_4896890240_op2[2] = { &&func_4896888928, &&RETURN };
    static void *func_4896890240_op3[2] = { &&func_4896888352, &&RETURN };
    static void *func_4896890240_op4[2] = { &&func_4896889888, &&RETURN };
    static void *func_4896890608_op0[2] = { &&func_4896898624, &&RETURN };
    static void *func_4896890608_op1[2] = { &&func_4896897904, &&RETURN };
    static void *func_4896890608_op2[2] = { &&func_4896889008, &&RETURN };
    static void *func_4896890448_op0[2] = { &&func_4896898560, &&RETURN };
    static void *exp_4896890176[5] = {&&func_4896889632, &&func_4896890368, &&func_4896889232, &&func_4896889424, &&RETURN };
    static void *exp_4896891472[4] = {&&func_4896889232, &&func_4896891600, &&func_4896889232, &&RETURN };
    static void *exp_4896891728[4] = {&&func_4896889232, &&func_4896891856, &&func_4896889232, &&RETURN };
    static void *exp_4896891984[4] = {&&func_4896889232, &&func_4896892112, &&func_4896889232, &&RETURN };
    static void *exp_4896894096[4] = {&&func_4896889232, &&func_4896894224, &&func_4896890608, &&RETURN };
    static void *exp_4896891264[4] = {&&func_4896889232, &&func_4896891392, &&func_4896890608, &&RETURN };
    static void *exp_4896892400[4] = {&&func_4896894576, &&func_4896889232, &&func_4896894704, &&RETURN };
    static void *exp_4896892240[12] = {&&func_4896895472, &&func_4896894576, &&func_4896888352, &&func_4896889424, &&func_4896888720, &&func_4896889424, &&func_4896888352, &&func_4896894704, &&func_4896895600, &&func_4896889552, &&func_4896890736, &&RETURN };
    static void *exp_4896896432[8] = {&&func_4896897648, &&func_4896894576, &&func_4896888720, &&func_4896894704, &&func_4896895600, &&func_4896889552, &&func_4896890736, &&RETURN };
    static void *exp_4896894896[12] = {&&func_4896897648, &&func_4896894576, &&func_4896888720, &&func_4896894704, &&func_4896895600, &&func_4896889552, &&func_4896890736, &&func_4896897472, &&func_4896895600, &&func_4896889552, &&func_4896890736, &&RETURN };
    static void *exp_4896895072[3] = {&&func_4896889136, &&func_4896889360, &&RETURN };
    static void *exp_4896897136[6] = {&&func_4896897264, &&func_4896894576, &&func_4896889232, &&func_4896894704, &&func_4896889424, &&RETURN };
    static void *exp_4896897776[3] = {&&func_4896890240, &&func_4896889552, &&RETURN };
    static void *exp_4896898624[4] = {&&func_4896890608, &&func_4896898752, &&func_4896889008, &&RETURN };
    static void *exp_4896897904[4] = {&&func_4896890608, &&func_4896893584, &&func_4896889008, &&RETURN };
    static void *exp_4896898560[8] = {&&func_4896893952, &&func_4896894576, &&func_4896888720, &&func_4896894704, &&func_4896895600, &&func_4896889552, &&func_4896890736, &&RETURN };

func_4896888352:
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
            PC = func_4896888352_op0;
            break;
    }
    goto **PC;
func_4896888720:
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
            PC = func_4896888720_op0;
            break;
        case 1:
            PC = func_4896888720_op1;
            break;
        case 2:
            PC = func_4896888720_op2;
            break;
    }
    goto **PC;
func_4896889136:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889136_op0;
            break;
        case 1:
            PC = func_4896889136_op1;
            break;
        case 2:
            PC = func_4896889136_op2;
            break;
        case 3:
            PC = func_4896889136_op3;
            break;
        case 4:
            PC = func_4896889136_op4;
            break;
        case 5:
            PC = func_4896889136_op5;
            break;
        case 6:
            PC = func_4896889136_op6;
            break;
        case 7:
            PC = func_4896889136_op7;
            break;
        case 8:
            PC = func_4896889136_op8;
            break;
        case 9:
            PC = func_4896889136_op9;
            break;
    }
    goto **PC;
func_4896889232:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889232_op0;
            break;
        case 1:
            PC = func_4896889232_op1;
            break;
        case 2:
            PC = func_4896889232_op2;
            break;
    }
    goto **PC;
func_4896889008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889008_op0;
            break;
        case 1:
            PC = func_4896889008_op1;
            break;
        case 2:
            PC = func_4896889008_op2;
            break;
    }
    goto **PC;
func_4896888928:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4896888928_op0;
            break;
    }
    goto **PC;
func_4896889632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889632_op0;
            break;
        case 1:
            PC = func_4896889632_op1;
            break;
        case 2:
            PC = func_4896889632_op2;
            break;
        case 3:
            PC = func_4896889632_op3;
            break;
        case 4:
            PC = func_4896889632_op4;
            break;
        case 5:
            PC = func_4896889632_op5;
            break;
        case 6:
            PC = func_4896889632_op6;
            break;
        case 7:
            PC = func_4896889632_op7;
            break;
        case 8:
            PC = func_4896889632_op8;
            break;
    }
    goto **PC;
func_4896888848:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4896888848_op0;
            break;
        case 1:
            PC = func_4896888848_op1;
            break;
    }
    goto **PC;
func_4896889360:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889360_op0;
            break;
        case 1:
            PC = func_4896889360_op1;
            break;
    }
    goto **PC;
func_4896889888:
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
            PC = func_4896889888_op0;
            break;
    }
    goto **PC;
func_4896889552:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889552_op0;
            break;
    }
    goto **PC;
func_4896889824:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4896889824_op0;
            break;
    }
    goto **PC;
func_4896890240:
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
            PC = func_4896890240_op0;
            break;
        case 1:
            PC = func_4896890240_op1;
            break;
        case 2:
            PC = func_4896890240_op2;
            break;
        case 3:
            PC = func_4896890240_op3;
            break;
        case 4:
            PC = func_4896890240_op4;
            break;
    }
    goto **PC;
func_4896890608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4896890608_op0;
            break;
        case 1:
            PC = func_4896890608_op1;
            break;
        case 2:
            PC = func_4896890608_op2;
            break;
    }
    goto **PC;
func_4896890448:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4896890448_op0;
            break;
    }
    goto **PC;
func_4896890176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896890176;
    goto **PC;
func_4896890368:
    extend(61);
    NEXT();
    goto **PC;
func_4896889424:
    extend(59);
    NEXT();
    goto **PC;
func_4896891472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896891472;
    goto **PC;
func_4896891600:
    extend(62);
    NEXT();
    goto **PC;
func_4896891728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896891728;
    goto **PC;
func_4896891856:
    extend(60);
    NEXT();
    goto **PC;
func_4896891984:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896891984;
    goto **PC;
func_4896892112:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4896892496:
    extend(48);
    NEXT();
    goto **PC;
func_4896890080:
    extend(49);
    NEXT();
    goto **PC;
func_4896892688:
    extend(50);
    NEXT();
    goto **PC;
func_4896892816:
    extend(51);
    NEXT();
    goto **PC;
func_4896892944:
    extend(52);
    NEXT();
    goto **PC;
func_4896893136:
    extend(53);
    NEXT();
    goto **PC;
func_4896893264:
    extend(54);
    NEXT();
    goto **PC;
func_4896893392:
    extend(55);
    NEXT();
    goto **PC;
func_4896893520:
    extend(56);
    NEXT();
    goto **PC;
func_4896893072:
    extend(57);
    NEXT();
    goto **PC;
func_4896894096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896894096;
    goto **PC;
func_4896894224:
    extend(43);
    NEXT();
    goto **PC;
func_4896891264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896891264;
    goto **PC;
func_4896891392:
    extend(45);
    NEXT();
    goto **PC;
func_4896892400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896892400;
    goto **PC;
func_4896894576:
    extend(40);
    NEXT();
    goto **PC;
func_4896894704:
    extend(41);
    NEXT();
    goto **PC;
func_4896892240:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896892240;
    goto **PC;
func_4896895472:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_4896895600:
    extend(123);
    NEXT();
    goto **PC;
func_4896890736:
    extend(125);
    NEXT();
    goto **PC;
func_4896895248:
    extend(105);
    NEXT();
    goto **PC;
func_4896895920:
    extend(106);
    NEXT();
    goto **PC;
func_4896896048:
    extend(107);
    NEXT();
    goto **PC;
func_4896896176:
    extend(120);
    NEXT();
    goto **PC;
func_4896896304:
    extend(121);
    NEXT();
    goto **PC;
func_4896896496:
    extend(122);
    NEXT();
    goto **PC;
func_4896896624:
    extend(97);
    NEXT();
    goto **PC;
func_4896896752:
    extend(98);
    NEXT();
    goto **PC;
func_4896896880:
    extend(99);
    NEXT();
    goto **PC;
func_4896896432:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896896432;
    goto **PC;
func_4896897648:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4896894896:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896894896;
    goto **PC;
func_4896897472:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4896895072:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896895072;
    goto **PC;
func_4896897136:
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
    PC = exp_4896897136;
    goto **PC;
func_4896897264:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4896897776:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896897776;
    goto **PC;
func_4896898624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896898624;
    goto **PC;
func_4896898752:
    extend(42);
    NEXT();
    goto **PC;
func_4896897904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896897904;
    goto **PC;
func_4896893584:
    extend(47);
    NEXT();
    goto **PC;
func_4896898560:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4896898560;
    goto **PC;
func_4896893952:
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
    PC = func_4896889824_op0;
    goto **PC;
}
