#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 20
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
    static void *func_5585781200_op0[2] = { &&func_5585791792, &&RETURN };
    static void *func_5585781200_op1[2] = { &&func_5585792288, &&RETURN };
    static void *func_5585781200_op2[2] = { &&func_5585792416, &&RETURN };
    static void *func_5585781200_op3[2] = { &&func_5585792576, &&RETURN };
    static void *func_5585790752_op0[2] = { &&func_5585792784, &&RETURN };
    static void *func_5585790752_op1[2] = { &&func_5585792912, &&RETURN };
    static void *func_5585791056_op0[2] = { &&func_5585792160, &&RETURN };
    static void *func_5585791056_op1[2] = { &&func_5585790976, &&RETURN };
    static void *func_5585791056_op2[2] = { &&func_5585793968, &&RETURN };
    static void *func_5585791408_op0[2] = { &&func_5585794560, &&RETURN };
    static void *func_5585791408_op1[2] = { &&func_5585792704, &&RETURN };
    static void *func_5585791408_op2[2] = { &&func_5585794752, &&RETURN };
    static void *func_5585791408_op3[2] = { &&func_5585794912, &&RETURN };
    static void *func_5585791408_op4[2] = { &&func_5585795040, &&RETURN };
    static void *func_5585791408_op5[2] = { &&func_5585795232, &&RETURN };
    static void *func_5585791408_op6[2] = { &&func_5585795360, &&RETURN };
    static void *func_5585791408_op7[2] = { &&func_5585795488, &&RETURN };
    static void *func_5585791408_op8[2] = { &&func_5585795616, &&RETURN };
    static void *func_5585791408_op9[2] = { &&func_5585795168, &&RETURN };
    static void *func_5585791120_op0[2] = { &&func_5585791408, &&RETURN };
    static void *func_5585791120_op1[2] = { &&func_5585793424, &&RETURN };
    static void *func_5585790672_op0[2] = { &&func_5585792048, &&RETURN };
    static void *func_5585790544_op0[2] = { &&func_5585790672, &&HALT };
    static void *func_5585791872_op0[2] = { &&func_5585796768, &&RETURN };
    static void *func_5585791872_op1[2] = { &&func_5585796896, &&RETURN };
    static void *func_5585791872_op2[2] = { &&func_5585797024, &&RETURN };
    static void *func_5585791872_op3[2] = { &&func_5585797184, &&RETURN };
    static void *func_5585791872_op4[2] = { &&func_5585797312, &&RETURN };
    static void *func_5585791872_op5[2] = { &&func_5585797504, &&RETURN };
    static void *func_5585791872_op6[2] = { &&func_5585797632, &&RETURN };
    static void *func_5585791872_op7[2] = { &&func_5585797760, &&RETURN };
    static void *func_5585791872_op8[2] = { &&func_5585797888, &&RETURN };
    static void *func_5585791872_op9[2] = { &&func_5585797440, &&RETURN };
    static void *func_5585790912_op0[2] = { &&func_5585796656, &&RETURN };
    static void *func_5585790912_op1[2] = { &&func_5585794288, &&RETURN };
    static void *func_5585790912_op2[2] = { &&func_5585794416, &&RETURN };
    static void *func_5585791536_op0[2] = { &&func_5585791120, &&RETURN };
    static void *func_5585791536_op1[2] = { &&func_5585791872, &&RETURN };
    static void *func_5585791664_op0[2] = { &&func_5585796576, &&RETURN };
    static void *exp_5585792912[4] = {&&func_5585781200, &&func_5585793296, &&func_5585790752, &&RETURN };
    static void *exp_5585792160[4] = {&&func_5585781200, &&func_5585793648, &&func_5585791536, &&RETURN };
    static void *exp_5585790976[4] = {&&func_5585791056, &&func_5585793840, &&func_5585791056, &&RETURN };
    static void *exp_5585793968[4] = {&&func_5585791056, &&func_5585794096, &&func_5585791056, &&RETURN };
    static void *exp_5585793424[3] = {&&func_5585791408, &&func_5585791120, &&RETURN };
    static void *exp_5585792048[6] = {&&func_5585796256, &&func_5585790752, &&func_5585796384, &&func_5585790912, &&func_5585791664, &&RETURN };
    static void *exp_5585796576[3] = {&&func_5585798400, &&func_5585791056, &&RETURN };

func_5585781200:
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
            PC = func_5585781200_op0;
            break;
        case 1:
            PC = func_5585781200_op1;
            break;
        case 2:
            PC = func_5585781200_op2;
            break;
        case 3:
            PC = func_5585781200_op3;
            break;
    }
    goto **PC;
func_5585790752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5585790752_op0;
            break;
        case 1:
            PC = func_5585790752_op1;
            break;
    }
    goto **PC;
func_5585791056:
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
            PC = func_5585791056_op0;
            break;
        case 1:
            PC = func_5585791056_op1;
            break;
        case 2:
            PC = func_5585791056_op2;
            break;
    }
    goto **PC;
func_5585791408:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5585791408_op0;
            break;
        case 1:
            PC = func_5585791408_op1;
            break;
        case 2:
            PC = func_5585791408_op2;
            break;
        case 3:
            PC = func_5585791408_op3;
            break;
        case 4:
            PC = func_5585791408_op4;
            break;
        case 5:
            PC = func_5585791408_op5;
            break;
        case 6:
            PC = func_5585791408_op6;
            break;
        case 7:
            PC = func_5585791408_op7;
            break;
        case 8:
            PC = func_5585791408_op8;
            break;
        case 9:
            PC = func_5585791408_op9;
            break;
    }
    goto **PC;
func_5585791120:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5585791120_op0;
            break;
        case 1:
            PC = func_5585791120_op1;
            break;
    }
    goto **PC;
func_5585790672:
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
            PC = func_5585790672_op0;
            break;
    }
    goto **PC;
func_5585790544:
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
            PC = func_5585790544_op0;
            break;
    }
    goto **PC;
func_5585791872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5585791872_op0;
            break;
        case 1:
            PC = func_5585791872_op1;
            break;
        case 2:
            PC = func_5585791872_op2;
            break;
        case 3:
            PC = func_5585791872_op3;
            break;
        case 4:
            PC = func_5585791872_op4;
            break;
        case 5:
            PC = func_5585791872_op5;
            break;
        case 6:
            PC = func_5585791872_op6;
            break;
        case 7:
            PC = func_5585791872_op7;
            break;
        case 8:
            PC = func_5585791872_op8;
            break;
        case 9:
            PC = func_5585791872_op9;
            break;
    }
    goto **PC;
func_5585790912:
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
            PC = func_5585790912_op0;
            break;
        case 1:
            PC = func_5585790912_op1;
            break;
        case 2:
            PC = func_5585790912_op2;
            break;
    }
    goto **PC;
func_5585791536:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5585791536_op0;
            break;
        case 1:
            PC = func_5585791536_op1;
            break;
    }
    goto **PC;
func_5585791664:
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
            PC = func_5585791664_op0;
            break;
    }
    goto **PC;
func_5585791792:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_5585792288:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_5585792416:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_5585792576:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_5585792784:
    extend(42);
    NEXT();
    goto **PC;
func_5585792912:
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
    PC = exp_5585792912;
    goto **PC;
func_5585793296:
    extend(44);
    NEXT();
    goto **PC;
func_5585792160:
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
    PC = exp_5585792160;
    goto **PC;
func_5585793648:
    extend(61);
    NEXT();
    goto **PC;
func_5585790976:
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
    PC = exp_5585790976;
    goto **PC;
func_5585793840:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_5585793968:
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
    PC = exp_5585793968;
    goto **PC;
func_5585794096:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_5585794560:
    extend(48);
    NEXT();
    goto **PC;
func_5585792704:
    extend(49);
    NEXT();
    goto **PC;
func_5585794752:
    extend(50);
    NEXT();
    goto **PC;
func_5585794912:
    extend(51);
    NEXT();
    goto **PC;
func_5585795040:
    extend(52);
    NEXT();
    goto **PC;
func_5585795232:
    extend(53);
    NEXT();
    goto **PC;
func_5585795360:
    extend(54);
    NEXT();
    goto **PC;
func_5585795488:
    extend(55);
    NEXT();
    goto **PC;
func_5585795616:
    extend(56);
    NEXT();
    goto **PC;
func_5585795168:
    extend(57);
    NEXT();
    goto **PC;
func_5585793424:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5585793424;
    goto **PC;
func_5585792048:
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
    PC = exp_5585792048;
    goto **PC;
func_5585796256:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_5585796384:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_5585796768:
    extend(97);
    NEXT();
    goto **PC;
func_5585796896:
    extend(98);
    NEXT();
    goto **PC;
func_5585797024:
    extend(99);
    NEXT();
    goto **PC;
func_5585797184:
    extend(100);
    NEXT();
    goto **PC;
func_5585797312:
    extend(101);
    NEXT();
    goto **PC;
func_5585797504:
    extend(102);
    NEXT();
    goto **PC;
func_5585797632:
    extend(103);
    NEXT();
    goto **PC;
func_5585797760:
    extend(104);
    NEXT();
    goto **PC;
func_5585797888:
    extend(105);
    NEXT();
    goto **PC;
func_5585797440:
    extend(106);
    NEXT();
    goto **PC;
func_5585796656:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5585794288:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_5585794416:
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
func_5585796576:
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
    PC = exp_5585796576;
    goto **PC;
func_5585798400:
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
    PC = func_5585790544_op0;
    goto **PC;
}
