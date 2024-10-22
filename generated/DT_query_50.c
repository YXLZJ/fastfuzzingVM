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
    static void *func_4846541424_op0[2] = { &&func_4846552672, &&RETURN };
    static void *func_4846541424_op1[2] = { &&func_4846553168, &&RETURN };
    static void *func_4846541424_op2[2] = { &&func_4846553296, &&RETURN };
    static void *func_4846541424_op3[2] = { &&func_4846553456, &&RETURN };
    static void *func_4846551632_op0[2] = { &&func_4846553664, &&RETURN };
    static void *func_4846551632_op1[2] = { &&func_4846553792, &&RETURN };
    static void *func_4846551936_op0[2] = { &&func_4846553040, &&RETURN };
    static void *func_4846551936_op1[2] = { &&func_4846551856, &&RETURN };
    static void *func_4846551936_op2[2] = { &&func_4846554848, &&RETURN };
    static void *func_4846552288_op0[2] = { &&func_4846555440, &&RETURN };
    static void *func_4846552288_op1[2] = { &&func_4846553584, &&RETURN };
    static void *func_4846552288_op2[2] = { &&func_4846555632, &&RETURN };
    static void *func_4846552288_op3[2] = { &&func_4846555792, &&RETURN };
    static void *func_4846552288_op4[2] = { &&func_4846555920, &&RETURN };
    static void *func_4846552288_op5[2] = { &&func_4846556112, &&RETURN };
    static void *func_4846552288_op6[2] = { &&func_4846556240, &&RETURN };
    static void *func_4846552288_op7[2] = { &&func_4846556368, &&RETURN };
    static void *func_4846552288_op8[2] = { &&func_4846556496, &&RETURN };
    static void *func_4846552288_op9[2] = { &&func_4846556048, &&RETURN };
    static void *func_4846552000_op0[2] = { &&func_4846552288, &&RETURN };
    static void *func_4846552000_op1[2] = { &&func_4846554304, &&RETURN };
    static void *func_4846551552_op0[2] = { &&func_4846552928, &&RETURN };
    static void *func_4846551424_op0[2] = { &&func_4846551552, &&HALT };
    static void *func_4846552752_op0[2] = { &&func_4846557648, &&RETURN };
    static void *func_4846552752_op1[2] = { &&func_4846557776, &&RETURN };
    static void *func_4846552752_op2[2] = { &&func_4846557904, &&RETURN };
    static void *func_4846552752_op3[2] = { &&func_4846558064, &&RETURN };
    static void *func_4846552752_op4[2] = { &&func_4846558192, &&RETURN };
    static void *func_4846552752_op5[2] = { &&func_4846558384, &&RETURN };
    static void *func_4846552752_op6[2] = { &&func_4846558512, &&RETURN };
    static void *func_4846552752_op7[2] = { &&func_4846558640, &&RETURN };
    static void *func_4846552752_op8[2] = { &&func_4846558768, &&RETURN };
    static void *func_4846552752_op9[2] = { &&func_4846558320, &&RETURN };
    static void *func_4846551792_op0[2] = { &&func_4846557536, &&RETURN };
    static void *func_4846551792_op1[2] = { &&func_4846555168, &&RETURN };
    static void *func_4846551792_op2[2] = { &&func_4846555296, &&RETURN };
    static void *func_4846552416_op0[2] = { &&func_4846552000, &&RETURN };
    static void *func_4846552416_op1[2] = { &&func_4846552752, &&RETURN };
    static void *func_4846552544_op0[2] = { &&func_4846557456, &&RETURN };
    static void *exp_4846553792[4] = {&&func_4846541424, &&func_4846554176, &&func_4846551632, &&RETURN };
    static void *exp_4846553040[4] = {&&func_4846541424, &&func_4846554528, &&func_4846552416, &&RETURN };
    static void *exp_4846551856[4] = {&&func_4846551936, &&func_4846554720, &&func_4846551936, &&RETURN };
    static void *exp_4846554848[4] = {&&func_4846551936, &&func_4846554976, &&func_4846551936, &&RETURN };
    static void *exp_4846554304[3] = {&&func_4846552288, &&func_4846552000, &&RETURN };
    static void *exp_4846552928[6] = {&&func_4846557136, &&func_4846551632, &&func_4846557264, &&func_4846551792, &&func_4846552544, &&RETURN };
    static void *exp_4846557456[3] = {&&func_4846559280, &&func_4846551936, &&RETURN };

func_4846541424:
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
            PC = func_4846541424_op0;
            break;
        case 1:
            PC = func_4846541424_op1;
            break;
        case 2:
            PC = func_4846541424_op2;
            break;
        case 3:
            PC = func_4846541424_op3;
            break;
    }
    goto **PC;
func_4846551632:
    if(stack_top == frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4846551632_op0;
            break;
        case 1:
            PC = func_4846551632_op1;
            break;
    }
    goto **PC;
func_4846551936:
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
            PC = func_4846551936_op0;
            break;
        case 1:
            PC = func_4846551936_op1;
            break;
        case 2:
            PC = func_4846551936_op2;
            break;
    }
    goto **PC;
func_4846552288:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4846552288_op0;
            break;
        case 1:
            PC = func_4846552288_op1;
            break;
        case 2:
            PC = func_4846552288_op2;
            break;
        case 3:
            PC = func_4846552288_op3;
            break;
        case 4:
            PC = func_4846552288_op4;
            break;
        case 5:
            PC = func_4846552288_op5;
            break;
        case 6:
            PC = func_4846552288_op6;
            break;
        case 7:
            PC = func_4846552288_op7;
            break;
        case 8:
            PC = func_4846552288_op8;
            break;
        case 9:
            PC = func_4846552288_op9;
            break;
    }
    goto **PC;
func_4846552000:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4846552000_op0;
            break;
        case 1:
            PC = func_4846552000_op1;
            break;
    }
    goto **PC;
func_4846551552:
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
            PC = func_4846551552_op0;
            break;
    }
    goto **PC;
func_4846551424:
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
            PC = func_4846551424_op0;
            break;
    }
    goto **PC;
func_4846552752:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4846552752_op0;
            break;
        case 1:
            PC = func_4846552752_op1;
            break;
        case 2:
            PC = func_4846552752_op2;
            break;
        case 3:
            PC = func_4846552752_op3;
            break;
        case 4:
            PC = func_4846552752_op4;
            break;
        case 5:
            PC = func_4846552752_op5;
            break;
        case 6:
            PC = func_4846552752_op6;
            break;
        case 7:
            PC = func_4846552752_op7;
            break;
        case 8:
            PC = func_4846552752_op8;
            break;
        case 9:
            PC = func_4846552752_op9;
            break;
    }
    goto **PC;
func_4846551792:
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
            PC = func_4846551792_op0;
            break;
        case 1:
            PC = func_4846551792_op1;
            break;
        case 2:
            PC = func_4846551792_op2;
            break;
    }
    goto **PC;
func_4846552416:
    if(stack_top == frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto **PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4846552416_op0;
            break;
        case 1:
            PC = func_4846552416_op1;
            break;
    }
    goto **PC;
func_4846552544:
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
            PC = func_4846552544_op0;
            break;
    }
    goto **PC;
func_4846552672:
    extend(105);
    extend(100);
    NEXT();
    goto **PC;
func_4846553168:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto **PC;
func_4846553296:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto **PC;
func_4846553456:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto **PC;
func_4846553664:
    extend(42);
    NEXT();
    goto **PC;
func_4846553792:
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
    PC = exp_4846553792;
    goto **PC;
func_4846554176:
    extend(44);
    NEXT();
    goto **PC;
func_4846553040:
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
    PC = exp_4846553040;
    goto **PC;
func_4846554528:
    extend(61);
    NEXT();
    goto **PC;
func_4846551856:
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
    PC = exp_4846551856;
    goto **PC;
func_4846554720:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto **PC;
func_4846554848:
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
    PC = exp_4846554848;
    goto **PC;
func_4846554976:
    extend(79);
    extend(82);
    NEXT();
    goto **PC;
func_4846555440:
    extend(48);
    NEXT();
    goto **PC;
func_4846553584:
    extend(49);
    NEXT();
    goto **PC;
func_4846555632:
    extend(50);
    NEXT();
    goto **PC;
func_4846555792:
    extend(51);
    NEXT();
    goto **PC;
func_4846555920:
    extend(52);
    NEXT();
    goto **PC;
func_4846556112:
    extend(53);
    NEXT();
    goto **PC;
func_4846556240:
    extend(54);
    NEXT();
    goto **PC;
func_4846556368:
    extend(55);
    NEXT();
    goto **PC;
func_4846556496:
    extend(56);
    NEXT();
    goto **PC;
func_4846556048:
    extend(57);
    NEXT();
    goto **PC;
func_4846554304:
    if(stack_top == frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto **PC;
    }
    store();
    PC = exp_4846554304;
    goto **PC;
func_4846552928:
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
    PC = exp_4846552928;
    goto **PC;
func_4846557136:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto **PC;
func_4846557264:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto **PC;
func_4846557648:
    extend(97);
    NEXT();
    goto **PC;
func_4846557776:
    extend(98);
    NEXT();
    goto **PC;
func_4846557904:
    extend(99);
    NEXT();
    goto **PC;
func_4846558064:
    extend(100);
    NEXT();
    goto **PC;
func_4846558192:
    extend(101);
    NEXT();
    goto **PC;
func_4846558384:
    extend(102);
    NEXT();
    goto **PC;
func_4846558512:
    extend(103);
    NEXT();
    goto **PC;
func_4846558640:
    extend(104);
    NEXT();
    goto **PC;
func_4846558768:
    extend(105);
    NEXT();
    goto **PC;
func_4846558320:
    extend(106);
    NEXT();
    goto **PC;
func_4846557536:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_4846555168:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto **PC;
func_4846555296:
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
func_4846557456:
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
    PC = exp_4846557456;
    goto **PC;
func_4846559280:
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
    PC = func_4846551424_op0;
    goto **PC;
}
