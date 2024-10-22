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
        unsigned loop_limit = 16;
        static void * cf[] = {&&func_5517645344, &&func_5517645712, &&func_5517646128, &&func_5517646224, &&func_5517646000, &&func_5517645920, &&func_5517646624, &&func_5517645840, &&func_5517646352, &&func_5517646880, &&func_5517646544, &&func_5517646816, &&func_5517647232, &&func_5517647600, &&func_5517647440, &&func_5517647168, &&func_5517647360, &&func_5517646416, &&func_5517648464, &&func_5517648592, &&func_5517648720, &&func_5517648848, &&func_5517648976, &&func_5517649104, &&func_5517649488, &&func_5517647072, &&func_5517649680, &&func_5517649808, &&func_5517649936, &&func_5517650128, &&func_5517650256, &&func_5517650384, &&func_5517650512, &&func_5517650064, &&func_5517651088, &&func_5517651216, &&func_5517648256, &&func_5517648384, &&func_5517649392, &&func_5517651568, &&func_5517651696, &&func_5517649232, &&func_5517652464, &&func_5517652592, &&func_5517647728, &&func_5517652240, &&func_5517652912, &&func_5517653040, &&func_5517653168, &&func_5517653296, &&func_5517653488, &&func_5517653616, &&func_5517653744, &&func_5517653872, &&func_5517653424, &&func_5517654640, &&func_5517651888, &&func_5517654464, &&func_5517652064, &&func_5517654128, &&func_5517654256, &&func_5517654768, &&func_5517655616, &&func_5517655744, &&func_5517654896, &&func_5517650576, &&func_5517655552, &&func_5517650944, &&RETURN, &&HALT};
        static void **func_5517645344_op0[2] = { cf+15, cf+68};
        static void **func_5517645712_op0[2] = { cf+18, cf+68};
        static void **func_5517645712_op1[2] = { cf+20, cf+68};
        static void **func_5517645712_op2[2] = { cf+22, cf+68};
        static void **func_5517646128_op0[2] = { cf+24, cf+68};
        static void **func_5517646128_op1[2] = { cf+25, cf+68};
        static void **func_5517646128_op2[2] = { cf+26, cf+68};
        static void **func_5517646128_op3[2] = { cf+27, cf+68};
        static void **func_5517646128_op4[2] = { cf+28, cf+68};
        static void **func_5517646128_op5[2] = { cf+29, cf+68};
        static void **func_5517646128_op6[2] = { cf+30, cf+68};
        static void **func_5517646128_op7[2] = { cf+31, cf+68};
        static void **func_5517646128_op8[2] = { cf+32, cf+68};
        static void **func_5517646128_op9[2] = { cf+33, cf+68};
        static void **func_5517646224_op0[2] = { cf+34, cf+68};
        static void **func_5517646224_op1[2] = { cf+36, cf+68};
        static void **func_5517646224_op2[2] = { cf+13, cf+68};
        static void **func_5517646000_op0[2] = { cf+38, cf+68};
        static void **func_5517646000_op1[2] = { cf+8, cf+68};
        static void **func_5517646000_op2[2] = { cf+6, cf+68};
        static void **func_5517645920_op0[2] = { cf+41, cf+68};
        static void **func_5517646624_op0[2] = { cf+45, cf+68};
        static void **func_5517646624_op1[2] = { cf+46, cf+68};
        static void **func_5517646624_op2[2] = { cf+47, cf+68};
        static void **func_5517646624_op3[2] = { cf+48, cf+68};
        static void **func_5517646624_op4[2] = { cf+49, cf+68};
        static void **func_5517646624_op5[2] = { cf+50, cf+68};
        static void **func_5517646624_op6[2] = { cf+51, cf+68};
        static void **func_5517646624_op7[2] = { cf+52, cf+68};
        static void **func_5517646624_op8[2] = { cf+53, cf+68};
        static void **func_5517645840_op0[2] = { cf+54, cf+68};
        static void **func_5517645840_op1[2] = { cf+56, cf+68};
        static void **func_5517646352_op0[2] = { cf+2, cf+68};
        static void **func_5517646352_op1[2] = { cf+58, cf+68};
        static void **func_5517646880_op0[2] = { cf+59, cf+68};
        static void **func_5517646544_op0[2] = { cf+61, cf+68};
        static void **func_5517646816_op0[2] = { cf+10, cf+69};
        static void **func_5517647232_op0[2] = { cf+7, cf+68};
        static void **func_5517647232_op1[2] = { cf+14, cf+68};
        static void **func_5517647232_op2[2] = { cf+5, cf+68};
        static void **func_5517647232_op3[2] = { cf+0, cf+68};
        static void **func_5517647232_op4[2] = { cf+9, cf+68};
        static void **func_5517647600_op0[2] = { cf+62, cf+68};
        static void **func_5517647600_op1[2] = { cf+64, cf+68};
        static void **func_5517647600_op2[2] = { cf+4, cf+68};
        static void **func_5517647440_op0[2] = { cf+66, cf+68};
        static void **exp_5517647168[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5517648464[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5517648720[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5517648976[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5517651088[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5517648256[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5517649392[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5517649232[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5517653424[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5517651888[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5517652064[3] = {cf+2, cf+8, cf+68};
        static void **exp_5517654128[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5517654768[3] = {cf+12, cf+10, cf+68};
        static void **exp_5517655616[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5517654896[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5517655552[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5517645344:
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
            PC = func_5517645344_op0;
        break;
    }
    goto ***PC;
func_5517645712:
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
            PC = func_5517645712_op0;
        break;
        case 1:
            PC = func_5517645712_op1;
        break;
        case 2:
            PC = func_5517645712_op2;
        break;
    }
    goto ***PC;
func_5517646128:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646128_op0;
        break;
        case 1:
            PC = func_5517646128_op1;
        break;
        case 2:
            PC = func_5517646128_op2;
        break;
        case 3:
            PC = func_5517646128_op3;
        break;
        case 4:
            PC = func_5517646128_op4;
        break;
        case 5:
            PC = func_5517646128_op5;
        break;
        case 6:
            PC = func_5517646128_op6;
        break;
        case 7:
            PC = func_5517646128_op7;
        break;
        case 8:
            PC = func_5517646128_op8;
        break;
        case 9:
            PC = func_5517646128_op9;
        break;
    }
    goto ***PC;
func_5517646224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646224_op0;
        break;
        case 1:
            PC = func_5517646224_op1;
        break;
        case 2:
            PC = func_5517646224_op2;
        break;
    }
    goto ***PC;
func_5517646000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646000_op0;
        break;
        case 1:
            PC = func_5517646000_op1;
        break;
        case 2:
            PC = func_5517646000_op2;
        break;
    }
    goto ***PC;
func_5517645920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5517645920_op0;
        break;
    }
    goto ***PC;
func_5517646624:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646624_op0;
        break;
        case 1:
            PC = func_5517646624_op1;
        break;
        case 2:
            PC = func_5517646624_op2;
        break;
        case 3:
            PC = func_5517646624_op3;
        break;
        case 4:
            PC = func_5517646624_op4;
        break;
        case 5:
            PC = func_5517646624_op5;
        break;
        case 6:
            PC = func_5517646624_op6;
        break;
        case 7:
            PC = func_5517646624_op7;
        break;
        case 8:
            PC = func_5517646624_op8;
        break;
    }
    goto ***PC;
func_5517645840:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5517645840_op0;
        break;
        case 1:
            PC = func_5517645840_op1;
        break;
    }
    goto ***PC;
func_5517646352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646352_op0;
        break;
        case 1:
            PC = func_5517646352_op1;
        break;
    }
    goto ***PC;
func_5517646880:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646880_op0;
        break;
    }
    goto ***PC;
func_5517646544:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646544_op0;
        break;
    }
    goto ***PC;
func_5517646816:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5517646816_op0;
        break;
    }
    goto ***PC;
func_5517647232:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5517647232_op0;
        break;
        case 1:
            PC = func_5517647232_op1;
        break;
        case 2:
            PC = func_5517647232_op2;
        break;
        case 3:
            PC = func_5517647232_op3;
        break;
        case 4:
            PC = func_5517647232_op4;
        break;
    }
    goto ***PC;
func_5517647600:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5517647600_op0;
        break;
        case 1:
            PC = func_5517647600_op1;
        break;
        case 2:
            PC = func_5517647600_op2;
        break;
    }
    goto ***PC;
func_5517647440:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5517647440_op0;
        break;
    }
    goto ***PC;
func_5517647168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517647168;
    goto ***PC;
func_5517647360:
    extend(61);
    NEXT();
    goto ***PC;
func_5517646416:
    extend(59);
    NEXT();
    goto ***PC;
func_5517648464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517648464;
    goto ***PC;
func_5517648592:
    extend(62);
    NEXT();
    goto ***PC;
func_5517648720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517648720;
    goto ***PC;
func_5517648848:
    extend(60);
    NEXT();
    goto ***PC;
func_5517648976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517648976;
    goto ***PC;
func_5517649104:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5517649488:
    extend(48);
    NEXT();
    goto ***PC;
func_5517647072:
    extend(49);
    NEXT();
    goto ***PC;
func_5517649680:
    extend(50);
    NEXT();
    goto ***PC;
func_5517649808:
    extend(51);
    NEXT();
    goto ***PC;
func_5517649936:
    extend(52);
    NEXT();
    goto ***PC;
func_5517650128:
    extend(53);
    NEXT();
    goto ***PC;
func_5517650256:
    extend(54);
    NEXT();
    goto ***PC;
func_5517650384:
    extend(55);
    NEXT();
    goto ***PC;
func_5517650512:
    extend(56);
    NEXT();
    goto ***PC;
func_5517650064:
    extend(57);
    NEXT();
    goto ***PC;
func_5517651088:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517651088;
    goto ***PC;
func_5517651216:
    extend(43);
    NEXT();
    goto ***PC;
func_5517648256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517648256;
    goto ***PC;
func_5517648384:
    extend(45);
    NEXT();
    goto ***PC;
func_5517649392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517649392;
    goto ***PC;
func_5517651568:
    extend(40);
    NEXT();
    goto ***PC;
func_5517651696:
    extend(41);
    NEXT();
    goto ***PC;
func_5517649232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517649232;
    goto ***PC;
func_5517652464:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5517652592:
    extend(123);
    NEXT();
    goto ***PC;
func_5517647728:
    extend(125);
    NEXT();
    goto ***PC;
func_5517652240:
    extend(105);
    NEXT();
    goto ***PC;
func_5517652912:
    extend(106);
    NEXT();
    goto ***PC;
func_5517653040:
    extend(107);
    NEXT();
    goto ***PC;
func_5517653168:
    extend(120);
    NEXT();
    goto ***PC;
func_5517653296:
    extend(121);
    NEXT();
    goto ***PC;
func_5517653488:
    extend(122);
    NEXT();
    goto ***PC;
func_5517653616:
    extend(97);
    NEXT();
    goto ***PC;
func_5517653744:
    extend(98);
    NEXT();
    goto ***PC;
func_5517653872:
    extend(99);
    NEXT();
    goto ***PC;
func_5517653424:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517653424;
    goto ***PC;
func_5517654640:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5517651888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517651888;
    goto ***PC;
func_5517654464:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5517652064:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517652064;
    goto ***PC;
func_5517654128:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    store();
    PC = exp_5517654128;
    goto ***PC;
func_5517654256:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5517654768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517654768;
    goto ***PC;
func_5517655616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517655616;
    goto ***PC;
func_5517655744:
    extend(42);
    NEXT();
    goto ***PC;
func_5517654896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517654896;
    goto ***PC;
func_5517650576:
    extend(47);
    NEXT();
    goto ***PC;
func_5517655552:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5517655552;
    goto ***PC;
func_5517650944:
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
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
    PC = func_5517646816_op0;
    goto ***PC;
}
