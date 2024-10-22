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
void func_5710576864(void);
void func_5710577424(void);
void func_5710577232(void);
void func_5710576992(void);
void func_5710577168(void);
void func_5710577648(void);
void func_5710577776(void);
void func_5710577568(void);
void func_5710578128(void);
void func_5710578560(void);
void func_5710578496(void);
void func_5710578752(void);
void func_5710578320(void);
void func_5710578880(void);
void func_5710579344(void);
void func_5710579472(void);
void func_5710579600(void);
void func_5710578192(void);
void func_5710579984(void);
void func_5710580176(void);
void func_5710580304(void);
void func_5710580432(void);
void func_5710580560(void);
void func_5710580112(void);
void func_5710578048(void);
void func_5710580944(void);
void func_5710579088(void);
void func_5710579216(void);
void func_5710581152(void);
void func_5710581280(void);
void func_5710581408(void);
void func_5710581584(void);
void func_5710581728(void);
void func_5710579728(void);
void func_5710581072(void);
void func_5710582496(void);
void func_5710582624(void);
void func_5710582784(void);
void func_5710582912(void);
void func_5710582336(void);
void func_5710583440(void);
void func_5710583568(void);
void HALT(void);
void RETURN(void);
Inst func_5710576864_op0[2] = {func_5710578496, RETURN};
Inst func_5710576864_op1[2] = {func_5710578880, RETURN};
Inst func_5710577424_op0[2] = {func_5710579344, RETURN};
Inst func_5710577424_op1[2] = {func_5710579472, RETURN};
Inst func_5710577424_op2[2] = {func_5710579600, RETURN};
Inst func_5710577424_op3[2] = {func_5710578192, RETURN};
Inst func_5710577424_op4[2] = {func_5710579984, RETURN};
Inst func_5710577424_op5[2] = {func_5710580176, RETURN};
Inst func_5710577424_op6[2] = {func_5710580304, RETURN};
Inst func_5710577424_op7[2] = {func_5710580432, RETURN};
Inst func_5710577424_op8[2] = {func_5710580560, RETURN};
Inst func_5710577424_op9[2] = {func_5710580112, RETURN};
Inst func_5710577232_op0[2] = {func_5710578048, RETURN};
Inst func_5710577232_op1[2] = {func_5710578560, RETURN};
Inst func_5710576992_op0[2] = {func_5710579088, RETURN};
Inst func_5710576992_op1[2] = {func_5710577776, RETURN};
Inst func_5710577168_op0[2] = {func_5710577424, RETURN};
Inst func_5710577168_op1[2] = {func_5710579216, RETURN};
Inst func_5710577648_op0[2] = {func_5710581152, RETURN};
Inst func_5710577648_op1[2] = {func_5710581584, RETURN};
Inst func_5710577776_op0[2] = {func_5710581728, RETURN};
Inst func_5710577568_op0[2] = {func_5710578560, HALT};
Inst func_5710578128_op0[2] = {func_5710581072, RETURN};
Inst func_5710578128_op1[2] = {func_5710582496, RETURN};
Inst func_5710578128_op2[2] = {func_5710582624, RETURN};
Inst func_5710578128_op3[2] = {func_5710582784, RETURN};
Inst func_5710578128_op4[2] = {func_5710582912, RETURN};
Inst func_5710578560_op0[2] = {func_5710577648, RETURN};
Inst func_5710578560_op1[2] = {func_5710576864, RETURN};
Inst func_5710578560_op2[2] = {func_5710578128, RETURN};
Inst func_5710578560_op3[2] = {func_5710577168, RETURN};
Inst func_5710578560_op4[2] = {func_5710582336, RETURN};
Inst func_5710578560_op5[2] = {func_5710583440, RETURN};
Inst func_5710578560_op6[2] = {func_5710583568, RETURN};
Inst exp_5710578496[4] = {func_5710578752, func_5710577232, func_5710578320, RETURN};
Inst exp_5710578880[3] = {func_5710578752, func_5710578320, RETURN};
Inst exp_5710578048[4] = {func_5710578560, func_5710580944, func_5710577232, RETURN};
Inst exp_5710579088[4] = {func_5710577776, func_5710580944, func_5710576992, RETURN};
Inst exp_5710579216[3] = {func_5710577424, func_5710577168, RETURN};
Inst exp_5710581152[4] = {func_5710581280, func_5710576992, func_5710581408, RETURN};
Inst exp_5710581584[3] = {func_5710581280, func_5710581408, RETURN};
Inst exp_5710581728[4] = {func_5710578128, func_5710579728, func_5710578560, RETURN};
void func_5710576864(void) {
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
            PC = func_5710576864_op0;
        break;
        case 1:
            PC = func_5710576864_op1;
        break;
    }
}
void func_5710577424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5710577424_op0;
        break;
        case 1:
            PC = func_5710577424_op1;
        break;
        case 2:
            PC = func_5710577424_op2;
        break;
        case 3:
            PC = func_5710577424_op3;
        break;
        case 4:
            PC = func_5710577424_op4;
        break;
        case 5:
            PC = func_5710577424_op5;
        break;
        case 6:
            PC = func_5710577424_op6;
        break;
        case 7:
            PC = func_5710577424_op7;
        break;
        case 8:
            PC = func_5710577424_op8;
        break;
        case 9:
            PC = func_5710577424_op9;
        break;
    }
}
void func_5710577232(void) {
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
            PC = func_5710577232_op0;
        break;
        case 1:
            PC = func_5710577232_op1;
        break;
    }
}
void func_5710576992(void) {
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
            PC = func_5710576992_op0;
        break;
        case 1:
            PC = func_5710576992_op1;
        break;
    }
}
void func_5710577168(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5710577168_op0;
        break;
        case 1:
            PC = func_5710577168_op1;
        break;
    }
}
void func_5710577648(void) {
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
            PC = func_5710577648_op0;
        break;
        case 1:
            PC = func_5710577648_op1;
        break;
    }
}
void func_5710577776(void) {
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
            PC = func_5710577776_op0;
        break;
    }
}
void func_5710577568(void) {
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
            PC = func_5710577568_op0;
        break;
    }
}
void func_5710578128(void) {
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
            PC = func_5710578128_op0;
        break;
        case 1:
            PC = func_5710578128_op1;
        break;
        case 2:
            PC = func_5710578128_op2;
        break;
        case 3:
            PC = func_5710578128_op3;
        break;
        case 4:
            PC = func_5710578128_op4;
        break;
    }
}
void func_5710578560(void) {
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
            PC = func_5710578560_op0;
        break;
        case 1:
            PC = func_5710578560_op1;
        break;
        case 2:
            PC = func_5710578560_op2;
        break;
        case 3:
            PC = func_5710578560_op3;
        break;
        case 4:
            PC = func_5710578560_op4;
        break;
        case 5:
            PC = func_5710578560_op5;
        break;
        case 6:
            PC = func_5710578560_op6;
        break;
    }
}
void func_5710578496(void) {
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
    PC = exp_5710578496;
}
void func_5710578752(void) {
    extend(91);
    NEXT();
}
void func_5710578320(void) {
    extend(93);
    NEXT();
}
void func_5710578880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5710578880;
}
void func_5710579344(void) {
    extend(48);
    NEXT();
}
void func_5710579472(void) {
    extend(49);
    NEXT();
}
void func_5710579600(void) {
    extend(50);
    NEXT();
}
void func_5710578192(void) {
    extend(51);
    NEXT();
}
void func_5710579984(void) {
    extend(52);
    NEXT();
}
void func_5710580176(void) {
    extend(53);
    NEXT();
}
void func_5710580304(void) {
    extend(54);
    NEXT();
}
void func_5710580432(void) {
    extend(55);
    NEXT();
}
void func_5710580560(void) {
    extend(56);
    NEXT();
}
void func_5710580112(void) {
    extend(57);
    NEXT();
}
void func_5710578048(void) {
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
    PC = exp_5710578048;
}
void func_5710580944(void) {
    extend(44);
    NEXT();
}
void func_5710579088(void) {
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
    PC = exp_5710579088;
}
void func_5710579216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5710579216;
}
void func_5710581152(void) {
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
    PC = exp_5710581152;
}
void func_5710581280(void) {
    extend(123);
    NEXT();
}
void func_5710581408(void) {
    extend(125);
    NEXT();
}
void func_5710581584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5710581584;
}
void func_5710581728(void) {
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
    PC = exp_5710581728;
}
void func_5710579728(void) {
    extend(58);
    NEXT();
}
void func_5710581072(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5710582496(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5710582624(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5710582784(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5710582912(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5710582336(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5710583440(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5710583568(void) {
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
    PC =func_5710577568_op0;
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
