#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 50
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
    static void *func_4821390880_op0[2] = { &&func_4821392704, &&RETURN };
    static void *func_4821391248_op0[2] = { &&func_4821394000, &&RETURN };
    static void *func_4821391248_op1[2] = { &&func_4821394256, &&RETURN };
    static void *func_4821391248_op2[2] = { &&func_4821394512, &&RETURN };
    static void *func_4821391664_op0[2] = { &&func_4821395024, &&RETURN };
    static void *func_4821391664_op1[2] = { &&func_4821392608, &&RETURN };
    static void *func_4821391664_op2[2] = { &&func_4821395216, &&RETURN };
    static void *func_4821391664_op3[2] = { &&func_4821395344, &&RETURN };
    static void *func_4821391664_op4[2] = { &&func_4821395472, &&RETURN };
    static void *func_4821391664_op5[2] = { &&func_4821395664, &&RETURN };
    static void *func_4821391664_op6[2] = { &&func_4821395792, &&RETURN };
    static void *func_4821391664_op7[2] = { &&func_4821395920, &&RETURN };
    static void *func_4821391664_op8[2] = { &&func_4821396048, &&RETURN };
    static void *func_4821391664_op9[2] = { &&func_4821395600, &&RETURN };
    static void *func_4821391760_op0[2] = { &&func_4821396624, &&RETURN };
    static void *func_4821391760_op1[2] = { &&func_4821393792, &&RETURN };
    static void *func_4821391760_op2[2] = { &&func_4821393136, &&RETURN };
    static void *func_4821391536_op0[2] = { &&func_4821394928, &&RETURN };
    static void *func_4821391536_op1[2] = { &&func_4821391888, &&RETURN };
    static void *func_4821391536_op2[2] = { &&func_4821392160, &&RETURN };
    static void *func_4821391456_op0[2] = { &&func_4821394768, &&RETURN };
    static void *func_4821392160_op0[2] = { &&func_4821397776, &&RETURN };
    static void *func_4821392160_op1[2] = { &&func_4821398448, &&RETURN };
    static void *func_4821392160_op2[2] = { &&func_4821398576, &&RETURN };
    static void *func_4821392160_op3[2] = { &&func_4821398704, &&RETURN };
    static void *func_4821392160_op4[2] = { &&func_4821398832, &&RETURN };
    static void *func_4821392160_op5[2] = { &&func_4821399024, &&RETURN };
    static void *func_4821392160_op6[2] = { &&func_4821399152, &&RETURN };
    static void *func_4821392160_op7[2] = { &&func_4821399280, &&RETURN };
    static void *func_4821392160_op8[2] = { &&func_4821399408, &&RETURN };
    static void *func_4821391376_op0[2] = { &&func_4821398960, &&RETURN };
    static void *func_4821391376_op1[2] = { &&func_4821397424, &&RETURN };
    static void *func_4821391888_op0[2] = { &&func_4821391664, &&RETURN };
    static void *func_4821391888_op1[2] = { &&func_4821397600, &&RETURN };
    static void *func_4821392416_op0[2] = { &&func_4821399664, &&RETURN };
    static void *func_4821392080_op0[2] = { &&func_4821400304, &&RETURN };
    static void *func_4821392352_op0[2] = { &&func_4821392080, &&HALT };
    static void *func_4821392768_op0[2] = { &&func_4821391376, &&RETURN };
    static void *func_4821392768_op1[2] = { &&func_4821392976, &&RETURN };
    static void *func_4821392768_op2[2] = { &&func_4821391456, &&RETURN };
    static void *func_4821392768_op3[2] = { &&func_4821390880, &&RETURN };
    static void *func_4821392768_op4[2] = { &&func_4821392416, &&RETURN };
    static void *func_4821393136_op0[2] = { &&func_4821401152, &&RETURN };
    static void *func_4821393136_op1[2] = { &&func_4821400432, &&RETURN };
    static void *func_4821393136_op2[2] = { &&func_4821391536, &&RETURN };
    static void *func_4821392976_op0[2] = { &&func_4821401088, &&RETURN };
    static void *exp_4821392704[5] = {&&func_4821392160, &&func_4821392896, &&func_4821391760, &&func_4821391952, &&RETURN };
    static void *exp_4821394000[4] = {&&func_4821391760, &&func_4821394128, &&func_4821391760, &&RETURN };
    static void *exp_4821394256[4] = {&&func_4821391760, &&func_4821394384, &&func_4821391760, &&RETURN };
    static void *exp_4821394512[4] = {&&func_4821391760, &&func_4821394640, &&func_4821391760, &&RETURN };
    static void *exp_4821396624[4] = {&&func_4821391760, &&func_4821396752, &&func_4821393136, &&RETURN };
    static void *exp_4821393792[4] = {&&func_4821391760, &&func_4821393920, &&func_4821393136, &&RETURN };
    static void *exp_4821394928[4] = {&&func_4821397104, &&func_4821391760, &&func_4821397232, &&RETURN };
    static void *exp_4821394768[12] = {&&func_4821398000, &&func_4821397104, &&func_4821390880, &&func_4821391952, &&func_4821391248, &&func_4821391952, &&func_4821390880, &&func_4821397232, &&func_4821398128, &&func_4821392080, &&func_4821393264, &&RETURN };
    static void *exp_4821398960[8] = {&&func_4821400176, &&func_4821397104, &&func_4821391248, &&func_4821397232, &&func_4821398128, &&func_4821392080, &&func_4821393264, &&RETURN };
    static void *exp_4821397424[12] = {&&func_4821400176, &&func_4821397104, &&func_4821391248, &&func_4821397232, &&func_4821398128, &&func_4821392080, &&func_4821393264, &&func_4821400000, &&func_4821398128, &&func_4821392080, &&func_4821393264, &&RETURN };
    static void *exp_4821397600[3] = {&&func_4821391664, &&func_4821391888, &&RETURN };
    static void *exp_4821399664[6] = {&&func_4821399792, &&func_4821397104, &&func_4821391760, &&func_4821397232, &&func_4821391952, &&RETURN };
    static void *exp_4821400304[3] = {&&func_4821392768, &&func_4821392080, &&RETURN };
    static void *exp_4821401152[4] = {&&func_4821393136, &&func_4821401280, &&func_4821391536, &&RETURN };
    static void *exp_4821400432[4] = {&&func_4821393136, &&func_4821396112, &&func_4821391536, &&RETURN };
    static void *exp_4821401088[8] = {&&func_4821396480, &&func_4821397104, &&func_4821391248, &&func_4821397232, &&func_4821398128, &&func_4821392080, &&func_4821393264, &&RETURN };

func_4821390880:
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
            PC = func_4821390880_op0;
            break;
    }
    goto **PC;
func_4821391248:
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
            PC = func_4821391248_op0;
            break;
        case 1:
            PC = func_4821391248_op1;
            break;
        case 2:
            PC = func_4821391248_op2;
            break;
    }
    goto **PC;
func_4821391664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391664_op0;
            break;
        case 1:
            PC = func_4821391664_op1;
            break;
        case 2:
            PC = func_4821391664_op2;
            break;
        case 3:
            PC = func_4821391664_op3;
            break;
        case 4:
            PC = func_4821391664_op4;
            break;
        case 5:
            PC = func_4821391664_op5;
            break;
        case 6:
            PC = func_4821391664_op6;
            break;
        case 7:
            PC = func_4821391664_op7;
            break;
        case 8:
            PC = func_4821391664_op8;
            break;
        case 9:
            PC = func_4821391664_op9;
            break;
    }
    goto **PC;
func_4821391760:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391760_op0;
            break;
        case 1:
            PC = func_4821391760_op1;
            break;
        case 2:
            PC = func_4821391760_op2;
            break;
    }
    goto **PC;
func_4821391536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391536_op0;
            break;
        case 1:
            PC = func_4821391536_op1;
            break;
        case 2:
            PC = func_4821391536_op2;
            break;
    }
    goto **PC;
func_4821391456:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391456_op0;
            break;
    }
    goto **PC;
func_4821392160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4821392160_op0;
            break;
        case 1:
            PC = func_4821392160_op1;
            break;
        case 2:
            PC = func_4821392160_op2;
            break;
        case 3:
            PC = func_4821392160_op3;
            break;
        case 4:
            PC = func_4821392160_op4;
            break;
        case 5:
            PC = func_4821392160_op5;
            break;
        case 6:
            PC = func_4821392160_op6;
            break;
        case 7:
            PC = func_4821392160_op7;
            break;
        case 8:
            PC = func_4821392160_op8;
            break;
    }
    goto **PC;
func_4821391376:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391376_op0;
            break;
        case 1:
            PC = func_4821391376_op1;
            break;
    }
    goto **PC;
func_4821391888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4821391888_op0;
            break;
        case 1:
            PC = func_4821391888_op1;
            break;
    }
    goto **PC;
func_4821392416:
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
            PC = func_4821392416_op0;
            break;
    }
    goto **PC;
func_4821392080:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821392080_op0;
            break;
    }
    goto **PC;
func_4821392352:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821392352_op0;
            break;
    }
    goto **PC;
func_4821392768:
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
            PC = func_4821392768_op0;
            break;
        case 1:
            PC = func_4821392768_op1;
            break;
        case 2:
            PC = func_4821392768_op2;
            break;
        case 3:
            PC = func_4821392768_op3;
            break;
        case 4:
            PC = func_4821392768_op4;
            break;
    }
    goto **PC;
func_4821393136:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4821393136_op0;
            break;
        case 1:
            PC = func_4821393136_op1;
            break;
        case 2:
            PC = func_4821393136_op2;
            break;
    }
    goto **PC;
func_4821392976:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4821392976_op0;
            break;
    }
    goto **PC;
func_4821392704:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821392704;
    goto **PC;
func_4821392896:
    extend(61);
    NEXT();
    goto **PC;
func_4821391952:
    extend(59);
    NEXT();
    goto **PC;
func_4821394000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821394000;
    goto **PC;
func_4821394128:
    extend(62);
    NEXT();
    goto **PC;
func_4821394256:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821394256;
    goto **PC;
func_4821394384:
    extend(60);
    NEXT();
    goto **PC;
func_4821394512:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821394512;
    goto **PC;
func_4821394640:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4821395024:
    extend(48);
    NEXT();
    goto **PC;
func_4821392608:
    extend(49);
    NEXT();
    goto **PC;
func_4821395216:
    extend(50);
    NEXT();
    goto **PC;
func_4821395344:
    extend(51);
    NEXT();
    goto **PC;
func_4821395472:
    extend(52);
    NEXT();
    goto **PC;
func_4821395664:
    extend(53);
    NEXT();
    goto **PC;
func_4821395792:
    extend(54);
    NEXT();
    goto **PC;
func_4821395920:
    extend(55);
    NEXT();
    goto **PC;
func_4821396048:
    extend(56);
    NEXT();
    goto **PC;
func_4821395600:
    extend(57);
    NEXT();
    goto **PC;
func_4821396624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821396624;
    goto **PC;
func_4821396752:
    extend(43);
    NEXT();
    goto **PC;
func_4821393792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821393792;
    goto **PC;
func_4821393920:
    extend(45);
    NEXT();
    goto **PC;
func_4821394928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821394928;
    goto **PC;
func_4821397104:
    extend(40);
    NEXT();
    goto **PC;
func_4821397232:
    extend(41);
    NEXT();
    goto **PC;
func_4821394768:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821394768;
    goto **PC;
func_4821398000:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_4821398128:
    extend(123);
    NEXT();
    goto **PC;
func_4821393264:
    extend(125);
    NEXT();
    goto **PC;
func_4821397776:
    extend(105);
    NEXT();
    goto **PC;
func_4821398448:
    extend(106);
    NEXT();
    goto **PC;
func_4821398576:
    extend(107);
    NEXT();
    goto **PC;
func_4821398704:
    extend(120);
    NEXT();
    goto **PC;
func_4821398832:
    extend(121);
    NEXT();
    goto **PC;
func_4821399024:
    extend(122);
    NEXT();
    goto **PC;
func_4821399152:
    extend(97);
    NEXT();
    goto **PC;
func_4821399280:
    extend(98);
    NEXT();
    goto **PC;
func_4821399408:
    extend(99);
    NEXT();
    goto **PC;
func_4821398960:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821398960;
    goto **PC;
func_4821400176:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4821397424:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821397424;
    goto **PC;
func_4821400000:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4821397600:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821397600;
    goto **PC;
func_4821399664:
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
    PC = exp_4821399664;
    goto **PC;
func_4821399792:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4821400304:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821400304;
    goto **PC;
func_4821401152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821401152;
    goto **PC;
func_4821401280:
    extend(42);
    NEXT();
    goto **PC;
func_4821400432:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821400432;
    goto **PC;
func_4821396112:
    extend(47);
    NEXT();
    goto **PC;
func_4821401088:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4821401088;
    goto **PC;
func_4821396480:
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
    PC = func_4821392352_op0;
    goto **PC;
}
