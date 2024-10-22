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
        unsigned loop_limit = 12;
        static void * cf[] = {&&func_5257585376, &&func_5257594816, &&func_5257594736, &&func_5257594656, &&func_5257595280, &&func_5257594384, &&func_5257595808, &&func_5257594576, &&func_5257595104, &&func_5257595168, &&func_5257596048, &&func_5257596176, &&func_5257596400, &&func_5257596528, &&func_5257596656, &&func_5257597024, &&func_5257597152, &&func_5257595472, &&func_5257597536, &&func_5257597664, &&func_5257597792, &&func_5257597920, &&func_5257598048, &&func_5257598208, &&func_5257598336, &&func_5257598560, &&func_5257598688, &&func_5257598816, &&func_5257598944, &&func_5257599072, &&func_5257599264, &&func_5257598496, &&func_5257596304, &&func_5257597280, &&func_5257597408, &&func_5257596848, &&func_5257600752, &&func_5257600880, &&func_5257600688, &&func_5257599920, &&func_5257596912, &&func_5257601328, &&func_5257601456, &&func_5257601584, &&func_5257601776, &&func_5257601904, &&func_5257602032, &&func_5257602160, &&func_5257601712, &&func_5257602480, &&func_5257602608, &&func_5257599744, &&func_5257599456, &&func_5257602880, &&func_5257603008, &&RETURN, &&HALT};
        static void **func_5257585376_op0[2] = { cf+12, cf+55};
        static void **func_5257594816_op0[2] = { cf+15, cf+55};
        static void **func_5257594816_op1[2] = { cf+17, cf+55};
        static void **func_5257594816_op2[2] = { cf+19, cf+55};
        static void **func_5257594736_op0[2] = { cf+21, cf+55};
        static void **func_5257594736_op1[2] = { cf+11, cf+55};
        static void **func_5257594736_op2[2] = { cf+23, cf+55};
        static void **func_5257594656_op0[2] = { cf+6, cf+55};
        static void **func_5257594656_op1[2] = { cf+4, cf+55};
        static void **func_5257595280_op0[2] = { cf+25, cf+55};
        static void **func_5257595280_op1[2] = { cf+26, cf+55};
        static void **func_5257595280_op2[2] = { cf+27, cf+55};
        static void **func_5257595280_op3[2] = { cf+28, cf+55};
        static void **func_5257595280_op4[2] = { cf+29, cf+55};
        static void **func_5257595280_op5[2] = { cf+30, cf+55};
        static void **func_5257594384_op0[2] = { cf+31, cf+55};
        static void **func_5257594384_op1[2] = { cf+38, cf+55};
        static void **func_5257595808_op0[2] = { cf+39, cf+55};
        static void **func_5257595808_op1[2] = { cf+40, cf+55};
        static void **func_5257595808_op2[2] = { cf+41, cf+55};
        static void **func_5257595808_op3[2] = { cf+42, cf+55};
        static void **func_5257595808_op4[2] = { cf+43, cf+55};
        static void **func_5257595808_op5[2] = { cf+44, cf+55};
        static void **func_5257595808_op6[2] = { cf+45, cf+55};
        static void **func_5257595808_op7[2] = { cf+46, cf+55};
        static void **func_5257595808_op8[2] = { cf+47, cf+55};
        static void **func_5257595808_op9[2] = { cf+48, cf+55};
        static void **func_5257594576_op0[2] = { cf+49, cf+55};
        static void **func_5257595104_op0[2] = { cf+5, cf+56};
        static void **func_5257595168_op0[2] = { cf+5, cf+55};
        static void **func_5257595168_op1[2] = { cf+0, cf+55};
        static void **func_5257595168_op2[2] = { cf+7, cf+55};
        static void **func_5257596048_op0[2] = { cf+51, cf+55};
        static void **func_5257596048_op1[2] = { cf+52, cf+55};
        static void **func_5257596176_op0[2] = { cf+3, cf+55};
        static void **func_5257596176_op1[2] = { cf+53, cf+55};
        static void **exp_5257596400[5] = {cf+4, cf+13, cf+2, cf+14, cf+55};
        static void **exp_5257597024[4] = {cf+2, cf+16, cf+2, cf+55};
        static void **exp_5257595472[4] = {cf+2, cf+18, cf+2, cf+55};
        static void **exp_5257597664[4] = {cf+2, cf+20, cf+2, cf+55};
        static void **exp_5257597920[4] = {cf+11, cf+22, cf+2, cf+55};
        static void **exp_5257598208[4] = {cf+11, cf+24, cf+2, cf+55};
        static void **exp_5257598496[12] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+37, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5257600688[8] = {cf+32, cf+33, cf+1, cf+34, cf+35, cf+10, cf+36, cf+55};
        static void **exp_5257602480[6] = {cf+50, cf+33, cf+2, cf+34, cf+14, cf+55};
        static void **exp_5257599744[3] = {cf+9, cf+10, cf+55};
        static void **exp_5257599456[1] = {cf+55};
        static void **exp_5257602880[4] = {cf+3, cf+54, cf+11, cf+55};
goto LOOP;

func_5257585376:
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
            PC = func_5257585376_op0;
        break;
    }
    goto ***PC;
func_5257594816:
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
            PC = func_5257594816_op0;
        break;
        case 1:
            PC = func_5257594816_op1;
        break;
        case 2:
            PC = func_5257594816_op2;
        break;
    }
    goto ***PC;
func_5257594736:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5257594736_op0;
        break;
        case 1:
            PC = func_5257594736_op1;
        break;
        case 2:
            PC = func_5257594736_op2;
        break;
    }
    goto ***PC;
func_5257594656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257594656_op0;
        break;
        case 1:
            PC = func_5257594656_op1;
        break;
    }
    goto ***PC;
func_5257595280:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5257595280_op0;
        break;
        case 1:
            PC = func_5257595280_op1;
        break;
        case 2:
            PC = func_5257595280_op2;
        break;
        case 3:
            PC = func_5257595280_op3;
        break;
        case 4:
            PC = func_5257595280_op4;
        break;
        case 5:
            PC = func_5257595280_op5;
        break;
    }
    goto ***PC;
func_5257594384:
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
            PC = func_5257594384_op0;
        break;
        case 1:
            PC = func_5257594384_op1;
        break;
    }
    goto ***PC;
func_5257595808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5257595808_op0;
        break;
        case 1:
            PC = func_5257595808_op1;
        break;
        case 2:
            PC = func_5257595808_op2;
        break;
        case 3:
            PC = func_5257595808_op3;
        break;
        case 4:
            PC = func_5257595808_op4;
        break;
        case 5:
            PC = func_5257595808_op5;
        break;
        case 6:
            PC = func_5257595808_op6;
        break;
        case 7:
            PC = func_5257595808_op7;
        break;
        case 8:
            PC = func_5257595808_op8;
        break;
        case 9:
            PC = func_5257595808_op9;
        break;
    }
    goto ***PC;
func_5257594576:
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
            PC = func_5257594576_op0;
        break;
    }
    goto ***PC;
func_5257595104:
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
            PC = func_5257595104_op0;
        break;
    }
    goto ***PC;
func_5257595168:
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
            PC = func_5257595168_op0;
        break;
        case 1:
            PC = func_5257595168_op1;
        break;
        case 2:
            PC = func_5257595168_op2;
        break;
    }
    goto ***PC;
func_5257596048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257596048_op0;
        break;
        case 1:
            PC = func_5257596048_op1;
        break;
    }
    goto ***PC;
func_5257596176:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5257596176_op0;
        break;
        case 1:
            PC = func_5257596176_op1;
        break;
    }
    goto ***PC;
func_5257596400:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257596400;
    goto ***PC;
func_5257596528:
    extend(61);
    NEXT();
    goto ***PC;
func_5257596656:
    extend(59);
    NEXT();
    goto ***PC;
func_5257597024:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257597024;
    goto ***PC;
func_5257597152:
    extend(62);
    NEXT();
    goto ***PC;
func_5257595472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257595472;
    goto ***PC;
func_5257597536:
    extend(60);
    NEXT();
    goto ***PC;
func_5257597664:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257597664;
    goto ***PC;
func_5257597792:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5257597920:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257597920;
    goto ***PC;
func_5257598048:
    extend(43);
    NEXT();
    goto ***PC;
func_5257598208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257598208;
    goto ***PC;
func_5257598336:
    extend(45);
    NEXT();
    goto ***PC;
func_5257598560:
    extend(120);
    NEXT();
    goto ***PC;
func_5257598688:
    extend(121);
    NEXT();
    goto ***PC;
func_5257598816:
    extend(122);
    NEXT();
    goto ***PC;
func_5257598944:
    extend(97);
    NEXT();
    goto ***PC;
func_5257599072:
    extend(98);
    NEXT();
    goto ***PC;
func_5257599264:
    extend(99);
    NEXT();
    goto ***PC;
func_5257598496:
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
    PC = exp_5257598496;
    goto ***PC;
func_5257596304:
    extend(105);
    extend(102);
    NEXT();
    goto ***PC;
func_5257597280:
    extend(40);
    NEXT();
    goto ***PC;
func_5257597408:
    extend(41);
    NEXT();
    goto ***PC;
func_5257596848:
    extend(123);
    NEXT();
    goto ***PC;
func_5257600752:
    extend(125);
    NEXT();
    goto ***PC;
func_5257600880:
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
    goto ***PC;
func_5257600688:
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
    PC = exp_5257600688;
    goto ***PC;
func_5257599920:
    extend(48);
    NEXT();
    goto ***PC;
func_5257596912:
    extend(49);
    NEXT();
    goto ***PC;
func_5257601328:
    extend(50);
    NEXT();
    goto ***PC;
func_5257601456:
    extend(51);
    NEXT();
    goto ***PC;
func_5257601584:
    extend(52);
    NEXT();
    goto ***PC;
func_5257601776:
    extend(53);
    NEXT();
    goto ***PC;
func_5257601904:
    extend(54);
    NEXT();
    goto ***PC;
func_5257602032:
    extend(55);
    NEXT();
    goto ***PC;
func_5257602160:
    extend(56);
    NEXT();
    goto ***PC;
func_5257601712:
    extend(57);
    NEXT();
    goto ***PC;
func_5257602480:
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
    PC = exp_5257602480;
    goto ***PC;
func_5257602608:
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
    goto ***PC;
func_5257599744:
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
    PC = exp_5257599744;
    goto ***PC;
func_5257599456:
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257599456;
    goto ***PC;
func_5257602880:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5257602880;
    goto ***PC;
func_5257603008:
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
    PC = func_5257595104_op0;
    goto ***PC;
}
