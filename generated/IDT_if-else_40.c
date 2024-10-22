#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 40
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
        static void * cf[] = {&&func_5047870176, &&func_5047879616, &&func_5047879536, &&func_5047879456, &&func_5047880080, &&func_5047879184, &&func_5047880608, &&func_5047879376, &&func_5047879904, &&func_5047879968, &&func_5047880848, &&func_5047880976, &&func_5047881200, &&func_5047881328, &&func_5047881456, &&func_5047881824, &&func_5047881952, &&func_5047880272, &&func_5047882336, &&func_5047882464, &&func_5047882592, &&func_5047882720, &&func_5047882848, &&func_5047883008, &&func_5047883136, &&func_5047883360, &&func_5047883488, &&func_5047883616, &&func_5047883744, &&func_5047883872, &&func_5047884064, &&func_5047883296, &&func_5047881104, &&func_5047882080, &&func_5047882208, &&func_5047881648, &&func_5047885552, &&func_5047885680, &&func_5047885488, &&func_5047884720, &&func_5047881712, &&func_5047886128, &&func_5047886256, &&func_5047886384, &&func_5047886576, &&func_5047886704, &&func_5047886832, &&func_5047886960, &&func_5047886512, &&func_5047887280, &&func_5047887408, &&func_5047884544, &&func_5047884256, &&func_5047887680, &&func_5047887808, &&RETURN, &&HALT};
        static void **func_5047870176_op0[2] = { cf+12, cf+55};
        static void **func_5047879616_op0[2] = { cf+15, cf+55};
        static void **func_5047879616_op1[2] = { cf+17, cf+55};
        static void **func_5047879616_op2[2] = { cf+19, cf+55};
        static void **func_5047879536_op0[2] = { cf+21, cf+55};
        static void **func_5047879536_op1[2] = { cf+11, cf+55};
        static void **func_5047879536_op2[2] = { cf+23, cf+55};
        static void **func_5047879456_op0[2] = { cf+6, cf+55};
        static void **func_5047879456_op1[2] = { cf+4, cf+55};
        static void **func_5047880080_op0[2] = { cf+25, cf+55};
        static void **func_5047880080_op1[2] = { cf+26, cf+55};
        static void **func_5047880080_op2[2] = { cf+27, cf+55};
        static void **func_5047880080_op3[2] = { cf+28, cf+55};
        static void **func_5047880080_op4[2] = { cf+29, cf+55};
        static void **func_5047880080_op5[2] = { cf+30, cf+55};
        static void **func_5047879184_op0[2] = { cf+31, cf+55};
        static void **func_5047879184_op1[2] = { cf+38, cf+55};
        static void **func_5047880608_op0[2] = { cf+39, cf+55};
        static void **func_5047880608_op1[2] = { cf+40, cf+55};
        static void **func_5047880608_op2[2] = { cf+41, cf+55};
        static void **func_5047880608_op3[2] = { cf+42, cf+55};
        static void **func_5047880608_op4[2] = { cf+43, cf+55};
        static void **func_5047880608_op5[2] = { cf+44, cf+55};
        static void **func_5047880608_op6[2] = { cf+45, cf+55};
        static void **func_5047880608_op7[2] = { cf+46, cf+55};
        static void **func_5047880608_op8[2] = { cf+47, cf+55};
        static void **func_5047880608_op9[2] = { cf+48, cf+55};
        static void **func_5047879376_op0[2] = { cf+49, cf+55};
        static void **func_5047879904_op0[2] = { cf+5, cf+56};
        static void **func_5047879968_op0[2] = { cf+5, cf+55};
        static void **func_5047879968_op1[2] = { cf+0, cf+55};
        static void **func_5047879968_op2[2] = { cf+7, cf+55};
        static void **func_5047880848_op0[2] = { cf+51, cf+55};
        static void **func_5047880848_op1[2] = { cf+52, cf+55};
        static void **func_5047880976_op0[2] = { cf+3, cf+55};
        static void **func_5047880976_op1[2] = { cf+53, cf+55};
        static void **exp_5047881200[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5047881824[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5047880272[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5047882464[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5047882720[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5047883008[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5047883296[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5047885488[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5047887280[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5047884544[3] = {cf+9, cf+10, cf+55};
        static void **exp_5047884256[1] = {cf+55};
        static void **exp_5047887680[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5047870176:
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
            PC = func_5047870176_op0;
        break;
    }
    goto ***PC;
func_5047879616:
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
            PC = func_5047879616_op0;
        break;
        case 1:
            PC = func_5047879616_op1;
        break;
        case 2:
            PC = func_5047879616_op2;
        break;
    }
    goto ***PC;
func_5047879536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5047879536_op0;
        break;
        case 1:
            PC = func_5047879536_op1;
        break;
        case 2:
            PC = func_5047879536_op2;
        break;
    }
    goto ***PC;
func_5047879456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5047879456_op0;
        break;
        case 1:
            PC = func_5047879456_op1;
        break;
    }
    goto ***PC;
func_5047880080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5047880080_op0;
        break;
        case 1:
            PC = func_5047880080_op1;
        break;
        case 2:
            PC = func_5047880080_op2;
        break;
        case 3:
            PC = func_5047880080_op3;
        break;
        case 4:
            PC = func_5047880080_op4;
        break;
        case 5:
            PC = func_5047880080_op5;
        break;
    }
    goto ***PC;
func_5047879184:
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
            PC = func_5047879184_op0;
        break;
        case 1:
            PC = func_5047879184_op1;
        break;
    }
    goto ***PC;
func_5047880608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5047880608_op0;
        break;
        case 1:
            PC = func_5047880608_op1;
        break;
        case 2:
            PC = func_5047880608_op2;
        break;
        case 3:
            PC = func_5047880608_op3;
        break;
        case 4:
            PC = func_5047880608_op4;
        break;
        case 5:
            PC = func_5047880608_op5;
        break;
        case 6:
            PC = func_5047880608_op6;
        break;
        case 7:
            PC = func_5047880608_op7;
        break;
        case 8:
            PC = func_5047880608_op8;
        break;
        case 9:
            PC = func_5047880608_op9;
        break;
    }
    goto ***PC;
func_5047879376:
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
            PC = func_5047879376_op0;
        break;
    }
    goto ***PC;
func_5047879904:
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
            PC = func_5047879904_op0;
        break;
    }
    goto ***PC;
func_5047879968:
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
            PC = func_5047879968_op0;
        break;
        case 1:
            PC = func_5047879968_op1;
        break;
        case 2:
            PC = func_5047879968_op2;
        break;
    }
    goto ***PC;
func_5047880848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5047880848_op0;
        break;
        case 1:
            PC = func_5047880848_op1;
        break;
    }
    goto ***PC;
func_5047880976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5047880976_op0;
        break;
        case 1:
            PC = func_5047880976_op1;
        break;
    }
    goto ***PC;
func_5047881200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047881200;
    goto ***PC;
func_5047881328:
    extend(61);
    NEXT();
    goto ***PC;
func_5047881456:
    extend(59);
    NEXT();
    goto ***PC;
func_5047881824:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047881824;
    goto ***PC;
func_5047881952:
    extend(62);
    NEXT();
    goto ***PC;
func_5047880272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047880272;
    goto ***PC;
func_5047882336:
    extend(60);
    NEXT();
    goto ***PC;
func_5047882464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047882464;
    goto ***PC;
func_5047882592:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5047882720:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047882720;
    goto ***PC;
func_5047882848:
    extend(43);
    NEXT();
    goto ***PC;
func_5047883008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047883008;
    goto ***PC;
func_5047883136:
    extend(45);
    NEXT();
    goto ***PC;
func_5047883360:
    extend(120);
    NEXT();
    goto ***PC;
func_5047883488:
    extend(121);
    NEXT();
    goto ***PC;
func_5047883616:
    extend(122);
    NEXT();
    goto ***PC;
func_5047883744:
    extend(97);
    NEXT();
    goto ***PC;
func_5047883872:
    extend(98);
    NEXT();
    goto ***PC;
func_5047884064:
    extend(99);
    NEXT();
    goto ***PC;
func_5047883296:
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
    PC = exp_5047883296;
    goto ***PC;
func_5047881104:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5047882080:
    extend(40);
    NEXT();
    goto ***PC;
func_5047882208:
    extend(41);
    NEXT();
    goto ***PC;
func_5047881648:
    extend(123);
    NEXT();
    goto ***PC;
func_5047885552:
    extend(125);
    NEXT();
    goto ***PC;
func_5047885680:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5047885488:
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
    PC = exp_5047885488;
    goto ***PC;
func_5047884720:
    extend(48);
    NEXT();
    goto ***PC;
func_5047881712:
    extend(49);
    NEXT();
    goto ***PC;
func_5047886128:
    extend(50);
    NEXT();
    goto ***PC;
func_5047886256:
    extend(51);
    NEXT();
    goto ***PC;
func_5047886384:
    extend(52);
    NEXT();
    goto ***PC;
func_5047886576:
    extend(53);
    NEXT();
    goto ***PC;
func_5047886704:
    extend(54);
    NEXT();
    goto ***PC;
func_5047886832:
    extend(55);
    NEXT();
    goto ***PC;
func_5047886960:
    extend(56);
    NEXT();
    goto ***PC;
func_5047886512:
    extend(57);
    NEXT();
    goto ***PC;
func_5047887280:
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
    PC = exp_5047887280;
    goto ***PC;
func_5047887408:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5047884544:
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
    PC = exp_5047884544;
    goto ***PC;
func_5047884256:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047884256;
    goto ***PC;
func_5047887680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5047887680;
    goto ***PC;
func_5047887808:
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
    PC = func_5047879904_op0;
    goto ***PC;
}
