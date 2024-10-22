#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 50
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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_5022702192, &&func_5022712400, &&func_5022712704, &&func_5022713056, &&func_5022712768, &&func_5022712320, &&func_5022712192, &&func_5022713520, &&func_5022712560, &&func_5022713184, &&func_5022713312, &&func_5022713440, &&func_5022713936, &&func_5022714064, &&func_5022714224, &&func_5022714432, &&func_5022714560, &&func_5022714944, &&func_5022713808, &&func_5022715296, &&func_5022712624, &&func_5022715488, &&func_5022715616, &&func_5022715744, &&func_5022716208, &&func_5022714352, &&func_5022716400, &&func_5022716560, &&func_5022716688, &&func_5022716880, &&func_5022717008, &&func_5022717136, &&func_5022717264, &&func_5022716816, &&func_5022715072, &&func_5022713696, &&func_5022717904, &&func_5022718032, &&func_5022718416, &&func_5022718544, &&func_5022718672, &&func_5022718832, &&func_5022718960, &&func_5022719152, &&func_5022719280, &&func_5022719408, &&func_5022719536, &&func_5022719088, &&func_5022718304, &&func_5022715936, &&func_5022716064, &&func_5022718224, &&func_5022720048, &&RETURN, &&HALT};
        static void **func_5022702192_op0[2] = { cf+11, cf+53};
        static void **func_5022702192_op1[2] = { cf+12, cf+53};
        static void **func_5022702192_op2[2] = { cf+13, cf+53};
        static void **func_5022702192_op3[2] = { cf+14, cf+53};
        static void **func_5022712400_op0[2] = { cf+15, cf+53};
        static void **func_5022712400_op1[2] = { cf+16, cf+53};
        static void **func_5022712704_op0[2] = { cf+18, cf+53};
        static void **func_5022712704_op1[2] = { cf+20, cf+53};
        static void **func_5022712704_op2[2] = { cf+22, cf+53};
        static void **func_5022713056_op0[2] = { cf+24, cf+53};
        static void **func_5022713056_op1[2] = { cf+25, cf+53};
        static void **func_5022713056_op2[2] = { cf+26, cf+53};
        static void **func_5022713056_op3[2] = { cf+27, cf+53};
        static void **func_5022713056_op4[2] = { cf+28, cf+53};
        static void **func_5022713056_op5[2] = { cf+29, cf+53};
        static void **func_5022713056_op6[2] = { cf+30, cf+53};
        static void **func_5022713056_op7[2] = { cf+31, cf+53};
        static void **func_5022713056_op8[2] = { cf+32, cf+53};
        static void **func_5022713056_op9[2] = { cf+33, cf+53};
        static void **func_5022712768_op0[2] = { cf+3, cf+53};
        static void **func_5022712768_op1[2] = { cf+34, cf+53};
        static void **func_5022712320_op0[2] = { cf+35, cf+53};
        static void **func_5022712192_op0[2] = { cf+5, cf+54};
        static void **func_5022713520_op0[2] = { cf+38, cf+53};
        static void **func_5022713520_op1[2] = { cf+39, cf+53};
        static void **func_5022713520_op2[2] = { cf+40, cf+53};
        static void **func_5022713520_op3[2] = { cf+41, cf+53};
        static void **func_5022713520_op4[2] = { cf+42, cf+53};
        static void **func_5022713520_op5[2] = { cf+43, cf+53};
        static void **func_5022713520_op6[2] = { cf+44, cf+53};
        static void **func_5022713520_op7[2] = { cf+45, cf+53};
        static void **func_5022713520_op8[2] = { cf+46, cf+53};
        static void **func_5022713520_op9[2] = { cf+47, cf+53};
        static void **func_5022712560_op0[2] = { cf+48, cf+53};
        static void **func_5022712560_op1[2] = { cf+49, cf+53};
        static void **func_5022712560_op2[2] = { cf+50, cf+53};
        static void **func_5022713184_op0[2] = { cf+4, cf+53};
        static void **func_5022713184_op1[2] = { cf+7, cf+53};
        static void **func_5022713312_op0[2] = { cf+51, cf+53};
        static void **exp_5022714560[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_5022713808[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_5022712624[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_5022715616[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_5022715072[3] = {cf+3, cf+4, cf+53};
        static void **exp_5022713696[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_5022718224[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_5022702192:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        goto ***PC;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5022702192_op0;
        break;
        case 1:
            PC = func_5022702192_op1;
        break;
        case 2:
            PC = func_5022702192_op2;
        break;
        case 3:
            PC = func_5022702192_op3;
        break;
    }
    goto ***PC;
func_5022712400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712400_op0;
        break;
        case 1:
            PC = func_5022712400_op1;
        break;
    }
    goto ***PC;
func_5022712704:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712704_op0;
        break;
        case 1:
            PC = func_5022712704_op1;
        break;
        case 2:
            PC = func_5022712704_op2;
        break;
    }
    goto ***PC;
func_5022713056:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5022713056_op0;
        break;
        case 1:
            PC = func_5022713056_op1;
        break;
        case 2:
            PC = func_5022713056_op2;
        break;
        case 3:
            PC = func_5022713056_op3;
        break;
        case 4:
            PC = func_5022713056_op4;
        break;
        case 5:
            PC = func_5022713056_op5;
        break;
        case 6:
            PC = func_5022713056_op6;
        break;
        case 7:
            PC = func_5022713056_op7;
        break;
        case 8:
            PC = func_5022713056_op8;
        break;
        case 9:
            PC = func_5022713056_op9;
        break;
    }
    goto ***PC;
func_5022712768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712768_op0;
        break;
        case 1:
            PC = func_5022712768_op1;
        break;
    }
    goto ***PC;
func_5022712320:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712320_op0;
        break;
    }
    goto ***PC;
func_5022712192:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712192_op0;
        break;
    }
    goto ***PC;
func_5022713520:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5022713520_op0;
        break;
        case 1:
            PC = func_5022713520_op1;
        break;
        case 2:
            PC = func_5022713520_op2;
        break;
        case 3:
            PC = func_5022713520_op3;
        break;
        case 4:
            PC = func_5022713520_op4;
        break;
        case 5:
            PC = func_5022713520_op5;
        break;
        case 6:
            PC = func_5022713520_op6;
        break;
        case 7:
            PC = func_5022713520_op7;
        break;
        case 8:
            PC = func_5022713520_op8;
        break;
        case 9:
            PC = func_5022713520_op9;
        break;
    }
    goto ***PC;
func_5022712560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5022712560_op0;
        break;
        case 1:
            PC = func_5022712560_op1;
        break;
        case 2:
            PC = func_5022712560_op2;
        break;
    }
    goto ***PC;
func_5022713184:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5022713184_op0;
        break;
        case 1:
            PC = func_5022713184_op1;
        break;
    }
    goto ***PC;
func_5022713312:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5022713312_op0;
        break;
    }
    goto ***PC;
func_5022713440:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_5022713936:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_5022714064:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_5022714224:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_5022714432:
    extend(42);
    NEXT();
    goto ***PC;
func_5022714560:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022714560;
    goto ***PC;
func_5022714944:
    extend(44);
    NEXT();
    goto ***PC;
func_5022713808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022713808;
    goto ***PC;
func_5022715296:
    extend(61);
    NEXT();
    goto ***PC;
func_5022712624:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    store();
    PC = exp_5022712624;
    goto ***PC;
func_5022715488:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5022715616:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    store();
    PC = exp_5022715616;
    goto ***PC;
func_5022715744:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5022716208:
    extend(48);
    NEXT();
    goto ***PC;
func_5022714352:
    extend(49);
    NEXT();
    goto ***PC;
func_5022716400:
    extend(50);
    NEXT();
    goto ***PC;
func_5022716560:
    extend(51);
    NEXT();
    goto ***PC;
func_5022716688:
    extend(52);
    NEXT();
    goto ***PC;
func_5022716880:
    extend(53);
    NEXT();
    goto ***PC;
func_5022717008:
    extend(54);
    NEXT();
    goto ***PC;
func_5022717136:
    extend(55);
    NEXT();
    goto ***PC;
func_5022717264:
    extend(56);
    NEXT();
    goto ***PC;
func_5022716816:
    extend(57);
    NEXT();
    goto ***PC;
func_5022715072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5022715072;
    goto ***PC;
func_5022713696:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    store();
    PC = exp_5022713696;
    goto ***PC;
func_5022717904:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_5022718032:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_5022718416:
    extend(97);
    NEXT();
    goto ***PC;
func_5022718544:
    extend(98);
    NEXT();
    goto ***PC;
func_5022718672:
    extend(99);
    NEXT();
    goto ***PC;
func_5022718832:
    extend(100);
    NEXT();
    goto ***PC;
func_5022718960:
    extend(101);
    NEXT();
    goto ***PC;
func_5022719152:
    extend(102);
    NEXT();
    goto ***PC;
func_5022719280:
    extend(103);
    NEXT();
    goto ***PC;
func_5022719408:
    extend(104);
    NEXT();
    goto ***PC;
func_5022719536:
    extend(105);
    NEXT();
    goto ***PC;
func_5022719088:
    extend(106);
    NEXT();
    goto ***PC;
func_5022718304:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5022715936:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_5022716064:
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
    goto ***PC;
func_5022718224:
    if(stack.top == stack.frames + MAX_DEPTH) {
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
        goto ***PC;
    }
    store();
    PC = exp_5022718224;
    goto ***PC;
func_5022720048:
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC = func_5022712192_op0;
    goto ***PC;
}
