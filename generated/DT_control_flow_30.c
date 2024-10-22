#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE (512*1024*1024)   // Buffer for storing text
#define MAX_DEPTH 30
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
    static void *func_4930442784_op0[2] = { &&func_4930444608, &&RETURN };
    static void *func_4930443152_op0[2] = { &&func_4930445904, &&RETURN };
    static void *func_4930443152_op1[2] = { &&func_4930446160, &&RETURN };
    static void *func_4930443152_op2[2] = { &&func_4930446416, &&RETURN };
    static void *func_4930443568_op0[2] = { &&func_4930446928, &&RETURN };
    static void *func_4930443568_op1[2] = { &&func_4930444512, &&RETURN };
    static void *func_4930443568_op2[2] = { &&func_4930447120, &&RETURN };
    static void *func_4930443568_op3[2] = { &&func_4930447248, &&RETURN };
    static void *func_4930443568_op4[2] = { &&func_4930447376, &&RETURN };
    static void *func_4930443568_op5[2] = { &&func_4930447568, &&RETURN };
    static void *func_4930443568_op6[2] = { &&func_4930447696, &&RETURN };
    static void *func_4930443568_op7[2] = { &&func_4930447824, &&RETURN };
    static void *func_4930443568_op8[2] = { &&func_4930447952, &&RETURN };
    static void *func_4930443568_op9[2] = { &&func_4930447504, &&RETURN };
    static void *func_4930443664_op0[2] = { &&func_4930448528, &&RETURN };
    static void *func_4930443664_op1[2] = { &&func_4930445696, &&RETURN };
    static void *func_4930443664_op2[2] = { &&func_4930445040, &&RETURN };
    static void *func_4930443440_op0[2] = { &&func_4930446832, &&RETURN };
    static void *func_4930443440_op1[2] = { &&func_4930443792, &&RETURN };
    static void *func_4930443440_op2[2] = { &&func_4930444064, &&RETURN };
    static void *func_4930443360_op0[2] = { &&func_4930446672, &&RETURN };
    static void *func_4930444064_op0[2] = { &&func_4930449680, &&RETURN };
    static void *func_4930444064_op1[2] = { &&func_4930450352, &&RETURN };
    static void *func_4930444064_op2[2] = { &&func_4930450480, &&RETURN };
    static void *func_4930444064_op3[2] = { &&func_4930450608, &&RETURN };
    static void *func_4930444064_op4[2] = { &&func_4930450736, &&RETURN };
    static void *func_4930444064_op5[2] = { &&func_4930450928, &&RETURN };
    static void *func_4930444064_op6[2] = { &&func_4930451056, &&RETURN };
    static void *func_4930444064_op7[2] = { &&func_4930451184, &&RETURN };
    static void *func_4930444064_op8[2] = { &&func_4930451312, &&RETURN };
    static void *func_4930443280_op0[2] = { &&func_4930450864, &&RETURN };
    static void *func_4930443280_op1[2] = { &&func_4930449328, &&RETURN };
    static void *func_4930443792_op0[2] = { &&func_4930443568, &&RETURN };
    static void *func_4930443792_op1[2] = { &&func_4930449504, &&RETURN };
    static void *func_4930444320_op0[2] = { &&func_4930451568, &&RETURN };
    static void *func_4930443984_op0[2] = { &&func_4930452208, &&RETURN };
    static void *func_4930444256_op0[2] = { &&func_4930443984, &&HALT };
    static void *func_4930444672_op0[2] = { &&func_4930443280, &&RETURN };
    static void *func_4930444672_op1[2] = { &&func_4930444880, &&RETURN };
    static void *func_4930444672_op2[2] = { &&func_4930443360, &&RETURN };
    static void *func_4930444672_op3[2] = { &&func_4930442784, &&RETURN };
    static void *func_4930444672_op4[2] = { &&func_4930444320, &&RETURN };
    static void *func_4930445040_op0[2] = { &&func_4930453056, &&RETURN };
    static void *func_4930445040_op1[2] = { &&func_4930452336, &&RETURN };
    static void *func_4930445040_op2[2] = { &&func_4930443440, &&RETURN };
    static void *func_4930444880_op0[2] = { &&func_4930452992, &&RETURN };
    static void *exp_4930444608[5] = {&&func_4930444064, &&func_4930444800, &&func_4930443664, &&func_4930443856, &&RETURN };
    static void *exp_4930445904[4] = {&&func_4930443664, &&func_4930446032, &&func_4930443664, &&RETURN };
    static void *exp_4930446160[4] = {&&func_4930443664, &&func_4930446288, &&func_4930443664, &&RETURN };
    static void *exp_4930446416[4] = {&&func_4930443664, &&func_4930446544, &&func_4930443664, &&RETURN };
    static void *exp_4930448528[4] = {&&func_4930443664, &&func_4930448656, &&func_4930445040, &&RETURN };
    static void *exp_4930445696[4] = {&&func_4930443664, &&func_4930445824, &&func_4930445040, &&RETURN };
    static void *exp_4930446832[4] = {&&func_4930449008, &&func_4930443664, &&func_4930449136, &&RETURN };
    static void *exp_4930446672[12] = {&&func_4930449904, &&func_4930449008, &&func_4930442784, &&func_4930443856, &&func_4930443152, &&func_4930443856, &&func_4930442784, &&func_4930449136, &&func_4930450032, &&func_4930443984, &&func_4930445168, &&RETURN };
    static void *exp_4930450864[8] = {&&func_4930452080, &&func_4930449008, &&func_4930443152, &&func_4930449136, &&func_4930450032, &&func_4930443984, &&func_4930445168, &&RETURN };
    static void *exp_4930449328[12] = {&&func_4930452080, &&func_4930449008, &&func_4930443152, &&func_4930449136, &&func_4930450032, &&func_4930443984, &&func_4930445168, &&func_4930451904, &&func_4930450032, &&func_4930443984, &&func_4930445168, &&RETURN };
    static void *exp_4930449504[3] = {&&func_4930443568, &&func_4930443792, &&RETURN };
    static void *exp_4930451568[6] = {&&func_4930451696, &&func_4930449008, &&func_4930443664, &&func_4930449136, &&func_4930443856, &&RETURN };
    static void *exp_4930452208[3] = {&&func_4930444672, &&func_4930443984, &&RETURN };
    static void *exp_4930453056[4] = {&&func_4930445040, &&func_4930453184, &&func_4930443440, &&RETURN };
    static void *exp_4930452336[4] = {&&func_4930445040, &&func_4930448016, &&func_4930443440, &&RETURN };
    static void *exp_4930452992[8] = {&&func_4930448384, &&func_4930449008, &&func_4930443152, &&func_4930449136, &&func_4930450032, &&func_4930443984, &&func_4930445168, &&RETURN };

func_4930442784:
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
            PC = func_4930442784_op0;
            break;
    }
    goto **PC;
func_4930443152:
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
            PC = func_4930443152_op0;
            break;
        case 1:
            PC = func_4930443152_op1;
            break;
        case 2:
            PC = func_4930443152_op2;
            break;
    }
    goto **PC;
func_4930443568:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443568_op0;
            break;
        case 1:
            PC = func_4930443568_op1;
            break;
        case 2:
            PC = func_4930443568_op2;
            break;
        case 3:
            PC = func_4930443568_op3;
            break;
        case 4:
            PC = func_4930443568_op4;
            break;
        case 5:
            PC = func_4930443568_op5;
            break;
        case 6:
            PC = func_4930443568_op6;
            break;
        case 7:
            PC = func_4930443568_op7;
            break;
        case 8:
            PC = func_4930443568_op8;
            break;
        case 9:
            PC = func_4930443568_op9;
            break;
    }
    goto **PC;
func_4930443664:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443664_op0;
            break;
        case 1:
            PC = func_4930443664_op1;
            break;
        case 2:
            PC = func_4930443664_op2;
            break;
    }
    goto **PC;
func_4930443440:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443440_op0;
            break;
        case 1:
            PC = func_4930443440_op1;
            break;
        case 2:
            PC = func_4930443440_op2;
            break;
    }
    goto **PC;
func_4930443360:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443360_op0;
            break;
    }
    goto **PC;
func_4930444064:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4930444064_op0;
            break;
        case 1:
            PC = func_4930444064_op1;
            break;
        case 2:
            PC = func_4930444064_op2;
            break;
        case 3:
            PC = func_4930444064_op3;
            break;
        case 4:
            PC = func_4930444064_op4;
            break;
        case 5:
            PC = func_4930444064_op5;
            break;
        case 6:
            PC = func_4930444064_op6;
            break;
        case 7:
            PC = func_4930444064_op7;
            break;
        case 8:
            PC = func_4930444064_op8;
            break;
    }
    goto **PC;
func_4930443280:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443280_op0;
            break;
        case 1:
            PC = func_4930443280_op1;
            break;
    }
    goto **PC;
func_4930443792:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443792_op0;
            break;
        case 1:
            PC = func_4930443792_op1;
            break;
    }
    goto **PC;
func_4930444320:
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
            PC = func_4930444320_op0;
            break;
    }
    goto **PC;
func_4930443984:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4930443984_op0;
            break;
    }
    goto **PC;
func_4930444256:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4930444256_op0;
            break;
    }
    goto **PC;
func_4930444672:
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
            PC = func_4930444672_op0;
            break;
        case 1:
            PC = func_4930444672_op1;
            break;
        case 2:
            PC = func_4930444672_op2;
            break;
        case 3:
            PC = func_4930444672_op3;
            break;
        case 4:
            PC = func_4930444672_op4;
            break;
    }
    goto **PC;
func_4930445040:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4930445040_op0;
            break;
        case 1:
            PC = func_4930445040_op1;
            break;
        case 2:
            PC = func_4930445040_op2;
            break;
    }
    goto **PC;
func_4930444880:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4930444880_op0;
            break;
    }
    goto **PC;
func_4930444608:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930444608;
    goto **PC;
func_4930444800:
    extend(61);
    NEXT();
    goto **PC;
func_4930443856:
    extend(59);
    NEXT();
    goto **PC;
func_4930445904:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930445904;
    goto **PC;
func_4930446032:
    extend(62);
    NEXT();
    goto **PC;
func_4930446160:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930446160;
    goto **PC;
func_4930446288:
    extend(60);
    NEXT();
    goto **PC;
func_4930446416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930446416;
    goto **PC;
func_4930446544:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_4930446928:
    extend(48);
    NEXT();
    goto **PC;
func_4930444512:
    extend(49);
    NEXT();
    goto **PC;
func_4930447120:
    extend(50);
    NEXT();
    goto **PC;
func_4930447248:
    extend(51);
    NEXT();
    goto **PC;
func_4930447376:
    extend(52);
    NEXT();
    goto **PC;
func_4930447568:
    extend(53);
    NEXT();
    goto **PC;
func_4930447696:
    extend(54);
    NEXT();
    goto **PC;
func_4930447824:
    extend(55);
    NEXT();
    goto **PC;
func_4930447952:
    extend(56);
    NEXT();
    goto **PC;
func_4930447504:
    extend(57);
    NEXT();
    goto **PC;
func_4930448528:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930448528;
    goto **PC;
func_4930448656:
    extend(43);
    NEXT();
    goto **PC;
func_4930445696:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930445696;
    goto **PC;
func_4930445824:
    extend(45);
    NEXT();
    goto **PC;
func_4930446832:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930446832;
    goto **PC;
func_4930449008:
    extend(40);
    NEXT();
    goto **PC;
func_4930449136:
    extend(41);
    NEXT();
    goto **PC;
func_4930446672:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930446672;
    goto **PC;
func_4930449904:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_4930450032:
    extend(123);
    NEXT();
    goto **PC;
func_4930445168:
    extend(125);
    NEXT();
    goto **PC;
func_4930449680:
    extend(105);
    NEXT();
    goto **PC;
func_4930450352:
    extend(106);
    NEXT();
    goto **PC;
func_4930450480:
    extend(107);
    NEXT();
    goto **PC;
func_4930450608:
    extend(120);
    NEXT();
    goto **PC;
func_4930450736:
    extend(121);
    NEXT();
    goto **PC;
func_4930450928:
    extend(122);
    NEXT();
    goto **PC;
func_4930451056:
    extend(97);
    NEXT();
    goto **PC;
func_4930451184:
    extend(98);
    NEXT();
    goto **PC;
func_4930451312:
    extend(99);
    NEXT();
    goto **PC;
func_4930450864:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930450864;
    goto **PC;
func_4930452080:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_4930449328:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930449328;
    goto **PC;
func_4930451904:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_4930449504:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930449504;
    goto **PC;
func_4930451568:
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
    PC = exp_4930451568;
    goto **PC;
func_4930451696:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_4930452208:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930452208;
    goto **PC;
func_4930453056:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930453056;
    goto **PC;
func_4930453184:
    extend(42);
    NEXT();
    goto **PC;
func_4930452336:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930452336;
    goto **PC;
func_4930448016:
    extend(47);
    NEXT();
    goto **PC;
func_4930452992:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4930452992;
    goto **PC;
func_4930448384:
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
    PC = func_4930444256_op0;
    goto **PC;
}
