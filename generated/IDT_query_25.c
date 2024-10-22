#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 25
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
        static void * cf[] = {&&func_4997536368, &&func_4997546576, &&func_4997546880, &&func_4997547232, &&func_4997546944, &&func_4997546496, &&func_4997546368, &&func_4997547696, &&func_4997546736, &&func_4997547360, &&func_4997547488, &&func_4997547616, &&func_4997548112, &&func_4997548240, &&func_4997548400, &&func_4997548608, &&func_4997548736, &&func_4997549120, &&func_4997547984, &&func_4997549472, &&func_4997546800, &&func_4997549664, &&func_4997549792, &&func_4997549920, &&func_4997550384, &&func_4997548528, &&func_4997550576, &&func_4997550736, &&func_4997550864, &&func_4997551056, &&func_4997551184, &&func_4997551312, &&func_4997551440, &&func_4997550992, &&func_4997549248, &&func_4997547872, &&func_4997552080, &&func_4997552208, &&func_4997552592, &&func_4997552720, &&func_4997552848, &&func_4997553008, &&func_4997553136, &&func_4997553328, &&func_4997553456, &&func_4997553584, &&func_4997553712, &&func_4997553264, &&func_4997552480, &&func_4997550112, &&func_4997550240, &&func_4997552400, &&func_4997554224, &&RETURN, &&HALT};
        static void **func_4997536368_op0[2] = { cf+11, cf+53};
        static void **func_4997536368_op1[2] = { cf+12, cf+53};
        static void **func_4997536368_op2[2] = { cf+13, cf+53};
        static void **func_4997536368_op3[2] = { cf+14, cf+53};
        static void **func_4997546576_op0[2] = { cf+15, cf+53};
        static void **func_4997546576_op1[2] = { cf+16, cf+53};
        static void **func_4997546880_op0[2] = { cf+18, cf+53};
        static void **func_4997546880_op1[2] = { cf+20, cf+53};
        static void **func_4997546880_op2[2] = { cf+22, cf+53};
        static void **func_4997547232_op0[2] = { cf+24, cf+53};
        static void **func_4997547232_op1[2] = { cf+25, cf+53};
        static void **func_4997547232_op2[2] = { cf+26, cf+53};
        static void **func_4997547232_op3[2] = { cf+27, cf+53};
        static void **func_4997547232_op4[2] = { cf+28, cf+53};
        static void **func_4997547232_op5[2] = { cf+29, cf+53};
        static void **func_4997547232_op6[2] = { cf+30, cf+53};
        static void **func_4997547232_op7[2] = { cf+31, cf+53};
        static void **func_4997547232_op8[2] = { cf+32, cf+53};
        static void **func_4997547232_op9[2] = { cf+33, cf+53};
        static void **func_4997546944_op0[2] = { cf+3, cf+53};
        static void **func_4997546944_op1[2] = { cf+34, cf+53};
        static void **func_4997546496_op0[2] = { cf+35, cf+53};
        static void **func_4997546368_op0[2] = { cf+5, cf+54};
        static void **func_4997547696_op0[2] = { cf+38, cf+53};
        static void **func_4997547696_op1[2] = { cf+39, cf+53};
        static void **func_4997547696_op2[2] = { cf+40, cf+53};
        static void **func_4997547696_op3[2] = { cf+41, cf+53};
        static void **func_4997547696_op4[2] = { cf+42, cf+53};
        static void **func_4997547696_op5[2] = { cf+43, cf+53};
        static void **func_4997547696_op6[2] = { cf+44, cf+53};
        static void **func_4997547696_op7[2] = { cf+45, cf+53};
        static void **func_4997547696_op8[2] = { cf+46, cf+53};
        static void **func_4997547696_op9[2] = { cf+47, cf+53};
        static void **func_4997546736_op0[2] = { cf+48, cf+53};
        static void **func_4997546736_op1[2] = { cf+49, cf+53};
        static void **func_4997546736_op2[2] = { cf+50, cf+53};
        static void **func_4997547360_op0[2] = { cf+4, cf+53};
        static void **func_4997547360_op1[2] = { cf+7, cf+53};
        static void **func_4997547488_op0[2] = { cf+51, cf+53};
        static void **exp_4997548736[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_4997547984[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_4997546800[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_4997549792[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_4997549248[3] = {cf+3, cf+4, cf+53};
        static void **exp_4997547872[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_4997552400[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_4997536368:
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
            PC = func_4997536368_op0;
        break;
        case 1:
            PC = func_4997536368_op1;
        break;
        case 2:
            PC = func_4997536368_op2;
        break;
        case 3:
            PC = func_4997536368_op3;
        break;
    }
    goto ***PC;
func_4997546576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997546576_op0;
        break;
        case 1:
            PC = func_4997546576_op1;
        break;
    }
    goto ***PC;
func_4997546880:
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
            PC = func_4997546880_op0;
        break;
        case 1:
            PC = func_4997546880_op1;
        break;
        case 2:
            PC = func_4997546880_op2;
        break;
    }
    goto ***PC;
func_4997547232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4997547232_op0;
        break;
        case 1:
            PC = func_4997547232_op1;
        break;
        case 2:
            PC = func_4997547232_op2;
        break;
        case 3:
            PC = func_4997547232_op3;
        break;
        case 4:
            PC = func_4997547232_op4;
        break;
        case 5:
            PC = func_4997547232_op5;
        break;
        case 6:
            PC = func_4997547232_op6;
        break;
        case 7:
            PC = func_4997547232_op7;
        break;
        case 8:
            PC = func_4997547232_op8;
        break;
        case 9:
            PC = func_4997547232_op9;
        break;
    }
    goto ***PC;
func_4997546944:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997546944_op0;
        break;
        case 1:
            PC = func_4997546944_op1;
        break;
    }
    goto ***PC;
func_4997546496:
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
            PC = func_4997546496_op0;
        break;
    }
    goto ***PC;
func_4997546368:
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
            PC = func_4997546368_op0;
        break;
    }
    goto ***PC;
func_4997547696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4997547696_op0;
        break;
        case 1:
            PC = func_4997547696_op1;
        break;
        case 2:
            PC = func_4997547696_op2;
        break;
        case 3:
            PC = func_4997547696_op3;
        break;
        case 4:
            PC = func_4997547696_op4;
        break;
        case 5:
            PC = func_4997547696_op5;
        break;
        case 6:
            PC = func_4997547696_op6;
        break;
        case 7:
            PC = func_4997547696_op7;
        break;
        case 8:
            PC = func_4997547696_op8;
        break;
        case 9:
            PC = func_4997547696_op9;
        break;
    }
    goto ***PC;
func_4997546736:
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
            PC = func_4997546736_op0;
        break;
        case 1:
            PC = func_4997546736_op1;
        break;
        case 2:
            PC = func_4997546736_op2;
        break;
    }
    goto ***PC;
func_4997547360:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4997547360_op0;
        break;
        case 1:
            PC = func_4997547360_op1;
        break;
    }
    goto ***PC;
func_4997547488:
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
            PC = func_4997547488_op0;
        break;
    }
    goto ***PC;
func_4997547616:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_4997548112:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_4997548240:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_4997548400:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_4997548608:
    extend(42);
    NEXT();
    goto ***PC;
func_4997548736:
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
    PC = exp_4997548736;
    goto ***PC;
func_4997549120:
    extend(44);
    NEXT();
    goto ***PC;
func_4997547984:
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
    PC = exp_4997547984;
    goto ***PC;
func_4997549472:
    extend(61);
    NEXT();
    goto ***PC;
func_4997546800:
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
    PC = exp_4997546800;
    goto ***PC;
func_4997549664:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4997549792:
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
    PC = exp_4997549792;
    goto ***PC;
func_4997549920:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4997550384:
    extend(48);
    NEXT();
    goto ***PC;
func_4997548528:
    extend(49);
    NEXT();
    goto ***PC;
func_4997550576:
    extend(50);
    NEXT();
    goto ***PC;
func_4997550736:
    extend(51);
    NEXT();
    goto ***PC;
func_4997550864:
    extend(52);
    NEXT();
    goto ***PC;
func_4997551056:
    extend(53);
    NEXT();
    goto ***PC;
func_4997551184:
    extend(54);
    NEXT();
    goto ***PC;
func_4997551312:
    extend(55);
    NEXT();
    goto ***PC;
func_4997551440:
    extend(56);
    NEXT();
    goto ***PC;
func_4997550992:
    extend(57);
    NEXT();
    goto ***PC;
func_4997549248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4997549248;
    goto ***PC;
func_4997547872:
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
    PC = exp_4997547872;
    goto ***PC;
func_4997552080:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_4997552208:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_4997552592:
    extend(97);
    NEXT();
    goto ***PC;
func_4997552720:
    extend(98);
    NEXT();
    goto ***PC;
func_4997552848:
    extend(99);
    NEXT();
    goto ***PC;
func_4997553008:
    extend(100);
    NEXT();
    goto ***PC;
func_4997553136:
    extend(101);
    NEXT();
    goto ***PC;
func_4997553328:
    extend(102);
    NEXT();
    goto ***PC;
func_4997553456:
    extend(103);
    NEXT();
    goto ***PC;
func_4997553584:
    extend(104);
    NEXT();
    goto ***PC;
func_4997553712:
    extend(105);
    NEXT();
    goto ***PC;
func_4997553264:
    extend(106);
    NEXT();
    goto ***PC;
func_4997552480:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4997550112:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4997550240:
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
func_4997552400:
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
    PC = exp_4997552400;
    goto ***PC;
func_4997554224:
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
    PC = func_4997546368_op0;
    goto ***PC;
}
