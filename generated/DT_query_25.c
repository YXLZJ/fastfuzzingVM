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
    static void *func_5693790832_op0[2] = { &&func_5693802080, &&RETURN };
    static void *func_5693790832_op1[2] = { &&func_5693802576, &&RETURN };
    static void *func_5693790832_op2[2] = { &&func_5693802704, &&RETURN };
    static void *func_5693790832_op3[2] = { &&func_5693802864, &&RETURN };
    static void *func_5693801040_op0[2] = { &&func_5693803072, &&RETURN };
    static void *func_5693801040_op1[2] = { &&func_5693803200, &&RETURN };
    static void *func_5693801344_op0[2] = { &&func_5693802448, &&RETURN };
    static void *func_5693801344_op1[2] = { &&func_5693801264, &&RETURN };
    static void *func_5693801344_op2[2] = { &&func_5693804256, &&RETURN };
    static void *func_5693801696_op0[2] = { &&func_5693804848, &&RETURN };
    static void *func_5693801696_op1[2] = { &&func_5693802992, &&RETURN };
    static void *func_5693801696_op2[2] = { &&func_5693805040, &&RETURN };
    static void *func_5693801696_op3[2] = { &&func_5693805200, &&RETURN };
    static void *func_5693801696_op4[2] = { &&func_5693805328, &&RETURN };
    static void *func_5693801696_op5[2] = { &&func_5693805520, &&RETURN };
    static void *func_5693801696_op6[2] = { &&func_5693805648, &&RETURN };
    static void *func_5693801696_op7[2] = { &&func_5693805776, &&RETURN };
    static void *func_5693801696_op8[2] = { &&func_5693805904, &&RETURN };
    static void *func_5693801696_op9[2] = { &&func_5693805456, &&RETURN };
    static void *func_5693801408_op0[2] = { &&func_5693801696, &&RETURN };
    static void *func_5693801408_op1[2] = { &&func_5693803712, &&RETURN };
    static void *func_5693800960_op0[2] = { &&func_5693802336, &&RETURN };
    static void *func_5693800832_op0[2] = { &&func_5693800960, &&HALT };
    static void *func_5693802160_op0[2] = { &&func_5693807056, &&RETURN };
    static void *func_5693802160_op1[2] = { &&func_5693807184, &&RETURN };
    static void *func_5693802160_op2[2] = { &&func_5693807312, &&RETURN };
    static void *func_5693802160_op3[2] = { &&func_5693807472, &&RETURN };
    static void *func_5693802160_op4[2] = { &&func_5693807600, &&RETURN };
    static void *func_5693802160_op5[2] = { &&func_5693807792, &&RETURN };
    static void *func_5693802160_op6[2] = { &&func_5693807920, &&RETURN };
    static void *func_5693802160_op7[2] = { &&func_5693808048, &&RETURN };
    static void *func_5693802160_op8[2] = { &&func_5693808176, &&RETURN };
    static void *func_5693802160_op9[2] = { &&func_5693807728, &&RETURN };
    static void *func_5693801200_op0[2] = { &&func_5693806944, &&RETURN };
    static void *func_5693801200_op1[2] = { &&func_5693804576, &&RETURN };
    static void *func_5693801200_op2[2] = { &&func_5693804704, &&RETURN };
    static void *func_5693801824_op0[2] = { &&func_5693801408, &&RETURN };
    static void *func_5693801824_op1[2] = { &&func_5693802160, &&RETURN };
    static void *func_5693801952_op0[2] = { &&func_5693806864, &&RETURN };
    static void *exp_5693803200[4] = {&&func_5693790832, &&func_5693803584, &&func_5693801040, &&RETURN };
    static void *exp_5693802448[4] = {&&func_5693790832, &&func_5693803936, &&func_5693801824, &&RETURN };
    static void *exp_5693801264[4] = {&&func_5693801344, &&func_5693804128, &&func_5693801344, &&RETURN };
    static void *exp_5693804256[4] = {&&func_5693801344, &&func_5693804384, &&func_5693801344, &&RETURN };
    static void *exp_5693803712[3] = {&&func_5693801696, &&func_5693801408, &&RETURN };
    static void *exp_5693802336[6] = {&&func_5693806544, &&func_5693801040, &&func_5693806672, &&func_5693801200, &&func_5693801952, &&RETURN };
    static void *exp_5693806864[3] = {&&func_5693808688, &&func_5693801344, &&RETURN };

func_5693790832:
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
            PC = func_5693790832_op0;
            break;
        case 1:
            PC = func_5693790832_op1;
            break;
        case 2:
            PC = func_5693790832_op2;
            break;
        case 3:
            PC = func_5693790832_op3;
            break;
    }
    goto **PC;
func_5693801040:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5693801040_op0;
            break;
        case 1:
            PC = func_5693801040_op1;
            break;
    }
    goto **PC;
func_5693801344:
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
            PC = func_5693801344_op0;
            break;
        case 1:
            PC = func_5693801344_op1;
            break;
        case 2:
            PC = func_5693801344_op2;
            break;
    }
    goto **PC;
func_5693801696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5693801696_op0;
            break;
        case 1:
            PC = func_5693801696_op1;
            break;
        case 2:
            PC = func_5693801696_op2;
            break;
        case 3:
            PC = func_5693801696_op3;
            break;
        case 4:
            PC = func_5693801696_op4;
            break;
        case 5:
            PC = func_5693801696_op5;
            break;
        case 6:
            PC = func_5693801696_op6;
            break;
        case 7:
            PC = func_5693801696_op7;
            break;
        case 8:
            PC = func_5693801696_op8;
            break;
        case 9:
            PC = func_5693801696_op9;
            break;
    }
    goto **PC;
func_5693801408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5693801408_op0;
            break;
        case 1:
            PC = func_5693801408_op1;
            break;
    }
    goto **PC;
func_5693800960:
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
            PC = func_5693800960_op0;
            break;
    }
    goto **PC;
func_5693800832:
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
            PC = func_5693800832_op0;
            break;
    }
    goto **PC;
func_5693802160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5693802160_op0;
            break;
        case 1:
            PC = func_5693802160_op1;
            break;
        case 2:
            PC = func_5693802160_op2;
            break;
        case 3:
            PC = func_5693802160_op3;
            break;
        case 4:
            PC = func_5693802160_op4;
            break;
        case 5:
            PC = func_5693802160_op5;
            break;
        case 6:
            PC = func_5693802160_op6;
            break;
        case 7:
            PC = func_5693802160_op7;
            break;
        case 8:
            PC = func_5693802160_op8;
            break;
        case 9:
            PC = func_5693802160_op9;
            break;
    }
    goto **PC;
func_5693801200:
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
            PC = func_5693801200_op0;
            break;
        case 1:
            PC = func_5693801200_op1;
            break;
        case 2:
            PC = func_5693801200_op2;
            break;
    }
    goto **PC;
func_5693801824:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5693801824_op0;
            break;
        case 1:
            PC = func_5693801824_op1;
            break;
    }
    goto **PC;
func_5693801952:
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
            PC = func_5693801952_op0;
            break;
    }
    goto **PC;
func_5693802080:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5693802576:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5693802704:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5693802864:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5693803072:
    extend(42);
    NEXT();
    goto **PC;
func_5693803200:
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
    PC = exp_5693803200;
    goto **PC;
func_5693803584:
    extend(44);
    NEXT();
    goto **PC;
func_5693802448:
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
    PC = exp_5693802448;
    goto **PC;
func_5693803936:
    extend(61);
    NEXT();
    goto **PC;
func_5693801264:
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
    PC = exp_5693801264;
    goto **PC;
func_5693804128:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5693804256:
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
    PC = exp_5693804256;
    goto **PC;
func_5693804384:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5693804848:
    extend(48);
    NEXT();
    goto **PC;
func_5693802992:
    extend(49);
    NEXT();
    goto **PC;
func_5693805040:
    extend(50);
    NEXT();
    goto **PC;
func_5693805200:
    extend(51);
    NEXT();
    goto **PC;
func_5693805328:
    extend(52);
    NEXT();
    goto **PC;
func_5693805520:
    extend(53);
    NEXT();
    goto **PC;
func_5693805648:
    extend(54);
    NEXT();
    goto **PC;
func_5693805776:
    extend(55);
    NEXT();
    goto **PC;
func_5693805904:
    extend(56);
    NEXT();
    goto **PC;
func_5693805456:
    extend(57);
    NEXT();
    goto **PC;
func_5693803712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5693803712;
    goto **PC;
func_5693802336:
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
    PC = exp_5693802336;
    goto **PC;
func_5693806544:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5693806672:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5693807056:
    extend(97);
    NEXT();
    goto **PC;
func_5693807184:
    extend(98);
    NEXT();
    goto **PC;
func_5693807312:
    extend(99);
    NEXT();
    goto **PC;
func_5693807472:
    extend(100);
    NEXT();
    goto **PC;
func_5693807600:
    extend(101);
    NEXT();
    goto **PC;
func_5693807792:
    extend(102);
    NEXT();
    goto **PC;
func_5693807920:
    extend(103);
    NEXT();
    goto **PC;
func_5693808048:
    extend(104);
    NEXT();
    goto **PC;
func_5693808176:
    extend(105);
    NEXT();
    goto **PC;
func_5693807728:
    extend(106);
    NEXT();
    goto **PC;
func_5693806944:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5693804576:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5693804704:
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
func_5693806864:
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
    PC = exp_5693806864;
    goto **PC;
func_5693808688:
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
    PC = func_5693800832_op0;
    goto **PC;
}
