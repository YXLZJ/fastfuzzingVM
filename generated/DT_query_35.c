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
    static void *func_5660236400_op0[2] = { &&func_5660247648, &&RETURN };
    static void *func_5660236400_op1[2] = { &&func_5660248144, &&RETURN };
    static void *func_5660236400_op2[2] = { &&func_5660248272, &&RETURN };
    static void *func_5660236400_op3[2] = { &&func_5660248432, &&RETURN };
    static void *func_5660246608_op0[2] = { &&func_5660248640, &&RETURN };
    static void *func_5660246608_op1[2] = { &&func_5660248768, &&RETURN };
    static void *func_5660246912_op0[2] = { &&func_5660248016, &&RETURN };
    static void *func_5660246912_op1[2] = { &&func_5660246832, &&RETURN };
    static void *func_5660246912_op2[2] = { &&func_5660249824, &&RETURN };
    static void *func_5660247264_op0[2] = { &&func_5660250416, &&RETURN };
    static void *func_5660247264_op1[2] = { &&func_5660248560, &&RETURN };
    static void *func_5660247264_op2[2] = { &&func_5660250608, &&RETURN };
    static void *func_5660247264_op3[2] = { &&func_5660250768, &&RETURN };
    static void *func_5660247264_op4[2] = { &&func_5660250896, &&RETURN };
    static void *func_5660247264_op5[2] = { &&func_5660251088, &&RETURN };
    static void *func_5660247264_op6[2] = { &&func_5660251216, &&RETURN };
    static void *func_5660247264_op7[2] = { &&func_5660251344, &&RETURN };
    static void *func_5660247264_op8[2] = { &&func_5660251472, &&RETURN };
    static void *func_5660247264_op9[2] = { &&func_5660251024, &&RETURN };
    static void *func_5660246976_op0[2] = { &&func_5660247264, &&RETURN };
    static void *func_5660246976_op1[2] = { &&func_5660249280, &&RETURN };
    static void *func_5660246528_op0[2] = { &&func_5660247904, &&RETURN };
    static void *func_5660246400_op0[2] = { &&func_5660246528, &&HALT };
    static void *func_5660247728_op0[2] = { &&func_5660252624, &&RETURN };
    static void *func_5660247728_op1[2] = { &&func_5660252752, &&RETURN };
    static void *func_5660247728_op2[2] = { &&func_5660252880, &&RETURN };
    static void *func_5660247728_op3[2] = { &&func_5660253040, &&RETURN };
    static void *func_5660247728_op4[2] = { &&func_5660253168, &&RETURN };
    static void *func_5660247728_op5[2] = { &&func_5660253360, &&RETURN };
    static void *func_5660247728_op6[2] = { &&func_5660253488, &&RETURN };
    static void *func_5660247728_op7[2] = { &&func_5660253616, &&RETURN };
    static void *func_5660247728_op8[2] = { &&func_5660253744, &&RETURN };
    static void *func_5660247728_op9[2] = { &&func_5660253296, &&RETURN };
    static void *func_5660246768_op0[2] = { &&func_5660252512, &&RETURN };
    static void *func_5660246768_op1[2] = { &&func_5660250144, &&RETURN };
    static void *func_5660246768_op2[2] = { &&func_5660250272, &&RETURN };
    static void *func_5660247392_op0[2] = { &&func_5660246976, &&RETURN };
    static void *func_5660247392_op1[2] = { &&func_5660247728, &&RETURN };
    static void *func_5660247520_op0[2] = { &&func_5660252432, &&RETURN };
    static void *exp_5660248768[4] = {&&func_5660236400, &&func_5660249152, &&func_5660246608, &&RETURN };
    static void *exp_5660248016[4] = {&&func_5660236400, &&func_5660249504, &&func_5660247392, &&RETURN };
    static void *exp_5660246832[4] = {&&func_5660246912, &&func_5660249696, &&func_5660246912, &&RETURN };
    static void *exp_5660249824[4] = {&&func_5660246912, &&func_5660249952, &&func_5660246912, &&RETURN };
    static void *exp_5660249280[3] = {&&func_5660247264, &&func_5660246976, &&RETURN };
    static void *exp_5660247904[6] = {&&func_5660252112, &&func_5660246608, &&func_5660252240, &&func_5660246768, &&func_5660247520, &&RETURN };
    static void *exp_5660252432[3] = {&&func_5660254256, &&func_5660246912, &&RETURN };

func_5660236400:
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
            PC = func_5660236400_op0;
            break;
        case 1:
            PC = func_5660236400_op1;
            break;
        case 2:
            PC = func_5660236400_op2;
            break;
        case 3:
            PC = func_5660236400_op3;
            break;
    }
    goto **PC;
func_5660246608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5660246608_op0;
            break;
        case 1:
            PC = func_5660246608_op1;
            break;
    }
    goto **PC;
func_5660246912:
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
            PC = func_5660246912_op0;
            break;
        case 1:
            PC = func_5660246912_op1;
            break;
        case 2:
            PC = func_5660246912_op2;
            break;
    }
    goto **PC;
func_5660247264:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5660247264_op0;
            break;
        case 1:
            PC = func_5660247264_op1;
            break;
        case 2:
            PC = func_5660247264_op2;
            break;
        case 3:
            PC = func_5660247264_op3;
            break;
        case 4:
            PC = func_5660247264_op4;
            break;
        case 5:
            PC = func_5660247264_op5;
            break;
        case 6:
            PC = func_5660247264_op6;
            break;
        case 7:
            PC = func_5660247264_op7;
            break;
        case 8:
            PC = func_5660247264_op8;
            break;
        case 9:
            PC = func_5660247264_op9;
            break;
    }
    goto **PC;
func_5660246976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5660246976_op0;
            break;
        case 1:
            PC = func_5660246976_op1;
            break;
    }
    goto **PC;
func_5660246528:
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
            PC = func_5660246528_op0;
            break;
    }
    goto **PC;
func_5660246400:
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
            PC = func_5660246400_op0;
            break;
    }
    goto **PC;
func_5660247728:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5660247728_op0;
            break;
        case 1:
            PC = func_5660247728_op1;
            break;
        case 2:
            PC = func_5660247728_op2;
            break;
        case 3:
            PC = func_5660247728_op3;
            break;
        case 4:
            PC = func_5660247728_op4;
            break;
        case 5:
            PC = func_5660247728_op5;
            break;
        case 6:
            PC = func_5660247728_op6;
            break;
        case 7:
            PC = func_5660247728_op7;
            break;
        case 8:
            PC = func_5660247728_op8;
            break;
        case 9:
            PC = func_5660247728_op9;
            break;
    }
    goto **PC;
func_5660246768:
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
            PC = func_5660246768_op0;
            break;
        case 1:
            PC = func_5660246768_op1;
            break;
        case 2:
            PC = func_5660246768_op2;
            break;
    }
    goto **PC;
func_5660247392:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5660247392_op0;
            break;
        case 1:
            PC = func_5660247392_op1;
            break;
    }
    goto **PC;
func_5660247520:
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
            PC = func_5660247520_op0;
            break;
    }
    goto **PC;
func_5660247648:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5660248144:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5660248272:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5660248432:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5660248640:
    extend(42);
    NEXT();
    goto **PC;
func_5660248768:
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
    PC = exp_5660248768;
    goto **PC;
func_5660249152:
    extend(44);
    NEXT();
    goto **PC;
func_5660248016:
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
    PC = exp_5660248016;
    goto **PC;
func_5660249504:
    extend(61);
    NEXT();
    goto **PC;
func_5660246832:
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
    PC = exp_5660246832;
    goto **PC;
func_5660249696:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5660249824:
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
    PC = exp_5660249824;
    goto **PC;
func_5660249952:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5660250416:
    extend(48);
    NEXT();
    goto **PC;
func_5660248560:
    extend(49);
    NEXT();
    goto **PC;
func_5660250608:
    extend(50);
    NEXT();
    goto **PC;
func_5660250768:
    extend(51);
    NEXT();
    goto **PC;
func_5660250896:
    extend(52);
    NEXT();
    goto **PC;
func_5660251088:
    extend(53);
    NEXT();
    goto **PC;
func_5660251216:
    extend(54);
    NEXT();
    goto **PC;
func_5660251344:
    extend(55);
    NEXT();
    goto **PC;
func_5660251472:
    extend(56);
    NEXT();
    goto **PC;
func_5660251024:
    extend(57);
    NEXT();
    goto **PC;
func_5660249280:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5660249280;
    goto **PC;
func_5660247904:
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
    PC = exp_5660247904;
    goto **PC;
func_5660252112:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5660252240:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5660252624:
    extend(97);
    NEXT();
    goto **PC;
func_5660252752:
    extend(98);
    NEXT();
    goto **PC;
func_5660252880:
    extend(99);
    NEXT();
    goto **PC;
func_5660253040:
    extend(100);
    NEXT();
    goto **PC;
func_5660253168:
    extend(101);
    NEXT();
    goto **PC;
func_5660253360:
    extend(102);
    NEXT();
    goto **PC;
func_5660253488:
    extend(103);
    NEXT();
    goto **PC;
func_5660253616:
    extend(104);
    NEXT();
    goto **PC;
func_5660253744:
    extend(105);
    NEXT();
    goto **PC;
func_5660253296:
    extend(106);
    NEXT();
    goto **PC;
func_5660252512:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5660250144:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5660250272:
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
func_5660252432:
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
    PC = exp_5660252432;
    goto **PC;
func_5660254256:
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
    PC = func_5660246400_op0;
    goto **PC;
}
