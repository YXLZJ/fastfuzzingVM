#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #define BUFFER_SIZE 512*1024*1024   // buffer for storing text
    #define MAX_DEPTH 60
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
        unsigned loop_limit = 23;
        static void * cf[] = {&&func_5299547536, &&func_5299548288, &&func_5299548448, &&func_5299548160, &&func_5299547808, &&func_5299547408, &&func_5299548048, &&func_5299548576, &&func_5299550208, &&func_5299547728, &&func_5299548768, &&func_5299548976, &&func_5299548896, &&func_5299549408, &&func_5299549696, &&func_5299549248, &&func_5299549168, &&func_5299549632, &&func_5299549952, &&func_5299550080, &&func_5299551232, &&func_5299551360, &&func_5299551488, &&func_5299551616, &&func_5299551744, &&func_5299551872, &&func_5299552032, &&func_5299552160, &&func_5299552320, &&func_5299552448, &&func_5299552672, &&func_5299552800, &&func_5299552976, &&func_5299550464, &&func_5299551104, &&func_5299550656, &&func_5299553552, &&func_5299553680, &&func_5299553808, &&func_5299554000, &&func_5299554128, &&func_5299554256, &&func_5299554384, &&func_5299553936, &&func_5299550592, &&func_5299554928, &&func_5299550784, &&func_5299550912, &&func_5299554784, &&func_5299555152, &&func_5299555280, &&func_5299549536, &&func_5299555888, &&func_5299550272, &&func_5299556144, &&func_5299555488, &&func_5299556448, &&func_5299556576, &&func_5299557920, &&func_5299558048, &&func_5299558176, &&func_5299558336, &&func_5299558464, &&func_5299558656, &&func_5299558784, &&func_5299553104, &&func_5299553232, &&func_5299558592, &&func_5299558848, &&func_5299558976, &&func_5299559104, &&func_5299559232, &&func_5299559360, &&func_5299559488, &&func_5299559616, &&func_5299553360, &&func_5299560000, &&func_5299560128, &&func_5299560256, &&func_5299560384, &&func_5299560512, &&func_5299560640, &&func_5299560768, &&func_5299560896, &&func_5299561024, &&func_5299561152, &&func_5299561280, &&func_5299561408, &&func_5299561536, &&func_5299561664, &&func_5299561792, &&func_5299559744, &&func_5299559872, &&func_5299562432, &&func_5299562560, &&func_5299562688, &&func_5299562816, &&func_5299562944, &&func_5299563072, &&func_5299563200, &&func_5299563328, &&func_5299563456, &&func_5299563584, &&func_5299563712, &&func_5299563840, &&func_5299563968, &&func_5299564096, &&func_5299564224, &&func_5299564352, &&func_5299564480, &&func_5299556272, &&func_5299555616, &&func_5299556848, &&func_5299556976, &&func_5299557472, &&func_5299557600, &&func_5299557104, &&func_5299557728, &&func_5299564688, &&func_5299564816, &&func_5299564944, &&func_5299565072, &&func_5299565200, &&func_5299565328, &&func_5299565456, &&func_5299564608, &&func_5299557376, &&RETURN, &&HALT};
        static void **func_5299547536_op0[2] = { cf+17, cf+127};
        static void **func_5299548288_op0[2] = { cf+20, cf+127};
        static void **func_5299548288_op1[2] = { cf+22, cf+127};
        static void **func_5299548288_op2[2] = { cf+24, cf+127};
        static void **func_5299548288_op3[2] = { cf+26, cf+127};
        static void **func_5299548288_op4[2] = { cf+28, cf+127};
        static void **func_5299548288_op5[2] = { cf+30, cf+127};
        static void **func_5299548288_op6[2] = { cf+32, cf+127};
        static void **func_5299548448_op0[2] = { cf+34, cf+127};
        static void **func_5299548448_op1[2] = { cf+35, cf+127};
        static void **func_5299548448_op2[2] = { cf+36, cf+127};
        static void **func_5299548448_op3[2] = { cf+37, cf+127};
        static void **func_5299548448_op4[2] = { cf+38, cf+127};
        static void **func_5299548448_op5[2] = { cf+39, cf+127};
        static void **func_5299548448_op6[2] = { cf+40, cf+127};
        static void **func_5299548448_op7[2] = { cf+41, cf+127};
        static void **func_5299548448_op8[2] = { cf+42, cf+127};
        static void **func_5299548448_op9[2] = { cf+43, cf+127};
        static void **func_5299548160_op0[2] = { cf+44, cf+127};
        static void **func_5299548160_op1[2] = { cf+46, cf+127};
        static void **func_5299548160_op2[2] = { cf+14, cf+127};
        static void **func_5299547808_op0[2] = { cf+48, cf+127};
        static void **func_5299547808_op1[2] = { cf+9, cf+127};
        static void **func_5299547808_op2[2] = { cf+6, cf+127};
        static void **func_5299547408_op0[2] = { cf+51, cf+127};
        static void **func_5299548048_op0[2] = { cf+55, cf+127};
        static void **func_5299548048_op1[2] = { cf+8, cf+127};
        static void **func_5299548576_op0[2] = { cf+56, cf+127};
        static void **func_5299550208_op0[2] = { cf+58, cf+127};
        static void **func_5299550208_op1[2] = { cf+59, cf+127};
        static void **func_5299550208_op2[2] = { cf+60, cf+127};
        static void **func_5299550208_op3[2] = { cf+61, cf+127};
        static void **func_5299550208_op4[2] = { cf+62, cf+127};
        static void **func_5299550208_op5[2] = { cf+63, cf+127};
        static void **func_5299550208_op6[2] = { cf+64, cf+127};
        static void **func_5299550208_op7[2] = { cf+65, cf+127};
        static void **func_5299550208_op8[2] = { cf+66, cf+127};
        static void **func_5299550208_op9[2] = { cf+67, cf+127};
        static void **func_5299550208_op10[2] = { cf+68, cf+127};
        static void **func_5299550208_op11[2] = { cf+69, cf+127};
        static void **func_5299550208_op12[2] = { cf+70, cf+127};
        static void **func_5299550208_op13[2] = { cf+71, cf+127};
        static void **func_5299550208_op14[2] = { cf+72, cf+127};
        static void **func_5299550208_op15[2] = { cf+73, cf+127};
        static void **func_5299550208_op16[2] = { cf+74, cf+127};
        static void **func_5299550208_op17[2] = { cf+75, cf+127};
        static void **func_5299550208_op18[2] = { cf+76, cf+127};
        static void **func_5299550208_op19[2] = { cf+77, cf+127};
        static void **func_5299550208_op20[2] = { cf+78, cf+127};
        static void **func_5299550208_op21[2] = { cf+79, cf+127};
        static void **func_5299550208_op22[2] = { cf+80, cf+127};
        static void **func_5299550208_op23[2] = { cf+81, cf+127};
        static void **func_5299550208_op24[2] = { cf+82, cf+127};
        static void **func_5299550208_op25[2] = { cf+83, cf+127};
        static void **func_5299550208_op26[2] = { cf+84, cf+127};
        static void **func_5299550208_op27[2] = { cf+85, cf+127};
        static void **func_5299550208_op28[2] = { cf+86, cf+127};
        static void **func_5299550208_op29[2] = { cf+87, cf+127};
        static void **func_5299550208_op30[2] = { cf+88, cf+127};
        static void **func_5299550208_op31[2] = { cf+89, cf+127};
        static void **func_5299550208_op32[2] = { cf+90, cf+127};
        static void **func_5299550208_op33[2] = { cf+91, cf+127};
        static void **func_5299550208_op34[2] = { cf+92, cf+127};
        static void **func_5299550208_op35[2] = { cf+93, cf+127};
        static void **func_5299550208_op36[2] = { cf+94, cf+127};
        static void **func_5299550208_op37[2] = { cf+95, cf+127};
        static void **func_5299550208_op38[2] = { cf+96, cf+127};
        static void **func_5299550208_op39[2] = { cf+97, cf+127};
        static void **func_5299550208_op40[2] = { cf+98, cf+127};
        static void **func_5299550208_op41[2] = { cf+99, cf+127};
        static void **func_5299550208_op42[2] = { cf+100, cf+127};
        static void **func_5299550208_op43[2] = { cf+101, cf+127};
        static void **func_5299550208_op44[2] = { cf+102, cf+127};
        static void **func_5299550208_op45[2] = { cf+103, cf+127};
        static void **func_5299550208_op46[2] = { cf+104, cf+127};
        static void **func_5299550208_op47[2] = { cf+105, cf+127};
        static void **func_5299550208_op48[2] = { cf+106, cf+127};
        static void **func_5299550208_op49[2] = { cf+107, cf+127};
        static void **func_5299550208_op50[2] = { cf+108, cf+127};
        static void **func_5299550208_op51[2] = { cf+109, cf+127};
        static void **func_5299547728_op0[2] = { cf+110, cf+127};
        static void **func_5299547728_op1[2] = { cf+2, cf+127};
        static void **func_5299548768_op0[2] = { cf+111, cf+127};
        static void **func_5299548768_op1[2] = { cf+13, cf+127};
        static void **func_5299548976_op0[2] = { cf+112, cf+127};
        static void **func_5299548896_op0[2] = { cf+10, cf+128};
        static void **func_5299549408_op0[2] = { cf+15, cf+127};
        static void **func_5299549408_op1[2] = { cf+0, cf+127};
        static void **func_5299549408_op2[2] = { cf+7, cf+127};
        static void **func_5299549408_op3[2] = { cf+16, cf+127};
        static void **func_5299549408_op4[2] = { cf+5, cf+127};
        static void **func_5299549408_op5[2] = { cf+11, cf+127};
        static void **func_5299549696_op0[2] = { cf+114, cf+127};
        static void **func_5299549696_op1[2] = { cf+116, cf+127};
        static void **func_5299549696_op2[2] = { cf+4, cf+127};
        static void **func_5299549248_op0[2] = { cf+118, cf+127};
        static void **func_5299549248_op1[2] = { cf+121, cf+127};
        static void **func_5299549248_op2[2] = { cf+123, cf+127};
        static void **func_5299549168_op0[2] = { cf+125, cf+127};
        static void **exp_5299549632[5] = {cf+6, cf+18, cf+3, cf+19, cf+127};
        static void **exp_5299551232[4] = {cf+3, cf+21, cf+3, cf+127};
        static void **exp_5299551488[4] = {cf+3, cf+23, cf+3, cf+127};
        static void **exp_5299551744[4] = {cf+3, cf+25, cf+3, cf+127};
        static void **exp_5299552032[4] = {cf+3, cf+27, cf+3, cf+127};
        static void **exp_5299552320[4] = {cf+1, cf+29, cf+1, cf+127};
        static void **exp_5299552672[4] = {cf+1, cf+31, cf+1, cf+127};
        static void **exp_5299552976[3] = {cf+33, cf+1, cf+127};
        static void **exp_5299550592[4] = {cf+3, cf+45, cf+14, cf+127};
        static void **exp_5299550784[4] = {cf+3, cf+47, cf+14, cf+127};
        static void **exp_5299554784[4] = {cf+49, cf+3, cf+50, cf+127};
        static void **exp_5299549536[8] = {cf+52, cf+6, cf+49, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5299555488[3] = {cf+8, cf+6, cf+127};
        static void **exp_5299556448[8] = {cf+57, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
        static void **exp_5299556272[3] = {cf+2, cf+9, cf+127};
        static void **exp_5299555616[3] = {cf+10, cf+13, cf+127};
        static void **exp_5299556848[4] = {cf+113, cf+3, cf+19, cf+127};
        static void **exp_5299557472[4] = {cf+14, cf+115, cf+4, cf+127};
        static void **exp_5299557104[4] = {cf+14, cf+117, cf+4, cf+127};
        static void **exp_5299564688[4] = {cf+119, cf+6, cf+120, cf+127};
        static void **exp_5299565072[4] = {cf+122, cf+6, cf+120, cf+127};
        static void **exp_5299565328[4] = {cf+124, cf+6, cf+120, cf+127};
        static void **exp_5299564608[8] = {cf+126, cf+49, cf+1, cf+50, cf+53, cf+10, cf+54, cf+127};
goto LOOP;

func_5299547536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299547536_op0;
        break;
    }
    goto ***PC;
func_5299548288:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548288_op0;
        break;
        case 1:
            PC = func_5299548288_op1;
        break;
        case 2:
            PC = func_5299548288_op2;
        break;
        case 3:
            PC = func_5299548288_op3;
        break;
        case 4:
            PC = func_5299548288_op4;
        break;
        case 5:
            PC = func_5299548288_op5;
        break;
        case 6:
            PC = func_5299548288_op6;
        break;
    }
    goto ***PC;
func_5299548448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548448_op0;
        break;
        case 1:
            PC = func_5299548448_op1;
        break;
        case 2:
            PC = func_5299548448_op2;
        break;
        case 3:
            PC = func_5299548448_op3;
        break;
        case 4:
            PC = func_5299548448_op4;
        break;
        case 5:
            PC = func_5299548448_op5;
        break;
        case 6:
            PC = func_5299548448_op6;
        break;
        case 7:
            PC = func_5299548448_op7;
        break;
        case 8:
            PC = func_5299548448_op8;
        break;
        case 9:
            PC = func_5299548448_op9;
        break;
    }
    goto ***PC;
func_5299548160:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548160_op0;
        break;
        case 1:
            PC = func_5299548160_op1;
        break;
        case 2:
            PC = func_5299548160_op2;
        break;
    }
    goto ***PC;
func_5299547808:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299547808_op0;
        break;
        case 1:
            PC = func_5299547808_op1;
        break;
        case 2:
            PC = func_5299547808_op2;
        break;
    }
    goto ***PC;
func_5299547408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299547408_op0;
        break;
    }
    goto ***PC;
func_5299548048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548048_op0;
        break;
        case 1:
            PC = func_5299548048_op1;
        break;
    }
    goto ***PC;
func_5299548576:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548576_op0;
        break;
    }
    goto ***PC;
func_5299550208:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        NEXT();
        goto ***PC;
    }
    xor(52);
    store();
    switch (branch) {
        case 0:
            PC = func_5299550208_op0;
        break;
        case 1:
            PC = func_5299550208_op1;
        break;
        case 2:
            PC = func_5299550208_op2;
        break;
        case 3:
            PC = func_5299550208_op3;
        break;
        case 4:
            PC = func_5299550208_op4;
        break;
        case 5:
            PC = func_5299550208_op5;
        break;
        case 6:
            PC = func_5299550208_op6;
        break;
        case 7:
            PC = func_5299550208_op7;
        break;
        case 8:
            PC = func_5299550208_op8;
        break;
        case 9:
            PC = func_5299550208_op9;
        break;
        case 10:
            PC = func_5299550208_op10;
        break;
        case 11:
            PC = func_5299550208_op11;
        break;
        case 12:
            PC = func_5299550208_op12;
        break;
        case 13:
            PC = func_5299550208_op13;
        break;
        case 14:
            PC = func_5299550208_op14;
        break;
        case 15:
            PC = func_5299550208_op15;
        break;
        case 16:
            PC = func_5299550208_op16;
        break;
        case 17:
            PC = func_5299550208_op17;
        break;
        case 18:
            PC = func_5299550208_op18;
        break;
        case 19:
            PC = func_5299550208_op19;
        break;
        case 20:
            PC = func_5299550208_op20;
        break;
        case 21:
            PC = func_5299550208_op21;
        break;
        case 22:
            PC = func_5299550208_op22;
        break;
        case 23:
            PC = func_5299550208_op23;
        break;
        case 24:
            PC = func_5299550208_op24;
        break;
        case 25:
            PC = func_5299550208_op25;
        break;
        case 26:
            PC = func_5299550208_op26;
        break;
        case 27:
            PC = func_5299550208_op27;
        break;
        case 28:
            PC = func_5299550208_op28;
        break;
        case 29:
            PC = func_5299550208_op29;
        break;
        case 30:
            PC = func_5299550208_op30;
        break;
        case 31:
            PC = func_5299550208_op31;
        break;
        case 32:
            PC = func_5299550208_op32;
        break;
        case 33:
            PC = func_5299550208_op33;
        break;
        case 34:
            PC = func_5299550208_op34;
        break;
        case 35:
            PC = func_5299550208_op35;
        break;
        case 36:
            PC = func_5299550208_op36;
        break;
        case 37:
            PC = func_5299550208_op37;
        break;
        case 38:
            PC = func_5299550208_op38;
        break;
        case 39:
            PC = func_5299550208_op39;
        break;
        case 40:
            PC = func_5299550208_op40;
        break;
        case 41:
            PC = func_5299550208_op41;
        break;
        case 42:
            PC = func_5299550208_op42;
        break;
        case 43:
            PC = func_5299550208_op43;
        break;
        case 44:
            PC = func_5299550208_op44;
        break;
        case 45:
            PC = func_5299550208_op45;
        break;
        case 46:
            PC = func_5299550208_op46;
        break;
        case 47:
            PC = func_5299550208_op47;
        break;
        case 48:
            PC = func_5299550208_op48;
        break;
        case 49:
            PC = func_5299550208_op49;
        break;
        case 50:
            PC = func_5299550208_op50;
        break;
        case 51:
            PC = func_5299550208_op51;
        break;
    }
    goto ***PC;
func_5299547728:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299547728_op0;
        break;
        case 1:
            PC = func_5299547728_op1;
        break;
    }
    goto ***PC;
func_5299548768:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548768_op0;
        break;
        case 1:
            PC = func_5299548768_op1;
        break;
    }
    goto ***PC;
func_5299548976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548976_op0;
        break;
    }
    goto ***PC;
func_5299548896:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299548896_op0;
        break;
    }
    goto ***PC;
func_5299549408:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549408_op0;
        break;
        case 1:
            PC = func_5299549408_op1;
        break;
        case 2:
            PC = func_5299549408_op2;
        break;
        case 3:
            PC = func_5299549408_op3;
        break;
        case 4:
            PC = func_5299549408_op4;
        break;
        case 5:
            PC = func_5299549408_op5;
        break;
    }
    goto ***PC;
func_5299549696:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549696_op0;
        break;
        case 1:
            PC = func_5299549696_op1;
        break;
        case 2:
            PC = func_5299549696_op2;
        break;
    }
    goto ***PC;
func_5299549248:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549248_op0;
        break;
        case 1:
            PC = func_5299549248_op1;
        break;
        case 2:
            PC = func_5299549248_op2;
        break;
    }
    goto ***PC;
func_5299549168:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5299549168_op0;
        break;
    }
    goto ***PC;
func_5299549632:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299549632;
    goto ***PC;
func_5299549952:
    extend(61);
    NEXT();
    goto ***PC;
func_5299550080:
    extend(59);
    NEXT();
    goto ***PC;
func_5299551232:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299551232;
    goto ***PC;
func_5299551360:
    extend(61);
    extend(61);
    NEXT();
    goto ***PC;
func_5299551488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299551488;
    goto ***PC;
func_5299551616:
    extend(33);
    extend(61);
    NEXT();
    goto ***PC;
func_5299551744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299551744;
    goto ***PC;
func_5299551872:
    extend(62);
    NEXT();
    goto ***PC;
func_5299552032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299552032;
    goto ***PC;
func_5299552160:
    extend(60);
    NEXT();
    goto ***PC;
func_5299552320:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299552320;
    goto ***PC;
func_5299552448:
    extend(65);
    extend(78);
    extend(68);
    NEXT();
    goto ***PC;
func_5299552672:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299552672;
    goto ***PC;
func_5299552800:
    extend(79);
    extend(82);
    NEXT();
    goto ***PC;
func_5299552976:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299552976;
    goto ***PC;
func_5299550464:
    extend(78);
    extend(79);
    extend(84);
    NEXT();
    goto ***PC;
func_5299551104:
    extend(48);
    NEXT();
    goto ***PC;
func_5299550656:
    extend(49);
    NEXT();
    goto ***PC;
func_5299553552:
    extend(50);
    NEXT();
    goto ***PC;
func_5299553680:
    extend(51);
    NEXT();
    goto ***PC;
func_5299553808:
    extend(52);
    NEXT();
    goto ***PC;
func_5299554000:
    extend(53);
    NEXT();
    goto ***PC;
func_5299554128:
    extend(54);
    NEXT();
    goto ***PC;
func_5299554256:
    extend(55);
    NEXT();
    goto ***PC;
func_5299554384:
    extend(56);
    NEXT();
    goto ***PC;
func_5299553936:
    extend(57);
    NEXT();
    goto ***PC;
func_5299550592:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299550592;
    goto ***PC;
func_5299554928:
    extend(43);
    NEXT();
    goto ***PC;
func_5299550784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299550784;
    goto ***PC;
func_5299550912:
    extend(45);
    NEXT();
    goto ***PC;
func_5299554784:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299554784;
    goto ***PC;
func_5299555152:
    extend(40);
    NEXT();
    goto ***PC;
func_5299555280:
    extend(41);
    NEXT();
    goto ***PC;
func_5299549536:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299549536;
    goto ***PC;
func_5299555888:
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    NEXT();
    goto ***PC;
func_5299550272:
    extend(123);
    NEXT();
    goto ***PC;
func_5299556144:
    extend(125);
    NEXT();
    goto ***PC;
func_5299555488:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(90);
        extend(90);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299555488;
    goto ***PC;
func_5299556448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299556448;
    goto ***PC;
func_5299556576:
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
    goto ***PC;
func_5299557920:
    extend(97);
    NEXT();
    goto ***PC;
func_5299558048:
    extend(98);
    NEXT();
    goto ***PC;
func_5299558176:
    extend(99);
    NEXT();
    goto ***PC;
func_5299558336:
    extend(100);
    NEXT();
    goto ***PC;
func_5299558464:
    extend(101);
    NEXT();
    goto ***PC;
func_5299558656:
    extend(102);
    NEXT();
    goto ***PC;
func_5299558784:
    extend(103);
    NEXT();
    goto ***PC;
func_5299553104:
    extend(104);
    NEXT();
    goto ***PC;
func_5299553232:
    extend(105);
    NEXT();
    goto ***PC;
func_5299558592:
    extend(106);
    NEXT();
    goto ***PC;
func_5299558848:
    extend(107);
    NEXT();
    goto ***PC;
func_5299558976:
    extend(108);
    NEXT();
    goto ***PC;
func_5299559104:
    extend(109);
    NEXT();
    goto ***PC;
func_5299559232:
    extend(110);
    NEXT();
    goto ***PC;
func_5299559360:
    extend(111);
    NEXT();
    goto ***PC;
func_5299559488:
    extend(112);
    NEXT();
    goto ***PC;
func_5299559616:
    extend(113);
    NEXT();
    goto ***PC;
func_5299553360:
    extend(114);
    NEXT();
    goto ***PC;
func_5299560000:
    extend(115);
    NEXT();
    goto ***PC;
func_5299560128:
    extend(116);
    NEXT();
    goto ***PC;
func_5299560256:
    extend(117);
    NEXT();
    goto ***PC;
func_5299560384:
    extend(118);
    NEXT();
    goto ***PC;
func_5299560512:
    extend(119);
    NEXT();
    goto ***PC;
func_5299560640:
    extend(120);
    NEXT();
    goto ***PC;
func_5299560768:
    extend(121);
    NEXT();
    goto ***PC;
func_5299560896:
    extend(122);
    NEXT();
    goto ***PC;
func_5299561024:
    extend(65);
    NEXT();
    goto ***PC;
func_5299561152:
    extend(66);
    NEXT();
    goto ***PC;
func_5299561280:
    extend(67);
    NEXT();
    goto ***PC;
func_5299561408:
    extend(68);
    NEXT();
    goto ***PC;
func_5299561536:
    extend(69);
    NEXT();
    goto ***PC;
func_5299561664:
    extend(70);
    NEXT();
    goto ***PC;
func_5299561792:
    extend(71);
    NEXT();
    goto ***PC;
func_5299559744:
    extend(72);
    NEXT();
    goto ***PC;
func_5299559872:
    extend(73);
    NEXT();
    goto ***PC;
func_5299562432:
    extend(74);
    NEXT();
    goto ***PC;
func_5299562560:
    extend(75);
    NEXT();
    goto ***PC;
func_5299562688:
    extend(76);
    NEXT();
    goto ***PC;
func_5299562816:
    extend(77);
    NEXT();
    goto ***PC;
func_5299562944:
    extend(78);
    NEXT();
    goto ***PC;
func_5299563072:
    extend(79);
    NEXT();
    goto ***PC;
func_5299563200:
    extend(80);
    NEXT();
    goto ***PC;
func_5299563328:
    extend(81);
    NEXT();
    goto ***PC;
func_5299563456:
    extend(82);
    NEXT();
    goto ***PC;
func_5299563584:
    extend(83);
    NEXT();
    goto ***PC;
func_5299563712:
    extend(84);
    NEXT();
    goto ***PC;
func_5299563840:
    extend(85);
    NEXT();
    goto ***PC;
func_5299563968:
    extend(86);
    NEXT();
    goto ***PC;
func_5299564096:
    extend(87);
    NEXT();
    goto ***PC;
func_5299564224:
    extend(88);
    NEXT();
    goto ***PC;
func_5299564352:
    extend(89);
    NEXT();
    goto ***PC;
func_5299564480:
    extend(90);
    NEXT();
    goto ***PC;
func_5299556272:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299556272;
    goto ***PC;
func_5299555616:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299555616;
    goto ***PC;
func_5299556848:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299556848;
    goto ***PC;
func_5299556976:
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    NEXT();
    goto ***PC;
func_5299557472:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299557472;
    goto ***PC;
func_5299557600:
    extend(42);
    NEXT();
    goto ***PC;
func_5299557104:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299557104;
    goto ***PC;
func_5299557728:
    extend(47);
    NEXT();
    goto ***PC;
func_5299564688:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299564688;
    goto ***PC;
func_5299564816:
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5299564944:
    extend(32);
    extend(59);
    extend(32);
    NEXT();
    goto ***PC;
func_5299565072:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299565072;
    goto ***PC;
func_5299565200:
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    NEXT();
    goto ***PC;
func_5299565328:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299565328;
    goto ***PC;
func_5299565456:
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    NEXT();
    goto ***PC;
func_5299564608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        NEXT();
        goto ***PC;
    }
    store();
    PC = exp_5299564608;
    goto ***PC;
func_5299557376:
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
    PC = func_5299548896_op0;
    goto ***PC;
}
