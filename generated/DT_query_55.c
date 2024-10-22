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
    static void *func_5106588272_op0[2] = { &&func_5106599520, &&RETURN };
    static void *func_5106588272_op1[2] = { &&func_5106600016, &&RETURN };
    static void *func_5106588272_op2[2] = { &&func_5106600144, &&RETURN };
    static void *func_5106588272_op3[2] = { &&func_5106600304, &&RETURN };
    static void *func_5106598480_op0[2] = { &&func_5106600512, &&RETURN };
    static void *func_5106598480_op1[2] = { &&func_5106600640, &&RETURN };
    static void *func_5106598784_op0[2] = { &&func_5106599888, &&RETURN };
    static void *func_5106598784_op1[2] = { &&func_5106598704, &&RETURN };
    static void *func_5106598784_op2[2] = { &&func_5106601696, &&RETURN };
    static void *func_5106599136_op0[2] = { &&func_5106602288, &&RETURN };
    static void *func_5106599136_op1[2] = { &&func_5106600432, &&RETURN };
    static void *func_5106599136_op2[2] = { &&func_5106602480, &&RETURN };
    static void *func_5106599136_op3[2] = { &&func_5106602640, &&RETURN };
    static void *func_5106599136_op4[2] = { &&func_5106602768, &&RETURN };
    static void *func_5106599136_op5[2] = { &&func_5106602960, &&RETURN };
    static void *func_5106599136_op6[2] = { &&func_5106603088, &&RETURN };
    static void *func_5106599136_op7[2] = { &&func_5106603216, &&RETURN };
    static void *func_5106599136_op8[2] = { &&func_5106603344, &&RETURN };
    static void *func_5106599136_op9[2] = { &&func_5106602896, &&RETURN };
    static void *func_5106598848_op0[2] = { &&func_5106599136, &&RETURN };
    static void *func_5106598848_op1[2] = { &&func_5106601152, &&RETURN };
    static void *func_5106598400_op0[2] = { &&func_5106599776, &&RETURN };
    static void *func_5106598272_op0[2] = { &&func_5106598400, &&HALT };
    static void *func_5106599600_op0[2] = { &&func_5106604496, &&RETURN };
    static void *func_5106599600_op1[2] = { &&func_5106604624, &&RETURN };
    static void *func_5106599600_op2[2] = { &&func_5106604752, &&RETURN };
    static void *func_5106599600_op3[2] = { &&func_5106604912, &&RETURN };
    static void *func_5106599600_op4[2] = { &&func_5106605040, &&RETURN };
    static void *func_5106599600_op5[2] = { &&func_5106605232, &&RETURN };
    static void *func_5106599600_op6[2] = { &&func_5106605360, &&RETURN };
    static void *func_5106599600_op7[2] = { &&func_5106605488, &&RETURN };
    static void *func_5106599600_op8[2] = { &&func_5106605616, &&RETURN };
    static void *func_5106599600_op9[2] = { &&func_5106605168, &&RETURN };
    static void *func_5106598640_op0[2] = { &&func_5106604384, &&RETURN };
    static void *func_5106598640_op1[2] = { &&func_5106602016, &&RETURN };
    static void *func_5106598640_op2[2] = { &&func_5106602144, &&RETURN };
    static void *func_5106599264_op0[2] = { &&func_5106598848, &&RETURN };
    static void *func_5106599264_op1[2] = { &&func_5106599600, &&RETURN };
    static void *func_5106599392_op0[2] = { &&func_5106604304, &&RETURN };
    static void *exp_5106600640[4] = {&&func_5106588272, &&func_5106601024, &&func_5106598480, &&RETURN };
    static void *exp_5106599888[4] = {&&func_5106588272, &&func_5106601376, &&func_5106599264, &&RETURN };
    static void *exp_5106598704[4] = {&&func_5106598784, &&func_5106601568, &&func_5106598784, &&RETURN };
    static void *exp_5106601696[4] = {&&func_5106598784, &&func_5106601824, &&func_5106598784, &&RETURN };
    static void *exp_5106601152[3] = {&&func_5106599136, &&func_5106598848, &&RETURN };
    static void *exp_5106599776[6] = {&&func_5106603984, &&func_5106598480, &&func_5106604112, &&func_5106598640, &&func_5106599392, &&RETURN };
    static void *exp_5106604304[3] = {&&func_5106606128, &&func_5106598784, &&RETURN };

func_5106588272:
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
            PC = func_5106588272_op0;
            break;
        case 1:
            PC = func_5106588272_op1;
            break;
        case 2:
            PC = func_5106588272_op2;
            break;
        case 3:
            PC = func_5106588272_op3;
            break;
    }
    goto **PC;
func_5106598480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106598480_op0;
            break;
        case 1:
            PC = func_5106598480_op1;
            break;
    }
    goto **PC;
func_5106598784:
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
            PC = func_5106598784_op0;
            break;
        case 1:
            PC = func_5106598784_op1;
            break;
        case 2:
            PC = func_5106598784_op2;
            break;
    }
    goto **PC;
func_5106599136:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599136_op0;
            break;
        case 1:
            PC = func_5106599136_op1;
            break;
        case 2:
            PC = func_5106599136_op2;
            break;
        case 3:
            PC = func_5106599136_op3;
            break;
        case 4:
            PC = func_5106599136_op4;
            break;
        case 5:
            PC = func_5106599136_op5;
            break;
        case 6:
            PC = func_5106599136_op6;
            break;
        case 7:
            PC = func_5106599136_op7;
            break;
        case 8:
            PC = func_5106599136_op8;
            break;
        case 9:
            PC = func_5106599136_op9;
            break;
    }
    goto **PC;
func_5106598848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106598848_op0;
            break;
        case 1:
            PC = func_5106598848_op1;
            break;
    }
    goto **PC;
func_5106598400:
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
            PC = func_5106598400_op0;
            break;
    }
    goto **PC;
func_5106598272:
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
            PC = func_5106598272_op0;
            break;
    }
    goto **PC;
func_5106599600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599600_op0;
            break;
        case 1:
            PC = func_5106599600_op1;
            break;
        case 2:
            PC = func_5106599600_op2;
            break;
        case 3:
            PC = func_5106599600_op3;
            break;
        case 4:
            PC = func_5106599600_op4;
            break;
        case 5:
            PC = func_5106599600_op5;
            break;
        case 6:
            PC = func_5106599600_op6;
            break;
        case 7:
            PC = func_5106599600_op7;
            break;
        case 8:
            PC = func_5106599600_op8;
            break;
        case 9:
            PC = func_5106599600_op9;
            break;
    }
    goto **PC;
func_5106598640:
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
            PC = func_5106598640_op0;
            break;
        case 1:
            PC = func_5106598640_op1;
            break;
        case 2:
            PC = func_5106598640_op2;
            break;
    }
    goto **PC;
func_5106599264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5106599264_op0;
            break;
        case 1:
            PC = func_5106599264_op1;
            break;
    }
    goto **PC;
func_5106599392:
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
            PC = func_5106599392_op0;
            break;
    }
    goto **PC;
func_5106599520:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5106600016:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5106600144:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5106600304:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5106600512:
    extend(42);
    NEXT();
    goto **PC;
func_5106600640:
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
    PC = exp_5106600640;
    goto **PC;
func_5106601024:
    extend(44);
    NEXT();
    goto **PC;
func_5106599888:
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
    PC = exp_5106599888;
    goto **PC;
func_5106601376:
    extend(61);
    NEXT();
    goto **PC;
func_5106598704:
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
    PC = exp_5106598704;
    goto **PC;
func_5106601568:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5106601696:
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
    PC = exp_5106601696;
    goto **PC;
func_5106601824:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5106602288:
    extend(48);
    NEXT();
    goto **PC;
func_5106600432:
    extend(49);
    NEXT();
    goto **PC;
func_5106602480:
    extend(50);
    NEXT();
    goto **PC;
func_5106602640:
    extend(51);
    NEXT();
    goto **PC;
func_5106602768:
    extend(52);
    NEXT();
    goto **PC;
func_5106602960:
    extend(53);
    NEXT();
    goto **PC;
func_5106603088:
    extend(54);
    NEXT();
    goto **PC;
func_5106603216:
    extend(55);
    NEXT();
    goto **PC;
func_5106603344:
    extend(56);
    NEXT();
    goto **PC;
func_5106602896:
    extend(57);
    NEXT();
    goto **PC;
func_5106601152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5106601152;
    goto **PC;
func_5106599776:
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
    PC = exp_5106599776;
    goto **PC;
func_5106603984:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5106604112:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5106604496:
    extend(97);
    NEXT();
    goto **PC;
func_5106604624:
    extend(98);
    NEXT();
    goto **PC;
func_5106604752:
    extend(99);
    NEXT();
    goto **PC;
func_5106604912:
    extend(100);
    NEXT();
    goto **PC;
func_5106605040:
    extend(101);
    NEXT();
    goto **PC;
func_5106605232:
    extend(102);
    NEXT();
    goto **PC;
func_5106605360:
    extend(103);
    NEXT();
    goto **PC;
func_5106605488:
    extend(104);
    NEXT();
    goto **PC;
func_5106605616:
    extend(105);
    NEXT();
    goto **PC;
func_5106605168:
    extend(106);
    NEXT();
    goto **PC;
func_5106604384:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5106602016:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5106602144:
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
func_5106604304:
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
    PC = exp_5106604304;
    goto **PC;
func_5106606128:
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
    PC = func_5106598272_op0;
    goto **PC;
}
