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
    static void *func_5341469296_op0[2] = { &&func_5341480544, &&RETURN };
    static void *func_5341469296_op1[2] = { &&func_5341481040, &&RETURN };
    static void *func_5341469296_op2[2] = { &&func_5341481168, &&RETURN };
    static void *func_5341469296_op3[2] = { &&func_5341481328, &&RETURN };
    static void *func_5341479504_op0[2] = { &&func_5341481536, &&RETURN };
    static void *func_5341479504_op1[2] = { &&func_5341481664, &&RETURN };
    static void *func_5341479808_op0[2] = { &&func_5341480912, &&RETURN };
    static void *func_5341479808_op1[2] = { &&func_5341479728, &&RETURN };
    static void *func_5341479808_op2[2] = { &&func_5341482720, &&RETURN };
    static void *func_5341480160_op0[2] = { &&func_5341483312, &&RETURN };
    static void *func_5341480160_op1[2] = { &&func_5341481456, &&RETURN };
    static void *func_5341480160_op2[2] = { &&func_5341483504, &&RETURN };
    static void *func_5341480160_op3[2] = { &&func_5341483664, &&RETURN };
    static void *func_5341480160_op4[2] = { &&func_5341483792, &&RETURN };
    static void *func_5341480160_op5[2] = { &&func_5341483984, &&RETURN };
    static void *func_5341480160_op6[2] = { &&func_5341484112, &&RETURN };
    static void *func_5341480160_op7[2] = { &&func_5341484240, &&RETURN };
    static void *func_5341480160_op8[2] = { &&func_5341484368, &&RETURN };
    static void *func_5341480160_op9[2] = { &&func_5341483920, &&RETURN };
    static void *func_5341479872_op0[2] = { &&func_5341480160, &&RETURN };
    static void *func_5341479872_op1[2] = { &&func_5341482176, &&RETURN };
    static void *func_5341479424_op0[2] = { &&func_5341480800, &&RETURN };
    static void *func_5341479296_op0[2] = { &&func_5341479424, &&HALT };
    static void *func_5341480624_op0[2] = { &&func_5341485520, &&RETURN };
    static void *func_5341480624_op1[2] = { &&func_5341485648, &&RETURN };
    static void *func_5341480624_op2[2] = { &&func_5341485776, &&RETURN };
    static void *func_5341480624_op3[2] = { &&func_5341485936, &&RETURN };
    static void *func_5341480624_op4[2] = { &&func_5341486064, &&RETURN };
    static void *func_5341480624_op5[2] = { &&func_5341486256, &&RETURN };
    static void *func_5341480624_op6[2] = { &&func_5341486384, &&RETURN };
    static void *func_5341480624_op7[2] = { &&func_5341486512, &&RETURN };
    static void *func_5341480624_op8[2] = { &&func_5341486640, &&RETURN };
    static void *func_5341480624_op9[2] = { &&func_5341486192, &&RETURN };
    static void *func_5341479664_op0[2] = { &&func_5341485408, &&RETURN };
    static void *func_5341479664_op1[2] = { &&func_5341483040, &&RETURN };
    static void *func_5341479664_op2[2] = { &&func_5341483168, &&RETURN };
    static void *func_5341480288_op0[2] = { &&func_5341479872, &&RETURN };
    static void *func_5341480288_op1[2] = { &&func_5341480624, &&RETURN };
    static void *func_5341480416_op0[2] = { &&func_5341485328, &&RETURN };
    static void *exp_5341481664[4] = {&&func_5341469296, &&func_5341482048, &&func_5341479504, &&RETURN };
    static void *exp_5341480912[4] = {&&func_5341469296, &&func_5341482400, &&func_5341480288, &&RETURN };
    static void *exp_5341479728[4] = {&&func_5341479808, &&func_5341482592, &&func_5341479808, &&RETURN };
    static void *exp_5341482720[4] = {&&func_5341479808, &&func_5341482848, &&func_5341479808, &&RETURN };
    static void *exp_5341482176[3] = {&&func_5341480160, &&func_5341479872, &&RETURN };
    static void *exp_5341480800[6] = {&&func_5341485008, &&func_5341479504, &&func_5341485136, &&func_5341479664, &&func_5341480416, &&RETURN };
    static void *exp_5341485328[3] = {&&func_5341487152, &&func_5341479808, &&RETURN };

func_5341469296:
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
            PC = func_5341469296_op0;
            break;
        case 1:
            PC = func_5341469296_op1;
            break;
        case 2:
            PC = func_5341469296_op2;
            break;
        case 3:
            PC = func_5341469296_op3;
            break;
    }
    goto **PC;
func_5341479504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341479504_op0;
            break;
        case 1:
            PC = func_5341479504_op1;
            break;
    }
    goto **PC;
func_5341479808:
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
            PC = func_5341479808_op0;
            break;
        case 1:
            PC = func_5341479808_op1;
            break;
        case 2:
            PC = func_5341479808_op2;
            break;
    }
    goto **PC;
func_5341480160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5341480160_op0;
            break;
        case 1:
            PC = func_5341480160_op1;
            break;
        case 2:
            PC = func_5341480160_op2;
            break;
        case 3:
            PC = func_5341480160_op3;
            break;
        case 4:
            PC = func_5341480160_op4;
            break;
        case 5:
            PC = func_5341480160_op5;
            break;
        case 6:
            PC = func_5341480160_op6;
            break;
        case 7:
            PC = func_5341480160_op7;
            break;
        case 8:
            PC = func_5341480160_op8;
            break;
        case 9:
            PC = func_5341480160_op9;
            break;
    }
    goto **PC;
func_5341479872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341479872_op0;
            break;
        case 1:
            PC = func_5341479872_op1;
            break;
    }
    goto **PC;
func_5341479424:
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
            PC = func_5341479424_op0;
            break;
    }
    goto **PC;
func_5341479296:
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
            PC = func_5341479296_op0;
            break;
    }
    goto **PC;
func_5341480624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5341480624_op0;
            break;
        case 1:
            PC = func_5341480624_op1;
            break;
        case 2:
            PC = func_5341480624_op2;
            break;
        case 3:
            PC = func_5341480624_op3;
            break;
        case 4:
            PC = func_5341480624_op4;
            break;
        case 5:
            PC = func_5341480624_op5;
            break;
        case 6:
            PC = func_5341480624_op6;
            break;
        case 7:
            PC = func_5341480624_op7;
            break;
        case 8:
            PC = func_5341480624_op8;
            break;
        case 9:
            PC = func_5341480624_op9;
            break;
    }
    goto **PC;
func_5341479664:
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
            PC = func_5341479664_op0;
            break;
        case 1:
            PC = func_5341479664_op1;
            break;
        case 2:
            PC = func_5341479664_op2;
            break;
    }
    goto **PC;
func_5341480288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5341480288_op0;
            break;
        case 1:
            PC = func_5341480288_op1;
            break;
    }
    goto **PC;
func_5341480416:
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
            PC = func_5341480416_op0;
            break;
    }
    goto **PC;
func_5341480544:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5341481040:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5341481168:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5341481328:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5341481536:
    extend(42);
    NEXT();
    goto **PC;
func_5341481664:
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
    PC = exp_5341481664;
    goto **PC;
func_5341482048:
    extend(44);
    NEXT();
    goto **PC;
func_5341480912:
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
    PC = exp_5341480912;
    goto **PC;
func_5341482400:
    extend(61);
    NEXT();
    goto **PC;
func_5341479728:
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
    PC = exp_5341479728;
    goto **PC;
func_5341482592:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5341482720:
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
    PC = exp_5341482720;
    goto **PC;
func_5341482848:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5341483312:
    extend(48);
    NEXT();
    goto **PC;
func_5341481456:
    extend(49);
    NEXT();
    goto **PC;
func_5341483504:
    extend(50);
    NEXT();
    goto **PC;
func_5341483664:
    extend(51);
    NEXT();
    goto **PC;
func_5341483792:
    extend(52);
    NEXT();
    goto **PC;
func_5341483984:
    extend(53);
    NEXT();
    goto **PC;
func_5341484112:
    extend(54);
    NEXT();
    goto **PC;
func_5341484240:
    extend(55);
    NEXT();
    goto **PC;
func_5341484368:
    extend(56);
    NEXT();
    goto **PC;
func_5341483920:
    extend(57);
    NEXT();
    goto **PC;
func_5341482176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5341482176;
    goto **PC;
func_5341480800:
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
    PC = exp_5341480800;
    goto **PC;
func_5341485008:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5341485136:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5341485520:
    extend(97);
    NEXT();
    goto **PC;
func_5341485648:
    extend(98);
    NEXT();
    goto **PC;
func_5341485776:
    extend(99);
    NEXT();
    goto **PC;
func_5341485936:
    extend(100);
    NEXT();
    goto **PC;
func_5341486064:
    extend(101);
    NEXT();
    goto **PC;
func_5341486256:
    extend(102);
    NEXT();
    goto **PC;
func_5341486384:
    extend(103);
    NEXT();
    goto **PC;
func_5341486512:
    extend(104);
    NEXT();
    goto **PC;
func_5341486640:
    extend(105);
    NEXT();
    goto **PC;
func_5341486192:
    extend(106);
    NEXT();
    goto **PC;
func_5341485408:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5341483040:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5341483168:
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
func_5341485328:
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
    PC = exp_5341485328;
    goto **PC;
func_5341487152:
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
    PC = func_5341479296_op0;
    goto **PC;
}
