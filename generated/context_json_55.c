#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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
void func_5526027488(void);
void func_5526028048(void);
void func_5526027856(void);
void func_5526027616(void);
void func_5526027792(void);
void func_5526028272(void);
void func_5526028400(void);
void func_5526028192(void);
void func_5526028752(void);
void func_5526029184(void);
void func_5526029120(void);
void func_5526029376(void);
void func_5526028944(void);
void func_5526029504(void);
void func_5526029968(void);
void func_5526030096(void);
void func_5526030224(void);
void func_5526028816(void);
void func_5526030608(void);
void func_5526030800(void);
void func_5526030928(void);
void func_5526031056(void);
void func_5526031184(void);
void func_5526030736(void);
void func_5526028672(void);
void func_5526031568(void);
void func_5526029712(void);
void func_5526029840(void);
void func_5526031776(void);
void func_5526031904(void);
void func_5526032032(void);
void func_5526032208(void);
void func_5526032352(void);
void func_5526030352(void);
void func_5526031696(void);
void func_5526033120(void);
void func_5526033248(void);
void func_5526033408(void);
void func_5526033536(void);
void func_5526032960(void);
void func_5526034064(void);
void func_5526034192(void);
void HALT(void);
void RETURN(void);
Inst func_5526027488_op0[2] = {func_5526029120, RETURN};
Inst func_5526027488_op1[2] = {func_5526029504, RETURN};
Inst func_5526028048_op0[2] = {func_5526029968, RETURN};
Inst func_5526028048_op1[2] = {func_5526030096, RETURN};
Inst func_5526028048_op2[2] = {func_5526030224, RETURN};
Inst func_5526028048_op3[2] = {func_5526028816, RETURN};
Inst func_5526028048_op4[2] = {func_5526030608, RETURN};
Inst func_5526028048_op5[2] = {func_5526030800, RETURN};
Inst func_5526028048_op6[2] = {func_5526030928, RETURN};
Inst func_5526028048_op7[2] = {func_5526031056, RETURN};
Inst func_5526028048_op8[2] = {func_5526031184, RETURN};
Inst func_5526028048_op9[2] = {func_5526030736, RETURN};
Inst func_5526027856_op0[2] = {func_5526028672, RETURN};
Inst func_5526027856_op1[2] = {func_5526029184, RETURN};
Inst func_5526027616_op0[2] = {func_5526029712, RETURN};
Inst func_5526027616_op1[2] = {func_5526028400, RETURN};
Inst func_5526027792_op0[2] = {func_5526028048, RETURN};
Inst func_5526027792_op1[2] = {func_5526029840, RETURN};
Inst func_5526028272_op0[2] = {func_5526031776, RETURN};
Inst func_5526028272_op1[2] = {func_5526032208, RETURN};
Inst func_5526028400_op0[2] = {func_5526032352, RETURN};
Inst func_5526028192_op0[2] = {func_5526029184, HALT};
Inst func_5526028752_op0[2] = {func_5526031696, RETURN};
Inst func_5526028752_op1[2] = {func_5526033120, RETURN};
Inst func_5526028752_op2[2] = {func_5526033248, RETURN};
Inst func_5526028752_op3[2] = {func_5526033408, RETURN};
Inst func_5526028752_op4[2] = {func_5526033536, RETURN};
Inst func_5526029184_op0[2] = {func_5526028272, RETURN};
Inst func_5526029184_op1[2] = {func_5526027488, RETURN};
Inst func_5526029184_op2[2] = {func_5526028752, RETURN};
Inst func_5526029184_op3[2] = {func_5526027792, RETURN};
Inst func_5526029184_op4[2] = {func_5526032960, RETURN};
Inst func_5526029184_op5[2] = {func_5526034064, RETURN};
Inst func_5526029184_op6[2] = {func_5526034192, RETURN};
Inst exp_5526029120[4] = {func_5526029376, func_5526027856, func_5526028944, RETURN};
Inst exp_5526029504[3] = {func_5526029376, func_5526028944, RETURN};
Inst exp_5526028672[4] = {func_5526029184, func_5526031568, func_5526027856, RETURN};
Inst exp_5526029712[4] = {func_5526028400, func_5526031568, func_5526027616, RETURN};
Inst exp_5526029840[3] = {func_5526028048, func_5526027792, RETURN};
Inst exp_5526031776[4] = {func_5526031904, func_5526027616, func_5526032032, RETURN};
Inst exp_5526032208[3] = {func_5526031904, func_5526032032, RETURN};
Inst exp_5526032352[4] = {func_5526028752, func_5526030352, func_5526029184, RETURN};
void func_5526027488(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526027488_op0;
        break;
        case 1:
            PC = func_5526027488_op1;
        break;
    }
}
void func_5526028048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028048_op0;
        break;
        case 1:
            PC = func_5526028048_op1;
        break;
        case 2:
            PC = func_5526028048_op2;
        break;
        case 3:
            PC = func_5526028048_op3;
        break;
        case 4:
            PC = func_5526028048_op4;
        break;
        case 5:
            PC = func_5526028048_op5;
        break;
        case 6:
            PC = func_5526028048_op6;
        break;
        case 7:
            PC = func_5526028048_op7;
        break;
        case 8:
            PC = func_5526028048_op8;
        break;
        case 9:
            PC = func_5526028048_op9;
        break;
    }
}
void func_5526027856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526027856_op0;
        break;
        case 1:
            PC = func_5526027856_op1;
        break;
    }
}
void func_5526027616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526027616_op0;
        break;
        case 1:
            PC = func_5526027616_op1;
        break;
    }
}
void func_5526027792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526027792_op0;
        break;
        case 1:
            PC = func_5526027792_op1;
        break;
    }
}
void func_5526028272(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028272_op0;
        break;
        case 1:
            PC = func_5526028272_op1;
        break;
    }
}
void func_5526028400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028400_op0;
        break;
    }
}
void func_5526028192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028192_op0;
        break;
    }
}
void func_5526028752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5526028752_op0;
        break;
        case 1:
            PC = func_5526028752_op1;
        break;
        case 2:
            PC = func_5526028752_op2;
        break;
        case 3:
            PC = func_5526028752_op3;
        break;
        case 4:
            PC = func_5526028752_op4;
        break;
    }
}
void func_5526029184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    xor(7);
    store();
    switch (branch) {
        case 0:
            PC = func_5526029184_op0;
        break;
        case 1:
            PC = func_5526029184_op1;
        break;
        case 2:
            PC = func_5526029184_op2;
        break;
        case 3:
            PC = func_5526029184_op3;
        break;
        case 4:
            PC = func_5526029184_op4;
        break;
        case 5:
            PC = func_5526029184_op5;
        break;
        case 6:
            PC = func_5526029184_op6;
        break;
    }
}
void func_5526029120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5526029120;
}
void func_5526029376(void) {
    extend(91);
    NEXT();
}
void func_5526028944(void) {
    extend(93);
    NEXT();
}
void func_5526029504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5526029504;
}
void func_5526029968(void) {
    extend(48);
    NEXT();
}
void func_5526030096(void) {
    extend(49);
    NEXT();
}
void func_5526030224(void) {
    extend(50);
    NEXT();
}
void func_5526028816(void) {
    extend(51);
    NEXT();
}
void func_5526030608(void) {
    extend(52);
    NEXT();
}
void func_5526030800(void) {
    extend(53);
    NEXT();
}
void func_5526030928(void) {
    extend(54);
    NEXT();
}
void func_5526031056(void) {
    extend(55);
    NEXT();
}
void func_5526031184(void) {
    extend(56);
    NEXT();
}
void func_5526030736(void) {
    extend(57);
    NEXT();
}
void func_5526028672(void) {
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
        NEXT();
        return;
    }
    store();
    PC = exp_5526028672;
}
void func_5526031568(void) {
    extend(44);
    NEXT();
}
void func_5526029712(void) {
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
        NEXT();
        return;
    }
    store();
    PC = exp_5526029712;
}
void func_5526029840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5526029840;
}
void func_5526031776(void) {
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
        NEXT();
        return;
    }
    store();
    PC = exp_5526031776;
}
void func_5526031904(void) {
    extend(123);
    NEXT();
}
void func_5526032032(void) {
    extend(125);
    NEXT();
}
void func_5526032208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5526032208;
}
void func_5526032352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        NEXT();
        return;
    }
    store();
    PC = exp_5526032352;
}
void func_5526030352(void) {
    extend(58);
    NEXT();
}
void func_5526031696(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5526033120(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5526033248(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5526033408(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5526033536(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5526032960(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5526034064(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5526034192(void) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
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
    PC =func_5526028192_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 8;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
