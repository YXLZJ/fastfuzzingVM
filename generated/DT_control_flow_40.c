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
    static void *func_5643474464_op0[2] = { &&func_5643476288, &&RETURN };
    static void *func_5643474832_op0[2] = { &&func_5643477584, &&RETURN };
    static void *func_5643474832_op1[2] = { &&func_5643477840, &&RETURN };
    static void *func_5643474832_op2[2] = { &&func_5643478096, &&RETURN };
    static void *func_5643475248_op0[2] = { &&func_5643478608, &&RETURN };
    static void *func_5643475248_op1[2] = { &&func_5643476192, &&RETURN };
    static void *func_5643475248_op2[2] = { &&func_5643478800, &&RETURN };
    static void *func_5643475248_op3[2] = { &&func_5643478928, &&RETURN };
    static void *func_5643475248_op4[2] = { &&func_5643479056, &&RETURN };
    static void *func_5643475248_op5[2] = { &&func_5643479248, &&RETURN };
    static void *func_5643475248_op6[2] = { &&func_5643479376, &&RETURN };
    static void *func_5643475248_op7[2] = { &&func_5643479504, &&RETURN };
    static void *func_5643475248_op8[2] = { &&func_5643479632, &&RETURN };
    static void *func_5643475248_op9[2] = { &&func_5643479184, &&RETURN };
    static void *func_5643475344_op0[2] = { &&func_5643480208, &&RETURN };
    static void *func_5643475344_op1[2] = { &&func_5643477376, &&RETURN };
    static void *func_5643475344_op2[2] = { &&func_5643476720, &&RETURN };
    static void *func_5643475120_op0[2] = { &&func_5643478512, &&RETURN };
    static void *func_5643475120_op1[2] = { &&func_5643475472, &&RETURN };
    static void *func_5643475120_op2[2] = { &&func_5643475744, &&RETURN };
    static void *func_5643475040_op0[2] = { &&func_5643478352, &&RETURN };
    static void *func_5643475744_op0[2] = { &&func_5643481360, &&RETURN };
    static void *func_5643475744_op1[2] = { &&func_5643482032, &&RETURN };
    static void *func_5643475744_op2[2] = { &&func_5643482160, &&RETURN };
    static void *func_5643475744_op3[2] = { &&func_5643482288, &&RETURN };
    static void *func_5643475744_op4[2] = { &&func_5643482416, &&RETURN };
    static void *func_5643475744_op5[2] = { &&func_5643482608, &&RETURN };
    static void *func_5643475744_op6[2] = { &&func_5643482736, &&RETURN };
    static void *func_5643475744_op7[2] = { &&func_5643482864, &&RETURN };
    static void *func_5643475744_op8[2] = { &&func_5643482992, &&RETURN };
    static void *func_5643474960_op0[2] = { &&func_5643482544, &&RETURN };
    static void *func_5643474960_op1[2] = { &&func_5643481008, &&RETURN };
    static void *func_5643475472_op0[2] = { &&func_5643475248, &&RETURN };
    static void *func_5643475472_op1[2] = { &&func_5643481184, &&RETURN };
    static void *func_5643476000_op0[2] = { &&func_5643483248, &&RETURN };
    static void *func_5643475664_op0[2] = { &&func_5643483888, &&RETURN };
    static void *func_5643475936_op0[2] = { &&func_5643475664, &&HALT };
    static void *func_5643476352_op0[2] = { &&func_5643474960, &&RETURN };
    static void *func_5643476352_op1[2] = { &&func_5643476560, &&RETURN };
    static void *func_5643476352_op2[2] = { &&func_5643475040, &&RETURN };
    static void *func_5643476352_op3[2] = { &&func_5643474464, &&RETURN };
    static void *func_5643476352_op4[2] = { &&func_5643476000, &&RETURN };
    static void *func_5643476720_op0[2] = { &&func_5643484736, &&RETURN };
    static void *func_5643476720_op1[2] = { &&func_5643484016, &&RETURN };
    static void *func_5643476720_op2[2] = { &&func_5643475120, &&RETURN };
    static void *func_5643476560_op0[2] = { &&func_5643484672, &&RETURN };
    static void *exp_5643476288[5] = {&&func_5643475744, &&func_5643476480, &&func_5643475344, &&func_5643475536, &&RETURN };
    static void *exp_5643477584[4] = {&&func_5643475344, &&func_5643477712, &&func_5643475344, &&RETURN };
    static void *exp_5643477840[4] = {&&func_5643475344, &&func_5643477968, &&func_5643475344, &&RETURN };
    static void *exp_5643478096[4] = {&&func_5643475344, &&func_5643478224, &&func_5643475344, &&RETURN };
    static void *exp_5643480208[4] = {&&func_5643475344, &&func_5643480336, &&func_5643476720, &&RETURN };
    static void *exp_5643477376[4] = {&&func_5643475344, &&func_5643477504, &&func_5643476720, &&RETURN };
    static void *exp_5643478512[4] = {&&func_5643480688, &&func_5643475344, &&func_5643480816, &&RETURN };
    static void *exp_5643478352[12] = {&&func_5643481584, &&func_5643480688, &&func_5643474464, &&func_5643475536, &&func_5643474832, &&func_5643475536, &&func_5643474464, &&func_5643480816, &&func_5643481712, &&func_5643475664, &&func_5643476848, &&RETURN };
    static void *exp_5643482544[8] = {&&func_5643483760, &&func_5643480688, &&func_5643474832, &&func_5643480816, &&func_5643481712, &&func_5643475664, &&func_5643476848, &&RETURN };
    static void *exp_5643481008[12] = {&&func_5643483760, &&func_5643480688, &&func_5643474832, &&func_5643480816, &&func_5643481712, &&func_5643475664, &&func_5643476848, &&func_5643483584, &&func_5643481712, &&func_5643475664, &&func_5643476848, &&RETURN };
    static void *exp_5643481184[3] = {&&func_5643475248, &&func_5643475472, &&RETURN };
    static void *exp_5643483248[6] = {&&func_5643483376, &&func_5643480688, &&func_5643475344, &&func_5643480816, &&func_5643475536, &&RETURN };
    static void *exp_5643483888[3] = {&&func_5643476352, &&func_5643475664, &&RETURN };
    static void *exp_5643484736[4] = {&&func_5643476720, &&func_5643484864, &&func_5643475120, &&RETURN };
    static void *exp_5643484016[4] = {&&func_5643476720, &&func_5643479696, &&func_5643475120, &&RETURN };
    static void *exp_5643484672[8] = {&&func_5643480064, &&func_5643480688, &&func_5643474832, &&func_5643480816, &&func_5643481712, &&func_5643475664, &&func_5643476848, &&RETURN };

func_5643474464:
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
            PC = func_5643474464_op0;
            break;
    }
    goto **PC;
func_5643474832:
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
            PC = func_5643474832_op0;
            break;
        case 1:
            PC = func_5643474832_op1;
            break;
        case 2:
            PC = func_5643474832_op2;
            break;
    }
    goto **PC;
func_5643475248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475248_op0;
            break;
        case 1:
            PC = func_5643475248_op1;
            break;
        case 2:
            PC = func_5643475248_op2;
            break;
        case 3:
            PC = func_5643475248_op3;
            break;
        case 4:
            PC = func_5643475248_op4;
            break;
        case 5:
            PC = func_5643475248_op5;
            break;
        case 6:
            PC = func_5643475248_op6;
            break;
        case 7:
            PC = func_5643475248_op7;
            break;
        case 8:
            PC = func_5643475248_op8;
            break;
        case 9:
            PC = func_5643475248_op9;
            break;
    }
    goto **PC;
func_5643475344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475344_op0;
            break;
        case 1:
            PC = func_5643475344_op1;
            break;
        case 2:
            PC = func_5643475344_op2;
            break;
    }
    goto **PC;
func_5643475120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475120_op0;
            break;
        case 1:
            PC = func_5643475120_op1;
            break;
        case 2:
            PC = func_5643475120_op2;
            break;
    }
    goto **PC;
func_5643475040:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475040_op0;
            break;
    }
    goto **PC;
func_5643475744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475744_op0;
            break;
        case 1:
            PC = func_5643475744_op1;
            break;
        case 2:
            PC = func_5643475744_op2;
            break;
        case 3:
            PC = func_5643475744_op3;
            break;
        case 4:
            PC = func_5643475744_op4;
            break;
        case 5:
            PC = func_5643475744_op5;
            break;
        case 6:
            PC = func_5643475744_op6;
            break;
        case 7:
            PC = func_5643475744_op7;
            break;
        case 8:
            PC = func_5643475744_op8;
            break;
    }
    goto **PC;
func_5643474960:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5643474960_op0;
            break;
        case 1:
            PC = func_5643474960_op1;
            break;
    }
    goto **PC;
func_5643475472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475472_op0;
            break;
        case 1:
            PC = func_5643475472_op1;
            break;
    }
    goto **PC;
func_5643476000:
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
            PC = func_5643476000_op0;
            break;
    }
    goto **PC;
func_5643475664:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475664_op0;
            break;
    }
    goto **PC;
func_5643475936:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475936_op0;
            break;
    }
    goto **PC;
func_5643476352:
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
            PC = func_5643476352_op0;
            break;
        case 1:
            PC = func_5643476352_op1;
            break;
        case 2:
            PC = func_5643476352_op2;
            break;
        case 3:
            PC = func_5643476352_op3;
            break;
        case 4:
            PC = func_5643476352_op4;
            break;
    }
    goto **PC;
func_5643476720:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643476720_op0;
            break;
        case 1:
            PC = func_5643476720_op1;
            break;
        case 2:
            PC = func_5643476720_op2;
            break;
    }
    goto **PC;
func_5643476560:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643476560_op0;
            break;
    }
    goto **PC;
func_5643476288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643476288;
    goto **PC;
func_5643476480:
    extend(61);
    NEXT();
    goto **PC;
func_5643475536:
    extend(59);
    NEXT();
    goto **PC;
func_5643477584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643477584;
    goto **PC;
func_5643477712:
    extend(62);
    NEXT();
    goto **PC;
func_5643477840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643477840;
    goto **PC;
func_5643477968:
    extend(60);
    NEXT();
    goto **PC;
func_5643478096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643478096;
    goto **PC;
func_5643478224:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5643478608:
    extend(48);
    NEXT();
    goto **PC;
func_5643476192:
    extend(49);
    NEXT();
    goto **PC;
func_5643478800:
    extend(50);
    NEXT();
    goto **PC;
func_5643478928:
    extend(51);
    NEXT();
    goto **PC;
func_5643479056:
    extend(52);
    NEXT();
    goto **PC;
func_5643479248:
    extend(53);
    NEXT();
    goto **PC;
func_5643479376:
    extend(54);
    NEXT();
    goto **PC;
func_5643479504:
    extend(55);
    NEXT();
    goto **PC;
func_5643479632:
    extend(56);
    NEXT();
    goto **PC;
func_5643479184:
    extend(57);
    NEXT();
    goto **PC;
func_5643480208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643480208;
    goto **PC;
func_5643480336:
    extend(43);
    NEXT();
    goto **PC;
func_5643477376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643477376;
    goto **PC;
func_5643477504:
    extend(45);
    NEXT();
    goto **PC;
func_5643478512:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643478512;
    goto **PC;
func_5643480688:
    extend(40);
    NEXT();
    goto **PC;
func_5643480816:
    extend(41);
    NEXT();
    goto **PC;
func_5643478352:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643478352;
    goto **PC;
func_5643481584:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5643481712:
    extend(123);
    NEXT();
    goto **PC;
func_5643476848:
    extend(125);
    NEXT();
    goto **PC;
func_5643481360:
    extend(105);
    NEXT();
    goto **PC;
func_5643482032:
    extend(106);
    NEXT();
    goto **PC;
func_5643482160:
    extend(107);
    NEXT();
    goto **PC;
func_5643482288:
    extend(120);
    NEXT();
    goto **PC;
func_5643482416:
    extend(121);
    NEXT();
    goto **PC;
func_5643482608:
    extend(122);
    NEXT();
    goto **PC;
func_5643482736:
    extend(97);
    NEXT();
    goto **PC;
func_5643482864:
    extend(98);
    NEXT();
    goto **PC;
func_5643482992:
    extend(99);
    NEXT();
    goto **PC;
func_5643482544:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643482544;
    goto **PC;
func_5643483760:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5643481008:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643481008;
    goto **PC;
func_5643483584:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5643481184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643481184;
    goto **PC;
func_5643483248:
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
    PC = exp_5643483248;
    goto **PC;
func_5643483376:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5643483888:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643483888;
    goto **PC;
func_5643484736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643484736;
    goto **PC;
func_5643484864:
    extend(42);
    NEXT();
    goto **PC;
func_5643484016:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643484016;
    goto **PC;
func_5643479696:
    extend(47);
    NEXT();
    goto **PC;
func_5643484672:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5643484672;
    goto **PC;
func_5643480064:
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
    PC = func_5643475936_op0;
    goto **PC;
}
