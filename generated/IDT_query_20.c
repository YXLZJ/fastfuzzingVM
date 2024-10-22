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
        unsigned loop_limit = 7;
        static void * cf[] = {&&func_4830806528, &&func_4830816080, &&func_4830816384, &&func_4830816736, &&func_4830816448, &&func_4830816000, &&func_4830815872, &&func_4830817200, &&func_4830816240, &&func_4830816864, &&func_4830816992, &&func_4830817120, &&func_4830817616, &&func_4830817744, &&func_4830817904, &&func_4830818112, &&func_4830818240, &&func_4830818624, &&func_4830817488, &&func_4830818976, &&func_4830816304, &&func_4830819168, &&func_4830819296, &&func_4830819424, &&func_4830819888, &&func_4830818032, &&func_4830820080, &&func_4830820240, &&func_4830820368, &&func_4830820560, &&func_4830820688, &&func_4830820816, &&func_4830820944, &&func_4830820496, &&func_4830818752, &&func_4830817376, &&func_4830821584, &&func_4830821712, &&func_4830822096, &&func_4830822224, &&func_4830822352, &&func_4830822512, &&func_4830822640, &&func_4830822832, &&func_4830822960, &&func_4830823088, &&func_4830823216, &&func_4830822768, &&func_4830821984, &&func_4830819616, &&func_4830819744, &&func_4830821904, &&func_4830823728, &&RETURN, &&HALT};
        static void **func_4830806528_op0[2] = { cf+11, cf+53};
        static void **func_4830806528_op1[2] = { cf+12, cf+53};
        static void **func_4830806528_op2[2] = { cf+13, cf+53};
        static void **func_4830806528_op3[2] = { cf+14, cf+53};
        static void **func_4830816080_op0[2] = { cf+15, cf+53};
        static void **func_4830816080_op1[2] = { cf+16, cf+53};
        static void **func_4830816384_op0[2] = { cf+18, cf+53};
        static void **func_4830816384_op1[2] = { cf+20, cf+53};
        static void **func_4830816384_op2[2] = { cf+22, cf+53};
        static void **func_4830816736_op0[2] = { cf+24, cf+53};
        static void **func_4830816736_op1[2] = { cf+25, cf+53};
        static void **func_4830816736_op2[2] = { cf+26, cf+53};
        static void **func_4830816736_op3[2] = { cf+27, cf+53};
        static void **func_4830816736_op4[2] = { cf+28, cf+53};
        static void **func_4830816736_op5[2] = { cf+29, cf+53};
        static void **func_4830816736_op6[2] = { cf+30, cf+53};
        static void **func_4830816736_op7[2] = { cf+31, cf+53};
        static void **func_4830816736_op8[2] = { cf+32, cf+53};
        static void **func_4830816736_op9[2] = { cf+33, cf+53};
        static void **func_4830816448_op0[2] = { cf+3, cf+53};
        static void **func_4830816448_op1[2] = { cf+34, cf+53};
        static void **func_4830816000_op0[2] = { cf+35, cf+53};
        static void **func_4830815872_op0[2] = { cf+5, cf+54};
        static void **func_4830817200_op0[2] = { cf+38, cf+53};
        static void **func_4830817200_op1[2] = { cf+39, cf+53};
        static void **func_4830817200_op2[2] = { cf+40, cf+53};
        static void **func_4830817200_op3[2] = { cf+41, cf+53};
        static void **func_4830817200_op4[2] = { cf+42, cf+53};
        static void **func_4830817200_op5[2] = { cf+43, cf+53};
        static void **func_4830817200_op6[2] = { cf+44, cf+53};
        static void **func_4830817200_op7[2] = { cf+45, cf+53};
        static void **func_4830817200_op8[2] = { cf+46, cf+53};
        static void **func_4830817200_op9[2] = { cf+47, cf+53};
        static void **func_4830816240_op0[2] = { cf+48, cf+53};
        static void **func_4830816240_op1[2] = { cf+49, cf+53};
        static void **func_4830816240_op2[2] = { cf+50, cf+53};
        static void **func_4830816864_op0[2] = { cf+4, cf+53};
        static void **func_4830816864_op1[2] = { cf+7, cf+53};
        static void **func_4830816992_op0[2] = { cf+51, cf+53};
        static void **exp_4830818240[4] = {cf+0, cf+17, cf+1, cf+53};
        static void **exp_4830817488[4] = {cf+0, cf+19, cf+9, cf+53};
        static void **exp_4830816304[4] = {cf+2, cf+21, cf+2, cf+53};
        static void **exp_4830819296[4] = {cf+2, cf+23, cf+2, cf+53};
        static void **exp_4830818752[3] = {cf+3, cf+4, cf+53};
        static void **exp_4830817376[6] = {cf+36, cf+1, cf+37, cf+8, cf+10, cf+53};
        static void **exp_4830821904[3] = {cf+52, cf+2, cf+53};
goto LOOP;

func_4830806528:
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
            PC = func_4830806528_op0;
        break;
        case 1:
            PC = func_4830806528_op1;
        break;
        case 2:
            PC = func_4830806528_op2;
        break;
        case 3:
            PC = func_4830806528_op3;
        break;
    }
    goto ***PC;
func_4830816080:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4830816080_op0;
        break;
        case 1:
            PC = func_4830816080_op1;
        break;
    }
    goto ***PC;
func_4830816384:
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
            PC = func_4830816384_op0;
        break;
        case 1:
            PC = func_4830816384_op1;
        break;
        case 2:
            PC = func_4830816384_op2;
        break;
    }
    goto ***PC;
func_4830816736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4830816736_op0;
        break;
        case 1:
            PC = func_4830816736_op1;
        break;
        case 2:
            PC = func_4830816736_op2;
        break;
        case 3:
            PC = func_4830816736_op3;
        break;
        case 4:
            PC = func_4830816736_op4;
        break;
        case 5:
            PC = func_4830816736_op5;
        break;
        case 6:
            PC = func_4830816736_op6;
        break;
        case 7:
            PC = func_4830816736_op7;
        break;
        case 8:
            PC = func_4830816736_op8;
        break;
        case 9:
            PC = func_4830816736_op9;
        break;
    }
    goto ***PC;
func_4830816448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4830816448_op0;
        break;
        case 1:
            PC = func_4830816448_op1;
        break;
    }
    goto ***PC;
func_4830816000:
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
            PC = func_4830816000_op0;
        break;
    }
    goto ***PC;
func_4830815872:
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
            PC = func_4830815872_op0;
        break;
    }
    goto ***PC;
func_4830817200:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4830817200_op0;
        break;
        case 1:
            PC = func_4830817200_op1;
        break;
        case 2:
            PC = func_4830817200_op2;
        break;
        case 3:
            PC = func_4830817200_op3;
        break;
        case 4:
            PC = func_4830817200_op4;
        break;
        case 5:
            PC = func_4830817200_op5;
        break;
        case 6:
            PC = func_4830817200_op6;
        break;
        case 7:
            PC = func_4830817200_op7;
        break;
        case 8:
            PC = func_4830817200_op8;
        break;
        case 9:
            PC = func_4830817200_op9;
        break;
    }
    goto ***PC;
func_4830816240:
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
            PC = func_4830816240_op0;
        break;
        case 1:
            PC = func_4830816240_op1;
        break;
        case 2:
            PC = func_4830816240_op2;
        break;
    }
    goto ***PC;
func_4830816864:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4830816864_op0;
        break;
        case 1:
            PC = func_4830816864_op1;
        break;
    }
    goto ***PC;
func_4830816992:
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
            PC = func_4830816992_op0;
        break;
    }
    goto ***PC;
func_4830817120:
    extend(105);
    extend(100);
    NEXT();
    goto ***PC;
func_4830817616:
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
    goto ***PC;
func_4830817744:
    extend(97);
    extend(103);
    extend(101);
    NEXT();
    goto ***PC;
func_4830817904:
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
    goto ***PC;
func_4830818112:
    extend(42);
    NEXT();
    goto ***PC;
func_4830818240:
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
    PC = exp_4830818240;
    goto ***PC;
func_4830818624:
    extend(44);
    NEXT();
    goto ***PC;
func_4830817488:
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
    PC = exp_4830817488;
    goto ***PC;
func_4830818976:
    extend(61);
    NEXT();
    goto ***PC;
func_4830816304:
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
    PC = exp_4830816304;
    goto ***PC;
func_4830819168:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_4830819296:
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
    PC = exp_4830819296;
    goto ***PC;
func_4830819424:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_4830819888:
    extend(48);
    NEXT();
    goto ***PC;
func_4830818032:
    extend(49);
    NEXT();
    goto ***PC;
func_4830820080:
    extend(50);
    NEXT();
    goto ***PC;
func_4830820240:
    extend(51);
    NEXT();
    goto ***PC;
func_4830820368:
    extend(52);
    NEXT();
    goto ***PC;
func_4830820560:
    extend(53);
    NEXT();
    goto ***PC;
func_4830820688:
    extend(54);
    NEXT();
    goto ***PC;
func_4830820816:
    extend(55);
    NEXT();
    goto ***PC;
func_4830820944:
    extend(56);
    NEXT();
    goto ***PC;
func_4830820496:
    extend(57);
    NEXT();
    goto ***PC;
func_4830818752:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_4830818752;
    goto ***PC;
func_4830817376:
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
    PC = exp_4830817376;
    goto ***PC;
func_4830821584:
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
    goto ***PC;
func_4830821712:
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
    goto ***PC;
func_4830822096:
    extend(97);
    NEXT();
    goto ***PC;
func_4830822224:
    extend(98);
    NEXT();
    goto ***PC;
func_4830822352:
    extend(99);
    NEXT();
    goto ***PC;
func_4830822512:
    extend(100);
    NEXT();
    goto ***PC;
func_4830822640:
    extend(101);
    NEXT();
    goto ***PC;
func_4830822832:
    extend(102);
    NEXT();
    goto ***PC;
func_4830822960:
    extend(103);
    NEXT();
    goto ***PC;
func_4830823088:
    extend(104);
    NEXT();
    goto ***PC;
func_4830823216:
    extend(105);
    NEXT();
    goto ***PC;
func_4830822768:
    extend(106);
    NEXT();
    goto ***PC;
func_4830821984:
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4830819616:
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
    goto ***PC;
func_4830819744:
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
func_4830821904:
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
    PC = exp_4830821904;
    goto ***PC;
func_4830823728:
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
    PC = func_4830815872_op0;
    goto ***PC;
}
