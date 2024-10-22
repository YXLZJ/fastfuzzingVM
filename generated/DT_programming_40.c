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
    static void *func_4771065232_op0[2] = { &&func_4771067328, &&RETURN };
    static void *func_4771065984_op0[2] = { &&func_4771068928, &&RETURN };
    static void *func_4771065984_op1[2] = { &&func_4771069184, &&RETURN };
    static void *func_4771065984_op2[2] = { &&func_4771069440, &&RETURN };
    static void *func_4771065984_op3[2] = { &&func_4771069728, &&RETURN };
    static void *func_4771065984_op4[2] = { &&func_4771070016, &&RETURN };
    static void *func_4771065984_op5[2] = { &&func_4771070368, &&RETURN };
    static void *func_4771065984_op6[2] = { &&func_4771070672, &&RETURN };
    static void *func_4771066144_op0[2] = { &&func_4771068800, &&RETURN };
    static void *func_4771066144_op1[2] = { &&func_4771068352, &&RETURN };
    static void *func_4771066144_op2[2] = { &&func_4771071248, &&RETURN };
    static void *func_4771066144_op3[2] = { &&func_4771071376, &&RETURN };
    static void *func_4771066144_op4[2] = { &&func_4771071504, &&RETURN };
    static void *func_4771066144_op5[2] = { &&func_4771071696, &&RETURN };
    static void *func_4771066144_op6[2] = { &&func_4771071824, &&RETURN };
    static void *func_4771066144_op7[2] = { &&func_4771071952, &&RETURN };
    static void *func_4771066144_op8[2] = { &&func_4771072080, &&RETURN };
    static void *func_4771066144_op9[2] = { &&func_4771071632, &&RETURN };
    static void *func_4771065856_op0[2] = { &&func_4771068288, &&RETURN };
    static void *func_4771065856_op1[2] = { &&func_4771068480, &&RETURN };
    static void *func_4771065856_op2[2] = { &&func_4771067392, &&RETURN };
    static void *func_4771065504_op0[2] = { &&func_4771072480, &&RETURN };
    static void *func_4771065504_op1[2] = { &&func_4771065424, &&RETURN };
    static void *func_4771065504_op2[2] = { &&func_4771065744, &&RETURN };
    static void *func_4771065104_op0[2] = { &&func_4771067232, &&RETURN };
    static void *func_4771065744_op0[2] = { &&func_4771073184, &&RETURN };
    static void *func_4771065744_op1[2] = { &&func_4771067904, &&RETURN };
    static void *func_4771066272_op0[2] = { &&func_4771074144, &&RETURN };
    static void *func_4771067904_op0[2] = { &&func_4771075616, &&RETURN };
    static void *func_4771067904_op1[2] = { &&func_4771075744, &&RETURN };
    static void *func_4771067904_op2[2] = { &&func_4771075872, &&RETURN };
    static void *func_4771067904_op3[2] = { &&func_4771076032, &&RETURN };
    static void *func_4771067904_op4[2] = { &&func_4771076160, &&RETURN };
    static void *func_4771067904_op5[2] = { &&func_4771076352, &&RETURN };
    static void *func_4771067904_op6[2] = { &&func_4771076480, &&RETURN };
    static void *func_4771067904_op7[2] = { &&func_4771070800, &&RETURN };
    static void *func_4771067904_op8[2] = { &&func_4771070928, &&RETURN };
    static void *func_4771067904_op9[2] = { &&func_4771076288, &&RETURN };
    static void *func_4771067904_op10[2] = { &&func_4771076544, &&RETURN };
    static void *func_4771067904_op11[2] = { &&func_4771076672, &&RETURN };
    static void *func_4771067904_op12[2] = { &&func_4771076800, &&RETURN };
    static void *func_4771067904_op13[2] = { &&func_4771076928, &&RETURN };
    static void *func_4771067904_op14[2] = { &&func_4771077056, &&RETURN };
    static void *func_4771067904_op15[2] = { &&func_4771077184, &&RETURN };
    static void *func_4771067904_op16[2] = { &&func_4771077312, &&RETURN };
    static void *func_4771067904_op17[2] = { &&func_4771071056, &&RETURN };
    static void *func_4771067904_op18[2] = { &&func_4771077696, &&RETURN };
    static void *func_4771067904_op19[2] = { &&func_4771077824, &&RETURN };
    static void *func_4771067904_op20[2] = { &&func_4771077952, &&RETURN };
    static void *func_4771067904_op21[2] = { &&func_4771078080, &&RETURN };
    static void *func_4771067904_op22[2] = { &&func_4771078208, &&RETURN };
    static void *func_4771067904_op23[2] = { &&func_4771078336, &&RETURN };
    static void *func_4771067904_op24[2] = { &&func_4771078464, &&RETURN };
    static void *func_4771067904_op25[2] = { &&func_4771078592, &&RETURN };
    static void *func_4771067904_op26[2] = { &&func_4771078720, &&RETURN };
    static void *func_4771067904_op27[2] = { &&func_4771078848, &&RETURN };
    static void *func_4771067904_op28[2] = { &&func_4771078976, &&RETURN };
    static void *func_4771067904_op29[2] = { &&func_4771079104, &&RETURN };
    static void *func_4771067904_op30[2] = { &&func_4771079232, &&RETURN };
    static void *func_4771067904_op31[2] = { &&func_4771079360, &&RETURN };
    static void *func_4771067904_op32[2] = { &&func_4771079488, &&RETURN };
    static void *func_4771067904_op33[2] = { &&func_4771077440, &&RETURN };
    static void *func_4771067904_op34[2] = { &&func_4771077568, &&RETURN };
    static void *func_4771067904_op35[2] = { &&func_4771080128, &&RETURN };
    static void *func_4771067904_op36[2] = { &&func_4771080256, &&RETURN };
    static void *func_4771067904_op37[2] = { &&func_4771080384, &&RETURN };
    static void *func_4771067904_op38[2] = { &&func_4771080512, &&RETURN };
    static void *func_4771067904_op39[2] = { &&func_4771080640, &&RETURN };
    static void *func_4771067904_op40[2] = { &&func_4771080768, &&RETURN };
    static void *func_4771067904_op41[2] = { &&func_4771080896, &&RETURN };
    static void *func_4771067904_op42[2] = { &&func_4771081024, &&RETURN };
    static void *func_4771067904_op43[2] = { &&func_4771081152, &&RETURN };
    static void *func_4771067904_op44[2] = { &&func_4771081280, &&RETURN };
    static void *func_4771067904_op45[2] = { &&func_4771081408, &&RETURN };
    static void *func_4771067904_op46[2] = { &&func_4771081536, &&RETURN };
    static void *func_4771067904_op47[2] = { &&func_4771081664, &&RETURN };
    static void *func_4771067904_op48[2] = { &&func_4771081792, &&RETURN };
    static void *func_4771067904_op49[2] = { &&func_4771081920, &&RETURN };
    static void *func_4771067904_op50[2] = { &&func_4771082048, &&RETURN };
    static void *func_4771067904_op51[2] = { &&func_4771082176, &&RETURN };
    static void *func_4771065424_op0[2] = { &&func_4771073968, &&RETURN };
    static void *func_4771065424_op1[2] = { &&func_4771066144, &&RETURN };
    static void *func_4771066464_op0[2] = { &&func_4771073312, &&RETURN };
    static void *func_4771066464_op1[2] = { &&func_4771067104, &&RETURN };
    static void *func_4771066672_op0[2] = { &&func_4771074544, &&RETURN };
    static void *func_4771066592_op0[2] = { &&func_4771066464, &&HALT };
    static void *func_4771067104_op0[2] = { &&func_4771066944, &&RETURN };
    static void *func_4771067104_op1[2] = { &&func_4771065232, &&RETURN };
    static void *func_4771067104_op2[2] = { &&func_4771066272, &&RETURN };
    static void *func_4771067104_op3[2] = { &&func_4771066864, &&RETURN };
    static void *func_4771067104_op4[2] = { &&func_4771065104, &&RETURN };
    static void *func_4771067104_op5[2] = { &&func_4771066672, &&RETURN };
    static void *func_4771067392_op0[2] = { &&func_4771075168, &&RETURN };
    static void *func_4771067392_op1[2] = { &&func_4771074800, &&RETURN };
    static void *func_4771067392_op2[2] = { &&func_4771065504, &&RETURN };
    static void *func_4771066944_op0[2] = { &&func_4771082384, &&RETURN };
    static void *func_4771066944_op1[2] = { &&func_4771082768, &&RETURN };
    static void *func_4771066944_op2[2] = { &&func_4771083024, &&RETURN };
    static void *func_4771066864_op0[2] = { &&func_4771082304, &&RETURN };
    static void *exp_4771067328[5] = {&&func_4771065744, &&func_4771067648, &&func_4771065856, &&func_4771067776, &&RETURN };
    static void *exp_4771068928[4] = {&&func_4771065856, &&func_4771069056, &&func_4771065856, &&RETURN };
    static void *exp_4771069184[4] = {&&func_4771065856, &&func_4771069312, &&func_4771065856, &&RETURN };
    static void *exp_4771069440[4] = {&&func_4771065856, &&func_4771069568, &&func_4771065856, &&RETURN };
    static void *exp_4771069728[4] = {&&func_4771065856, &&func_4771069856, &&func_4771065856, &&RETURN };
    static void *exp_4771070016[4] = {&&func_4771065984, &&func_4771070144, &&func_4771065984, &&RETURN };
    static void *exp_4771070368[4] = {&&func_4771065984, &&func_4771070496, &&func_4771065984, &&RETURN };
    static void *exp_4771070672[3] = {&&func_4771068160, &&func_4771065984, &&RETURN };
    static void *exp_4771068288[4] = {&&func_4771065856, &&func_4771072624, &&func_4771067392, &&RETURN };
    static void *exp_4771068480[4] = {&&func_4771065856, &&func_4771068608, &&func_4771067392, &&RETURN };
    static void *exp_4771072480[4] = {&&func_4771072848, &&func_4771065856, &&func_4771072976, &&RETURN };
    static void *exp_4771067232[8] = {&&func_4771073584, &&func_4771065744, &&func_4771072848, &&func_4771072976, &&func_4771067968, &&func_4771066464, &&func_4771073840, &&RETURN };
    static void *exp_4771073184[3] = {&&func_4771067904, &&func_4771065744, &&RETURN };
    static void *exp_4771074144[8] = {&&func_4771074272, &&func_4771072848, &&func_4771065984, &&func_4771072976, &&func_4771067968, &&func_4771066464, &&func_4771073840, &&RETURN };
    static void *exp_4771073968[3] = {&&func_4771066144, &&func_4771065424, &&RETURN };
    static void *exp_4771073312[3] = {&&func_4771066464, &&func_4771067104, &&RETURN };
    static void *exp_4771074544[4] = {&&func_4771074672, &&func_4771065856, &&func_4771067776, &&RETURN };
    static void *exp_4771075168[4] = {&&func_4771067392, &&func_4771075296, &&func_4771065504, &&RETURN };
    static void *exp_4771074800[4] = {&&func_4771067392, &&func_4771075424, &&func_4771065504, &&RETURN };
    static void *exp_4771082384[4] = {&&func_4771082512, &&func_4771065744, &&func_4771082640, &&RETURN };
    static void *exp_4771082768[4] = {&&func_4771082896, &&func_4771065744, &&func_4771082640, &&RETURN };
    static void *exp_4771083024[4] = {&&func_4771083152, &&func_4771065744, &&func_4771082640, &&RETURN };
    static void *exp_4771082304[8] = {&&func_4771075072, &&func_4771072848, &&func_4771065984, &&func_4771072976, &&func_4771067968, &&func_4771066464, &&func_4771073840, &&RETURN };

func_4771065232:
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
            PC = func_4771065232_op0;
            break;
    }
    goto **PC;
func_4771065984:
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
            PC = func_4771065984_op0;
            break;
        case 1:
            PC = func_4771065984_op1;
            break;
        case 2:
            PC = func_4771065984_op2;
            break;
        case 3:
            PC = func_4771065984_op3;
            break;
        case 4:
            PC = func_4771065984_op4;
            break;
        case 5:
            PC = func_4771065984_op5;
            break;
        case 6:
            PC = func_4771065984_op6;
            break;
    }
    goto **PC;
func_4771066144:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4771066144_op0;
            break;
        case 1:
            PC = func_4771066144_op1;
            break;
        case 2:
            PC = func_4771066144_op2;
            break;
        case 3:
            PC = func_4771066144_op3;
            break;
        case 4:
            PC = func_4771066144_op4;
            break;
        case 5:
            PC = func_4771066144_op5;
            break;
        case 6:
            PC = func_4771066144_op6;
            break;
        case 7:
            PC = func_4771066144_op7;
            break;
        case 8:
            PC = func_4771066144_op8;
            break;
        case 9:
            PC = func_4771066144_op9;
            break;
    }
    goto **PC;
func_4771065856:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4771065856_op0;
            break;
        case 1:
            PC = func_4771065856_op1;
            break;
        case 2:
            PC = func_4771065856_op2;
            break;
    }
    goto **PC;
func_4771065504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4771065504_op0;
            break;
        case 1:
            PC = func_4771065504_op1;
            break;
        case 2:
            PC = func_4771065504_op2;
            break;
    }
    goto **PC;
func_4771065104:
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
            PC = func_4771065104_op0;
            break;
    }
    goto **PC;
func_4771065744:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4771065744_op0;
            break;
        case 1:
            PC = func_4771065744_op1;
            break;
    }
    goto **PC;
func_4771066272:
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
            PC = func_4771066272_op0;
            break;
    }
    goto **PC;
func_4771067904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto **PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_4771067904_op0;
            break;
        case 1:
            PC = func_4771067904_op1;
            break;
        case 2:
            PC = func_4771067904_op2;
            break;
        case 3:
            PC = func_4771067904_op3;
            break;
        case 4:
            PC = func_4771067904_op4;
            break;
        case 5:
            PC = func_4771067904_op5;
            break;
        case 6:
            PC = func_4771067904_op6;
            break;
        case 7:
            PC = func_4771067904_op7;
            break;
        case 8:
            PC = func_4771067904_op8;
            break;
        case 9:
            PC = func_4771067904_op9;
            break;
        case 10:
            PC = func_4771067904_op10;
            break;
        case 11:
            PC = func_4771067904_op11;
            break;
        case 12:
            PC = func_4771067904_op12;
            break;
        case 13:
            PC = func_4771067904_op13;
            break;
        case 14:
            PC = func_4771067904_op14;
            break;
        case 15:
            PC = func_4771067904_op15;
            break;
        case 16:
            PC = func_4771067904_op16;
            break;
        case 17:
            PC = func_4771067904_op17;
            break;
        case 18:
            PC = func_4771067904_op18;
            break;
        case 19:
            PC = func_4771067904_op19;
            break;
        case 20:
            PC = func_4771067904_op20;
            break;
        case 21:
            PC = func_4771067904_op21;
            break;
        case 22:
            PC = func_4771067904_op22;
            break;
        case 23:
            PC = func_4771067904_op23;
            break;
        case 24:
            PC = func_4771067904_op24;
            break;
        case 25:
            PC = func_4771067904_op25;
            break;
        case 26:
            PC = func_4771067904_op26;
            break;
        case 27:
            PC = func_4771067904_op27;
            break;
        case 28:
            PC = func_4771067904_op28;
            break;
        case 29:
            PC = func_4771067904_op29;
            break;
        case 30:
            PC = func_4771067904_op30;
            break;
        case 31:
            PC = func_4771067904_op31;
            break;
        case 32:
            PC = func_4771067904_op32;
            break;
        case 33:
            PC = func_4771067904_op33;
            break;
        case 34:
            PC = func_4771067904_op34;
            break;
        case 35:
            PC = func_4771067904_op35;
            break;
        case 36:
            PC = func_4771067904_op36;
            break;
        case 37:
            PC = func_4771067904_op37;
            break;
        case 38:
            PC = func_4771067904_op38;
            break;
        case 39:
            PC = func_4771067904_op39;
            break;
        case 40:
            PC = func_4771067904_op40;
            break;
        case 41:
            PC = func_4771067904_op41;
            break;
        case 42:
            PC = func_4771067904_op42;
            break;
        case 43:
            PC = func_4771067904_op43;
            break;
        case 44:
            PC = func_4771067904_op44;
            break;
        case 45:
            PC = func_4771067904_op45;
            break;
        case 46:
            PC = func_4771067904_op46;
            break;
        case 47:
            PC = func_4771067904_op47;
            break;
        case 48:
            PC = func_4771067904_op48;
            break;
        case 49:
            PC = func_4771067904_op49;
            break;
        case 50:
            PC = func_4771067904_op50;
            break;
        case 51:
            PC = func_4771067904_op51;
            break;
    }
    goto **PC;
func_4771065424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4771065424_op0;
            break;
        case 1:
            PC = func_4771065424_op1;
            break;
    }
    goto **PC;
func_4771066464:
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
            PC = func_4771066464_op0;
            break;
        case 1:
            PC = func_4771066464_op1;
            break;
    }
    goto **PC;
func_4771066672:
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
            PC = func_4771066672_op0;
            break;
    }
    goto **PC;
func_4771066592:
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
            PC = func_4771066592_op0;
            break;
    }
    goto **PC;
func_4771067104:
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
            PC = func_4771067104_op0;
            break;
        case 1:
            PC = func_4771067104_op1;
            break;
        case 2:
            PC = func_4771067104_op2;
            break;
        case 3:
            PC = func_4771067104_op3;
            break;
        case 4:
            PC = func_4771067104_op4;
            break;
        case 5:
            PC = func_4771067104_op5;
            break;
    }
    goto **PC;
func_4771067392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4771067392_op0;
            break;
        case 1:
            PC = func_4771067392_op1;
            break;
        case 2:
            PC = func_4771067392_op2;
            break;
    }
    goto **PC;
func_4771066944:
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
            PC = func_4771066944_op0;
            break;
        case 1:
            PC = func_4771066944_op1;
            break;
        case 2:
            PC = func_4771066944_op2;
            break;
    }
    goto **PC;
func_4771066864:
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
            PC = func_4771066864_op0;
            break;
    }
    goto **PC;
func_4771067328:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771067328;
    goto **PC;
func_4771067648:
    extend(61);
    NEXT();
    goto **PC;
func_4771067776:
    extend(59);
    NEXT();
    goto **PC;
func_4771068928:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771068928;
    goto **PC;
func_4771069056:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4771069184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771069184;
    goto **PC;
func_4771069312:
    extend(33);
    extend(61);
    NEXT();
    goto **PC;
func_4771069440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771069440;
    goto **PC;
func_4771069568:
    extend(62);
    NEXT();
    goto **PC;
func_4771069728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771069728;
    goto **PC;
func_4771069856:
    extend(60);
    NEXT();
    goto **PC;
func_4771070016:
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
    PC = exp_4771070016;
    goto **PC;
func_4771070144:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_4771070368:
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
    PC = exp_4771070368;
    goto **PC;
func_4771070496:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_4771070672:
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
    PC = exp_4771070672;
    goto **PC;
func_4771068160:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto **PC;
func_4771068800:
    extend(48);
    NEXT();
    goto **PC;
func_4771068352:
    extend(49);
    NEXT();
    goto **PC;
func_4771071248:
    extend(50);
    NEXT();
    goto **PC;
func_4771071376:
    extend(51);
    NEXT();
    goto **PC;
func_4771071504:
    extend(52);
    NEXT();
    goto **PC;
func_4771071696:
    extend(53);
    NEXT();
    goto **PC;
func_4771071824:
    extend(54);
    NEXT();
    goto **PC;
func_4771071952:
    extend(55);
    NEXT();
    goto **PC;
func_4771072080:
    extend(56);
    NEXT();
    goto **PC;
func_4771071632:
    extend(57);
    NEXT();
    goto **PC;
func_4771068288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771068288;
    goto **PC;
func_4771072624:
    extend(43);
    NEXT();
    goto **PC;
func_4771068480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771068480;
    goto **PC;
func_4771068608:
    extend(45);
    NEXT();
    goto **PC;
func_4771072480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771072480;
    goto **PC;
func_4771072848:
    extend(40);
    NEXT();
    goto **PC;
func_4771072976:
    extend(41);
    NEXT();
    goto **PC;
func_4771067232:
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
    PC = exp_4771067232;
    goto **PC;
func_4771073584:
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
func_4771067968:
    extend(123);
    NEXT();
    goto **PC;
func_4771073840:
    extend(125);
    NEXT();
    goto **PC;
func_4771073184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771073184;
    goto **PC;
func_4771074144:
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
    PC = exp_4771074144;
    goto **PC;
func_4771074272:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4771075616:
    extend(97);
    NEXT();
    goto **PC;
func_4771075744:
    extend(98);
    NEXT();
    goto **PC;
func_4771075872:
    extend(99);
    NEXT();
    goto **PC;
func_4771076032:
    extend(100);
    NEXT();
    goto **PC;
func_4771076160:
    extend(101);
    NEXT();
    goto **PC;
func_4771076352:
    extend(102);
    NEXT();
    goto **PC;
func_4771076480:
    extend(103);
    NEXT();
    goto **PC;
func_4771070800:
    extend(104);
    NEXT();
    goto **PC;
func_4771070928:
    extend(105);
    NEXT();
    goto **PC;
func_4771076288:
    extend(106);
    NEXT();
    goto **PC;
func_4771076544:
    extend(107);
    NEXT();
    goto **PC;
func_4771076672:
    extend(108);
    NEXT();
    goto **PC;
func_4771076800:
    extend(109);
    NEXT();
    goto **PC;
func_4771076928:
    extend(110);
    NEXT();
    goto **PC;
func_4771077056:
    extend(111);
    NEXT();
    goto **PC;
func_4771077184:
    extend(112);
    NEXT();
    goto **PC;
func_4771077312:
    extend(113);
    NEXT();
    goto **PC;
func_4771071056:
    extend(114);
    NEXT();
    goto **PC;
func_4771077696:
    extend(115);
    NEXT();
    goto **PC;
func_4771077824:
    extend(116);
    NEXT();
    goto **PC;
func_4771077952:
    extend(117);
    NEXT();
    goto **PC;
func_4771078080:
    extend(118);
    NEXT();
    goto **PC;
func_4771078208:
    extend(119);
    NEXT();
    goto **PC;
func_4771078336:
    extend(120);
    NEXT();
    goto **PC;
func_4771078464:
    extend(121);
    NEXT();
    goto **PC;
func_4771078592:
    extend(122);
    NEXT();
    goto **PC;
func_4771078720:
    extend(65);
    NEXT();
    goto **PC;
func_4771078848:
    extend(66);
    NEXT();
    goto **PC;
func_4771078976:
    extend(67);
    NEXT();
    goto **PC;
func_4771079104:
    extend(68);
    NEXT();
    goto **PC;
func_4771079232:
    extend(69);
    NEXT();
    goto **PC;
func_4771079360:
    extend(70);
    NEXT();
    goto **PC;
func_4771079488:
    extend(71);
    NEXT();
    goto **PC;
func_4771077440:
    extend(72);
    NEXT();
    goto **PC;
func_4771077568:
    extend(73);
    NEXT();
    goto **PC;
func_4771080128:
    extend(74);
    NEXT();
    goto **PC;
func_4771080256:
    extend(75);
    NEXT();
    goto **PC;
func_4771080384:
    extend(76);
    NEXT();
    goto **PC;
func_4771080512:
    extend(77);
    NEXT();
    goto **PC;
func_4771080640:
    extend(78);
    NEXT();
    goto **PC;
func_4771080768:
    extend(79);
    NEXT();
    goto **PC;
func_4771080896:
    extend(80);
    NEXT();
    goto **PC;
func_4771081024:
    extend(81);
    NEXT();
    goto **PC;
func_4771081152:
    extend(82);
    NEXT();
    goto **PC;
func_4771081280:
    extend(83);
    NEXT();
    goto **PC;
func_4771081408:
    extend(84);
    NEXT();
    goto **PC;
func_4771081536:
    extend(85);
    NEXT();
    goto **PC;
func_4771081664:
    extend(86);
    NEXT();
    goto **PC;
func_4771081792:
    extend(87);
    NEXT();
    goto **PC;
func_4771081920:
    extend(88);
    NEXT();
    goto **PC;
func_4771082048:
    extend(89);
    NEXT();
    goto **PC;
func_4771082176:
    extend(90);
    NEXT();
    goto **PC;
func_4771073968:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771073968;
    goto **PC;
func_4771073312:
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
    PC = exp_4771073312;
    goto **PC;
func_4771074544:
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
    PC = exp_4771074544;
    goto **PC;
func_4771074672:
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
func_4771075168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771075168;
    goto **PC;
func_4771075296:
    extend(42);
    NEXT();
    goto **PC;
func_4771074800:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4771074800;
    goto **PC;
func_4771075424:
    extend(47);
    NEXT();
    goto **PC;
func_4771082384:
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
    PC = exp_4771082384;
    goto **PC;
func_4771082512:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4771082640:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto **PC;
func_4771082768:
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
    PC = exp_4771082768;
    goto **PC;
func_4771082896:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4771083024:
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
    PC = exp_4771083024;
    goto **PC;
func_4771083152:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto **PC;
func_4771082304:
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
    PC = exp_4771082304;
    goto **PC;
func_4771075072:
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
    PC = func_4771066592_op0;
    goto **PC;
}
