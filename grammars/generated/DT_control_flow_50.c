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
    static void *func_5795511616_op0[2] = { &&func_5795513440, &&RETURN };
    static void *func_5795511984_op0[2] = { &&func_5795514736, &&RETURN };
    static void *func_5795511984_op1[2] = { &&func_5795514992, &&RETURN };
    static void *func_5795511984_op2[2] = { &&func_5795515248, &&RETURN };
    static void *func_5795512400_op0[2] = { &&func_5795515760, &&RETURN };
    static void *func_5795512400_op1[2] = { &&func_5795513344, &&RETURN };
    static void *func_5795512400_op2[2] = { &&func_5795515952, &&RETURN };
    static void *func_5795512400_op3[2] = { &&func_5795516080, &&RETURN };
    static void *func_5795512400_op4[2] = { &&func_5795516208, &&RETURN };
    static void *func_5795512400_op5[2] = { &&func_5795516400, &&RETURN };
    static void *func_5795512400_op6[2] = { &&func_5795516528, &&RETURN };
    static void *func_5795512400_op7[2] = { &&func_5795516656, &&RETURN };
    static void *func_5795512400_op8[2] = { &&func_5795516784, &&RETURN };
    static void *func_5795512400_op9[2] = { &&func_5795516336, &&RETURN };
    static void *func_5795512496_op0[2] = { &&func_5795517360, &&RETURN };
    static void *func_5795512496_op1[2] = { &&func_5795514528, &&RETURN };
    static void *func_5795512496_op2[2] = { &&func_5795513872, &&RETURN };
    static void *func_5795512272_op0[2] = { &&func_5795515664, &&RETURN };
    static void *func_5795512272_op1[2] = { &&func_5795512624, &&RETURN };
    static void *func_5795512272_op2[2] = { &&func_5795512896, &&RETURN };
    static void *func_5795512192_op0[2] = { &&func_5795515504, &&RETURN };
    static void *func_5795512896_op0[2] = { &&func_5795518512, &&RETURN };
    static void *func_5795512896_op1[2] = { &&func_5795519184, &&RETURN };
    static void *func_5795512896_op2[2] = { &&func_5795519312, &&RETURN };
    static void *func_5795512896_op3[2] = { &&func_5795519440, &&RETURN };
    static void *func_5795512896_op4[2] = { &&func_5795519568, &&RETURN };
    static void *func_5795512896_op5[2] = { &&func_5795519760, &&RETURN };
    static void *func_5795512896_op6[2] = { &&func_5795519888, &&RETURN };
    static void *func_5795512896_op7[2] = { &&func_5795520016, &&RETURN };
    static void *func_5795512896_op8[2] = { &&func_5795520144, &&RETURN };
    static void *func_5795512112_op0[2] = { &&func_5795519696, &&RETURN };
    static void *func_5795512112_op1[2] = { &&func_5795518160, &&RETURN };
    static void *func_5795512624_op0[2] = { &&func_5795512400, &&RETURN };
    static void *func_5795512624_op1[2] = { &&func_5795518336, &&RETURN };
    static void *func_5795513152_op0[2] = { &&func_5795520400, &&RETURN };
    static void *func_5795512816_op0[2] = { &&func_5795521040, &&RETURN };
    static void *func_5795513088_op0[2] = { &&func_5795512816, &&HALT };
    static void *func_5795513504_op0[2] = { &&func_5795512112, &&RETURN };
    static void *func_5795513504_op1[2] = { &&func_5795513712, &&RETURN };
    static void *func_5795513504_op2[2] = { &&func_5795512192, &&RETURN };
    static void *func_5795513504_op3[2] = { &&func_5795511616, &&RETURN };
    static void *func_5795513504_op4[2] = { &&func_5795513152, &&RETURN };
    static void *func_5795513872_op0[2] = { &&func_5795521888, &&RETURN };
    static void *func_5795513872_op1[2] = { &&func_5795521168, &&RETURN };
    static void *func_5795513872_op2[2] = { &&func_5795512272, &&RETURN };
    static void *func_5795513712_op0[2] = { &&func_5795521824, &&RETURN };
    static void *exp_5795513440[5] = {&&func_5795512896, &&func_5795513632, &&func_5795512496, &&func_5795512688, &&RETURN };
    static void *exp_5795514736[4] = {&&func_5795512496, &&func_5795514864, &&func_5795512496, &&RETURN };
    static void *exp_5795514992[4] = {&&func_5795512496, &&func_5795515120, &&func_5795512496, &&RETURN };
    static void *exp_5795515248[4] = {&&func_5795512496, &&func_5795515376, &&func_5795512496, &&RETURN };
    static void *exp_5795517360[4] = {&&func_5795512496, &&func_5795517488, &&func_5795513872, &&RETURN };
    static void *exp_5795514528[4] = {&&func_5795512496, &&func_5795514656, &&func_5795513872, &&RETURN };
    static void *exp_5795515664[4] = {&&func_5795517840, &&func_5795512496, &&func_5795517968, &&RETURN };
    static void *exp_5795515504[12] = {&&func_5795518736, &&func_5795517840, &&func_5795511616, &&func_5795512688, &&func_5795511984, &&func_5795512688, &&func_5795511616, &&func_5795517968, &&func_5795518864, &&func_5795512816, &&func_5795514000, &&RETURN };
    static void *exp_5795519696[8] = {&&func_5795520912, &&func_5795517840, &&func_5795511984, &&func_5795517968, &&func_5795518864, &&func_5795512816, &&func_5795514000, &&RETURN };
    static void *exp_5795518160[12] = {&&func_5795520912, &&func_5795517840, &&func_5795511984, &&func_5795517968, &&func_5795518864, &&func_5795512816, &&func_5795514000, &&func_5795520736, &&func_5795518864, &&func_5795512816, &&func_5795514000, &&RETURN };
    static void *exp_5795518336[3] = {&&func_5795512400, &&func_5795512624, &&RETURN };
    static void *exp_5795520400[6] = {&&func_5795520528, &&func_5795517840, &&func_5795512496, &&func_5795517968, &&func_5795512688, &&RETURN };
    static void *exp_5795521040[3] = {&&func_5795513504, &&func_5795512816, &&RETURN };
    static void *exp_5795521888[4] = {&&func_5795513872, &&func_5795522016, &&func_5795512272, &&RETURN };
    static void *exp_5795521168[4] = {&&func_5795513872, &&func_5795516848, &&func_5795512272, &&RETURN };
    static void *exp_5795521824[8] = {&&func_5795517216, &&func_5795517840, &&func_5795511984, &&func_5795517968, &&func_5795518864, &&func_5795512816, &&func_5795514000, &&RETURN };

func_5795511616:
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
            PC = func_5795511616_op0;
            break;
    }
    goto **PC;
func_5795511984:
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
            PC = func_5795511984_op0;
            break;
        case 1:
            PC = func_5795511984_op1;
            break;
        case 2:
            PC = func_5795511984_op2;
            break;
    }
    goto **PC;
func_5795512400:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512400_op0;
            break;
        case 1:
            PC = func_5795512400_op1;
            break;
        case 2:
            PC = func_5795512400_op2;
            break;
        case 3:
            PC = func_5795512400_op3;
            break;
        case 4:
            PC = func_5795512400_op4;
            break;
        case 5:
            PC = func_5795512400_op5;
            break;
        case 6:
            PC = func_5795512400_op6;
            break;
        case 7:
            PC = func_5795512400_op7;
            break;
        case 8:
            PC = func_5795512400_op8;
            break;
        case 9:
            PC = func_5795512400_op9;
            break;
    }
    goto **PC;
func_5795512496:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512496_op0;
            break;
        case 1:
            PC = func_5795512496_op1;
            break;
        case 2:
            PC = func_5795512496_op2;
            break;
    }
    goto **PC;
func_5795512272:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512272_op0;
            break;
        case 1:
            PC = func_5795512272_op1;
            break;
        case 2:
            PC = func_5795512272_op2;
            break;
    }
    goto **PC;
func_5795512192:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512192_op0;
            break;
    }
    goto **PC;
func_5795512896:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512896_op0;
            break;
        case 1:
            PC = func_5795512896_op1;
            break;
        case 2:
            PC = func_5795512896_op2;
            break;
        case 3:
            PC = func_5795512896_op3;
            break;
        case 4:
            PC = func_5795512896_op4;
            break;
        case 5:
            PC = func_5795512896_op5;
            break;
        case 6:
            PC = func_5795512896_op6;
            break;
        case 7:
            PC = func_5795512896_op7;
            break;
        case 8:
            PC = func_5795512896_op8;
            break;
    }
    goto **PC;
func_5795512112:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512112_op0;
            break;
        case 1:
            PC = func_5795512112_op1;
            break;
    }
    goto **PC;
func_5795512624:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512624_op0;
            break;
        case 1:
            PC = func_5795512624_op1;
            break;
    }
    goto **PC;
func_5795513152:
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
            PC = func_5795513152_op0;
            break;
    }
    goto **PC;
func_5795512816:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5795512816_op0;
            break;
    }
    goto **PC;
func_5795513088:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5795513088_op0;
            break;
    }
    goto **PC;
func_5795513504:
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
            PC = func_5795513504_op0;
            break;
        case 1:
            PC = func_5795513504_op1;
            break;
        case 2:
            PC = func_5795513504_op2;
            break;
        case 3:
            PC = func_5795513504_op3;
            break;
        case 4:
            PC = func_5795513504_op4;
            break;
    }
    goto **PC;
func_5795513872:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5795513872_op0;
            break;
        case 1:
            PC = func_5795513872_op1;
            break;
        case 2:
            PC = func_5795513872_op2;
            break;
    }
    goto **PC;
func_5795513712:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5795513712_op0;
            break;
    }
    goto **PC;
func_5795513440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795513440;
    goto **PC;
func_5795513632:
    extend(61);
    NEXT();
    goto **PC;
func_5795512688:
    extend(59);
    NEXT();
    goto **PC;
func_5795514736:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795514736;
    goto **PC;
func_5795514864:
    extend(62);
    NEXT();
    goto **PC;
func_5795514992:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795514992;
    goto **PC;
func_5795515120:
    extend(60);
    NEXT();
    goto **PC;
func_5795515248:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795515248;
    goto **PC;
func_5795515376:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5795515760:
    extend(48);
    NEXT();
    goto **PC;
func_5795513344:
    extend(49);
    NEXT();
    goto **PC;
func_5795515952:
    extend(50);
    NEXT();
    goto **PC;
func_5795516080:
    extend(51);
    NEXT();
    goto **PC;
func_5795516208:
    extend(52);
    NEXT();
    goto **PC;
func_5795516400:
    extend(53);
    NEXT();
    goto **PC;
func_5795516528:
    extend(54);
    NEXT();
    goto **PC;
func_5795516656:
    extend(55);
    NEXT();
    goto **PC;
func_5795516784:
    extend(56);
    NEXT();
    goto **PC;
func_5795516336:
    extend(57);
    NEXT();
    goto **PC;
func_5795517360:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795517360;
    goto **PC;
func_5795517488:
    extend(43);
    NEXT();
    goto **PC;
func_5795514528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795514528;
    goto **PC;
func_5795514656:
    extend(45);
    NEXT();
    goto **PC;
func_5795515664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795515664;
    goto **PC;
func_5795517840:
    extend(40);
    NEXT();
    goto **PC;
func_5795517968:
    extend(41);
    NEXT();
    goto **PC;
func_5795515504:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795515504;
    goto **PC;
func_5795518736:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5795518864:
    extend(123);
    NEXT();
    goto **PC;
func_5795514000:
    extend(125);
    NEXT();
    goto **PC;
func_5795518512:
    extend(105);
    NEXT();
    goto **PC;
func_5795519184:
    extend(106);
    NEXT();
    goto **PC;
func_5795519312:
    extend(107);
    NEXT();
    goto **PC;
func_5795519440:
    extend(120);
    NEXT();
    goto **PC;
func_5795519568:
    extend(121);
    NEXT();
    goto **PC;
func_5795519760:
    extend(122);
    NEXT();
    goto **PC;
func_5795519888:
    extend(97);
    NEXT();
    goto **PC;
func_5795520016:
    extend(98);
    NEXT();
    goto **PC;
func_5795520144:
    extend(99);
    NEXT();
    goto **PC;
func_5795519696:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795519696;
    goto **PC;
func_5795520912:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5795518160:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795518160;
    goto **PC;
func_5795520736:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5795518336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795518336;
    goto **PC;
func_5795520400:
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
    PC = exp_5795520400;
    goto **PC;
func_5795520528:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5795521040:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795521040;
    goto **PC;
func_5795521888:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795521888;
    goto **PC;
func_5795522016:
    extend(42);
    NEXT();
    goto **PC;
func_5795521168:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795521168;
    goto **PC;
func_5795516848:
    extend(47);
    NEXT();
    goto **PC;
func_5795521824:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5795521824;
    goto **PC;
func_5795517216:
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
    PC = func_5795513088_op0;
    goto **PC;
}
