#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 20
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
        static void * cf[] = {&&func_5005940256, &&func_5005940624, &&func_5005941040, &&func_5005941136, &&func_5005940912, &&func_5005940832, &&func_5005941536, &&func_5005940752, &&func_5005941264, &&func_5005941792, &&func_5005941456, &&func_5005941728, &&func_5005942144, &&func_5005942512, &&func_5005942352, &&func_5005942080, &&func_5005942272, &&func_5005941328, &&func_5005943376, &&func_5005943504, &&func_5005943632, &&func_5005943760, &&func_5005943888, &&func_5005944016, &&func_5005944400, &&func_5005941984, &&func_5005944592, &&func_5005944720, &&func_5005944848, &&func_5005945040, &&func_5005945168, &&func_5005945296, &&func_5005945424, &&func_5005944976, &&func_5005946000, &&func_5005946128, &&func_5005943168, &&func_5005943296, &&func_5005944304, &&func_5005946480, &&func_5005946608, &&func_5005944144, &&func_5005947376, &&func_5005947504, &&func_5005942640, &&func_5005947152, &&func_5005947824, &&func_5005947952, &&func_5005948080, &&func_5005948208, &&func_5005948400, &&func_5005948528, &&func_5005948656, &&func_5005948784, &&func_5005948336, &&func_5005949552, &&func_5005946800, &&func_5005949376, &&func_5005946976, &&func_5005949040, &&func_5005949168, &&func_5005949680, &&func_5005950528, &&func_5005950656, &&func_5005949808, &&func_5005945488, &&func_5005950464, &&func_5005945856, &&RETURN, &&HALT};
        static void **func_5005940256_op0[2] = { cf+15, cf+68};
        static void **func_5005940624_op0[2] = { cf+18, cf+68};
        static void **func_5005940624_op1[2] = { cf+20, cf+68};
        static void **func_5005940624_op2[2] = { cf+22, cf+68};
        static void **func_5005941040_op0[2] = { cf+24, cf+68};
        static void **func_5005941040_op1[2] = { cf+25, cf+68};
        static void **func_5005941040_op2[2] = { cf+26, cf+68};
        static void **func_5005941040_op3[2] = { cf+27, cf+68};
        static void **func_5005941040_op4[2] = { cf+28, cf+68};
        static void **func_5005941040_op5[2] = { cf+29, cf+68};
        static void **func_5005941040_op6[2] = { cf+30, cf+68};
        static void **func_5005941040_op7[2] = { cf+31, cf+68};
        static void **func_5005941040_op8[2] = { cf+32, cf+68};
        static void **func_5005941040_op9[2] = { cf+33, cf+68};
        static void **func_5005941136_op0[2] = { cf+34, cf+68};
        static void **func_5005941136_op1[2] = { cf+36, cf+68};
        static void **func_5005941136_op2[2] = { cf+13, cf+68};
        static void **func_5005940912_op0[2] = { cf+38, cf+68};
        static void **func_5005940912_op1[2] = { cf+8, cf+68};
        static void **func_5005940912_op2[2] = { cf+6, cf+68};
        static void **func_5005940832_op0[2] = { cf+41, cf+68};
        static void **func_5005941536_op0[2] = { cf+45, cf+68};
        static void **func_5005941536_op1[2] = { cf+46, cf+68};
        static void **func_5005941536_op2[2] = { cf+47, cf+68};
        static void **func_5005941536_op3[2] = { cf+48, cf+68};
        static void **func_5005941536_op4[2] = { cf+49, cf+68};
        static void **func_5005941536_op5[2] = { cf+50, cf+68};
        static void **func_5005941536_op6[2] = { cf+51, cf+68};
        static void **func_5005941536_op7[2] = { cf+52, cf+68};
        static void **func_5005941536_op8[2] = { cf+53, cf+68};
        static void **func_5005940752_op0[2] = { cf+54, cf+68};
        static void **func_5005940752_op1[2] = { cf+56, cf+68};
        static void **func_5005941264_op0[2] = { cf+2, cf+68};
        static void **func_5005941264_op1[2] = { cf+58, cf+68};
        static void **func_5005941792_op0[2] = { cf+59, cf+68};
        static void **func_5005941456_op0[2] = { cf+61, cf+68};
        static void **func_5005941728_op0[2] = { cf+10, cf+69};
        static void **func_5005942144_op0[2] = { cf+7, cf+68};
        static void **func_5005942144_op1[2] = { cf+14, cf+68};
        static void **func_5005942144_op2[2] = { cf+5, cf+68};
        static void **func_5005942144_op3[2] = { cf+0, cf+68};
        static void **func_5005942144_op4[2] = { cf+9, cf+68};
        static void **func_5005942512_op0[2] = { cf+62, cf+68};
        static void **func_5005942512_op1[2] = { cf+64, cf+68};
        static void **func_5005942512_op2[2] = { cf+4, cf+68};
        static void **func_5005942352_op0[2] = { cf+66, cf+68};
        static void **exp_5005942080[5] = {cf+6, cf+16, cf+3, cf+17, cf+68};
        static void **exp_5005943376[4] = {cf+3, cf+19, cf+3, cf+68};
        static void **exp_5005943632[4] = {cf+3, cf+21, cf+3, cf+68};
        static void **exp_5005943888[4] = {cf+3, cf+23, cf+3, cf+68};
        static void **exp_5005946000[4] = {cf+3, cf+35, cf+13, cf+68};
        static void **exp_5005943168[4] = {cf+3, cf+37, cf+13, cf+68};
        static void **exp_5005944304[4] = {cf+39, cf+3, cf+40, cf+68};
        static void **exp_5005944144[12] = {cf+42, cf+39, cf+0, cf+17, cf+1, cf+17, cf+0, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5005948336[8] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5005946800[12] = {cf+55, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+57, cf+43, cf+10, cf+44, cf+68};
        static void **exp_5005946976[3] = {cf+2, cf+8, cf+68};
        static void **exp_5005949040[6] = {cf+60, cf+39, cf+3, cf+40, cf+17, cf+68};
        static void **exp_5005949680[3] = {cf+12, cf+10, cf+68};
        static void **exp_5005950528[4] = {cf+13, cf+63, cf+4, cf+68};
        static void **exp_5005949808[4] = {cf+13, cf+65, cf+4, cf+68};
        static void **exp_5005950464[8] = {cf+67, cf+39, cf+1, cf+40, cf+43, cf+10, cf+44, cf+68};
goto LOOP;

func_5005940256:
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
            PC = func_5005940256_op0;
        break;
    }
    goto ***PC;
func_5005940624:
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
            PC = func_5005940624_op0;
        break;
        case 1:
            PC = func_5005940624_op1;
        break;
        case 2:
            PC = func_5005940624_op2;
        break;
    }
    goto ***PC;
func_5005941040:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941040_op0;
        break;
        case 1:
            PC = func_5005941040_op1;
        break;
        case 2:
            PC = func_5005941040_op2;
        break;
        case 3:
            PC = func_5005941040_op3;
        break;
        case 4:
            PC = func_5005941040_op4;
        break;
        case 5:
            PC = func_5005941040_op5;
        break;
        case 6:
            PC = func_5005941040_op6;
        break;
        case 7:
            PC = func_5005941040_op7;
        break;
        case 8:
            PC = func_5005941040_op8;
        break;
        case 9:
            PC = func_5005941040_op9;
        break;
    }
    goto ***PC;
func_5005941136:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941136_op0;
        break;
        case 1:
            PC = func_5005941136_op1;
        break;
        case 2:
            PC = func_5005941136_op2;
        break;
    }
    goto ***PC;
func_5005940912:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5005940912_op0;
        break;
        case 1:
            PC = func_5005940912_op1;
        break;
        case 2:
            PC = func_5005940912_op2;
        break;
    }
    goto ***PC;
func_5005940832:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5005940832_op0;
        break;
    }
    goto ***PC;
func_5005941536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941536_op0;
        break;
        case 1:
            PC = func_5005941536_op1;
        break;
        case 2:
            PC = func_5005941536_op2;
        break;
        case 3:
            PC = func_5005941536_op3;
        break;
        case 4:
            PC = func_5005941536_op4;
        break;
        case 5:
            PC = func_5005941536_op5;
        break;
        case 6:
            PC = func_5005941536_op6;
        break;
        case 7:
            PC = func_5005941536_op7;
        break;
        case 8:
            PC = func_5005941536_op8;
        break;
    }
    goto ***PC;
func_5005940752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5005940752_op0;
        break;
        case 1:
            PC = func_5005940752_op1;
        break;
    }
    goto ***PC;
func_5005941264:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941264_op0;
        break;
        case 1:
            PC = func_5005941264_op1;
        break;
    }
    goto ***PC;
func_5005941792:
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
            PC = func_5005941792_op0;
        break;
    }
    goto ***PC;
func_5005941456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941456_op0;
        break;
    }
    goto ***PC;
func_5005941728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5005941728_op0;
        break;
    }
    goto ***PC;
func_5005942144:
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
            PC = func_5005942144_op0;
        break;
        case 1:
            PC = func_5005942144_op1;
        break;
        case 2:
            PC = func_5005942144_op2;
        break;
        case 3:
            PC = func_5005942144_op3;
        break;
        case 4:
            PC = func_5005942144_op4;
        break;
    }
    goto ***PC;
func_5005942512:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5005942512_op0;
        break;
        case 1:
            PC = func_5005942512_op1;
        break;
        case 2:
            PC = func_5005942512_op2;
        break;
    }
    goto ***PC;
func_5005942352:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5005942352_op0;
        break;
    }
    goto ***PC;
func_5005942080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005942080;
    goto ***PC;
func_5005942272:
    extend(61);
    NEXT();
    goto ***PC;
func_5005941328:
    extend(59);
    NEXT();
    goto ***PC;
func_5005943376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005943376;
    goto ***PC;
func_5005943504:
    extend(62);
    NEXT();
    goto ***PC;
func_5005943632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005943632;
    goto ***PC;
func_5005943760:
    extend(60);
    NEXT();
    goto ***PC;
func_5005943888:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005943888;
    goto ***PC;
func_5005944016:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5005944400:
    extend(48);
    NEXT();
    goto ***PC;
func_5005941984:
    extend(49);
    NEXT();
    goto ***PC;
func_5005944592:
    extend(50);
    NEXT();
    goto ***PC;
func_5005944720:
    extend(51);
    NEXT();
    goto ***PC;
func_5005944848:
    extend(52);
    NEXT();
    goto ***PC;
func_5005945040:
    extend(53);
    NEXT();
    goto ***PC;
func_5005945168:
    extend(54);
    NEXT();
    goto ***PC;
func_5005945296:
    extend(55);
    NEXT();
    goto ***PC;
func_5005945424:
    extend(56);
    NEXT();
    goto ***PC;
func_5005944976:
    extend(57);
    NEXT();
    goto ***PC;
func_5005946000:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005946000;
    goto ***PC;
func_5005946128:
    extend(43);
    NEXT();
    goto ***PC;
func_5005943168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005943168;
    goto ***PC;
func_5005943296:
    extend(45);
    NEXT();
    goto ***PC;
func_5005944304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005944304;
    goto ***PC;
func_5005946480:
    extend(40);
    NEXT();
    goto ***PC;
func_5005946608:
    extend(41);
    NEXT();
    goto ***PC;
func_5005944144:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005944144;
    goto ***PC;
func_5005947376:
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
    goto ***PC;
func_5005947504:
    extend(123);
    NEXT();
    goto ***PC;
func_5005942640:
    extend(125);
    NEXT();
    goto ***PC;
func_5005947152:
    extend(105);
    NEXT();
    goto ***PC;
func_5005947824:
    extend(106);
    NEXT();
    goto ***PC;
func_5005947952:
    extend(107);
    NEXT();
    goto ***PC;
func_5005948080:
    extend(120);
    NEXT();
    goto ***PC;
func_5005948208:
    extend(121);
    NEXT();
    goto ***PC;
func_5005948400:
    extend(122);
    NEXT();
    goto ***PC;
func_5005948528:
    extend(97);
    NEXT();
    goto ***PC;
func_5005948656:
    extend(98);
    NEXT();
    goto ***PC;
func_5005948784:
    extend(99);
    NEXT();
    goto ***PC;
func_5005948336:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005948336;
    goto ***PC;
func_5005949552:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5005946800:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005946800;
    goto ***PC;
func_5005949376:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5005946976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005946976;
    goto ***PC;
func_5005949040:
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
    PC = exp_5005949040;
    goto ***PC;
func_5005949168:
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5005949680:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005949680;
    goto ***PC;
func_5005950528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005950528;
    goto ***PC;
func_5005950656:
    extend(42);
    NEXT();
    goto ***PC;
func_5005949808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005949808;
    goto ***PC;
func_5005945488:
    extend(47);
    NEXT();
    goto ***PC;
func_5005950464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5005950464;
    goto ***PC;
func_5005945856:
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
    PC = func_5005941728_op0;
    goto ***PC;
}
