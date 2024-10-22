#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 60
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
    static void *func_5215655456_op0[2] = { &&func_5215657280, &&RETURN };
    static void *func_5215655824_op0[2] = { &&func_5215658576, &&RETURN };
    static void *func_5215655824_op1[2] = { &&func_5215658832, &&RETURN };
    static void *func_5215655824_op2[2] = { &&func_5215659088, &&RETURN };
    static void *func_5215656240_op0[2] = { &&func_5215659600, &&RETURN };
    static void *func_5215656240_op1[2] = { &&func_5215657184, &&RETURN };
    static void *func_5215656240_op2[2] = { &&func_5215659792, &&RETURN };
    static void *func_5215656240_op3[2] = { &&func_5215659920, &&RETURN };
    static void *func_5215656240_op4[2] = { &&func_5215660048, &&RETURN };
    static void *func_5215656240_op5[2] = { &&func_5215660240, &&RETURN };
    static void *func_5215656240_op6[2] = { &&func_5215660368, &&RETURN };
    static void *func_5215656240_op7[2] = { &&func_5215660496, &&RETURN };
    static void *func_5215656240_op8[2] = { &&func_5215660624, &&RETURN };
    static void *func_5215656240_op9[2] = { &&func_5215660176, &&RETURN };
    static void *func_5215656336_op0[2] = { &&func_5215661200, &&RETURN };
    static void *func_5215656336_op1[2] = { &&func_5215658368, &&RETURN };
    static void *func_5215656336_op2[2] = { &&func_5215657712, &&RETURN };
    static void *func_5215656112_op0[2] = { &&func_5215659504, &&RETURN };
    static void *func_5215656112_op1[2] = { &&func_5215656464, &&RETURN };
    static void *func_5215656112_op2[2] = { &&func_5215656736, &&RETURN };
    static void *func_5215656032_op0[2] = { &&func_5215659344, &&RETURN };
    static void *func_5215656736_op0[2] = { &&func_5215662352, &&RETURN };
    static void *func_5215656736_op1[2] = { &&func_5215663024, &&RETURN };
    static void *func_5215656736_op2[2] = { &&func_5215663152, &&RETURN };
    static void *func_5215656736_op3[2] = { &&func_5215663280, &&RETURN };
    static void *func_5215656736_op4[2] = { &&func_5215663408, &&RETURN };
    static void *func_5215656736_op5[2] = { &&func_5215663600, &&RETURN };
    static void *func_5215656736_op6[2] = { &&func_5215663728, &&RETURN };
    static void *func_5215656736_op7[2] = { &&func_5215663856, &&RETURN };
    static void *func_5215656736_op8[2] = { &&func_5215663984, &&RETURN };
    static void *func_5215655952_op0[2] = { &&func_5215663536, &&RETURN };
    static void *func_5215655952_op1[2] = { &&func_5215662000, &&RETURN };
    static void *func_5215656464_op0[2] = { &&func_5215656240, &&RETURN };
    static void *func_5215656464_op1[2] = { &&func_5215662176, &&RETURN };
    static void *func_5215656992_op0[2] = { &&func_5215664240, &&RETURN };
    static void *func_5215656656_op0[2] = { &&func_5215664880, &&RETURN };
    static void *func_5215656928_op0[2] = { &&func_5215656656, &&HALT };
    static void *func_5215657344_op0[2] = { &&func_5215655952, &&RETURN };
    static void *func_5215657344_op1[2] = { &&func_5215657552, &&RETURN };
    static void *func_5215657344_op2[2] = { &&func_5215656032, &&RETURN };
    static void *func_5215657344_op3[2] = { &&func_5215655456, &&RETURN };
    static void *func_5215657344_op4[2] = { &&func_5215656992, &&RETURN };
    static void *func_5215657712_op0[2] = { &&func_5215665728, &&RETURN };
    static void *func_5215657712_op1[2] = { &&func_5215665008, &&RETURN };
    static void *func_5215657712_op2[2] = { &&func_5215656112, &&RETURN };
    static void *func_5215657552_op0[2] = { &&func_5215665664, &&RETURN };
    static void *exp_5215657280[5] = {&&func_5215656736, &&func_5215657472, &&func_5215656336, &&func_5215656528, &&RETURN };
    static void *exp_5215658576[4] = {&&func_5215656336, &&func_5215658704, &&func_5215656336, &&RETURN };
    static void *exp_5215658832[4] = {&&func_5215656336, &&func_5215658960, &&func_5215656336, &&RETURN };
    static void *exp_5215659088[4] = {&&func_5215656336, &&func_5215659216, &&func_5215656336, &&RETURN };
    static void *exp_5215661200[4] = {&&func_5215656336, &&func_5215661328, &&func_5215657712, &&RETURN };
    static void *exp_5215658368[4] = {&&func_5215656336, &&func_5215658496, &&func_5215657712, &&RETURN };
    static void *exp_5215659504[4] = {&&func_5215661680, &&func_5215656336, &&func_5215661808, &&RETURN };
    static void *exp_5215659344[12] = {&&func_5215662576, &&func_5215661680, &&func_5215655456, &&func_5215656528, &&func_5215655824, &&func_5215656528, &&func_5215655456, &&func_5215661808, &&func_5215662704, &&func_5215656656, &&func_5215657840, &&RETURN };
    static void *exp_5215663536[8] = {&&func_5215664752, &&func_5215661680, &&func_5215655824, &&func_5215661808, &&func_5215662704, &&func_5215656656, &&func_5215657840, &&RETURN };
    static void *exp_5215662000[12] = {&&func_5215664752, &&func_5215661680, &&func_5215655824, &&func_5215661808, &&func_5215662704, &&func_5215656656, &&func_5215657840, &&func_5215664576, &&func_5215662704, &&func_5215656656, &&func_5215657840, &&RETURN };
    static void *exp_5215662176[3] = {&&func_5215656240, &&func_5215656464, &&RETURN };
    static void *exp_5215664240[6] = {&&func_5215664368, &&func_5215661680, &&func_5215656336, &&func_5215661808, &&func_5215656528, &&RETURN };
    static void *exp_5215664880[3] = {&&func_5215657344, &&func_5215656656, &&RETURN };
    static void *exp_5215665728[4] = {&&func_5215657712, &&func_5215665856, &&func_5215656112, &&RETURN };
    static void *exp_5215665008[4] = {&&func_5215657712, &&func_5215660688, &&func_5215656112, &&RETURN };
    static void *exp_5215665664[8] = {&&func_5215661056, &&func_5215661680, &&func_5215655824, &&func_5215661808, &&func_5215662704, &&func_5215656656, &&func_5215657840, &&RETURN };

func_5215655456:
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
            PC = func_5215655456_op0;
            break;
    }
    goto **PC;
func_5215655824:
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
            PC = func_5215655824_op0;
            break;
        case 1:
            PC = func_5215655824_op1;
            break;
        case 2:
            PC = func_5215655824_op2;
            break;
    }
    goto **PC;
func_5215656240:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656240_op0;
            break;
        case 1:
            PC = func_5215656240_op1;
            break;
        case 2:
            PC = func_5215656240_op2;
            break;
        case 3:
            PC = func_5215656240_op3;
            break;
        case 4:
            PC = func_5215656240_op4;
            break;
        case 5:
            PC = func_5215656240_op5;
            break;
        case 6:
            PC = func_5215656240_op6;
            break;
        case 7:
            PC = func_5215656240_op7;
            break;
        case 8:
            PC = func_5215656240_op8;
            break;
        case 9:
            PC = func_5215656240_op9;
            break;
    }
    goto **PC;
func_5215656336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656336_op0;
            break;
        case 1:
            PC = func_5215656336_op1;
            break;
        case 2:
            PC = func_5215656336_op2;
            break;
    }
    goto **PC;
func_5215656112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656112_op0;
            break;
        case 1:
            PC = func_5215656112_op1;
            break;
        case 2:
            PC = func_5215656112_op2;
            break;
    }
    goto **PC;
func_5215656032:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656032_op0;
            break;
    }
    goto **PC;
func_5215656736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656736_op0;
            break;
        case 1:
            PC = func_5215656736_op1;
            break;
        case 2:
            PC = func_5215656736_op2;
            break;
        case 3:
            PC = func_5215656736_op3;
            break;
        case 4:
            PC = func_5215656736_op4;
            break;
        case 5:
            PC = func_5215656736_op5;
            break;
        case 6:
            PC = func_5215656736_op6;
            break;
        case 7:
            PC = func_5215656736_op7;
            break;
        case 8:
            PC = func_5215656736_op8;
            break;
    }
    goto **PC;
func_5215655952:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5215655952_op0;
            break;
        case 1:
            PC = func_5215655952_op1;
            break;
    }
    goto **PC;
func_5215656464:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656464_op0;
            break;
        case 1:
            PC = func_5215656464_op1;
            break;
    }
    goto **PC;
func_5215656992:
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
            PC = func_5215656992_op0;
            break;
    }
    goto **PC;
func_5215656656:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656656_op0;
            break;
    }
    goto **PC;
func_5215656928:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5215656928_op0;
            break;
    }
    goto **PC;
func_5215657344:
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
            PC = func_5215657344_op0;
            break;
        case 1:
            PC = func_5215657344_op1;
            break;
        case 2:
            PC = func_5215657344_op2;
            break;
        case 3:
            PC = func_5215657344_op3;
            break;
        case 4:
            PC = func_5215657344_op4;
            break;
    }
    goto **PC;
func_5215657712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5215657712_op0;
            break;
        case 1:
            PC = func_5215657712_op1;
            break;
        case 2:
            PC = func_5215657712_op2;
            break;
    }
    goto **PC;
func_5215657552:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5215657552_op0;
            break;
    }
    goto **PC;
func_5215657280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215657280;
    goto **PC;
func_5215657472:
    extend(61);
    NEXT();
    goto **PC;
func_5215656528:
    extend(59);
    NEXT();
    goto **PC;
func_5215658576:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215658576;
    goto **PC;
func_5215658704:
    extend(62);
    NEXT();
    goto **PC;
func_5215658832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215658832;
    goto **PC;
func_5215658960:
    extend(60);
    NEXT();
    goto **PC;
func_5215659088:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215659088;
    goto **PC;
func_5215659216:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5215659600:
    extend(48);
    NEXT();
    goto **PC;
func_5215657184:
    extend(49);
    NEXT();
    goto **PC;
func_5215659792:
    extend(50);
    NEXT();
    goto **PC;
func_5215659920:
    extend(51);
    NEXT();
    goto **PC;
func_5215660048:
    extend(52);
    NEXT();
    goto **PC;
func_5215660240:
    extend(53);
    NEXT();
    goto **PC;
func_5215660368:
    extend(54);
    NEXT();
    goto **PC;
func_5215660496:
    extend(55);
    NEXT();
    goto **PC;
func_5215660624:
    extend(56);
    NEXT();
    goto **PC;
func_5215660176:
    extend(57);
    NEXT();
    goto **PC;
func_5215661200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215661200;
    goto **PC;
func_5215661328:
    extend(43);
    NEXT();
    goto **PC;
func_5215658368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215658368;
    goto **PC;
func_5215658496:
    extend(45);
    NEXT();
    goto **PC;
func_5215659504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215659504;
    goto **PC;
func_5215661680:
    extend(40);
    NEXT();
    goto **PC;
func_5215661808:
    extend(41);
    NEXT();
    goto **PC;
func_5215659344:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215659344;
    goto **PC;
func_5215662576:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5215662704:
    extend(123);
    NEXT();
    goto **PC;
func_5215657840:
    extend(125);
    NEXT();
    goto **PC;
func_5215662352:
    extend(105);
    NEXT();
    goto **PC;
func_5215663024:
    extend(106);
    NEXT();
    goto **PC;
func_5215663152:
    extend(107);
    NEXT();
    goto **PC;
func_5215663280:
    extend(120);
    NEXT();
    goto **PC;
func_5215663408:
    extend(121);
    NEXT();
    goto **PC;
func_5215663600:
    extend(122);
    NEXT();
    goto **PC;
func_5215663728:
    extend(97);
    NEXT();
    goto **PC;
func_5215663856:
    extend(98);
    NEXT();
    goto **PC;
func_5215663984:
    extend(99);
    NEXT();
    goto **PC;
func_5215663536:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215663536;
    goto **PC;
func_5215664752:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5215662000:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215662000;
    goto **PC;
func_5215664576:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5215662176:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215662176;
    goto **PC;
func_5215664240:
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
    PC = exp_5215664240;
    goto **PC;
func_5215664368:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5215664880:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215664880;
    goto **PC;
func_5215665728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215665728;
    goto **PC;
func_5215665856:
    extend(42);
    NEXT();
    goto **PC;
func_5215665008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215665008;
    goto **PC;
func_5215660688:
    extend(47);
    NEXT();
    goto **PC;
func_5215665664:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5215665664;
    goto **PC;
func_5215661056:
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
    PC = func_5215656928_op0;
    goto **PC;
}
