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
    static void *func_5056256624_op0[2] = { &&func_5056267872, &&RETURN };
    static void *func_5056256624_op1[2] = { &&func_5056268368, &&RETURN };
    static void *func_5056256624_op2[2] = { &&func_5056268496, &&RETURN };
    static void *func_5056256624_op3[2] = { &&func_5056268656, &&RETURN };
    static void *func_5056266832_op0[2] = { &&func_5056268864, &&RETURN };
    static void *func_5056266832_op1[2] = { &&func_5056268992, &&RETURN };
    static void *func_5056267136_op0[2] = { &&func_5056268240, &&RETURN };
    static void *func_5056267136_op1[2] = { &&func_5056267056, &&RETURN };
    static void *func_5056267136_op2[2] = { &&func_5056270048, &&RETURN };
    static void *func_5056267488_op0[2] = { &&func_5056270640, &&RETURN };
    static void *func_5056267488_op1[2] = { &&func_5056268784, &&RETURN };
    static void *func_5056267488_op2[2] = { &&func_5056270832, &&RETURN };
    static void *func_5056267488_op3[2] = { &&func_5056270992, &&RETURN };
    static void *func_5056267488_op4[2] = { &&func_5056271120, &&RETURN };
    static void *func_5056267488_op5[2] = { &&func_5056271312, &&RETURN };
    static void *func_5056267488_op6[2] = { &&func_5056271440, &&RETURN };
    static void *func_5056267488_op7[2] = { &&func_5056271568, &&RETURN };
    static void *func_5056267488_op8[2] = { &&func_5056271696, &&RETURN };
    static void *func_5056267488_op9[2] = { &&func_5056271248, &&RETURN };
    static void *func_5056267200_op0[2] = { &&func_5056267488, &&RETURN };
    static void *func_5056267200_op1[2] = { &&func_5056269504, &&RETURN };
    static void *func_5056266752_op0[2] = { &&func_5056268128, &&RETURN };
    static void *func_5056266624_op0[2] = { &&func_5056266752, &&HALT };
    static void *func_5056267952_op0[2] = { &&func_5056272848, &&RETURN };
    static void *func_5056267952_op1[2] = { &&func_5056272976, &&RETURN };
    static void *func_5056267952_op2[2] = { &&func_5056273104, &&RETURN };
    static void *func_5056267952_op3[2] = { &&func_5056273264, &&RETURN };
    static void *func_5056267952_op4[2] = { &&func_5056273392, &&RETURN };
    static void *func_5056267952_op5[2] = { &&func_5056273584, &&RETURN };
    static void *func_5056267952_op6[2] = { &&func_5056273712, &&RETURN };
    static void *func_5056267952_op7[2] = { &&func_5056273840, &&RETURN };
    static void *func_5056267952_op8[2] = { &&func_5056273968, &&RETURN };
    static void *func_5056267952_op9[2] = { &&func_5056273520, &&RETURN };
    static void *func_5056266992_op0[2] = { &&func_5056272736, &&RETURN };
    static void *func_5056266992_op1[2] = { &&func_5056270368, &&RETURN };
    static void *func_5056266992_op2[2] = { &&func_5056270496, &&RETURN };
    static void *func_5056267616_op0[2] = { &&func_5056267200, &&RETURN };
    static void *func_5056267616_op1[2] = { &&func_5056267952, &&RETURN };
    static void *func_5056267744_op0[2] = { &&func_5056272656, &&RETURN };
    static void *exp_5056268992[4] = {&&func_5056256624, &&func_5056269376, &&func_5056266832, &&RETURN };
    static void *exp_5056268240[4] = {&&func_5056256624, &&func_5056269728, &&func_5056267616, &&RETURN };
    static void *exp_5056267056[4] = {&&func_5056267136, &&func_5056269920, &&func_5056267136, &&RETURN };
    static void *exp_5056270048[4] = {&&func_5056267136, &&func_5056270176, &&func_5056267136, &&RETURN };
    static void *exp_5056269504[3] = {&&func_5056267488, &&func_5056267200, &&RETURN };
    static void *exp_5056268128[6] = {&&func_5056272336, &&func_5056266832, &&func_5056272464, &&func_5056266992, &&func_5056267744, &&RETURN };
    static void *exp_5056272656[3] = {&&func_5056274480, &&func_5056267136, &&RETURN };

func_5056256624:
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
            PC = func_5056256624_op0;
            break;
        case 1:
            PC = func_5056256624_op1;
            break;
        case 2:
            PC = func_5056256624_op2;
            break;
        case 3:
            PC = func_5056256624_op3;
            break;
    }
    goto **PC;
func_5056266832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056266832_op0;
            break;
        case 1:
            PC = func_5056266832_op1;
            break;
    }
    goto **PC;
func_5056267136:
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
            PC = func_5056267136_op0;
            break;
        case 1:
            PC = func_5056267136_op1;
            break;
        case 2:
            PC = func_5056267136_op2;
            break;
    }
    goto **PC;
func_5056267488:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5056267488_op0;
            break;
        case 1:
            PC = func_5056267488_op1;
            break;
        case 2:
            PC = func_5056267488_op2;
            break;
        case 3:
            PC = func_5056267488_op3;
            break;
        case 4:
            PC = func_5056267488_op4;
            break;
        case 5:
            PC = func_5056267488_op5;
            break;
        case 6:
            PC = func_5056267488_op6;
            break;
        case 7:
            PC = func_5056267488_op7;
            break;
        case 8:
            PC = func_5056267488_op8;
            break;
        case 9:
            PC = func_5056267488_op9;
            break;
    }
    goto **PC;
func_5056267200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056267200_op0;
            break;
        case 1:
            PC = func_5056267200_op1;
            break;
    }
    goto **PC;
func_5056266752:
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
            PC = func_5056266752_op0;
            break;
    }
    goto **PC;
func_5056266624:
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
            PC = func_5056266624_op0;
            break;
    }
    goto **PC;
func_5056267952:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5056267952_op0;
            break;
        case 1:
            PC = func_5056267952_op1;
            break;
        case 2:
            PC = func_5056267952_op2;
            break;
        case 3:
            PC = func_5056267952_op3;
            break;
        case 4:
            PC = func_5056267952_op4;
            break;
        case 5:
            PC = func_5056267952_op5;
            break;
        case 6:
            PC = func_5056267952_op6;
            break;
        case 7:
            PC = func_5056267952_op7;
            break;
        case 8:
            PC = func_5056267952_op8;
            break;
        case 9:
            PC = func_5056267952_op9;
            break;
    }
    goto **PC;
func_5056266992:
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
            PC = func_5056266992_op0;
            break;
        case 1:
            PC = func_5056266992_op1;
            break;
        case 2:
            PC = func_5056266992_op2;
            break;
    }
    goto **PC;
func_5056267616:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5056267616_op0;
            break;
        case 1:
            PC = func_5056267616_op1;
            break;
    }
    goto **PC;
func_5056267744:
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
            PC = func_5056267744_op0;
            break;
    }
    goto **PC;
func_5056267872:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5056268368:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5056268496:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5056268656:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5056268864:
    extend(42);
    NEXT();
    goto **PC;
func_5056268992:
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
    PC = exp_5056268992;
    goto **PC;
func_5056269376:
    extend(44);
    NEXT();
    goto **PC;
func_5056268240:
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
    PC = exp_5056268240;
    goto **PC;
func_5056269728:
    extend(61);
    NEXT();
    goto **PC;
func_5056267056:
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
    PC = exp_5056267056;
    goto **PC;
func_5056269920:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5056270048:
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
    PC = exp_5056270048;
    goto **PC;
func_5056270176:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5056270640:
    extend(48);
    NEXT();
    goto **PC;
func_5056268784:
    extend(49);
    NEXT();
    goto **PC;
func_5056270832:
    extend(50);
    NEXT();
    goto **PC;
func_5056270992:
    extend(51);
    NEXT();
    goto **PC;
func_5056271120:
    extend(52);
    NEXT();
    goto **PC;
func_5056271312:
    extend(53);
    NEXT();
    goto **PC;
func_5056271440:
    extend(54);
    NEXT();
    goto **PC;
func_5056271568:
    extend(55);
    NEXT();
    goto **PC;
func_5056271696:
    extend(56);
    NEXT();
    goto **PC;
func_5056271248:
    extend(57);
    NEXT();
    goto **PC;
func_5056269504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5056269504;
    goto **PC;
func_5056268128:
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
    PC = exp_5056268128;
    goto **PC;
func_5056272336:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5056272464:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5056272848:
    extend(97);
    NEXT();
    goto **PC;
func_5056272976:
    extend(98);
    NEXT();
    goto **PC;
func_5056273104:
    extend(99);
    NEXT();
    goto **PC;
func_5056273264:
    extend(100);
    NEXT();
    goto **PC;
func_5056273392:
    extend(101);
    NEXT();
    goto **PC;
func_5056273584:
    extend(102);
    NEXT();
    goto **PC;
func_5056273712:
    extend(103);
    NEXT();
    goto **PC;
func_5056273840:
    extend(104);
    NEXT();
    goto **PC;
func_5056273968:
    extend(105);
    NEXT();
    goto **PC;
func_5056273520:
    extend(106);
    NEXT();
    goto **PC;
func_5056272736:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5056270368:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5056270496:
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
func_5056272656:
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
    PC = exp_5056272656;
    goto **PC;
func_5056274480:
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
    PC = func_5056266624_op0;
    goto **PC;
}
