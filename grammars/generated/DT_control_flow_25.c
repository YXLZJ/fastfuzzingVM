#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 25
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
    static void *func_5736785232_op0[2] = { &&func_5736786944, &&RETURN };
    static void *func_5736785536_op0[2] = { &&func_5736788240, &&RETURN };
    static void *func_5736785536_op1[2] = { &&func_5736788496, &&RETURN };
    static void *func_5736785536_op2[2] = { &&func_5736788752, &&RETURN };
    static void *func_5736785904_op0[2] = { &&func_5736789264, &&RETURN };
    static void *func_5736785904_op1[2] = { &&func_5736786848, &&RETURN };
    static void *func_5736785904_op2[2] = { &&func_5736789456, &&RETURN };
    static void *func_5736785904_op3[2] = { &&func_5736789584, &&RETURN };
    static void *func_5736785904_op4[2] = { &&func_5736789712, &&RETURN };
    static void *func_5736785904_op5[2] = { &&func_5736789904, &&RETURN };
    static void *func_5736785904_op6[2] = { &&func_5736790032, &&RETURN };
    static void *func_5736785904_op7[2] = { &&func_5736790160, &&RETURN };
    static void *func_5736785904_op8[2] = { &&func_5736790288, &&RETURN };
    static void *func_5736785904_op9[2] = { &&func_5736789840, &&RETURN };
    static void *func_5736786000_op0[2] = { &&func_5736790864, &&RETURN };
    static void *func_5736786000_op1[2] = { &&func_5736788032, &&RETURN };
    static void *func_5736786000_op2[2] = { &&func_5736787376, &&RETURN };
    static void *func_5736785456_op0[2] = { &&func_5736789168, &&RETURN };
    static void *func_5736785456_op1[2] = { &&func_5736786128, &&RETURN };
    static void *func_5736785456_op2[2] = { &&func_5736786400, &&RETURN };
    static void *func_5736785376_op0[2] = { &&func_5736789008, &&RETURN };
    static void *func_5736786400_op0[2] = { &&func_5736792016, &&RETURN };
    static void *func_5736786400_op1[2] = { &&func_5736792688, &&RETURN };
    static void *func_5736786400_op2[2] = { &&func_5736792816, &&RETURN };
    static void *func_5736786400_op3[2] = { &&func_5736792944, &&RETURN };
    static void *func_5736786400_op4[2] = { &&func_5736793072, &&RETURN };
    static void *func_5736786400_op5[2] = { &&func_5736793264, &&RETURN };
    static void *func_5736786400_op6[2] = { &&func_5736793392, &&RETURN };
    static void *func_5736786400_op7[2] = { &&func_5736793520, &&RETURN };
    static void *func_5736786400_op8[2] = { &&func_5736793648, &&RETURN };
    static void *func_5736780128_op0[2] = { &&func_5736793200, &&RETURN };
    static void *func_5736780128_op1[2] = { &&func_5736791664, &&RETURN };
    static void *func_5736786128_op0[2] = { &&func_5736785904, &&RETURN };
    static void *func_5736786128_op1[2] = { &&func_5736791840, &&RETURN };
    static void *func_5736786656_op0[2] = { &&func_5736793904, &&RETURN };
    static void *func_5736786320_op0[2] = { &&func_5747261984, &&RETURN };
    static void *func_5736786592_op0[2] = { &&func_5736786320, &&HALT };
    static void *func_5736787008_op0[2] = { &&func_5736780128, &&RETURN };
    static void *func_5736787008_op1[2] = { &&func_5736787216, &&RETURN };
    static void *func_5736787008_op2[2] = { &&func_5736785376, &&RETURN };
    static void *func_5736787008_op3[2] = { &&func_5736785232, &&RETURN };
    static void *func_5736787008_op4[2] = { &&func_5736786656, &&RETURN };
    static void *func_5736787376_op0[2] = { &&func_5747262336, &&RETURN };
    static void *func_5736787376_op1[2] = { &&func_5747262160, &&RETURN };
    static void *func_5736787376_op2[2] = { &&func_5736785456, &&RETURN };
    static void *func_5736787216_op0[2] = { &&func_5747262640, &&RETURN };
    static void *exp_5736786944[5] = {&&func_5736786400, &&func_5736787136, &&func_5736786000, &&func_5736786192, &&RETURN };
    static void *exp_5736788240[4] = {&&func_5736786000, &&func_5736788368, &&func_5736786000, &&RETURN };
    static void *exp_5736788496[4] = {&&func_5736786000, &&func_5736788624, &&func_5736786000, &&RETURN };
    static void *exp_5736788752[4] = {&&func_5736786000, &&func_5736788880, &&func_5736786000, &&RETURN };
    static void *exp_5736790864[4] = {&&func_5736786000, &&func_5736790992, &&func_5736787376, &&RETURN };
    static void *exp_5736788032[4] = {&&func_5736786000, &&func_5736788160, &&func_5736787376, &&RETURN };
    static void *exp_5736789168[4] = {&&func_5736791344, &&func_5736786000, &&func_5736791472, &&RETURN };
    static void *exp_5736789008[12] = {&&func_5736792240, &&func_5736791344, &&func_5736785232, &&func_5736786192, &&func_5736785536, &&func_5736786192, &&func_5736785232, &&func_5736791472, &&func_5736792368, &&func_5736786320, &&func_5736787504, &&RETURN };
    static void *exp_5736793200[8] = {&&func_5736794416, &&func_5736791344, &&func_5736785536, &&func_5736791472, &&func_5736792368, &&func_5736786320, &&func_5736787504, &&RETURN };
    static void *exp_5736791664[12] = {&&func_5736794416, &&func_5736791344, &&func_5736785536, &&func_5736791472, &&func_5736792368, &&func_5736786320, &&func_5736787504, &&func_5736794240, &&func_5736792368, &&func_5736786320, &&func_5736787504, &&RETURN };
    static void *exp_5736791840[3] = {&&func_5736785904, &&func_5736786128, &&RETURN };
    static void *exp_5736793904[6] = {&&func_5747261632, &&func_5736791344, &&func_5736786000, &&func_5736791472, &&func_5736786192, &&RETURN };
    static void *exp_5747261984[3] = {&&func_5736787008, &&func_5736786320, &&RETURN };
    static void *exp_5747262336[4] = {&&func_5736787376, &&func_5747262704, &&func_5736785456, &&RETURN };
    static void *exp_5747262160[4] = {&&func_5736787376, &&func_5747262912, &&func_5736785456, &&RETURN };
    static void *exp_5747262640[8] = {&&func_5747263376, &&func_5736791344, &&func_5736785536, &&func_5736791472, &&func_5736792368, &&func_5736786320, &&func_5736787504, &&RETURN };

func_5736785232:
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
            PC = func_5736785232_op0;
            break;
    }
    goto **PC;
func_5736785536:
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
            PC = func_5736785536_op0;
            break;
        case 1:
            PC = func_5736785536_op1;
            break;
        case 2:
            PC = func_5736785536_op2;
            break;
    }
    goto **PC;
func_5736785904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5736785904_op0;
            break;
        case 1:
            PC = func_5736785904_op1;
            break;
        case 2:
            PC = func_5736785904_op2;
            break;
        case 3:
            PC = func_5736785904_op3;
            break;
        case 4:
            PC = func_5736785904_op4;
            break;
        case 5:
            PC = func_5736785904_op5;
            break;
        case 6:
            PC = func_5736785904_op6;
            break;
        case 7:
            PC = func_5736785904_op7;
            break;
        case 8:
            PC = func_5736785904_op8;
            break;
        case 9:
            PC = func_5736785904_op9;
            break;
    }
    goto **PC;
func_5736786000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5736786000_op0;
            break;
        case 1:
            PC = func_5736786000_op1;
            break;
        case 2:
            PC = func_5736786000_op2;
            break;
    }
    goto **PC;
func_5736785456:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5736785456_op0;
            break;
        case 1:
            PC = func_5736785456_op1;
            break;
        case 2:
            PC = func_5736785456_op2;
            break;
    }
    goto **PC;
func_5736785376:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5736785376_op0;
            break;
    }
    goto **PC;
func_5736786400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5736786400_op0;
            break;
        case 1:
            PC = func_5736786400_op1;
            break;
        case 2:
            PC = func_5736786400_op2;
            break;
        case 3:
            PC = func_5736786400_op3;
            break;
        case 4:
            PC = func_5736786400_op4;
            break;
        case 5:
            PC = func_5736786400_op5;
            break;
        case 6:
            PC = func_5736786400_op6;
            break;
        case 7:
            PC = func_5736786400_op7;
            break;
        case 8:
            PC = func_5736786400_op8;
            break;
    }
    goto **PC;
func_5736780128:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5736780128_op0;
            break;
        case 1:
            PC = func_5736780128_op1;
            break;
    }
    goto **PC;
func_5736786128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5736786128_op0;
            break;
        case 1:
            PC = func_5736786128_op1;
            break;
    }
    goto **PC;
func_5736786656:
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
            PC = func_5736786656_op0;
            break;
    }
    goto **PC;
func_5736786320:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5736786320_op0;
            break;
    }
    goto **PC;
func_5736786592:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5736786592_op0;
            break;
    }
    goto **PC;
func_5736787008:
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
            PC = func_5736787008_op0;
            break;
        case 1:
            PC = func_5736787008_op1;
            break;
        case 2:
            PC = func_5736787008_op2;
            break;
        case 3:
            PC = func_5736787008_op3;
            break;
        case 4:
            PC = func_5736787008_op4;
            break;
    }
    goto **PC;
func_5736787376:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5736787376_op0;
            break;
        case 1:
            PC = func_5736787376_op1;
            break;
        case 2:
            PC = func_5736787376_op2;
            break;
    }
    goto **PC;
func_5736787216:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5736787216_op0;
            break;
    }
    goto **PC;
func_5736786944:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736786944;
    goto **PC;
func_5736787136:
    extend(61);
    NEXT();
    goto **PC;
func_5736786192:
    extend(59);
    NEXT();
    goto **PC;
func_5736788240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736788240;
    goto **PC;
func_5736788368:
    extend(62);
    NEXT();
    goto **PC;
func_5736788496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736788496;
    goto **PC;
func_5736788624:
    extend(60);
    NEXT();
    goto **PC;
func_5736788752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736788752;
    goto **PC;
func_5736788880:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5736789264:
    extend(48);
    NEXT();
    goto **PC;
func_5736786848:
    extend(49);
    NEXT();
    goto **PC;
func_5736789456:
    extend(50);
    NEXT();
    goto **PC;
func_5736789584:
    extend(51);
    NEXT();
    goto **PC;
func_5736789712:
    extend(52);
    NEXT();
    goto **PC;
func_5736789904:
    extend(53);
    NEXT();
    goto **PC;
func_5736790032:
    extend(54);
    NEXT();
    goto **PC;
func_5736790160:
    extend(55);
    NEXT();
    goto **PC;
func_5736790288:
    extend(56);
    NEXT();
    goto **PC;
func_5736789840:
    extend(57);
    NEXT();
    goto **PC;
func_5736790864:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736790864;
    goto **PC;
func_5736790992:
    extend(43);
    NEXT();
    goto **PC;
func_5736788032:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736788032;
    goto **PC;
func_5736788160:
    extend(45);
    NEXT();
    goto **PC;
func_5736789168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736789168;
    goto **PC;
func_5736791344:
    extend(40);
    NEXT();
    goto **PC;
func_5736791472:
    extend(41);
    NEXT();
    goto **PC;
func_5736789008:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736789008;
    goto **PC;
func_5736792240:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5736792368:
    extend(123);
    NEXT();
    goto **PC;
func_5736787504:
    extend(125);
    NEXT();
    goto **PC;
func_5736792016:
    extend(105);
    NEXT();
    goto **PC;
func_5736792688:
    extend(106);
    NEXT();
    goto **PC;
func_5736792816:
    extend(107);
    NEXT();
    goto **PC;
func_5736792944:
    extend(120);
    NEXT();
    goto **PC;
func_5736793072:
    extend(121);
    NEXT();
    goto **PC;
func_5736793264:
    extend(122);
    NEXT();
    goto **PC;
func_5736793392:
    extend(97);
    NEXT();
    goto **PC;
func_5736793520:
    extend(98);
    NEXT();
    goto **PC;
func_5736793648:
    extend(99);
    NEXT();
    goto **PC;
func_5736793200:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736793200;
    goto **PC;
func_5736794416:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5736791664:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736791664;
    goto **PC;
func_5736794240:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5736791840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5736791840;
    goto **PC;
func_5736793904:
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
    PC = exp_5736793904;
    goto **PC;
func_5747261632:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5747261984:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5747261984;
    goto **PC;
func_5747262336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5747262336;
    goto **PC;
func_5747262704:
    extend(42);
    NEXT();
    goto **PC;
func_5747262160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5747262160;
    goto **PC;
func_5747262912:
    extend(47);
    NEXT();
    goto **PC;
func_5747262640:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5747262640;
    goto **PC;
func_5747263376:
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
    PC = func_5736786592_op0;
    goto **PC;
}
