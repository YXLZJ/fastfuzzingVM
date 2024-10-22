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
    static void *func_5307914864_op0[2] = { &&func_5307926112, &&RETURN };
    static void *func_5307914864_op1[2] = { &&func_5307926608, &&RETURN };
    static void *func_5307914864_op2[2] = { &&func_5307926736, &&RETURN };
    static void *func_5307914864_op3[2] = { &&func_5307926896, &&RETURN };
    static void *func_5307925072_op0[2] = { &&func_5307927104, &&RETURN };
    static void *func_5307925072_op1[2] = { &&func_5307927232, &&RETURN };
    static void *func_5307925376_op0[2] = { &&func_5307926480, &&RETURN };
    static void *func_5307925376_op1[2] = { &&func_5307925296, &&RETURN };
    static void *func_5307925376_op2[2] = { &&func_5307928288, &&RETURN };
    static void *func_5307925728_op0[2] = { &&func_5307928880, &&RETURN };
    static void *func_5307925728_op1[2] = { &&func_5307927024, &&RETURN };
    static void *func_5307925728_op2[2] = { &&func_5307929072, &&RETURN };
    static void *func_5307925728_op3[2] = { &&func_5307929232, &&RETURN };
    static void *func_5307925728_op4[2] = { &&func_5307929360, &&RETURN };
    static void *func_5307925728_op5[2] = { &&func_5307929552, &&RETURN };
    static void *func_5307925728_op6[2] = { &&func_5307929680, &&RETURN };
    static void *func_5307925728_op7[2] = { &&func_5307929808, &&RETURN };
    static void *func_5307925728_op8[2] = { &&func_5307929936, &&RETURN };
    static void *func_5307925728_op9[2] = { &&func_5307929488, &&RETURN };
    static void *func_5307925440_op0[2] = { &&func_5307925728, &&RETURN };
    static void *func_5307925440_op1[2] = { &&func_5307927744, &&RETURN };
    static void *func_5307924992_op0[2] = { &&func_5307926368, &&RETURN };
    static void *func_5307924864_op0[2] = { &&func_5307924992, &&HALT };
    static void *func_5307926192_op0[2] = { &&func_5307931088, &&RETURN };
    static void *func_5307926192_op1[2] = { &&func_5307931216, &&RETURN };
    static void *func_5307926192_op2[2] = { &&func_5307931344, &&RETURN };
    static void *func_5307926192_op3[2] = { &&func_5307931504, &&RETURN };
    static void *func_5307926192_op4[2] = { &&func_5307931632, &&RETURN };
    static void *func_5307926192_op5[2] = { &&func_5307931824, &&RETURN };
    static void *func_5307926192_op6[2] = { &&func_5307931952, &&RETURN };
    static void *func_5307926192_op7[2] = { &&func_5307932080, &&RETURN };
    static void *func_5307926192_op8[2] = { &&func_5307932208, &&RETURN };
    static void *func_5307926192_op9[2] = { &&func_5307931760, &&RETURN };
    static void *func_5307925232_op0[2] = { &&func_5307930976, &&RETURN };
    static void *func_5307925232_op1[2] = { &&func_5307928608, &&RETURN };
    static void *func_5307925232_op2[2] = { &&func_5307928736, &&RETURN };
    static void *func_5307925856_op0[2] = { &&func_5307925440, &&RETURN };
    static void *func_5307925856_op1[2] = { &&func_5307926192, &&RETURN };
    static void *func_5307925984_op0[2] = { &&func_5307930896, &&RETURN };
    static void *exp_5307927232[4] = {&&func_5307914864, &&func_5307927616, &&func_5307925072, &&RETURN };
    static void *exp_5307926480[4] = {&&func_5307914864, &&func_5307927968, &&func_5307925856, &&RETURN };
    static void *exp_5307925296[4] = {&&func_5307925376, &&func_5307928160, &&func_5307925376, &&RETURN };
    static void *exp_5307928288[4] = {&&func_5307925376, &&func_5307928416, &&func_5307925376, &&RETURN };
    static void *exp_5307927744[3] = {&&func_5307925728, &&func_5307925440, &&RETURN };
    static void *exp_5307926368[6] = {&&func_5307930576, &&func_5307925072, &&func_5307930704, &&func_5307925232, &&func_5307925984, &&RETURN };
    static void *exp_5307930896[3] = {&&func_5307932720, &&func_5307925376, &&RETURN };

func_5307914864:
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
            PC = func_5307914864_op0;
            break;
        case 1:
            PC = func_5307914864_op1;
            break;
        case 2:
            PC = func_5307914864_op2;
            break;
        case 3:
            PC = func_5307914864_op3;
            break;
    }
    goto **PC;
func_5307925072:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307925072_op0;
            break;
        case 1:
            PC = func_5307925072_op1;
            break;
    }
    goto **PC;
func_5307925376:
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
            PC = func_5307925376_op0;
            break;
        case 1:
            PC = func_5307925376_op1;
            break;
        case 2:
            PC = func_5307925376_op2;
            break;
    }
    goto **PC;
func_5307925728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5307925728_op0;
            break;
        case 1:
            PC = func_5307925728_op1;
            break;
        case 2:
            PC = func_5307925728_op2;
            break;
        case 3:
            PC = func_5307925728_op3;
            break;
        case 4:
            PC = func_5307925728_op4;
            break;
        case 5:
            PC = func_5307925728_op5;
            break;
        case 6:
            PC = func_5307925728_op6;
            break;
        case 7:
            PC = func_5307925728_op7;
            break;
        case 8:
            PC = func_5307925728_op8;
            break;
        case 9:
            PC = func_5307925728_op9;
            break;
    }
    goto **PC;
func_5307925440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307925440_op0;
            break;
        case 1:
            PC = func_5307925440_op1;
            break;
    }
    goto **PC;
func_5307924992:
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
            PC = func_5307924992_op0;
            break;
    }
    goto **PC;
func_5307924864:
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
            PC = func_5307924864_op0;
            break;
    }
    goto **PC;
func_5307926192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5307926192_op0;
            break;
        case 1:
            PC = func_5307926192_op1;
            break;
        case 2:
            PC = func_5307926192_op2;
            break;
        case 3:
            PC = func_5307926192_op3;
            break;
        case 4:
            PC = func_5307926192_op4;
            break;
        case 5:
            PC = func_5307926192_op5;
            break;
        case 6:
            PC = func_5307926192_op6;
            break;
        case 7:
            PC = func_5307926192_op7;
            break;
        case 8:
            PC = func_5307926192_op8;
            break;
        case 9:
            PC = func_5307926192_op9;
            break;
    }
    goto **PC;
func_5307925232:
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
            PC = func_5307925232_op0;
            break;
        case 1:
            PC = func_5307925232_op1;
            break;
        case 2:
            PC = func_5307925232_op2;
            break;
    }
    goto **PC;
func_5307925856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5307925856_op0;
            break;
        case 1:
            PC = func_5307925856_op1;
            break;
    }
    goto **PC;
func_5307925984:
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
            PC = func_5307925984_op0;
            break;
    }
    goto **PC;
func_5307926112:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5307926608:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5307926736:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5307926896:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5307927104:
    extend(42);
    NEXT();
    goto **PC;
func_5307927232:
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
    PC = exp_5307927232;
    goto **PC;
func_5307927616:
    extend(44);
    NEXT();
    goto **PC;
func_5307926480:
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
    PC = exp_5307926480;
    goto **PC;
func_5307927968:
    extend(61);
    NEXT();
    goto **PC;
func_5307925296:
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
    PC = exp_5307925296;
    goto **PC;
func_5307928160:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5307928288:
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
    PC = exp_5307928288;
    goto **PC;
func_5307928416:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5307928880:
    extend(48);
    NEXT();
    goto **PC;
func_5307927024:
    extend(49);
    NEXT();
    goto **PC;
func_5307929072:
    extend(50);
    NEXT();
    goto **PC;
func_5307929232:
    extend(51);
    NEXT();
    goto **PC;
func_5307929360:
    extend(52);
    NEXT();
    goto **PC;
func_5307929552:
    extend(53);
    NEXT();
    goto **PC;
func_5307929680:
    extend(54);
    NEXT();
    goto **PC;
func_5307929808:
    extend(55);
    NEXT();
    goto **PC;
func_5307929936:
    extend(56);
    NEXT();
    goto **PC;
func_5307929488:
    extend(57);
    NEXT();
    goto **PC;
func_5307927744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5307927744;
    goto **PC;
func_5307926368:
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
    PC = exp_5307926368;
    goto **PC;
func_5307930576:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5307930704:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5307931088:
    extend(97);
    NEXT();
    goto **PC;
func_5307931216:
    extend(98);
    NEXT();
    goto **PC;
func_5307931344:
    extend(99);
    NEXT();
    goto **PC;
func_5307931504:
    extend(100);
    NEXT();
    goto **PC;
func_5307931632:
    extend(101);
    NEXT();
    goto **PC;
func_5307931824:
    extend(102);
    NEXT();
    goto **PC;
func_5307931952:
    extend(103);
    NEXT();
    goto **PC;
func_5307932080:
    extend(104);
    NEXT();
    goto **PC;
func_5307932208:
    extend(105);
    NEXT();
    goto **PC;
func_5307931760:
    extend(106);
    NEXT();
    goto **PC;
func_5307930976:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5307928608:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5307928736:
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
func_5307930896:
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
    PC = exp_5307930896;
    goto **PC;
func_5307932720:
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
    PC = func_5307924864_op0;
    goto **PC;
}
