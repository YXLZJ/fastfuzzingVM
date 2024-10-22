#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 30
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
        static void * cf[] = {&&func_4854945312, &&func_4854945680, &&func_4854946096, &&func_4854946192, &&func_4854945968, &&func_4854945888, &&func_4854946592, &&func_4854945808, &&func_4854946320, &&func_4854946848, &&func_4854946512, &&func_4854946784, &&func_4854947200, &&func_4854947568, &&func_4854947408, &&func_4854947136, &&func_4854947328, &&func_4854946384, &&func_4854948432, &&func_4854948560, &&func_4854948688, &&func_4854948816, &&func_4854948944, &&func_4854949072, &&func_4854949456, &&func_4854947040, &&func_4854949648, &&func_4854949776, &&func_4854949904, &&func_4854950096, &&func_4854950224, &&func_4854950352, &&func_4854950480, &&func_4854950032, &&func_4854951056, &&func_4854951184, &&func_4854948224, &&func_4854948352, &&func_4854949360, &&func_4854951536, &&func_4854951664, &&func_4854949200, &&func_4854952432, &&func_4854952560, &&func_4854947696, &&func_4854952208, &&func_4854952880, &&func_4854953008, &&func_4854953136, &&func_4854953264, &&func_4854953456, &&func_4854953584, &&func_4854953712, &&func_4854953840, &&func_4854953392, &&func_4854954608, &&func_4854951856, &&func_4854954432, &&func_4854952032, &&func_4854954096, &&func_4854954224, &&func_4854954736, &&func_4854955584, &&func_4854955712, &&func_4854954864, &&func_4854950544, &&func_4854955520, &&func_4854950912, &&RETURN, &&HALT};
        static void **func_4854945312_op0[2] = { cf+15, cf+68};
        static void **func_4854945680_op0[2] = { cf+18, cf+68};
        static void **func_4854945680_op1[2] = { cf+20, cf+68};
        static void **func_4854945680_op2[2] = { cf+22, cf+68};
        static void **func_4854946096_op0[2] = { cf+24, cf+68};
        static void **func_4854946096_op1[2] = { cf+25, cf+68};
        static void **func_4854946096_op2[2] = { cf+26, cf+68};
        static void **func_4854946096_op3[2] = { cf+27, cf+68};
        static void **func_4854946096_op4[2] = { cf+28, cf+68};
        static void **func_4854946096_op5[2] = { cf+29, cf+68};
        static void **func_4854946096_op6[2] = { cf+30, cf+68};
        static void **func_4854946096_op7[2] = { cf+31, cf+68};
        static void **func_4854946096_op8[2] = { cf+32, cf+68};
        static void **func_4854946096_op9[2] = { cf+33, cf+68};
        static void **func_4854946192_op0[2] = { cf+34, cf+68};
        static void **func_4854946192_op1[2] = { cf+36, cf+68};
        static void **func_4854946192_op2[2] = { cf+13, cf+68};
        static void **func_4854945968_op0[2] = { cf+38, cf+68};
        static void **func_4854945968_op1[2] = { cf+8, cf+68};
        static void **func_4854945968_op2[2] = { cf+6, cf+68};
        static void **func_4854945888_op0[2] = { cf+41, cf+68};
        static void **func_4854946592_op0[2] = { cf+45, cf+68};
        static void **func_4854946592_op1[2] = { cf+46, cf+68};
        static void **func_4854946592_op2[2] = { cf+47, cf+68};
        static void **func_4854946592_op3[2] = { cf+48, cf+68};
        static void **func_4854946592_op4[2] = { cf+49, cf+68};
        static void **func_4854946592_op5[2] = { cf+50, cf+68};
        static void **func_4854946592_op6[2] = { cf+51, cf+68};
        static void **func_4854946592_op7[2] = { cf+52, cf+68};
        static void **func_4854946592_op8[2] = { cf+53, cf+68};
        static void **func_4854945808_op0[2] = { cf+54, cf+68};
        static void **func_4854945808_op1[2] = { cf+56, cf+68};
        static void **func_4854946320_op0[2] = { cf+2, cf+68};
        static void **func_4854946320_op1[2] = { cf+58, cf+68};
        static void **func_4854946848_op0[2] = { cf+59, cf+68};
        static void **func_4854946512_op0[2] = { cf+61, cf+68};
        static void **func_4854946784_op0[2] = { cf+10, cf+69};
        static void **func_4854947200_op0[2] = { cf+7, cf+68};
        static void **func_4854947200_op1[2] = { cf+14, cf+68};
        static void **func_4854947200_op2[2] = { cf+5, cf+68};
        static void **func_4854947200_op3[2] = { cf+0, cf+68};
        static void **func_4854947200_op4[2] = { cf+9, cf+68};
        static void **func_4854947568_op0[2] = { cf+62, cf+68};
        static void **func_4854947568_op1[2] = { cf+64, cf+68};
        static void **func_4854947568_op2[2] = { cf+4, cf+68};
        static void **func_4854947408_op0[2] = { cf+66, cf+68};
        static void **exp_4854947136[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_4854948432[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_4854948688[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_4854948944[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_4854951056[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_4854948224[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_4854949360[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_4854949200[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4854953392[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4854951856[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_4854952032[3] = {cf+2, cf+8, cf+68};
        static void **exp_4854954096[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_4854954736[3] = {cf+12, cf+10, cf+68};
        static void **exp_4854955584[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_4854954864[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_4854955520[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_4854945312:
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
            PC = func_4854945312_op0;
        break;
    }
    goto ***PC;
func_4854945680:
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
            PC = func_4854945680_op0;
        break;
        case 1:
            PC = func_4854945680_op1;
        break;
        case 2:
            PC = func_4854945680_op2;
        break;
    }
    goto ***PC;
func_4854946096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946096_op0;
        break;
        case 1:
            PC = func_4854946096_op1;
        break;
        case 2:
            PC = func_4854946096_op2;
        break;
        case 3:
            PC = func_4854946096_op3;
        break;
        case 4:
            PC = func_4854946096_op4;
        break;
        case 5:
            PC = func_4854946096_op5;
        break;
        case 6:
            PC = func_4854946096_op6;
        break;
        case 7:
            PC = func_4854946096_op7;
        break;
        case 8:
            PC = func_4854946096_op8;
        break;
        case 9:
            PC = func_4854946096_op9;
        break;
    }
    goto ***PC;
func_4854946192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946192_op0;
        break;
        case 1:
            PC = func_4854946192_op1;
        break;
        case 2:
            PC = func_4854946192_op2;
        break;
    }
    goto ***PC;
func_4854945968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4854945968_op0;
        break;
        case 1:
            PC = func_4854945968_op1;
        break;
        case 2:
            PC = func_4854945968_op2;
        break;
    }
    goto ***PC;
func_4854945888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4854945888_op0;
        break;
    }
    goto ***PC;
func_4854946592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946592_op0;
        break;
        case 1:
            PC = func_4854946592_op1;
        break;
        case 2:
            PC = func_4854946592_op2;
        break;
        case 3:
            PC = func_4854946592_op3;
        break;
        case 4:
            PC = func_4854946592_op4;
        break;
        case 5:
            PC = func_4854946592_op5;
        break;
        case 6:
            PC = func_4854946592_op6;
        break;
        case 7:
            PC = func_4854946592_op7;
        break;
        case 8:
            PC = func_4854946592_op8;
        break;
    }
    goto ***PC;
func_4854945808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4854945808_op0;
        break;
        case 1:
            PC = func_4854945808_op1;
        break;
    }
    goto ***PC;
func_4854946320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946320_op0;
        break;
        case 1:
            PC = func_4854946320_op1;
        break;
    }
    goto ***PC;
func_4854946848:
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
            PC = func_4854946848_op0;
        break;
    }
    goto ***PC;
func_4854946512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946512_op0;
        break;
    }
    goto ***PC;
func_4854946784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4854946784_op0;
        break;
    }
    goto ***PC;
func_4854947200:
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
            PC = func_4854947200_op0;
        break;
        case 1:
            PC = func_4854947200_op1;
        break;
        case 2:
            PC = func_4854947200_op2;
        break;
        case 3:
            PC = func_4854947200_op3;
        break;
        case 4:
            PC = func_4854947200_op4;
        break;
    }
    goto ***PC;
func_4854947568:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4854947568_op0;
        break;
        case 1:
            PC = func_4854947568_op1;
        break;
        case 2:
            PC = func_4854947568_op2;
        break;
    }
    goto ***PC;
func_4854947408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4854947408_op0;
        break;
    }
    goto ***PC;
func_4854947136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854947136;
    goto ***PC;
func_4854947328:
    extend(61);
    NEXT();
    goto ***PC;
func_4854946384:
    extend(59);
    NEXT();
    goto ***PC;
func_4854948432:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854948432;
    goto ***PC;
func_4854948560:
    extend(62);
    NEXT();
    goto ***PC;
func_4854948688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854948688;
    goto ***PC;
func_4854948816:
    extend(60);
    NEXT();
    goto ***PC;
func_4854948944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854948944;
    goto ***PC;
func_4854949072:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_4854949456:
    extend(48);
    NEXT();
    goto ***PC;
func_4854947040:
    extend(49);
    NEXT();
    goto ***PC;
func_4854949648:
    extend(50);
    NEXT();
    goto ***PC;
func_4854949776:
    extend(51);
    NEXT();
    goto ***PC;
func_4854949904:
    extend(52);
    NEXT();
    goto ***PC;
func_4854950096:
    extend(53);
    NEXT();
    goto ***PC;
func_4854950224:
    extend(54);
    NEXT();
    goto ***PC;
func_4854950352:
    extend(55);
    NEXT();
    goto ***PC;
func_4854950480:
    extend(56);
    NEXT();
    goto ***PC;
func_4854950032:
    extend(57);
    NEXT();
    goto ***PC;
func_4854951056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854951056;
    goto ***PC;
func_4854951184:
    extend(43);
    NEXT();
    goto ***PC;
func_4854948224:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854948224;
    goto ***PC;
func_4854948352:
    extend(45);
    NEXT();
    goto ***PC;
func_4854949360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854949360;
    goto ***PC;
func_4854951536:
    extend(40);
    NEXT();
    goto ***PC;
func_4854951664:
    extend(41);
    NEXT();
    goto ***PC;
func_4854949200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854949200;
    goto ***PC;
func_4854952432:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_4854952560:
    extend(123);
    NEXT();
    goto ***PC;
func_4854947696:
    extend(125);
    NEXT();
    goto ***PC;
func_4854952208:
    extend(105);
    NEXT();
    goto ***PC;
func_4854952880:
    extend(106);
    NEXT();
    goto ***PC;
func_4854953008:
    extend(107);
    NEXT();
    goto ***PC;
func_4854953136:
    extend(120);
    NEXT();
    goto ***PC;
func_4854953264:
    extend(121);
    NEXT();
    goto ***PC;
func_4854953456:
    extend(122);
    NEXT();
    goto ***PC;
func_4854953584:
    extend(97);
    NEXT();
    goto ***PC;
func_4854953712:
    extend(98);
    NEXT();
    goto ***PC;
func_4854953840:
    extend(99);
    NEXT();
    goto ***PC;
func_4854953392:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854953392;
    goto ***PC;
func_4854954608:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_4854951856:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854951856;
    goto ***PC;
func_4854954432:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_4854952032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854952032;
    goto ***PC;
func_4854954096:
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
    PC = exp_4854954096;
    goto ***PC;
func_4854954224:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_4854954736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854954736;
    goto ***PC;
func_4854955584:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854955584;
    goto ***PC;
func_4854955712:
    extend(42);
    NEXT();
    goto ***PC;
func_4854954864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854954864;
    goto ***PC;
func_4854950544:
    extend(47);
    NEXT();
    goto ***PC;
func_4854955520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4854955520;
    goto ***PC;
func_4854950912:
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
    PC = func_4854946784_op0;
    goto ***PC;
}
