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
    static void *func_5291152928_op0[2] = { &&func_5291154752, &&RETURN };
    static void *func_5291153296_op0[2] = { &&func_5291156048, &&RETURN };
    static void *func_5291153296_op1[2] = { &&func_5291156304, &&RETURN };
    static void *func_5291153296_op2[2] = { &&func_5291156560, &&RETURN };
    static void *func_5291153712_op0[2] = { &&func_5291157072, &&RETURN };
    static void *func_5291153712_op1[2] = { &&func_5291154656, &&RETURN };
    static void *func_5291153712_op2[2] = { &&func_5291157264, &&RETURN };
    static void *func_5291153712_op3[2] = { &&func_5291157392, &&RETURN };
    static void *func_5291153712_op4[2] = { &&func_5291157520, &&RETURN };
    static void *func_5291153712_op5[2] = { &&func_5291157712, &&RETURN };
    static void *func_5291153712_op6[2] = { &&func_5291157840, &&RETURN };
    static void *func_5291153712_op7[2] = { &&func_5291157968, &&RETURN };
    static void *func_5291153712_op8[2] = { &&func_5291158096, &&RETURN };
    static void *func_5291153712_op9[2] = { &&func_5291157648, &&RETURN };
    static void *func_5291153808_op0[2] = { &&func_5291158672, &&RETURN };
    static void *func_5291153808_op1[2] = { &&func_5291155840, &&RETURN };
    static void *func_5291153808_op2[2] = { &&func_5291155184, &&RETURN };
    static void *func_5291153584_op0[2] = { &&func_5291156976, &&RETURN };
    static void *func_5291153584_op1[2] = { &&func_5291153936, &&RETURN };
    static void *func_5291153584_op2[2] = { &&func_5291154208, &&RETURN };
    static void *func_5291153504_op0[2] = { &&func_5291156816, &&RETURN };
    static void *func_5291154208_op0[2] = { &&func_5291159824, &&RETURN };
    static void *func_5291154208_op1[2] = { &&func_5291160496, &&RETURN };
    static void *func_5291154208_op2[2] = { &&func_5291160624, &&RETURN };
    static void *func_5291154208_op3[2] = { &&func_5291160752, &&RETURN };
    static void *func_5291154208_op4[2] = { &&func_5291160880, &&RETURN };
    static void *func_5291154208_op5[2] = { &&func_5291161072, &&RETURN };
    static void *func_5291154208_op6[2] = { &&func_5291161200, &&RETURN };
    static void *func_5291154208_op7[2] = { &&func_5291161328, &&RETURN };
    static void *func_5291154208_op8[2] = { &&func_5291161456, &&RETURN };
    static void *func_5291153424_op0[2] = { &&func_5291161008, &&RETURN };
    static void *func_5291153424_op1[2] = { &&func_5291159472, &&RETURN };
    static void *func_5291153936_op0[2] = { &&func_5291153712, &&RETURN };
    static void *func_5291153936_op1[2] = { &&func_5291159648, &&RETURN };
    static void *func_5291154464_op0[2] = { &&func_5291161712, &&RETURN };
    static void *func_5291154128_op0[2] = { &&func_5291162352, &&RETURN };
    static void *func_5291154400_op0[2] = { &&func_5291154128, &&HALT };
    static void *func_5291154816_op0[2] = { &&func_5291153424, &&RETURN };
    static void *func_5291154816_op1[2] = { &&func_5291155024, &&RETURN };
    static void *func_5291154816_op2[2] = { &&func_5291153504, &&RETURN };
    static void *func_5291154816_op3[2] = { &&func_5291152928, &&RETURN };
    static void *func_5291154816_op4[2] = { &&func_5291154464, &&RETURN };
    static void *func_5291155184_op0[2] = { &&func_5291163200, &&RETURN };
    static void *func_5291155184_op1[2] = { &&func_5291162480, &&RETURN };
    static void *func_5291155184_op2[2] = { &&func_5291153584, &&RETURN };
    static void *func_5291155024_op0[2] = { &&func_5291163136, &&RETURN };
    static void *exp_5291154752[5] = {&&func_5291154208, &&func_5291154944, &&func_5291153808, &&func_5291154000, &&RETURN };
    static void *exp_5291156048[4] = {&&func_5291153808, &&func_5291156176, &&func_5291153808, &&RETURN };
    static void *exp_5291156304[4] = {&&func_5291153808, &&func_5291156432, &&func_5291153808, &&RETURN };
    static void *exp_5291156560[4] = {&&func_5291153808, &&func_5291156688, &&func_5291153808, &&RETURN };
    static void *exp_5291158672[4] = {&&func_5291153808, &&func_5291158800, &&func_5291155184, &&RETURN };
    static void *exp_5291155840[4] = {&&func_5291153808, &&func_5291155968, &&func_5291155184, &&RETURN };
    static void *exp_5291156976[4] = {&&func_5291159152, &&func_5291153808, &&func_5291159280, &&RETURN };
    static void *exp_5291156816[12] = {&&func_5291160048, &&func_5291159152, &&func_5291152928, &&func_5291154000, &&func_5291153296, &&func_5291154000, &&func_5291152928, &&func_5291159280, &&func_5291160176, &&func_5291154128, &&func_5291155312, &&RETURN };
    static void *exp_5291161008[8] = {&&func_5291162224, &&func_5291159152, &&func_5291153296, &&func_5291159280, &&func_5291160176, &&func_5291154128, &&func_5291155312, &&RETURN };
    static void *exp_5291159472[12] = {&&func_5291162224, &&func_5291159152, &&func_5291153296, &&func_5291159280, &&func_5291160176, &&func_5291154128, &&func_5291155312, &&func_5291162048, &&func_5291160176, &&func_5291154128, &&func_5291155312, &&RETURN };
    static void *exp_5291159648[3] = {&&func_5291153712, &&func_5291153936, &&RETURN };
    static void *exp_5291161712[6] = {&&func_5291161840, &&func_5291159152, &&func_5291153808, &&func_5291159280, &&func_5291154000, &&RETURN };
    static void *exp_5291162352[3] = {&&func_5291154816, &&func_5291154128, &&RETURN };
    static void *exp_5291163200[4] = {&&func_5291155184, &&func_5291163328, &&func_5291153584, &&RETURN };
    static void *exp_5291162480[4] = {&&func_5291155184, &&func_5291158160, &&func_5291153584, &&RETURN };
    static void *exp_5291163136[8] = {&&func_5291158528, &&func_5291159152, &&func_5291153296, &&func_5291159280, &&func_5291160176, &&func_5291154128, &&func_5291155312, &&RETURN };

func_5291152928:
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
            PC = func_5291152928_op0;
            break;
    }
    goto **PC;
func_5291153296:
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
            PC = func_5291153296_op0;
            break;
        case 1:
            PC = func_5291153296_op1;
            break;
        case 2:
            PC = func_5291153296_op2;
            break;
    }
    goto **PC;
func_5291153712:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153712_op0;
            break;
        case 1:
            PC = func_5291153712_op1;
            break;
        case 2:
            PC = func_5291153712_op2;
            break;
        case 3:
            PC = func_5291153712_op3;
            break;
        case 4:
            PC = func_5291153712_op4;
            break;
        case 5:
            PC = func_5291153712_op5;
            break;
        case 6:
            PC = func_5291153712_op6;
            break;
        case 7:
            PC = func_5291153712_op7;
            break;
        case 8:
            PC = func_5291153712_op8;
            break;
        case 9:
            PC = func_5291153712_op9;
            break;
    }
    goto **PC;
func_5291153808:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153808_op0;
            break;
        case 1:
            PC = func_5291153808_op1;
            break;
        case 2:
            PC = func_5291153808_op2;
            break;
    }
    goto **PC;
func_5291153584:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153584_op0;
            break;
        case 1:
            PC = func_5291153584_op1;
            break;
        case 2:
            PC = func_5291153584_op2;
            break;
    }
    goto **PC;
func_5291153504:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153504_op0;
            break;
    }
    goto **PC;
func_5291154208:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5291154208_op0;
            break;
        case 1:
            PC = func_5291154208_op1;
            break;
        case 2:
            PC = func_5291154208_op2;
            break;
        case 3:
            PC = func_5291154208_op3;
            break;
        case 4:
            PC = func_5291154208_op4;
            break;
        case 5:
            PC = func_5291154208_op5;
            break;
        case 6:
            PC = func_5291154208_op6;
            break;
        case 7:
            PC = func_5291154208_op7;
            break;
        case 8:
            PC = func_5291154208_op8;
            break;
    }
    goto **PC;
func_5291153424:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153424_op0;
            break;
        case 1:
            PC = func_5291153424_op1;
            break;
    }
    goto **PC;
func_5291153936:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5291153936_op0;
            break;
        case 1:
            PC = func_5291153936_op1;
            break;
    }
    goto **PC;
func_5291154464:
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
            PC = func_5291154464_op0;
            break;
    }
    goto **PC;
func_5291154128:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5291154128_op0;
            break;
    }
    goto **PC;
func_5291154400:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5291154400_op0;
            break;
    }
    goto **PC;
func_5291154816:
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
            PC = func_5291154816_op0;
            break;
        case 1:
            PC = func_5291154816_op1;
            break;
        case 2:
            PC = func_5291154816_op2;
            break;
        case 3:
            PC = func_5291154816_op3;
            break;
        case 4:
            PC = func_5291154816_op4;
            break;
    }
    goto **PC;
func_5291155184:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto **PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5291155184_op0;
            break;
        case 1:
            PC = func_5291155184_op1;
            break;
        case 2:
            PC = func_5291155184_op2;
            break;
    }
    goto **PC;
func_5291155024:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5291155024_op0;
            break;
    }
    goto **PC;
func_5291154752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291154752;
    goto **PC;
func_5291154944:
    extend(61);
    NEXT();
    goto **PC;
func_5291154000:
    extend(59);
    NEXT();
    goto **PC;
func_5291156048:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291156048;
    goto **PC;
func_5291156176:
    extend(62);
    NEXT();
    goto **PC;
func_5291156304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291156304;
    goto **PC;
func_5291156432:
    extend(60);
    NEXT();
    goto **PC;
func_5291156560:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291156560;
    goto **PC;
func_5291156688:
    extend(61);
    extend(61);
    NEXT();
    goto **PC;
func_5291157072:
    extend(48);
    NEXT();
    goto **PC;
func_5291154656:
    extend(49);
    NEXT();
    goto **PC;
func_5291157264:
    extend(50);
    NEXT();
    goto **PC;
func_5291157392:
    extend(51);
    NEXT();
    goto **PC;
func_5291157520:
    extend(52);
    NEXT();
    goto **PC;
func_5291157712:
    extend(53);
    NEXT();
    goto **PC;
func_5291157840:
    extend(54);
    NEXT();
    goto **PC;
func_5291157968:
    extend(55);
    NEXT();
    goto **PC;
func_5291158096:
    extend(56);
    NEXT();
    goto **PC;
func_5291157648:
    extend(57);
    NEXT();
    goto **PC;
func_5291158672:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291158672;
    goto **PC;
func_5291158800:
    extend(43);
    NEXT();
    goto **PC;
func_5291155840:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291155840;
    goto **PC;
func_5291155968:
    extend(45);
    NEXT();
    goto **PC;
func_5291156976:
    if(stack_top == frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291156976;
    goto **PC;
func_5291159152:
    extend(40);
    NEXT();
    goto **PC;
func_5291159280:
    extend(41);
    NEXT();
    goto **PC;
func_5291156816:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291156816;
    goto **PC;
func_5291160048:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto **PC;
func_5291160176:
    extend(123);
    NEXT();
    goto **PC;
func_5291155312:
    extend(125);
    NEXT();
    goto **PC;
func_5291159824:
    extend(105);
    NEXT();
    goto **PC;
func_5291160496:
    extend(106);
    NEXT();
    goto **PC;
func_5291160624:
    extend(107);
    NEXT();
    goto **PC;
func_5291160752:
    extend(120);
    NEXT();
    goto **PC;
func_5291160880:
    extend(121);
    NEXT();
    goto **PC;
func_5291161072:
    extend(122);
    NEXT();
    goto **PC;
func_5291161200:
    extend(97);
    NEXT();
    goto **PC;
func_5291161328:
    extend(98);
    NEXT();
    goto **PC;
func_5291161456:
    extend(99);
    NEXT();
    goto **PC;
func_5291161008:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291161008;
    goto **PC;
func_5291162224:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto **PC;
func_5291159472:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291159472;
    goto **PC;
func_5291162048:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto **PC;
func_5291159648:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291159648;
    goto **PC;
func_5291161712:
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
    PC = exp_5291161712;
    goto **PC;
func_5291161840:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto **PC;
func_5291162352:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291162352;
    goto **PC;
func_5291163200:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291163200;
    goto **PC;
func_5291163328:
    extend(42);
    NEXT();
    goto **PC;
func_5291162480:
    if(stack_top == frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291162480;
    goto **PC;
func_5291158160:
    extend(47);
    NEXT();
    goto **PC;
func_5291163136:
    if(stack_top == frames + MAX_DEPTH) {
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_5291163136;
    goto **PC;
func_5291158528:
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
    PC = func_5291154400_op0;
    goto **PC;
}
