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
    static void *func_5098214944_op0[2] = { &&func_5098216768, &&RETURN };
    static void *func_5098215312_op0[2] = { &&func_5098218064, &&RETURN };
    static void *func_5098215312_op1[2] = { &&func_5098218320, &&RETURN };
    static void *func_5098215312_op2[2] = { &&func_5098218576, &&RETURN };
    static void *func_5098215728_op0[2] = { &&func_5098219088, &&RETURN };
    static void *func_5098215728_op1[2] = { &&func_5098216672, &&RETURN };
    static void *func_5098215728_op2[2] = { &&func_5098219280, &&RETURN };
    static void *func_5098215728_op3[2] = { &&func_5098219408, &&RETURN };
    static void *func_5098215728_op4[2] = { &&func_5098219536, &&RETURN };
    static void *func_5098215728_op5[2] = { &&func_5098219728, &&RETURN };
    static void *func_5098215728_op6[2] = { &&func_5098219856, &&RETURN };
    static void *func_5098215728_op7[2] = { &&func_5098219984, &&RETURN };
    static void *func_5098215728_op8[2] = { &&func_5098220112, &&RETURN };
    static void *func_5098215728_op9[2] = { &&func_5098219664, &&RETURN };
    static void *func_5098215824_op0[2] = { &&func_5098220688, &&RETURN };
    static void *func_5098215824_op1[2] = { &&func_5098217856, &&RETURN };
    static void *func_5098215824_op2[2] = { &&func_5098217200, &&RETURN };
    static void *func_5098215600_op0[2] = { &&func_5098218992, &&RETURN };
    static void *func_5098215600_op1[2] = { &&func_5098215952, &&RETURN };
    static void *func_5098215600_op2[2] = { &&func_5098216224, &&RETURN };
    static void *func_5098215520_op0[2] = { &&func_5098218832, &&RETURN };
    static void *func_5098216224_op0[2] = { &&func_5098221840, &&RETURN };
    static void *func_5098216224_op1[2] = { &&func_5098222512, &&RETURN };
    static void *func_5098216224_op2[2] = { &&func_5098222640, &&RETURN };
    static void *func_5098216224_op3[2] = { &&func_5098222768, &&RETURN };
    static void *func_5098216224_op4[2] = { &&func_5098222896, &&RETURN };
    static void *func_5098216224_op5[2] = { &&func_5098223088, &&RETURN };
    static void *func_5098216224_op6[2] = { &&func_5098223216, &&RETURN };
    static void *func_5098216224_op7[2] = { &&func_5098223344, &&RETURN };
    static void *func_5098216224_op8[2] = { &&func_5098223472, &&RETURN };
    static void *func_5098215440_op0[2] = { &&func_5098223024, &&RETURN };
    static void *func_5098215440_op1[2] = { &&func_5098221488, &&RETURN };
    static void *func_5098215952_op0[2] = { &&func_5098215728, &&RETURN };
    static void *func_5098215952_op1[2] = { &&func_5098221664, &&RETURN };
    static void *func_5098216480_op0[2] = { &&func_5098223728, &&RETURN };
    static void *func_5098216144_op0[2] = { &&func_5098224368, &&RETURN };
    static void *func_5098216416_op0[2] = { &&func_5098216144, &&HALT };
    static void *func_5098216832_op0[2] = { &&func_5098215440, &&RETURN };
    static void *func_5098216832_op1[2] = { &&func_5098217040, &&RETURN };
    static void *func_5098216832_op2[2] = { &&func_5098215520, &&RETURN };
    static void *func_5098216832_op3[2] = { &&func_5098214944, &&RETURN };
    static void *func_5098216832_op4[2] = { &&func_5098216480, &&RETURN };
    static void *func_5098217200_op0[2] = { &&func_5098225216, &&RETURN };
    static void *func_5098217200_op1[2] = { &&func_5098224496, &&RETURN };
    static void *func_5098217200_op2[2] = { &&func_5098215600, &&RETURN };
    static void *func_5098217040_op0[2] = { &&func_5098225152, &&RETURN };
    static void *exp_5098216768[5] = {&&func_5098216224, &&func_5098216960, &&func_5098215824, &&func_5098216016, &&RETURN };
    static void *exp_5098218064[4] = {&&func_5098215824, &&func_5098218192, &&func_5098215824, &&RETURN };
    static void *exp_5098218320[4] = {&&func_5098215824, &&func_5098218448, &&func_5098215824, &&RETURN };
    static void *exp_5098218576[4] = {&&func_5098215824, &&func_5098218704, &&func_5098215824, &&RETURN };
    static void *exp_5098220688[4] = {&&func_5098215824, &&func_5098220816, &&func_5098217200, &&RETURN };
    static void *exp_5098217856[4] = {&&func_5098215824, &&func_5098217984, &&func_5098217200, &&RETURN };
    static void *exp_5098218992[4] = {&&func_5098221168, &&func_5098215824, &&func_5098221296, &&RETURN };
    static void *exp_5098218832[12] = {&&func_5098222064, &&func_5098221168, &&func_5098214944, &&func_5098216016, &&func_5098215312, &&func_5098216016, &&func_5098214944, &&func_5098221296, &&func_5098222192, &&func_5098216144, &&func_5098217328, &&RETURN };
    static void *exp_5098223024[8] = {&&func_5098224240, &&func_5098221168, &&func_5098215312, &&func_5098221296, &&func_5098222192, &&func_5098216144, &&func_5098217328, &&RETURN };
    static void *exp_5098221488[12] = {&&func_5098224240, &&func_5098221168, &&func_5098215312, &&func_5098221296, &&func_5098222192, &&func_5098216144, &&func_5098217328, &&func_5098224064, &&func_5098222192, &&func_5098216144, &&func_5098217328, &&RETURN };
    static void *exp_5098221664[3] = {&&func_5098215728, &&func_5098215952, &&RETURN };
    static void *exp_5098223728[6] = {&&func_5098223856, &&func_5098221168, &&func_5098215824, &&func_5098221296, &&func_5098216016, &&RETURN };
    static void *exp_5098224368[3] = {&&func_5098216832, &&func_5098216144, &&RETURN };
    static void *exp_5098225216[4] = {&&func_5098217200, &&func_5098225344, &&func_5098215600, &&RETURN };
    static void *exp_5098224496[4] = {&&func_5098217200, &&func_5098220176, &&func_5098215600, &&RETURN };
    static void *exp_5098225152[8] = {&&func_5098220544, &&func_5098221168, &&func_5098215312, &&func_5098221296, &&func_5098222192, &&func_5098216144, &&func_5098217328, &&RETURN };

func_5098214944:
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
            PC = func_5098214944_op0;
            break;
    }
    goto **PC;
func_5098215312:
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
            PC = func_5098215312_op0;
            break;
        case 1:
            PC = func_5098215312_op1;
            break;
        case 2:
            PC = func_5098215312_op2;
            break;
    }
    goto **PC;
func_5098215728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215728_op0;
            break;
        case 1:
            PC = func_5098215728_op1;
            break;
        case 2:
            PC = func_5098215728_op2;
            break;
        case 3:
            PC = func_5098215728_op3;
            break;
        case 4:
            PC = func_5098215728_op4;
            break;
        case 5:
            PC = func_5098215728_op5;
            break;
        case 6:
            PC = func_5098215728_op6;
            break;
        case 7:
            PC = func_5098215728_op7;
            break;
        case 8:
            PC = func_5098215728_op8;
            break;
        case 9:
            PC = func_5098215728_op9;
            break;
    }
    goto **PC;
func_5098215824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215824_op0;
            break;
        case 1:
            PC = func_5098215824_op1;
            break;
        case 2:
            PC = func_5098215824_op2;
            break;
    }
    goto **PC;
func_5098215600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215600_op0;
            break;
        case 1:
            PC = func_5098215600_op1;
            break;
        case 2:
            PC = func_5098215600_op2;
            break;
    }
    goto **PC;
func_5098215520:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215520_op0;
            break;
    }
    goto **PC;
func_5098216224:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5098216224_op0;
            break;
        case 1:
            PC = func_5098216224_op1;
            break;
        case 2:
            PC = func_5098216224_op2;
            break;
        case 3:
            PC = func_5098216224_op3;
            break;
        case 4:
            PC = func_5098216224_op4;
            break;
        case 5:
            PC = func_5098216224_op5;
            break;
        case 6:
            PC = func_5098216224_op6;
            break;
        case 7:
            PC = func_5098216224_op7;
            break;
        case 8:
            PC = func_5098216224_op8;
            break;
    }
    goto **PC;
func_5098215440:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215440_op0;
            break;
        case 1:
            PC = func_5098215440_op1;
            break;
    }
    goto **PC;
func_5098215952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5098215952_op0;
            break;
        case 1:
            PC = func_5098215952_op1;
            break;
    }
    goto **PC;
func_5098216480:
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
            PC = func_5098216480_op0;
            break;
    }
    goto **PC;
func_5098216144:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098216144_op0;
            break;
    }
    goto **PC;
func_5098216416:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098216416_op0;
            break;
    }
    goto **PC;
func_5098216832:
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
            PC = func_5098216832_op0;
            break;
        case 1:
            PC = func_5098216832_op1;
            break;
        case 2:
            PC = func_5098216832_op2;
            break;
        case 3:
            PC = func_5098216832_op3;
            break;
        case 4:
            PC = func_5098216832_op4;
            break;
    }
    goto **PC;
func_5098217200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5098217200_op0;
            break;
        case 1:
            PC = func_5098217200_op1;
            break;
        case 2:
            PC = func_5098217200_op2;
            break;
    }
    goto **PC;
func_5098217040:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5098217040_op0;
            break;
    }
    goto **PC;
func_5098216768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098216768;
    goto **PC;
func_5098216960:
    extend(61);
    NEXT();
    goto **PC;
func_5098216016:
    extend(59);
    NEXT();
    goto **PC;
func_5098218064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098218064;
    goto **PC;
func_5098218192:
    extend(62);
    NEXT();
    goto **PC;
func_5098218320:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098218320;
    goto **PC;
func_5098218448:
    extend(60);
    NEXT();
    goto **PC;
func_5098218576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098218576;
    goto **PC;
func_5098218704:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5098219088:
    extend(48);
    NEXT();
    goto **PC;
func_5098216672:
    extend(49);
    NEXT();
    goto **PC;
func_5098219280:
    extend(50);
    NEXT();
    goto **PC;
func_5098219408:
    extend(51);
    NEXT();
    goto **PC;
func_5098219536:
    extend(52);
    NEXT();
    goto **PC;
func_5098219728:
    extend(53);
    NEXT();
    goto **PC;
func_5098219856:
    extend(54);
    NEXT();
    goto **PC;
func_5098219984:
    extend(55);
    NEXT();
    goto **PC;
func_5098220112:
    extend(56);
    NEXT();
    goto **PC;
func_5098219664:
    extend(57);
    NEXT();
    goto **PC;
func_5098220688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098220688;
    goto **PC;
func_5098220816:
    extend(43);
    NEXT();
    goto **PC;
func_5098217856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098217856;
    goto **PC;
func_5098217984:
    extend(45);
    NEXT();
    goto **PC;
func_5098218992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098218992;
    goto **PC;
func_5098221168:
    extend(40);
    NEXT();
    goto **PC;
func_5098221296:
    extend(41);
    NEXT();
    goto **PC;
func_5098218832:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098218832;
    goto **PC;
func_5098222064:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5098222192:
    extend(123);
    NEXT();
    goto **PC;
func_5098217328:
    extend(125);
    NEXT();
    goto **PC;
func_5098221840:
    extend(105);
    NEXT();
    goto **PC;
func_5098222512:
    extend(106);
    NEXT();
    goto **PC;
func_5098222640:
    extend(107);
    NEXT();
    goto **PC;
func_5098222768:
    extend(120);
    NEXT();
    goto **PC;
func_5098222896:
    extend(121);
    NEXT();
    goto **PC;
func_5098223088:
    extend(122);
    NEXT();
    goto **PC;
func_5098223216:
    extend(97);
    NEXT();
    goto **PC;
func_5098223344:
    extend(98);
    NEXT();
    goto **PC;
func_5098223472:
    extend(99);
    NEXT();
    goto **PC;
func_5098223024:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098223024;
    goto **PC;
func_5098224240:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5098221488:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098221488;
    goto **PC;
func_5098224064:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5098221664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098221664;
    goto **PC;
func_5098223728:
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
    PC = exp_5098223728;
    goto **PC;
func_5098223856:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5098224368:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098224368;
    goto **PC;
func_5098225216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098225216;
    goto **PC;
func_5098225344:
    extend(42);
    NEXT();
    goto **PC;
func_5098224496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098224496;
    goto **PC;
func_5098220176:
    extend(47);
    NEXT();
    goto **PC;
func_5098225152:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5098225152;
    goto **PC;
func_5098220544:
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
    PC = func_5098216416_op0;
    goto **PC;
}
