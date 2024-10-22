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
    static void *func_5811246624_op0[2] = { &&func_5811248448, &&RETURN };
    static void *func_5811246992_op0[2] = { &&func_5811249744, &&RETURN };
    static void *func_5811246992_op1[2] = { &&func_5811250000, &&RETURN };
    static void *func_5811246992_op2[2] = { &&func_5811250256, &&RETURN };
    static void *func_5811247408_op0[2] = { &&func_5811250768, &&RETURN };
    static void *func_5811247408_op1[2] = { &&func_5811248352, &&RETURN };
    static void *func_5811247408_op2[2] = { &&func_5811250960, &&RETURN };
    static void *func_5811247408_op3[2] = { &&func_5811251088, &&RETURN };
    static void *func_5811247408_op4[2] = { &&func_5811251216, &&RETURN };
    static void *func_5811247408_op5[2] = { &&func_5811251408, &&RETURN };
    static void *func_5811247408_op6[2] = { &&func_5811251536, &&RETURN };
    static void *func_5811247408_op7[2] = { &&func_5811251664, &&RETURN };
    static void *func_5811247408_op8[2] = { &&func_5811251792, &&RETURN };
    static void *func_5811247408_op9[2] = { &&func_5811251344, &&RETURN };
    static void *func_5811247504_op0[2] = { &&func_5811252368, &&RETURN };
    static void *func_5811247504_op1[2] = { &&func_5811249536, &&RETURN };
    static void *func_5811247504_op2[2] = { &&func_5811248880, &&RETURN };
    static void *func_5811247280_op0[2] = { &&func_5811250672, &&RETURN };
    static void *func_5811247280_op1[2] = { &&func_5811247632, &&RETURN };
    static void *func_5811247280_op2[2] = { &&func_5811247904, &&RETURN };
    static void *func_5811247200_op0[2] = { &&func_5811250512, &&RETURN };
    static void *func_5811247904_op0[2] = { &&func_5811253520, &&RETURN };
    static void *func_5811247904_op1[2] = { &&func_5811254192, &&RETURN };
    static void *func_5811247904_op2[2] = { &&func_5811254320, &&RETURN };
    static void *func_5811247904_op3[2] = { &&func_5811254448, &&RETURN };
    static void *func_5811247904_op4[2] = { &&func_5811254576, &&RETURN };
    static void *func_5811247904_op5[2] = { &&func_5811254768, &&RETURN };
    static void *func_5811247904_op6[2] = { &&func_5811254896, &&RETURN };
    static void *func_5811247904_op7[2] = { &&func_5811255024, &&RETURN };
    static void *func_5811247904_op8[2] = { &&func_5811255152, &&RETURN };
    static void *func_5811247120_op0[2] = { &&func_5811254704, &&RETURN };
    static void *func_5811247120_op1[2] = { &&func_5811253168, &&RETURN };
    static void *func_5811247632_op0[2] = { &&func_5811247408, &&RETURN };
    static void *func_5811247632_op1[2] = { &&func_5811253344, &&RETURN };
    static void *func_5811248160_op0[2] = { &&func_5811255408, &&RETURN };
    static void *func_5811247824_op0[2] = { &&func_5811256048, &&RETURN };
    static void *func_5811248096_op0[2] = { &&func_5811247824, &&HALT };
    static void *func_5811248512_op0[2] = { &&func_5811247120, &&RETURN };
    static void *func_5811248512_op1[2] = { &&func_5811248720, &&RETURN };
    static void *func_5811248512_op2[2] = { &&func_5811247200, &&RETURN };
    static void *func_5811248512_op3[2] = { &&func_5811246624, &&RETURN };
    static void *func_5811248512_op4[2] = { &&func_5811248160, &&RETURN };
    static void *func_5811248880_op0[2] = { &&func_5811256896, &&RETURN };
    static void *func_5811248880_op1[2] = { &&func_5811256176, &&RETURN };
    static void *func_5811248880_op2[2] = { &&func_5811247280, &&RETURN };
    static void *func_5811248720_op0[2] = { &&func_5811256832, &&RETURN };
    static void *exp_5811248448[5] = {&&func_5811247904, &&func_5811248640, &&func_5811247504, &&func_5811247696, &&RETURN };
    static void *exp_5811249744[4] = {&&func_5811247504, &&func_5811249872, &&func_5811247504, &&RETURN };
    static void *exp_5811250000[4] = {&&func_5811247504, &&func_5811250128, &&func_5811247504, &&RETURN };
    static void *exp_5811250256[4] = {&&func_5811247504, &&func_5811250384, &&func_5811247504, &&RETURN };
    static void *exp_5811252368[4] = {&&func_5811247504, &&func_5811252496, &&func_5811248880, &&RETURN };
    static void *exp_5811249536[4] = {&&func_5811247504, &&func_5811249664, &&func_5811248880, &&RETURN };
    static void *exp_5811250672[4] = {&&func_5811252848, &&func_5811247504, &&func_5811252976, &&RETURN };
    static void *exp_5811250512[12] = {&&func_5811253744, &&func_5811252848, &&func_5811246624, &&func_5811247696, &&func_5811246992, &&func_5811247696, &&func_5811246624, &&func_5811252976, &&func_5811253872, &&func_5811247824, &&func_5811249008, &&RETURN };
    static void *exp_5811254704[8] = {&&func_5811255920, &&func_5811252848, &&func_5811246992, &&func_5811252976, &&func_5811253872, &&func_5811247824, &&func_5811249008, &&RETURN };
    static void *exp_5811253168[12] = {&&func_5811255920, &&func_5811252848, &&func_5811246992, &&func_5811252976, &&func_5811253872, &&func_5811247824, &&func_5811249008, &&func_5811255744, &&func_5811253872, &&func_5811247824, &&func_5811249008, &&RETURN };
    static void *exp_5811253344[3] = {&&func_5811247408, &&func_5811247632, &&RETURN };
    static void *exp_5811255408[6] = {&&func_5811255536, &&func_5811252848, &&func_5811247504, &&func_5811252976, &&func_5811247696, &&RETURN };
    static void *exp_5811256048[3] = {&&func_5811248512, &&func_5811247824, &&RETURN };
    static void *exp_5811256896[4] = {&&func_5811248880, &&func_5811257024, &&func_5811247280, &&RETURN };
    static void *exp_5811256176[4] = {&&func_5811248880, &&func_5811251856, &&func_5811247280, &&RETURN };
    static void *exp_5811256832[8] = {&&func_5811252224, &&func_5811252848, &&func_5811246992, &&func_5811252976, &&func_5811253872, &&func_5811247824, &&func_5811249008, &&RETURN };

func_5811246624:
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
            PC = func_5811246624_op0;
            break;
    }
    goto **PC;
func_5811246992:
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
            PC = func_5811246992_op0;
            break;
        case 1:
            PC = func_5811246992_op1;
            break;
        case 2:
            PC = func_5811246992_op2;
            break;
    }
    goto **PC;
func_5811247408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247408_op0;
            break;
        case 1:
            PC = func_5811247408_op1;
            break;
        case 2:
            PC = func_5811247408_op2;
            break;
        case 3:
            PC = func_5811247408_op3;
            break;
        case 4:
            PC = func_5811247408_op4;
            break;
        case 5:
            PC = func_5811247408_op5;
            break;
        case 6:
            PC = func_5811247408_op6;
            break;
        case 7:
            PC = func_5811247408_op7;
            break;
        case 8:
            PC = func_5811247408_op8;
            break;
        case 9:
            PC = func_5811247408_op9;
            break;
    }
    goto **PC;
func_5811247504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247504_op0;
            break;
        case 1:
            PC = func_5811247504_op1;
            break;
        case 2:
            PC = func_5811247504_op2;
            break;
    }
    goto **PC;
func_5811247280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247280_op0;
            break;
        case 1:
            PC = func_5811247280_op1;
            break;
        case 2:
            PC = func_5811247280_op2;
            break;
    }
    goto **PC;
func_5811247200:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247200_op0;
            break;
    }
    goto **PC;
func_5811247904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247904_op0;
            break;
        case 1:
            PC = func_5811247904_op1;
            break;
        case 2:
            PC = func_5811247904_op2;
            break;
        case 3:
            PC = func_5811247904_op3;
            break;
        case 4:
            PC = func_5811247904_op4;
            break;
        case 5:
            PC = func_5811247904_op5;
            break;
        case 6:
            PC = func_5811247904_op6;
            break;
        case 7:
            PC = func_5811247904_op7;
            break;
        case 8:
            PC = func_5811247904_op8;
            break;
    }
    goto **PC;
func_5811247120:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247120_op0;
            break;
        case 1:
            PC = func_5811247120_op1;
            break;
    }
    goto **PC;
func_5811247632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247632_op0;
            break;
        case 1:
            PC = func_5811247632_op1;
            break;
    }
    goto **PC;
func_5811248160:
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
            PC = func_5811248160_op0;
            break;
    }
    goto **PC;
func_5811247824:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811247824_op0;
            break;
    }
    goto **PC;
func_5811248096:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811248096_op0;
            break;
    }
    goto **PC;
func_5811248512:
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
            PC = func_5811248512_op0;
            break;
        case 1:
            PC = func_5811248512_op1;
            break;
        case 2:
            PC = func_5811248512_op2;
            break;
        case 3:
            PC = func_5811248512_op3;
            break;
        case 4:
            PC = func_5811248512_op4;
            break;
    }
    goto **PC;
func_5811248880:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5811248880_op0;
            break;
        case 1:
            PC = func_5811248880_op1;
            break;
        case 2:
            PC = func_5811248880_op2;
            break;
    }
    goto **PC;
func_5811248720:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5811248720_op0;
            break;
    }
    goto **PC;
func_5811248448:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811248448;
    goto **PC;
func_5811248640:
    extend(61);
    NEXT();
    goto **PC;
func_5811247696:
    extend(59);
    NEXT();
    goto **PC;
func_5811249744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811249744;
    goto **PC;
func_5811249872:
    extend(62);
    NEXT();
    goto **PC;
func_5811250000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811250000;
    goto **PC;
func_5811250128:
    extend(60);
    NEXT();
    goto **PC;
func_5811250256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811250256;
    goto **PC;
func_5811250384:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5811250768:
    extend(48);
    NEXT();
    goto **PC;
func_5811248352:
    extend(49);
    NEXT();
    goto **PC;
func_5811250960:
    extend(50);
    NEXT();
    goto **PC;
func_5811251088:
    extend(51);
    NEXT();
    goto **PC;
func_5811251216:
    extend(52);
    NEXT();
    goto **PC;
func_5811251408:
    extend(53);
    NEXT();
    goto **PC;
func_5811251536:
    extend(54);
    NEXT();
    goto **PC;
func_5811251664:
    extend(55);
    NEXT();
    goto **PC;
func_5811251792:
    extend(56);
    NEXT();
    goto **PC;
func_5811251344:
    extend(57);
    NEXT();
    goto **PC;
func_5811252368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811252368;
    goto **PC;
func_5811252496:
    extend(43);
    NEXT();
    goto **PC;
func_5811249536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811249536;
    goto **PC;
func_5811249664:
    extend(45);
    NEXT();
    goto **PC;
func_5811250672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811250672;
    goto **PC;
func_5811252848:
    extend(40);
    NEXT();
    goto **PC;
func_5811252976:
    extend(41);
    NEXT();
    goto **PC;
func_5811250512:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811250512;
    goto **PC;
func_5811253744:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5811253872:
    extend(123);
    NEXT();
    goto **PC;
func_5811249008:
    extend(125);
    NEXT();
    goto **PC;
func_5811253520:
    extend(105);
    NEXT();
    goto **PC;
func_5811254192:
    extend(106);
    NEXT();
    goto **PC;
func_5811254320:
    extend(107);
    NEXT();
    goto **PC;
func_5811254448:
    extend(120);
    NEXT();
    goto **PC;
func_5811254576:
    extend(121);
    NEXT();
    goto **PC;
func_5811254768:
    extend(122);
    NEXT();
    goto **PC;
func_5811254896:
    extend(97);
    NEXT();
    goto **PC;
func_5811255024:
    extend(98);
    NEXT();
    goto **PC;
func_5811255152:
    extend(99);
    NEXT();
    goto **PC;
func_5811254704:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811254704;
    goto **PC;
func_5811255920:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5811253168:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811253168;
    goto **PC;
func_5811255744:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5811253344:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811253344;
    goto **PC;
func_5811255408:
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
    PC = exp_5811255408;
    goto **PC;
func_5811255536:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5811256048:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811256048;
    goto **PC;
func_5811256896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811256896;
    goto **PC;
func_5811257024:
    extend(42);
    NEXT();
    goto **PC;
func_5811256176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811256176;
    goto **PC;
func_5811251856:
    extend(47);
    NEXT();
    goto **PC;
func_5811256832:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5811256832;
    goto **PC;
func_5811252224:
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
    PC = func_5811248096_op0;
    goto **PC;
}
