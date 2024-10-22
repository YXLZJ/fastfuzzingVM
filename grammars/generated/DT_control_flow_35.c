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
    static void *func_5534422560_op0[2] = { &&func_5534424384, &&RETURN };
    static void *func_5534422928_op0[2] = { &&func_5534425680, &&RETURN };
    static void *func_5534422928_op1[2] = { &&func_5534425936, &&RETURN };
    static void *func_5534422928_op2[2] = { &&func_5534426192, &&RETURN };
    static void *func_5534423344_op0[2] = { &&func_5534426704, &&RETURN };
    static void *func_5534423344_op1[2] = { &&func_5534424288, &&RETURN };
    static void *func_5534423344_op2[2] = { &&func_5534426896, &&RETURN };
    static void *func_5534423344_op3[2] = { &&func_5534427024, &&RETURN };
    static void *func_5534423344_op4[2] = { &&func_5534427152, &&RETURN };
    static void *func_5534423344_op5[2] = { &&func_5534427344, &&RETURN };
    static void *func_5534423344_op6[2] = { &&func_5534427472, &&RETURN };
    static void *func_5534423344_op7[2] = { &&func_5534427600, &&RETURN };
    static void *func_5534423344_op8[2] = { &&func_5534427728, &&RETURN };
    static void *func_5534423344_op9[2] = { &&func_5534427280, &&RETURN };
    static void *func_5534423440_op0[2] = { &&func_5534428304, &&RETURN };
    static void *func_5534423440_op1[2] = { &&func_5534425472, &&RETURN };
    static void *func_5534423440_op2[2] = { &&func_5534424816, &&RETURN };
    static void *func_5534423216_op0[2] = { &&func_5534426608, &&RETURN };
    static void *func_5534423216_op1[2] = { &&func_5534423568, &&RETURN };
    static void *func_5534423216_op2[2] = { &&func_5534423840, &&RETURN };
    static void *func_5534423136_op0[2] = { &&func_5534426448, &&RETURN };
    static void *func_5534423840_op0[2] = { &&func_5534429456, &&RETURN };
    static void *func_5534423840_op1[2] = { &&func_5534430128, &&RETURN };
    static void *func_5534423840_op2[2] = { &&func_5534430256, &&RETURN };
    static void *func_5534423840_op3[2] = { &&func_5534430384, &&RETURN };
    static void *func_5534423840_op4[2] = { &&func_5534430512, &&RETURN };
    static void *func_5534423840_op5[2] = { &&func_5534430704, &&RETURN };
    static void *func_5534423840_op6[2] = { &&func_5534430832, &&RETURN };
    static void *func_5534423840_op7[2] = { &&func_5534430960, &&RETURN };
    static void *func_5534423840_op8[2] = { &&func_5534431088, &&RETURN };
    static void *func_5534423056_op0[2] = { &&func_5534430640, &&RETURN };
    static void *func_5534423056_op1[2] = { &&func_5534429104, &&RETURN };
    static void *func_5534423568_op0[2] = { &&func_5534423344, &&RETURN };
    static void *func_5534423568_op1[2] = { &&func_5534429280, &&RETURN };
    static void *func_5534424096_op0[2] = { &&func_5534431344, &&RETURN };
    static void *func_5534423760_op0[2] = { &&func_5534431984, &&RETURN };
    static void *func_5534424032_op0[2] = { &&func_5534423760, &&HALT };
    static void *func_5534424448_op0[2] = { &&func_5534423056, &&RETURN };
    static void *func_5534424448_op1[2] = { &&func_5534424656, &&RETURN };
    static void *func_5534424448_op2[2] = { &&func_5534423136, &&RETURN };
    static void *func_5534424448_op3[2] = { &&func_5534422560, &&RETURN };
    static void *func_5534424448_op4[2] = { &&func_5534424096, &&RETURN };
    static void *func_5534424816_op0[2] = { &&func_5534432832, &&RETURN };
    static void *func_5534424816_op1[2] = { &&func_5534432112, &&RETURN };
    static void *func_5534424816_op2[2] = { &&func_5534423216, &&RETURN };
    static void *func_5534424656_op0[2] = { &&func_5534432768, &&RETURN };
    static void *exp_5534424384[5] = {&&func_5534423840, &&func_5534424576, &&func_5534423440, &&func_5534423632, &&RETURN };
    static void *exp_5534425680[4] = {&&func_5534423440, &&func_5534425808, &&func_5534423440, &&RETURN };
    static void *exp_5534425936[4] = {&&func_5534423440, &&func_5534426064, &&func_5534423440, &&RETURN };
    static void *exp_5534426192[4] = {&&func_5534423440, &&func_5534426320, &&func_5534423440, &&RETURN };
    static void *exp_5534428304[4] = {&&func_5534423440, &&func_5534428432, &&func_5534424816, &&RETURN };
    static void *exp_5534425472[4] = {&&func_5534423440, &&func_5534425600, &&func_5534424816, &&RETURN };
    static void *exp_5534426608[4] = {&&func_5534428784, &&func_5534423440, &&func_5534428912, &&RETURN };
    static void *exp_5534426448[12] = {&&func_5534429680, &&func_5534428784, &&func_5534422560, &&func_5534423632, &&func_5534422928, &&func_5534423632, &&func_5534422560, &&func_5534428912, &&func_5534429808, &&func_5534423760, &&func_5534424944, &&RETURN };
    static void *exp_5534430640[8] = {&&func_5534431856, &&func_5534428784, &&func_5534422928, &&func_5534428912, &&func_5534429808, &&func_5534423760, &&func_5534424944, &&RETURN };
    static void *exp_5534429104[12] = {&&func_5534431856, &&func_5534428784, &&func_5534422928, &&func_5534428912, &&func_5534429808, &&func_5534423760, &&func_5534424944, &&func_5534431680, &&func_5534429808, &&func_5534423760, &&func_5534424944, &&RETURN };
    static void *exp_5534429280[3] = {&&func_5534423344, &&func_5534423568, &&RETURN };
    static void *exp_5534431344[6] = {&&func_5534431472, &&func_5534428784, &&func_5534423440, &&func_5534428912, &&func_5534423632, &&RETURN };
    static void *exp_5534431984[3] = {&&func_5534424448, &&func_5534423760, &&RETURN };
    static void *exp_5534432832[4] = {&&func_5534424816, &&func_5534432960, &&func_5534423216, &&RETURN };
    static void *exp_5534432112[4] = {&&func_5534424816, &&func_5534427792, &&func_5534423216, &&RETURN };
    static void *exp_5534432768[8] = {&&func_5534428160, &&func_5534428784, &&func_5534422928, &&func_5534428912, &&func_5534429808, &&func_5534423760, &&func_5534424944, &&RETURN };

func_5534422560:
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
            PC = func_5534422560_op0;
            break;
    }
    goto **PC;
func_5534422928:
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
            PC = func_5534422928_op0;
            break;
        case 1:
            PC = func_5534422928_op1;
            break;
        case 2:
            PC = func_5534422928_op2;
            break;
    }
    goto **PC;
func_5534423344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423344_op0;
            break;
        case 1:
            PC = func_5534423344_op1;
            break;
        case 2:
            PC = func_5534423344_op2;
            break;
        case 3:
            PC = func_5534423344_op3;
            break;
        case 4:
            PC = func_5534423344_op4;
            break;
        case 5:
            PC = func_5534423344_op5;
            break;
        case 6:
            PC = func_5534423344_op6;
            break;
        case 7:
            PC = func_5534423344_op7;
            break;
        case 8:
            PC = func_5534423344_op8;
            break;
        case 9:
            PC = func_5534423344_op9;
            break;
    }
    goto **PC;
func_5534423440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423440_op0;
            break;
        case 1:
            PC = func_5534423440_op1;
            break;
        case 2:
            PC = func_5534423440_op2;
            break;
    }
    goto **PC;
func_5534423216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423216_op0;
            break;
        case 1:
            PC = func_5534423216_op1;
            break;
        case 2:
            PC = func_5534423216_op2;
            break;
    }
    goto **PC;
func_5534423136:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423136_op0;
            break;
    }
    goto **PC;
func_5534423840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423840_op0;
            break;
        case 1:
            PC = func_5534423840_op1;
            break;
        case 2:
            PC = func_5534423840_op2;
            break;
        case 3:
            PC = func_5534423840_op3;
            break;
        case 4:
            PC = func_5534423840_op4;
            break;
        case 5:
            PC = func_5534423840_op5;
            break;
        case 6:
            PC = func_5534423840_op6;
            break;
        case 7:
            PC = func_5534423840_op7;
            break;
        case 8:
            PC = func_5534423840_op8;
            break;
    }
    goto **PC;
func_5534423056:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423056_op0;
            break;
        case 1:
            PC = func_5534423056_op1;
            break;
    }
    goto **PC;
func_5534423568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423568_op0;
            break;
        case 1:
            PC = func_5534423568_op1;
            break;
    }
    goto **PC;
func_5534424096:
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
            PC = func_5534424096_op0;
            break;
    }
    goto **PC;
func_5534423760:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5534423760_op0;
            break;
    }
    goto **PC;
func_5534424032:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5534424032_op0;
            break;
    }
    goto **PC;
func_5534424448:
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
            PC = func_5534424448_op0;
            break;
        case 1:
            PC = func_5534424448_op1;
            break;
        case 2:
            PC = func_5534424448_op2;
            break;
        case 3:
            PC = func_5534424448_op3;
            break;
        case 4:
            PC = func_5534424448_op4;
            break;
    }
    goto **PC;
func_5534424816:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5534424816_op0;
            break;
        case 1:
            PC = func_5534424816_op1;
            break;
        case 2:
            PC = func_5534424816_op2;
            break;
    }
    goto **PC;
func_5534424656:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5534424656_op0;
            break;
    }
    goto **PC;
func_5534424384:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534424384;
    goto **PC;
func_5534424576:
    extend(61);
    NEXT();
    goto **PC;
func_5534423632:
    extend(59);
    NEXT();
    goto **PC;
func_5534425680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534425680;
    goto **PC;
func_5534425808:
    extend(62);
    NEXT();
    goto **PC;
func_5534425936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534425936;
    goto **PC;
func_5534426064:
    extend(60);
    NEXT();
    goto **PC;
func_5534426192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534426192;
    goto **PC;
func_5534426320:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5534426704:
    extend(48);
    NEXT();
    goto **PC;
func_5534424288:
    extend(49);
    NEXT();
    goto **PC;
func_5534426896:
    extend(50);
    NEXT();
    goto **PC;
func_5534427024:
    extend(51);
    NEXT();
    goto **PC;
func_5534427152:
    extend(52);
    NEXT();
    goto **PC;
func_5534427344:
    extend(53);
    NEXT();
    goto **PC;
func_5534427472:
    extend(54);
    NEXT();
    goto **PC;
func_5534427600:
    extend(55);
    NEXT();
    goto **PC;
func_5534427728:
    extend(56);
    NEXT();
    goto **PC;
func_5534427280:
    extend(57);
    NEXT();
    goto **PC;
func_5534428304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534428304;
    goto **PC;
func_5534428432:
    extend(43);
    NEXT();
    goto **PC;
func_5534425472:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534425472;
    goto **PC;
func_5534425600:
    extend(45);
    NEXT();
    goto **PC;
func_5534426608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534426608;
    goto **PC;
func_5534428784:
    extend(40);
    NEXT();
    goto **PC;
func_5534428912:
    extend(41);
    NEXT();
    goto **PC;
func_5534426448:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534426448;
    goto **PC;
func_5534429680:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5534429808:
    extend(123);
    NEXT();
    goto **PC;
func_5534424944:
    extend(125);
    NEXT();
    goto **PC;
func_5534429456:
    extend(105);
    NEXT();
    goto **PC;
func_5534430128:
    extend(106);
    NEXT();
    goto **PC;
func_5534430256:
    extend(107);
    NEXT();
    goto **PC;
func_5534430384:
    extend(120);
    NEXT();
    goto **PC;
func_5534430512:
    extend(121);
    NEXT();
    goto **PC;
func_5534430704:
    extend(122);
    NEXT();
    goto **PC;
func_5534430832:
    extend(97);
    NEXT();
    goto **PC;
func_5534430960:
    extend(98);
    NEXT();
    goto **PC;
func_5534431088:
    extend(99);
    NEXT();
    goto **PC;
func_5534430640:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534430640;
    goto **PC;
func_5534431856:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5534429104:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534429104;
    goto **PC;
func_5534431680:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5534429280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534429280;
    goto **PC;
func_5534431344:
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
    PC = exp_5534431344;
    goto **PC;
func_5534431472:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5534431984:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534431984;
    goto **PC;
func_5534432832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534432832;
    goto **PC;
func_5534432960:
    extend(42);
    NEXT();
    goto **PC;
func_5534432112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534432112;
    goto **PC;
func_5534427792:
    extend(47);
    NEXT();
    goto **PC;
func_5534432768:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5534432768;
    goto **PC;
func_5534428160:
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
    PC = func_5534424032_op0;
    goto **PC;
}
