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
    static void *func_4796231056_op0[2] = { &&func_4796233152, &&RETURN };
    static void *func_4796231808_op0[2] = { &&func_4796234752, &&RETURN };
    static void *func_4796231808_op1[2] = { &&func_4796235008, &&RETURN };
    static void *func_4796231808_op2[2] = { &&func_4796235264, &&RETURN };
    static void *func_4796231808_op3[2] = { &&func_4796235552, &&RETURN };
    static void *func_4796231808_op4[2] = { &&func_4796235840, &&RETURN };
    static void *func_4796231808_op5[2] = { &&func_4796236192, &&RETURN };
    static void *func_4796231808_op6[2] = { &&func_4796236496, &&RETURN };
    static void *func_4796231968_op0[2] = { &&func_4796234624, &&RETURN };
    static void *func_4796231968_op1[2] = { &&func_4796234176, &&RETURN };
    static void *func_4796231968_op2[2] = { &&func_4796237072, &&RETURN };
    static void *func_4796231968_op3[2] = { &&func_4796237200, &&RETURN };
    static void *func_4796231968_op4[2] = { &&func_4796237328, &&RETURN };
    static void *func_4796231968_op5[2] = { &&func_4796237520, &&RETURN };
    static void *func_4796231968_op6[2] = { &&func_4796237648, &&RETURN };
    static void *func_4796231968_op7[2] = { &&func_4796237776, &&RETURN };
    static void *func_4796231968_op8[2] = { &&func_4796237904, &&RETURN };
    static void *func_4796231968_op9[2] = { &&func_4796237456, &&RETURN };
    static void *func_4796231680_op0[2] = { &&func_4796234112, &&RETURN };
    static void *func_4796231680_op1[2] = { &&func_4796234304, &&RETURN };
    static void *func_4796231680_op2[2] = { &&func_4796233216, &&RETURN };
    static void *func_4796231328_op0[2] = { &&func_4796238304, &&RETURN };
    static void *func_4796231328_op1[2] = { &&func_4796231248, &&RETURN };
    static void *func_4796231328_op2[2] = { &&func_4796231568, &&RETURN };
    static void *func_4796230928_op0[2] = { &&func_4796233056, &&RETURN };
    static void *func_4796231568_op0[2] = { &&func_4796239008, &&RETURN };
    static void *func_4796231568_op1[2] = { &&func_4796233728, &&RETURN };
    static void *func_4796232096_op0[2] = { &&func_4796239968, &&RETURN };
    static void *func_4796233728_op0[2] = { &&func_4796241440, &&RETURN };
    static void *func_4796233728_op1[2] = { &&func_4796241568, &&RETURN };
    static void *func_4796233728_op2[2] = { &&func_4796241696, &&RETURN };
    static void *func_4796233728_op3[2] = { &&func_4796241856, &&RETURN };
    static void *func_4796233728_op4[2] = { &&func_4796241984, &&RETURN };
    static void *func_4796233728_op5[2] = { &&func_4796242176, &&RETURN };
    static void *func_4796233728_op6[2] = { &&func_4796242304, &&RETURN };
    static void *func_4796233728_op7[2] = { &&func_4796236624, &&RETURN };
    static void *func_4796233728_op8[2] = { &&func_4796236752, &&RETURN };
    static void *func_4796233728_op9[2] = { &&func_4796242112, &&RETURN };
    static void *func_4796233728_op10[2] = { &&func_4796242368, &&RETURN };
    static void *func_4796233728_op11[2] = { &&func_4796242496, &&RETURN };
    static void *func_4796233728_op12[2] = { &&func_4796242624, &&RETURN };
    static void *func_4796233728_op13[2] = { &&func_4796242752, &&RETURN };
    static void *func_4796233728_op14[2] = { &&func_4796242880, &&RETURN };
    static void *func_4796233728_op15[2] = { &&func_4796243008, &&RETURN };
    static void *func_4796233728_op16[2] = { &&func_4796243136, &&RETURN };
    static void *func_4796233728_op17[2] = { &&func_4796236880, &&RETURN };
    static void *func_4796233728_op18[2] = { &&func_4796243520, &&RETURN };
    static void *func_4796233728_op19[2] = { &&func_4796243648, &&RETURN };
    static void *func_4796233728_op20[2] = { &&func_4796243776, &&RETURN };
    static void *func_4796233728_op21[2] = { &&func_4796243904, &&RETURN };
    static void *func_4796233728_op22[2] = { &&func_4796244032, &&RETURN };
    static void *func_4796233728_op23[2] = { &&func_4796244160, &&RETURN };
    static void *func_4796233728_op24[2] = { &&func_4796244288, &&RETURN };
    static void *func_4796233728_op25[2] = { &&func_4796244416, &&RETURN };
    static void *func_4796233728_op26[2] = { &&func_4796244544, &&RETURN };
    static void *func_4796233728_op27[2] = { &&func_4796244672, &&RETURN };
    static void *func_4796233728_op28[2] = { &&func_4796244800, &&RETURN };
    static void *func_4796233728_op29[2] = { &&func_4796244928, &&RETURN };
    static void *func_4796233728_op30[2] = { &&func_4796245056, &&RETURN };
    static void *func_4796233728_op31[2] = { &&func_4796245184, &&RETURN };
    static void *func_4796233728_op32[2] = { &&func_4796245312, &&RETURN };
    static void *func_4796233728_op33[2] = { &&func_4796243264, &&RETURN };
    static void *func_4796233728_op34[2] = { &&func_4796243392, &&RETURN };
    static void *func_4796233728_op35[2] = { &&func_4796245952, &&RETURN };
    static void *func_4796233728_op36[2] = { &&func_4796246080, &&RETURN };
    static void *func_4796233728_op37[2] = { &&func_4796246208, &&RETURN };
    static void *func_4796233728_op38[2] = { &&func_4796246336, &&RETURN };
    static void *func_4796233728_op39[2] = { &&func_4796246464, &&RETURN };
    static void *func_4796233728_op40[2] = { &&func_4796246592, &&RETURN };
    static void *func_4796233728_op41[2] = { &&func_4796246720, &&RETURN };
    static void *func_4796233728_op42[2] = { &&func_4796246848, &&RETURN };
    static void *func_4796233728_op43[2] = { &&func_4796246976, &&RETURN };
    static void *func_4796233728_op44[2] = { &&func_4796247104, &&RETURN };
    static void *func_4796233728_op45[2] = { &&func_4796247232, &&RETURN };
    static void *func_4796233728_op46[2] = { &&func_4796247360, &&RETURN };
    static void *func_4796233728_op47[2] = { &&func_4796247488, &&RETURN };
    static void *func_4796233728_op48[2] = { &&func_4796247616, &&RETURN };
    static void *func_4796233728_op49[2] = { &&func_4796247744, &&RETURN };
    static void *func_4796233728_op50[2] = { &&func_4796247872, &&RETURN };
    static void *func_4796233728_op51[2] = { &&func_4796248000, &&RETURN };
    static void *func_4796231248_op0[2] = { &&func_4796239792, &&RETURN };
    static void *func_4796231248_op1[2] = { &&func_4796231968, &&RETURN };
    static void *func_4796232288_op0[2] = { &&func_4796239136, &&RETURN };
    static void *func_4796232288_op1[2] = { &&func_4796232928, &&RETURN };
    static void *func_4796232496_op0[2] = { &&func_4796240368, &&RETURN };
    static void *func_4796232416_op0[2] = { &&func_4796232288, &&HALT };
    static void *func_4796232928_op0[2] = { &&func_4796232768, &&RETURN };
    static void *func_4796232928_op1[2] = { &&func_4796231056, &&RETURN };
    static void *func_4796232928_op2[2] = { &&func_4796232096, &&RETURN };
    static void *func_4796232928_op3[2] = { &&func_4796232688, &&RETURN };
    static void *func_4796232928_op4[2] = { &&func_4796230928, &&RETURN };
    static void *func_4796232928_op5[2] = { &&func_4796232496, &&RETURN };
    static void *func_4796233216_op0[2] = { &&func_4796240992, &&RETURN };
    static void *func_4796233216_op1[2] = { &&func_4796240624, &&RETURN };
    static void *func_4796233216_op2[2] = { &&func_4796231328, &&RETURN };
    static void *func_4796232768_op0[2] = { &&func_4796248208, &&RETURN };
    static void *func_4796232768_op1[2] = { &&func_4796248592, &&RETURN };
    static void *func_4796232768_op2[2] = { &&func_4796248848, &&RETURN };
    static void *func_4796232688_op0[2] = { &&func_4796248128, &&RETURN };
    static void *exp_4796233152[5] = {&&func_4796231568, &&func_4796233472, &&func_4796231680, &&func_4796233600, &&RETURN };
    static void *exp_4796234752[4] = {&&func_4796231680, &&func_4796234880, &&func_4796231680, &&RETURN };
    static void *exp_4796235008[4] = {&&func_4796231680, &&func_4796235136, &&func_4796231680, &&RETURN };
    static void *exp_4796235264[4] = {&&func_4796231680, &&func_4796235392, &&func_4796231680, &&RETURN };
    static void *exp_4796235552[4] = {&&func_4796231680, &&func_4796235680, &&func_4796231680, &&RETURN };
    static void *exp_4796235840[4] = {&&func_4796231808, &&func_4796235968, &&func_4796231808, &&RETURN };
    static void *exp_4796236192[4] = {&&func_4796231808, &&func_4796236320, &&func_4796231808, &&RETURN };
    static void *exp_4796236496[3] = {&&func_4796233984, &&func_4796231808, &&RETURN };
    static void *exp_4796234112[4] = {&&func_4796231680, &&func_4796238448, &&func_4796233216, &&RETURN };
    static void *exp_4796234304[4] = {&&func_4796231680, &&func_4796234432, &&func_4796233216, &&RETURN };
    static void *exp_4796238304[4] = {&&func_4796238672, &&func_4796231680, &&func_4796238800, &&RETURN };
    static void *exp_4796233056[8] = {&&func_4796239408, &&func_4796231568, &&func_4796238672, &&func_4796238800, &&func_4796233792, &&func_4796232288, &&func_4796239664, &&RETURN };
    static void *exp_4796239008[3] = {&&func_4796233728, &&func_4796231568, &&RETURN };
    static void *exp_4796239968[8] = {&&func_4796240096, &&func_4796238672, &&func_4796231808, &&func_4796238800, &&func_4796233792, &&func_4796232288, &&func_4796239664, &&RETURN };
    static void *exp_4796239792[3] = {&&func_4796231968, &&func_4796231248, &&RETURN };
    static void *exp_4796239136[3] = {&&func_4796232288, &&func_4796232928, &&RETURN };
    static void *exp_4796240368[4] = {&&func_4796240496, &&func_4796231680, &&func_4796233600, &&RETURN };
    static void *exp_4796240992[4] = {&&func_4796233216, &&func_4796241120, &&func_4796231328, &&RETURN };
    static void *exp_4796240624[4] = {&&func_4796233216, &&func_4796241248, &&func_4796231328, &&RETURN };
    static void *exp_4796248208[4] = {&&func_4796248336, &&func_4796231568, &&func_4796248464, &&RETURN };
    static void *exp_4796248592[4] = {&&func_4796248720, &&func_4796231568, &&func_4796248464, &&RETURN };
    static void *exp_4796248848[4] = {&&func_4796248976, &&func_4796231568, &&func_4796248464, &&RETURN };
    static void *exp_4796248128[8] = {&&func_4796240896, &&func_4796238672, &&func_4796231808, &&func_4796238800, &&func_4796233792, &&func_4796232288, &&func_4796239664, &&RETURN };

func_4796231056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231056_op0;
            break;
    }
    goto **PC;
func_4796231808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231808_op0;
            break;
        case 1:
            PC = func_4796231808_op1;
            break;
        case 2:
            PC = func_4796231808_op2;
            break;
        case 3:
            PC = func_4796231808_op3;
            break;
        case 4:
            PC = func_4796231808_op4;
            break;
        case 5:
            PC = func_4796231808_op5;
            break;
        case 6:
            PC = func_4796231808_op6;
            break;
    }
    goto **PC;
func_4796231968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231968_op0;
            break;
        case 1:
            PC = func_4796231968_op1;
            break;
        case 2:
            PC = func_4796231968_op2;
            break;
        case 3:
            PC = func_4796231968_op3;
            break;
        case 4:
            PC = func_4796231968_op4;
            break;
        case 5:
            PC = func_4796231968_op5;
            break;
        case 6:
            PC = func_4796231968_op6;
            break;
        case 7:
            PC = func_4796231968_op7;
            break;
        case 8:
            PC = func_4796231968_op8;
            break;
        case 9:
            PC = func_4796231968_op9;
            break;
    }
    goto **PC;
func_4796231680:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231680_op0;
            break;
        case 1:
            PC = func_4796231680_op1;
            break;
        case 2:
            PC = func_4796231680_op2;
            break;
    }
    goto **PC;
func_4796231328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231328_op0;
            break;
        case 1:
            PC = func_4796231328_op1;
            break;
        case 2:
            PC = func_4796231328_op2;
            break;
    }
    goto **PC;
func_4796230928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796230928_op0;
            break;
    }
    goto **PC;
func_4796231568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231568_op0;
            break;
        case 1:
            PC = func_4796231568_op1;
            break;
    }
    goto **PC;
func_4796232096:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232096_op0;
            break;
    }
    goto **PC;
func_4796233728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4796233728_op0;
            break;
        case 1:
            PC = func_4796233728_op1;
            break;
        case 2:
            PC = func_4796233728_op2;
            break;
        case 3:
            PC = func_4796233728_op3;
            break;
        case 4:
            PC = func_4796233728_op4;
            break;
        case 5:
            PC = func_4796233728_op5;
            break;
        case 6:
            PC = func_4796233728_op6;
            break;
        case 7:
            PC = func_4796233728_op7;
            break;
        case 8:
            PC = func_4796233728_op8;
            break;
        case 9:
            PC = func_4796233728_op9;
            break;
        case 10:
            PC = func_4796233728_op10;
            break;
        case 11:
            PC = func_4796233728_op11;
            break;
        case 12:
            PC = func_4796233728_op12;
            break;
        case 13:
            PC = func_4796233728_op13;
            break;
        case 14:
            PC = func_4796233728_op14;
            break;
        case 15:
            PC = func_4796233728_op15;
            break;
        case 16:
            PC = func_4796233728_op16;
            break;
        case 17:
            PC = func_4796233728_op17;
            break;
        case 18:
            PC = func_4796233728_op18;
            break;
        case 19:
            PC = func_4796233728_op19;
            break;
        case 20:
            PC = func_4796233728_op20;
            break;
        case 21:
            PC = func_4796233728_op21;
            break;
        case 22:
            PC = func_4796233728_op22;
            break;
        case 23:
            PC = func_4796233728_op23;
            break;
        case 24:
            PC = func_4796233728_op24;
            break;
        case 25:
            PC = func_4796233728_op25;
            break;
        case 26:
            PC = func_4796233728_op26;
            break;
        case 27:
            PC = func_4796233728_op27;
            break;
        case 28:
            PC = func_4796233728_op28;
            break;
        case 29:
            PC = func_4796233728_op29;
            break;
        case 30:
            PC = func_4796233728_op30;
            break;
        case 31:
            PC = func_4796233728_op31;
            break;
        case 32:
            PC = func_4796233728_op32;
            break;
        case 33:
            PC = func_4796233728_op33;
            break;
        case 34:
            PC = func_4796233728_op34;
            break;
        case 35:
            PC = func_4796233728_op35;
            break;
        case 36:
            PC = func_4796233728_op36;
            break;
        case 37:
            PC = func_4796233728_op37;
            break;
        case 38:
            PC = func_4796233728_op38;
            break;
        case 39:
            PC = func_4796233728_op39;
            break;
        case 40:
            PC = func_4796233728_op40;
            break;
        case 41:
            PC = func_4796233728_op41;
            break;
        case 42:
            PC = func_4796233728_op42;
            break;
        case 43:
            PC = func_4796233728_op43;
            break;
        case 44:
            PC = func_4796233728_op44;
            break;
        case 45:
            PC = func_4796233728_op45;
            break;
        case 46:
            PC = func_4796233728_op46;
            break;
        case 47:
            PC = func_4796233728_op47;
            break;
        case 48:
            PC = func_4796233728_op48;
            break;
        case 49:
            PC = func_4796233728_op49;
            break;
        case 50:
            PC = func_4796233728_op50;
            break;
        case 51:
            PC = func_4796233728_op51;
            break;
    }
    goto **PC;
func_4796231248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796231248_op0;
            break;
        case 1:
            PC = func_4796231248_op1;
            break;
    }
    goto **PC;
func_4796232288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232288_op0;
            break;
        case 1:
            PC = func_4796232288_op1;
            break;
    }
    goto **PC;
func_4796232496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232496_op0;
            break;
    }
    goto **PC;
func_4796232416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232416_op0;
            break;
    }
    goto **PC;
func_4796232928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232928_op0;
            break;
        case 1:
            PC = func_4796232928_op1;
            break;
        case 2:
            PC = func_4796232928_op2;
            break;
        case 3:
            PC = func_4796232928_op3;
            break;
        case 4:
            PC = func_4796232928_op4;
            break;
        case 5:
            PC = func_4796232928_op5;
            break;
    }
    goto **PC;
func_4796233216:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796233216_op0;
            break;
        case 1:
            PC = func_4796233216_op1;
            break;
        case 2:
            PC = func_4796233216_op2;
            break;
    }
    goto **PC;
func_4796232768:
    if(stack_top == frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232768_op0;
            break;
        case 1:
            PC = func_4796232768_op1;
            break;
        case 2:
            PC = func_4796232768_op2;
            break;
    }
    goto **PC;
func_4796232688:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4796232688_op0;
            break;
    }
    goto **PC;
func_4796233152:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796233152;
    goto **PC;
func_4796233472:
    extend(61);
    NEXT();
    goto **PC;
func_4796233600:
    extend(59);
    NEXT();
    goto **PC;
func_4796234752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796234752;
    goto **PC;
func_4796234880:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4796235008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796235008;
    goto **PC;
func_4796235136:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_4796235264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796235264;
    goto **PC;
func_4796235392:
    extend(62);
    NEXT();
    goto **PC;
func_4796235552:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796235552;
    goto **PC;
func_4796235680:
    extend(60);
    NEXT();
    goto **PC;
func_4796235840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796235840;
    goto **PC;
func_4796235968:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_4796236192:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796236192;
    goto **PC;
func_4796236320:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_4796236496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796236496;
    goto **PC;
func_4796233984:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_4796234624:
    extend(48);
    NEXT();
    goto **PC;
func_4796234176:
    extend(49);
    NEXT();
    goto **PC;
func_4796237072:
    extend(50);
    NEXT();
    goto **PC;
func_4796237200:
    extend(51);
    NEXT();
    goto **PC;
func_4796237328:
    extend(52);
    NEXT();
    goto **PC;
func_4796237520:
    extend(53);
    NEXT();
    goto **PC;
func_4796237648:
    extend(54);
    NEXT();
    goto **PC;
func_4796237776:
    extend(55);
    NEXT();
    goto **PC;
func_4796237904:
    extend(56);
    NEXT();
    goto **PC;
func_4796237456:
    extend(57);
    NEXT();
    goto **PC;
func_4796234112:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796234112;
    goto **PC;
func_4796238448:
    extend(43);
    NEXT();
    goto **PC;
func_4796234304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796234304;
    goto **PC;
func_4796234432:
    extend(45);
    NEXT();
    goto **PC;
func_4796238304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796238304;
    goto **PC;
func_4796238672:
    extend(40);
    NEXT();
    goto **PC;
func_4796238800:
    extend(41);
    NEXT();
    goto **PC;
func_4796233056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796233056;
    goto **PC;
func_4796239408:
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    NEXT();
    goto **PC;
func_4796233792:
    extend(123);
    NEXT();
    goto **PC;
func_4796239664:
    extend(125);
    NEXT();
    goto **PC;
func_4796239008:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796239008;
    goto **PC;
func_4796239968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796239968;
    goto **PC;
func_4796240096:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4796241440:
    extend(97);
    NEXT();
    goto **PC;
func_4796241568:
    extend(98);
    NEXT();
    goto **PC;
func_4796241696:
    extend(99);
    NEXT();
    goto **PC;
func_4796241856:
    extend(100);
    NEXT();
    goto **PC;
func_4796241984:
    extend(101);
    NEXT();
    goto **PC;
func_4796242176:
    extend(102);
    NEXT();
    goto **PC;
func_4796242304:
    extend(103);
    NEXT();
    goto **PC;
func_4796236624:
    extend(104);
    NEXT();
    goto **PC;
func_4796236752:
    extend(105);
    NEXT();
    goto **PC;
func_4796242112:
    extend(106);
    NEXT();
    goto **PC;
func_4796242368:
    extend(107);
    NEXT();
    goto **PC;
func_4796242496:
    extend(108);
    NEXT();
    goto **PC;
func_4796242624:
    extend(109);
    NEXT();
    goto **PC;
func_4796242752:
    extend(110);
    NEXT();
    goto **PC;
func_4796242880:
    extend(111);
    NEXT();
    goto **PC;
func_4796243008:
    extend(112);
    NEXT();
    goto **PC;
func_4796243136:
    extend(113);
    NEXT();
    goto **PC;
func_4796236880:
    extend(114);
    NEXT();
    goto **PC;
func_4796243520:
    extend(115);
    NEXT();
    goto **PC;
func_4796243648:
    extend(116);
    NEXT();
    goto **PC;
func_4796243776:
    extend(117);
    NEXT();
    goto **PC;
func_4796243904:
    extend(118);
    NEXT();
    goto **PC;
func_4796244032:
    extend(119);
    NEXT();
    goto **PC;
func_4796244160:
    extend(120);
    NEXT();
    goto **PC;
func_4796244288:
    extend(121);
    NEXT();
    goto **PC;
func_4796244416:
    extend(122);
    NEXT();
    goto **PC;
func_4796244544:
    extend(65);
    NEXT();
    goto **PC;
func_4796244672:
    extend(66);
    NEXT();
    goto **PC;
func_4796244800:
    extend(67);
    NEXT();
    goto **PC;
func_4796244928:
    extend(68);
    NEXT();
    goto **PC;
func_4796245056:
    extend(69);
    NEXT();
    goto **PC;
func_4796245184:
    extend(70);
    NEXT();
    goto **PC;
func_4796245312:
    extend(71);
    NEXT();
    goto **PC;
func_4796243264:
    extend(72);
    NEXT();
    goto **PC;
func_4796243392:
    extend(73);
    NEXT();
    goto **PC;
func_4796245952:
    extend(74);
    NEXT();
    goto **PC;
func_4796246080:
    extend(75);
    NEXT();
    goto **PC;
func_4796246208:
    extend(76);
    NEXT();
    goto **PC;
func_4796246336:
    extend(77);
    NEXT();
    goto **PC;
func_4796246464:
    extend(78);
    NEXT();
    goto **PC;
func_4796246592:
    extend(79);
    NEXT();
    goto **PC;
func_4796246720:
    extend(80);
    NEXT();
    goto **PC;
func_4796246848:
    extend(81);
    NEXT();
    goto **PC;
func_4796246976:
    extend(82);
    NEXT();
    goto **PC;
func_4796247104:
    extend(83);
    NEXT();
    goto **PC;
func_4796247232:
    extend(84);
    NEXT();
    goto **PC;
func_4796247360:
    extend(85);
    NEXT();
    goto **PC;
func_4796247488:
    extend(86);
    NEXT();
    goto **PC;
func_4796247616:
    extend(87);
    NEXT();
    goto **PC;
func_4796247744:
    extend(88);
    NEXT();
    goto **PC;
func_4796247872:
    extend(89);
    NEXT();
    goto **PC;
func_4796248000:
    extend(90);
    NEXT();
    goto **PC;
func_4796239792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796239792;
    goto **PC;
func_4796239136:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796239136;
    goto **PC;
func_4796240368:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796240368;
    goto **PC;
func_4796240496:
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    NEXT();
    goto **PC;
func_4796240992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796240992;
    goto **PC;
func_4796241120:
    extend(42);
    NEXT();
    goto **PC;
func_4796240624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796240624;
    goto **PC;
func_4796241248:
    extend(47);
    NEXT();
    goto **PC;
func_4796248208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796248208;
    goto **PC;
func_4796248336:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4796248464:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_4796248592:
    if(stack_top == frames + MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796248592;
    goto **PC;
func_4796248720:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4796248848:
    if(stack_top == frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796248848;
    goto **PC;
func_4796248976:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_4796248128:
    if(stack_top == frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4796248128;
    goto **PC;
func_4796240896:
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
    PC = func_4796232416_op0;
    goto **PC;
}
