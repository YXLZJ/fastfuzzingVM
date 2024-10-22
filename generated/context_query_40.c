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

typedef void (*Inst)();
Inst *PC;

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
    Inst *frames[MAX_DEPTH];     // the first pointer of frames
    Inst **top;              // the top of stack
} Stack;

Stack stack;

bool endless = false;

bool running = true;
void func_5685402224(void);
void func_5685412432(void);
void func_5685412736(void);
void func_5685413088(void);
void func_5685412800(void);
void func_5685412352(void);
void func_5685412224(void);
void func_5685413552(void);
void func_5685412592(void);
void func_5685413216(void);
void func_5685413344(void);
void func_5685413472(void);
void func_5685413968(void);
void func_5685414096(void);
void func_5685414256(void);
void func_5685414464(void);
void func_5685414592(void);
void func_5685414976(void);
void func_5685413840(void);
void func_5685415328(void);
void func_5685412656(void);
void func_5685415520(void);
void func_5685415648(void);
void func_5685415776(void);
void func_5685416240(void);
void func_5685414384(void);
void func_5685416432(void);
void func_5685416592(void);
void func_5685416720(void);
void func_5685416912(void);
void func_5685417040(void);
void func_5685417168(void);
void func_5685417296(void);
void func_5685416848(void);
void func_5685415104(void);
void func_5685413728(void);
void func_5685417936(void);
void func_5685418064(void);
void func_5685418448(void);
void func_5685418576(void);
void func_5685418704(void);
void func_5685418864(void);
void func_5685418992(void);
void func_5685419184(void);
void func_5685419312(void);
void func_5685419440(void);
void func_5685419568(void);
void func_5685419120(void);
void func_5685418336(void);
void func_5685415968(void);
void func_5685416096(void);
void func_5685418256(void);
void func_5685420080(void);
void HALT(void);
void RETURN(void);
Inst func_5685402224_op0[2] = {func_5685413472, RETURN};
Inst func_5685402224_op1[2] = {func_5685413968, RETURN};
Inst func_5685402224_op2[2] = {func_5685414096, RETURN};
Inst func_5685402224_op3[2] = {func_5685414256, RETURN};
Inst func_5685412432_op0[2] = {func_5685414464, RETURN};
Inst func_5685412432_op1[2] = {func_5685414592, RETURN};
Inst func_5685412736_op0[2] = {func_5685413840, RETURN};
Inst func_5685412736_op1[2] = {func_5685412656, RETURN};
Inst func_5685412736_op2[2] = {func_5685415648, RETURN};
Inst func_5685413088_op0[2] = {func_5685416240, RETURN};
Inst func_5685413088_op1[2] = {func_5685414384, RETURN};
Inst func_5685413088_op2[2] = {func_5685416432, RETURN};
Inst func_5685413088_op3[2] = {func_5685416592, RETURN};
Inst func_5685413088_op4[2] = {func_5685416720, RETURN};
Inst func_5685413088_op5[2] = {func_5685416912, RETURN};
Inst func_5685413088_op6[2] = {func_5685417040, RETURN};
Inst func_5685413088_op7[2] = {func_5685417168, RETURN};
Inst func_5685413088_op8[2] = {func_5685417296, RETURN};
Inst func_5685413088_op9[2] = {func_5685416848, RETURN};
Inst func_5685412800_op0[2] = {func_5685413088, RETURN};
Inst func_5685412800_op1[2] = {func_5685415104, RETURN};
Inst func_5685412352_op0[2] = {func_5685413728, RETURN};
Inst func_5685412224_op0[2] = {func_5685412352, HALT};
Inst func_5685413552_op0[2] = {func_5685418448, RETURN};
Inst func_5685413552_op1[2] = {func_5685418576, RETURN};
Inst func_5685413552_op2[2] = {func_5685418704, RETURN};
Inst func_5685413552_op3[2] = {func_5685418864, RETURN};
Inst func_5685413552_op4[2] = {func_5685418992, RETURN};
Inst func_5685413552_op5[2] = {func_5685419184, RETURN};
Inst func_5685413552_op6[2] = {func_5685419312, RETURN};
Inst func_5685413552_op7[2] = {func_5685419440, RETURN};
Inst func_5685413552_op8[2] = {func_5685419568, RETURN};
Inst func_5685413552_op9[2] = {func_5685419120, RETURN};
Inst func_5685412592_op0[2] = {func_5685418336, RETURN};
Inst func_5685412592_op1[2] = {func_5685415968, RETURN};
Inst func_5685412592_op2[2] = {func_5685416096, RETURN};
Inst func_5685413216_op0[2] = {func_5685412800, RETURN};
Inst func_5685413216_op1[2] = {func_5685413552, RETURN};
Inst func_5685413344_op0[2] = {func_5685418256, RETURN};
Inst exp_5685414592[4] = {func_5685402224, func_5685414976, func_5685412432, RETURN};
Inst exp_5685413840[4] = {func_5685402224, func_5685415328, func_5685413216, RETURN};
Inst exp_5685412656[4] = {func_5685412736, func_5685415520, func_5685412736, RETURN};
Inst exp_5685415648[4] = {func_5685412736, func_5685415776, func_5685412736, RETURN};
Inst exp_5685415104[3] = {func_5685413088, func_5685412800, RETURN};
Inst exp_5685413728[6] = {func_5685417936, func_5685412432, func_5685418064, func_5685412592, func_5685413344, RETURN};
Inst exp_5685418256[3] = {func_5685420080, func_5685412736, RETURN};
void func_5685402224(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        return;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5685402224_op0;
        break;
        case 1:
            PC = func_5685402224_op1;
        break;
        case 2:
            PC = func_5685402224_op2;
        break;
        case 3:
            PC = func_5685402224_op3;
        break;
    }
}
void func_5685412432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412432_op0;
        break;
        case 1:
            PC = func_5685412432_op1;
        break;
    }
}
void func_5685412736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412736_op0;
        break;
        case 1:
            PC = func_5685412736_op1;
        break;
        case 2:
            PC = func_5685412736_op2;
        break;
    }
}
void func_5685413088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5685413088_op0;
        break;
        case 1:
            PC = func_5685413088_op1;
        break;
        case 2:
            PC = func_5685413088_op2;
        break;
        case 3:
            PC = func_5685413088_op3;
        break;
        case 4:
            PC = func_5685413088_op4;
        break;
        case 5:
            PC = func_5685413088_op5;
        break;
        case 6:
            PC = func_5685413088_op6;
        break;
        case 7:
            PC = func_5685413088_op7;
        break;
        case 8:
            PC = func_5685413088_op8;
        break;
        case 9:
            PC = func_5685413088_op9;
        break;
    }
}
void func_5685412800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412800_op0;
        break;
        case 1:
            PC = func_5685412800_op1;
        break;
    }
}
void func_5685412352(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412352_op0;
        break;
    }
}
void func_5685412224(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412224_op0;
        break;
    }
}
void func_5685413552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5685413552_op0;
        break;
        case 1:
            PC = func_5685413552_op1;
        break;
        case 2:
            PC = func_5685413552_op2;
        break;
        case 3:
            PC = func_5685413552_op3;
        break;
        case 4:
            PC = func_5685413552_op4;
        break;
        case 5:
            PC = func_5685413552_op5;
        break;
        case 6:
            PC = func_5685413552_op6;
        break;
        case 7:
            PC = func_5685413552_op7;
        break;
        case 8:
            PC = func_5685413552_op8;
        break;
        case 9:
            PC = func_5685413552_op9;
        break;
    }
}
void func_5685412592(void) {
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
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5685412592_op0;
        break;
        case 1:
            PC = func_5685412592_op1;
        break;
        case 2:
            PC = func_5685412592_op2;
        break;
    }
}
void func_5685413216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5685413216_op0;
        break;
        case 1:
            PC = func_5685413216_op1;
        break;
    }
}
void func_5685413344(void) {
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
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5685413344_op0;
        break;
    }
}
void func_5685413472(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5685413968(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5685414096(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5685414256(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5685414464(void) {
    extend(42);
    NEXT();
}
void func_5685414592(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5685414592;
}
void func_5685414976(void) {
    extend(44);
    NEXT();
}
void func_5685413840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5685413840;
}
void func_5685415328(void) {
    extend(61);
    NEXT();
}
void func_5685412656(void) {
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
        return;
    }
    store();
    PC = exp_5685412656;
}
void func_5685415520(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5685415648(void) {
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
        return;
    }
    store();
    PC = exp_5685415648;
}
void func_5685415776(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5685416240(void) {
    extend(48);
    NEXT();
}
void func_5685414384(void) {
    extend(49);
    NEXT();
}
void func_5685416432(void) {
    extend(50);
    NEXT();
}
void func_5685416592(void) {
    extend(51);
    NEXT();
}
void func_5685416720(void) {
    extend(52);
    NEXT();
}
void func_5685416912(void) {
    extend(53);
    NEXT();
}
void func_5685417040(void) {
    extend(54);
    NEXT();
}
void func_5685417168(void) {
    extend(55);
    NEXT();
}
void func_5685417296(void) {
    extend(56);
    NEXT();
}
void func_5685416848(void) {
    extend(57);
    NEXT();
}
void func_5685415104(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5685415104;
}
void func_5685413728(void) {
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
        return;
    }
    store();
    PC = exp_5685413728;
}
void func_5685417936(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5685418064(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5685418448(void) {
    extend(97);
    NEXT();
}
void func_5685418576(void) {
    extend(98);
    NEXT();
}
void func_5685418704(void) {
    extend(99);
    NEXT();
}
void func_5685418864(void) {
    extend(100);
    NEXT();
}
void func_5685418992(void) {
    extend(101);
    NEXT();
}
void func_5685419184(void) {
    extend(102);
    NEXT();
}
void func_5685419312(void) {
    extend(103);
    NEXT();
}
void func_5685419440(void) {
    extend(104);
    NEXT();
}
void func_5685419568(void) {
    extend(105);
    NEXT();
}
void func_5685419120(void) {
    extend(106);
    NEXT();
}
void func_5685418336(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5685415968(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5685416096(void) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
}
void func_5685418256(void) {
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
        return;
    }
    store();
    PC = exp_5685418256;
}
void func_5685420080(void) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    NEXT();
}
void HALT(void) {
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    running = false;
}
void RETURN(void) {
    pop();
    PC = *stack.top;
    NEXT();
}
void mainloop(void) {
    running = true;
    PC =func_5685412224_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 7;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
