#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 35
typedef struct {
        char data[BUFFER_SIZE];
        unsigned top;
    } Buffer;

    Buffer buffer;  // Declare a global buffer

#define extend(c) { \
    if(buffer.top < BUFFER_SIZE) { \
        buffer.data[buffer.top++] = c; \
    } \
}

    #define clean() { \
        buffer.top = 0; \
    }

    unsigned seed;  // Random seed
    unsigned branch;  // To hold branch value
    void ***PC; // program counter (now a void pointer)

    // xor to get random number
    #define xor(l) \
        seed ^= seed << 13; \
        seed ^= seed >> 17; \
        seed ^= seed << 5; \
        branch = seed % l

    #define initStack() do { \
        stack.top = stack.frames; \
    } while (0)

    #define pop() (stack.top--)

    #define store() do { \
        *(stack.top++) = PC; \
    } while (0)

    #define jmp_loop() goto LOOP

    #define NEXT() PC++

    // the stack from frames
    typedef struct {
        void *frames[MAX_DEPTH];     // the first pointer of frames
        void **top;              // the top of stack
    } Stack;

    Stack stack;

    bool endless = false;

    int main() {
        seed = time(NULL);
        FILE *fp = fopen("output.txt", "w");
        initStack();
        unsigned loop_limit = 12;
        static void * cf[] = {&&func_5375025888, &&func_5375035328, &&func_5375035248, &&func_5375035168, &&func_5375035792, &&func_5375034896, &&func_5375036320, &&func_5375035088, &&func_5375035616, &&func_5375035680, &&func_5375036560, &&func_5375036688, &&func_5375036912, &&func_5375037040, &&func_5375037168, &&func_5375037536, &&func_5375037664, &&func_5375035984, &&func_5375038048, &&func_5375038176, &&func_5375038304, &&func_5375038432, &&func_5375038560, &&func_5375038720, &&func_5375038848, &&func_5375039072, &&func_5375039200, &&func_5375039328, &&func_5375039456, &&func_5375039584, &&func_5375039776, &&func_5375039008, &&func_5375036816, &&func_5375037792, &&func_5375037920, &&func_5375037360, &&func_5375041264, &&func_5375041392, &&func_5375041200, &&func_5375040432, &&func_5375037424, &&func_5375041840, &&func_5375041968, &&func_5375042096, &&func_5375042288, &&func_5375042416, &&func_5375042544, &&func_5375042672, &&func_5375042224, &&func_5375042992, &&func_5375043120, &&func_5375040256, &&func_5375039968, &&func_5375043392, &&func_5375043520, &&RETURN, &&HALT};
        static void **func_5375025888_op0[2] = { cf+12, cf+55};
        static void **func_5375035328_op0[2] = { cf+15, cf+55};
        static void **func_5375035328_op1[2] = { cf+17, cf+55};
        static void **func_5375035328_op2[2] = { cf+19, cf+55};
        static void **func_5375035248_op0[2] = { cf+21, cf+55};
        static void **func_5375035248_op1[2] = { cf+11, cf+55};
        static void **func_5375035248_op2[2] = { cf+23, cf+55};
        static void **func_5375035168_op0[2] = { cf+6, cf+55};
        static void **func_5375035168_op1[2] = { cf+4, cf+55};
        static void **func_5375035792_op0[2] = { cf+25, cf+55};
        static void **func_5375035792_op1[2] = { cf+26, cf+55};
        static void **func_5375035792_op2[2] = { cf+27, cf+55};
        static void **func_5375035792_op3[2] = { cf+28, cf+55};
        static void **func_5375035792_op4[2] = { cf+29, cf+55};
        static void **func_5375035792_op5[2] = { cf+30, cf+55};
        static void **func_5375034896_op0[2] = { cf+31, cf+55};
        static void **func_5375034896_op1[2] = { cf+38, cf+55};
        static void **func_5375036320_op0[2] = { cf+39, cf+55};
        static void **func_5375036320_op1[2] = { cf+40, cf+55};
        static void **func_5375036320_op2[2] = { cf+41, cf+55};
        static void **func_5375036320_op3[2] = { cf+42, cf+55};
        static void **func_5375036320_op4[2] = { cf+43, cf+55};
        static void **func_5375036320_op5[2] = { cf+44, cf+55};
        static void **func_5375036320_op6[2] = { cf+45, cf+55};
        static void **func_5375036320_op7[2] = { cf+46, cf+55};
        static void **func_5375036320_op8[2] = { cf+47, cf+55};
        static void **func_5375036320_op9[2] = { cf+48, cf+55};
        static void **func_5375035088_op0[2] = { cf+49, cf+55};
        static void **func_5375035616_op0[2] = { cf+5, cf+56};
        static void **func_5375035680_op0[2] = { cf+5, cf+55};
        static void **func_5375035680_op1[2] = { cf+0, cf+55};
        static void **func_5375035680_op2[2] = { cf+7, cf+55};
        static void **func_5375036560_op0[2] = { cf+51, cf+55};
        static void **func_5375036560_op1[2] = { cf+52, cf+55};
        static void **func_5375036688_op0[2] = { cf+3, cf+55};
        static void **func_5375036688_op1[2] = { cf+53, cf+55};
        static void **exp_5375036912[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5375037536[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5375035984[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5375038176[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5375038432[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5375038720[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5375039008[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5375041200[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5375042992[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5375040256[3] = {cf+9, cf+10, cf+55};
        static void **exp_5375039968[1] = {cf+55};
        static void **exp_5375043392[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5375025888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375025888_op0;
        break;
    }
    goto ***PC;
func_5375035328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035328_op0;
        break;
        case 1:
            PC = func_5375035328_op1;
        break;
        case 2:
            PC = func_5375035328_op2;
        break;
    }
    goto ***PC;
func_5375035248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035248_op0;
        break;
        case 1:
            PC = func_5375035248_op1;
        break;
        case 2:
            PC = func_5375035248_op2;
        break;
    }
    goto ***PC;
func_5375035168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035168_op0;
        break;
        case 1:
            PC = func_5375035168_op1;
        break;
    }
    goto ***PC;
func_5375035792:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035792_op0;
        break;
        case 1:
            PC = func_5375035792_op1;
        break;
        case 2:
            PC = func_5375035792_op2;
        break;
        case 3:
            PC = func_5375035792_op3;
        break;
        case 4:
            PC = func_5375035792_op4;
        break;
        case 5:
            PC = func_5375035792_op5;
        break;
    }
    goto ***PC;
func_5375034896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375034896_op0;
        break;
        case 1:
            PC = func_5375034896_op1;
        break;
    }
    goto ***PC;
func_5375036320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5375036320_op0;
        break;
        case 1:
            PC = func_5375036320_op1;
        break;
        case 2:
            PC = func_5375036320_op2;
        break;
        case 3:
            PC = func_5375036320_op3;
        break;
        case 4:
            PC = func_5375036320_op4;
        break;
        case 5:
            PC = func_5375036320_op5;
        break;
        case 6:
            PC = func_5375036320_op6;
        break;
        case 7:
            PC = func_5375036320_op7;
        break;
        case 8:
            PC = func_5375036320_op8;
        break;
        case 9:
            PC = func_5375036320_op9;
        break;
    }
    goto ***PC;
func_5375035088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035088_op0;
        break;
    }
    goto ***PC;
func_5375035616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035616_op0;
        break;
    }
    goto ***PC;
func_5375035680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5375035680_op0;
        break;
        case 1:
            PC = func_5375035680_op1;
        break;
        case 2:
            PC = func_5375035680_op2;
        break;
    }
    goto ***PC;
func_5375036560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375036560_op0;
        break;
        case 1:
            PC = func_5375036560_op1;
        break;
    }
    goto ***PC;
func_5375036688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5375036688_op0;
        break;
        case 1:
            PC = func_5375036688_op1;
        break;
    }
    goto ***PC;
func_5375036912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375036912;
    goto ***PC;
func_5375037040:
    extend(61);
    NEXT();
    goto ***PC;
func_5375037168:
    extend(59);
    NEXT();
    goto ***PC;
func_5375037536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375037536;
    goto ***PC;
func_5375037664:
    extend(62);
    NEXT();
    goto ***PC;
func_5375035984:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375035984;
    goto ***PC;
func_5375038048:
    extend(60);
    NEXT();
    goto ***PC;
func_5375038176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375038176;
    goto ***PC;
func_5375038304:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5375038432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375038432;
    goto ***PC;
func_5375038560:
    extend(43);
    NEXT();
    goto ***PC;
func_5375038720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375038720;
    goto ***PC;
func_5375038848:
    extend(45);
    NEXT();
    goto ***PC;
func_5375039072:
    extend(120);
    NEXT();
    goto ***PC;
func_5375039200:
    extend(121);
    NEXT();
    goto ***PC;
func_5375039328:
    extend(122);
    NEXT();
    goto ***PC;
func_5375039456:
    extend(97);
    NEXT();
    goto ***PC;
func_5375039584:
    extend(98);
    NEXT();
    goto ***PC;
func_5375039776:
    extend(99);
    NEXT();
    goto ***PC;
func_5375039008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375039008;
    goto ***PC;
func_5375036816:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5375037792:
    extend(40);
    NEXT();
    goto ***PC;
func_5375037920:
    extend(41);
    NEXT();
    goto ***PC;
func_5375037360:
    extend(123);
    NEXT();
    goto ***PC;
func_5375041264:
    extend(125);
    NEXT();
    goto ***PC;
func_5375041392:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5375041200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375041200;
    goto ***PC;
func_5375040432:
    extend(48);
    NEXT();
    goto ***PC;
func_5375037424:
    extend(49);
    NEXT();
    goto ***PC;
func_5375041840:
    extend(50);
    NEXT();
    goto ***PC;
func_5375041968:
    extend(51);
    NEXT();
    goto ***PC;
func_5375042096:
    extend(52);
    NEXT();
    goto ***PC;
func_5375042288:
    extend(53);
    NEXT();
    goto ***PC;
func_5375042416:
    extend(54);
    NEXT();
    goto ***PC;
func_5375042544:
    extend(55);
    NEXT();
    goto ***PC;
func_5375042672:
    extend(56);
    NEXT();
    goto ***PC;
func_5375042224:
    extend(57);
    NEXT();
    goto ***PC;
func_5375042992:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375042992;
    goto ***PC;
func_5375043120:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5375040256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375040256;
    goto ***PC;
func_5375039968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375039968;
    goto ***PC;
func_5375043392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5375043392;
    goto ***PC;
func_5375043520:
    extend(42);
    NEXT();
    goto ***PC;
HALT:
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
RETURN:
    PC = *(--stack.top);
    PC++;
    goto ***PC;
LOOP:
    PC = func_5375035616_op0;
    goto ***PC;
}
