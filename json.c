#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 32
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
unsigned *PC; // program counter (now a void pointer)

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

#define NEXT PC++

// the stack from frames
typedef struct {
    void *frames[MAX_DEPTH];     // the first pointer of frames
    void **top;              // the top of stack
} Stack;

Stack stack;

bool endless = false;
#define GO switch(*PC) {case 0: goto func_5418017744;case 1: goto func_5418018304;case 2: goto func_5418018112;case 3: goto func_5418017872;case 4: goto func_5418018048;case 5: goto func_5418018528;case 6: goto func_5418018656;case 7: goto func_5418018448;case 8: goto func_5418019008;case 9: goto func_5418019440;case 10: goto func_5418019376;case 11: goto func_5418019632;case 12: goto func_5418019200;case 13: goto func_5418019760;case 14: goto func_5418020224;case 15: goto func_5418020352;case 16: goto func_5418020480;case 17: goto func_5418019072;case 18: goto func_5418020864;case 19: goto func_5418021056;case 20: goto func_5418021184;case 21: goto func_5418021312;case 22: goto func_5418021440;case 23: goto func_5418020992;case 24: goto func_5418018928;case 25: goto func_5418021824;case 26: goto func_5418019968;case 27: goto func_5418020096;case 28: goto func_5418022032;case 29: goto func_5418022160;case 30: goto func_5418022288;case 31: goto func_5418022464;case 32: goto func_5418022608;case 33: goto func_5418020608;case 34: goto func_5418021952;case 35: goto func_5418023376;case 36: goto func_5418023504;case 37: goto func_5418023664;case 38: goto func_5418023792;case 39: goto func_5418023216;case 40: goto func_5418024320;case 41: goto func_5418024448;case 42: goto RETURN;case 43: goto HALT;}
int main() {
    seed = time(NULL);
    initStack();
    static unsigned func_5418017744_op0[2] = { 10, 42};
    static unsigned func_5418017744_op1[2] = { 13, 42};
    static unsigned func_5418018304_op0[2] = { 14, 42};
    static unsigned func_5418018304_op1[2] = { 15, 42};
    static unsigned func_5418018304_op2[2] = { 16, 42};
    static unsigned func_5418018304_op3[2] = { 17, 42};
    static unsigned func_5418018304_op4[2] = { 18, 42};
    static unsigned func_5418018304_op5[2] = { 19, 42};
    static unsigned func_5418018304_op6[2] = { 20, 42};
    static unsigned func_5418018304_op7[2] = { 21, 42};
    static unsigned func_5418018304_op8[2] = { 22, 42};
    static unsigned func_5418018304_op9[2] = { 23, 42};
    static unsigned func_5418018112_op0[2] = { 24, 42};
    static unsigned func_5418018112_op1[2] = { 9, 42};
    static unsigned func_5418017872_op0[2] = { 26, 42};
    static unsigned func_5418017872_op1[2] = { 6, 42};
    static unsigned func_5418018048_op0[2] = { 1, 42};
    static unsigned func_5418018048_op1[2] = { 27, 42};
    static unsigned func_5418018528_op0[2] = { 28, 42};
    static unsigned func_5418018528_op1[2] = { 31, 42};
    static unsigned func_5418018656_op0[2] = { 32, 42};
    static unsigned func_5418018448_op0[2] = { 9, 43};
    static unsigned func_5418019008_op0[2] = { 34, 42};
    static unsigned func_5418019008_op1[2] = { 35, 42};
    static unsigned func_5418019008_op2[2] = { 36, 42};
    static unsigned func_5418019008_op3[2] = { 37, 42};
    static unsigned func_5418019008_op4[2] = { 38, 42};
    static unsigned func_5418019440_op0[2] = { 5, 42};
    static unsigned func_5418019440_op1[2] = { 0, 42};
    static unsigned func_5418019440_op2[2] = { 8, 42};
    static unsigned func_5418019440_op3[2] = { 4, 42};
    static unsigned func_5418019440_op4[2] = { 39, 42};
    static unsigned func_5418019440_op5[2] = { 40, 42};
    static unsigned func_5418019440_op6[2] = { 41, 42};
    static unsigned exp_5418019376[4] = {11, 2, 12, 42};
    static unsigned exp_5418019760[3] = {11, 12, 42};
    static unsigned exp_5418018928[4] = {9, 25, 2, 42};
    static unsigned exp_5418019968[4] = {6, 25, 3, 42};
    static unsigned exp_5418020096[3] = {1, 4, 42};
    static unsigned exp_5418022032[4] = {29, 3, 30, 42};
    static unsigned exp_5418022464[3] = {29, 30, 42};
    static unsigned exp_5418022608[4] = {8, 33, 9, 42};
goto LOOP;

func_5418017744:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT;
        GO;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5418017744_op0;
        break;
        case 1:
            PC = func_5418017744_op1;
        break;
    }
    GO;
func_5418018304:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT;
        GO;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018304_op0;
        break;
        case 1:
            PC = func_5418018304_op1;
        break;
        case 2:
            PC = func_5418018304_op2;
        break;
        case 3:
            PC = func_5418018304_op3;
        break;
        case 4:
            PC = func_5418018304_op4;
        break;
        case 5:
            PC = func_5418018304_op5;
        break;
        case 6:
            PC = func_5418018304_op6;
        break;
        case 7:
            PC = func_5418018304_op7;
        break;
        case 8:
            PC = func_5418018304_op8;
        break;
        case 9:
            PC = func_5418018304_op9;
        break;
    }
    GO;
func_5418018112:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018112_op0;
        break;
        case 1:
            PC = func_5418018112_op1;
        break;
    }
    GO;
func_5418017872:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5418017872_op0;
        break;
        case 1:
            PC = func_5418017872_op1;
        break;
    }
    GO;
func_5418018048:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT;
        GO;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018048_op0;
        break;
        case 1:
            PC = func_5418018048_op1;
        break;
    }
    GO;
func_5418018528:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT;
        GO;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018528_op0;
        break;
        case 1:
            PC = func_5418018528_op1;
        break;
    }
    GO;
func_5418018656:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018656_op0;
        break;
    }
    GO;
func_5418018448:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5418018448_op0;
        break;
    }
    GO;
func_5418019008:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT;
        GO;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5418019008_op0;
        break;
        case 1:
            PC = func_5418019008_op1;
        break;
        case 2:
            PC = func_5418019008_op2;
        break;
        case 3:
            PC = func_5418019008_op3;
        break;
        case 4:
            PC = func_5418019008_op4;
        break;
    }
    GO;
func_5418019440:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5418019440_op0;
        break;
        case 1:
            PC = func_5418019440_op1;
        break;
        case 2:
            PC = func_5418019440_op2;
        break;
        case 3:
            PC = func_5418019440_op3;
        break;
        case 4:
            PC = func_5418019440_op4;
        break;
        case 5:
            PC = func_5418019440_op5;
        break;
        case 6:
            PC = func_5418019440_op6;
        break;
    }
    GO;
func_5418019376:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418019376;
    GO;
func_5418019632:
    extend(91);
    NEXT;
    GO;
func_5418019200:
    extend(93);
    NEXT;
    GO;
func_5418019760:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418019760;
    GO;
func_5418020224:
    extend(48);
    NEXT;
    GO;
func_5418020352:
    extend(49);
    NEXT;
    GO;
func_5418020480:
    extend(50);
    NEXT;
    GO;
func_5418019072:
    extend(51);
    NEXT;
    GO;
func_5418020864:
    extend(52);
    NEXT;
    GO;
func_5418021056:
    extend(53);
    NEXT;
    GO;
func_5418021184:
    extend(54);
    NEXT;
    GO;
func_5418021312:
    extend(55);
    NEXT;
    GO;
func_5418021440:
    extend(56);
    NEXT;
    GO;
func_5418020992:
    extend(57);
    NEXT;
    GO;
func_5418018928:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418018928;
    GO;
func_5418021824:
    extend(44);
    NEXT;
    GO;
func_5418019968:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418019968;
    GO;
func_5418020096:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418020096;
    GO;
func_5418022032:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418022032;
    GO;
func_5418022160:
    extend(123);
    NEXT;
    GO;
func_5418022288:
    extend(125);
    NEXT;
    GO;
func_5418022464:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418022464;
    GO;
func_5418022608:
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT;
        GO;
    }
    store();
    PC = exp_5418022608;
    GO;
func_5418020608:
    extend(58);
    NEXT;
    GO;
func_5418021952:
    extend(34);
    extend(97);
    extend(34);
    NEXT;
    GO;
func_5418023376:
    extend(34);
    extend(98);
    extend(34);
    NEXT;
    GO;
func_5418023504:
    extend(34);
    extend(99);
    extend(34);
    NEXT;
    GO;
func_5418023664:
    extend(34);
    extend(100);
    extend(34);
    NEXT;
    GO;
func_5418023792:
    extend(34);
    extend(101);
    extend(34);
    NEXT;
    GO;
func_5418023216:
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT;
    GO;
func_5418024320:
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT;
    GO;
func_5418024448:
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    NEXT;
    GO;
HALT:
        FILE *fp = fopen("output.txt", "w");
        fwrite(buffer.data, sizeof(char), buffer.top, fp);
        fclose(fp);
        return 0;
RETURN:
    PC = *(--stack.top);
    PC++;
    GO;
LOOP:
    PC = func_5418018448_op0;
    GO;
}
