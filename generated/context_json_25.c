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
void func_5727354080(void);
void func_5727354640(void);
void func_5727354448(void);
void func_5727354208(void);
void func_5727354384(void);
void func_5727354864(void);
void func_5727354992(void);
void func_5727354784(void);
void func_5727355344(void);
void func_5727355776(void);
void func_5727355712(void);
void func_5727355968(void);
void func_5727355536(void);
void func_5727356096(void);
void func_5727356560(void);
void func_5727356688(void);
void func_5727356816(void);
void func_5727355408(void);
void func_5727357200(void);
void func_5727357392(void);
void func_5727357520(void);
void func_5727357648(void);
void func_5727357776(void);
void func_5727357328(void);
void func_5727355264(void);
void func_5727358160(void);
void func_5727356304(void);
void func_5727356432(void);
void func_5727358368(void);
void func_5727358496(void);
void func_5727358624(void);
void func_5727358800(void);
void func_5727358944(void);
void func_5727356944(void);
void func_5727358288(void);
void func_5727359712(void);
void func_5727359840(void);
void func_5727360000(void);
void func_5727360128(void);
void func_5727359552(void);
void func_5727360656(void);
void func_5727360784(void);
void HALT(void);
void RETURN(void);
Inst func_5727354080_op0[2] = {func_5727355712, RETURN};
Inst func_5727354080_op1[2] = {func_5727356096, RETURN};
Inst func_5727354640_op0[2] = {func_5727356560, RETURN};
Inst func_5727354640_op1[2] = {func_5727356688, RETURN};
Inst func_5727354640_op2[2] = {func_5727356816, RETURN};
Inst func_5727354640_op3[2] = {func_5727355408, RETURN};
Inst func_5727354640_op4[2] = {func_5727357200, RETURN};
Inst func_5727354640_op5[2] = {func_5727357392, RETURN};
Inst func_5727354640_op6[2] = {func_5727357520, RETURN};
Inst func_5727354640_op7[2] = {func_5727357648, RETURN};
Inst func_5727354640_op8[2] = {func_5727357776, RETURN};
Inst func_5727354640_op9[2] = {func_5727357328, RETURN};
Inst func_5727354448_op0[2] = {func_5727355264, RETURN};
Inst func_5727354448_op1[2] = {func_5727355776, RETURN};
Inst func_5727354208_op0[2] = {func_5727356304, RETURN};
Inst func_5727354208_op1[2] = {func_5727354992, RETURN};
Inst func_5727354384_op0[2] = {func_5727354640, RETURN};
Inst func_5727354384_op1[2] = {func_5727356432, RETURN};
Inst func_5727354864_op0[2] = {func_5727358368, RETURN};
Inst func_5727354864_op1[2] = {func_5727358800, RETURN};
Inst func_5727354992_op0[2] = {func_5727358944, RETURN};
Inst func_5727354784_op0[2] = {func_5727355776, HALT};
Inst func_5727355344_op0[2] = {func_5727358288, RETURN};
Inst func_5727355344_op1[2] = {func_5727359712, RETURN};
Inst func_5727355344_op2[2] = {func_5727359840, RETURN};
Inst func_5727355344_op3[2] = {func_5727360000, RETURN};
Inst func_5727355344_op4[2] = {func_5727360128, RETURN};
Inst func_5727355776_op0[2] = {func_5727354864, RETURN};
Inst func_5727355776_op1[2] = {func_5727354080, RETURN};
Inst func_5727355776_op2[2] = {func_5727355344, RETURN};
Inst func_5727355776_op3[2] = {func_5727354384, RETURN};
Inst func_5727355776_op4[2] = {func_5727359552, RETURN};
Inst func_5727355776_op5[2] = {func_5727360656, RETURN};
Inst func_5727355776_op6[2] = {func_5727360784, RETURN};
Inst exp_5727355712[4] = {func_5727355968, func_5727354448, func_5727355536, RETURN};
Inst exp_5727356096[3] = {func_5727355968, func_5727355536, RETURN};
Inst exp_5727355264[4] = {func_5727355776, func_5727358160, func_5727354448, RETURN};
Inst exp_5727356304[4] = {func_5727354992, func_5727358160, func_5727354208, RETURN};
Inst exp_5727356432[3] = {func_5727354640, func_5727354384, RETURN};
Inst exp_5727358368[4] = {func_5727358496, func_5727354208, func_5727358624, RETURN};
Inst exp_5727358800[3] = {func_5727358496, func_5727358624, RETURN};
Inst exp_5727358944[4] = {func_5727355344, func_5727356944, func_5727355776, RETURN};
void func_5727354080(void) {
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
            PC = func_5727354080_op0;
        break;
        case 1:
            PC = func_5727354080_op1;
        break;
    }
}
void func_5727354640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5727354640_op0;
        break;
        case 1:
            PC = func_5727354640_op1;
        break;
        case 2:
            PC = func_5727354640_op2;
        break;
        case 3:
            PC = func_5727354640_op3;
        break;
        case 4:
            PC = func_5727354640_op4;
        break;
        case 5:
            PC = func_5727354640_op5;
        break;
        case 6:
            PC = func_5727354640_op6;
        break;
        case 7:
            PC = func_5727354640_op7;
        break;
        case 8:
            PC = func_5727354640_op8;
        break;
        case 9:
            PC = func_5727354640_op9;
        break;
    }
}
void func_5727354448(void) {
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
            PC = func_5727354448_op0;
        break;
        case 1:
            PC = func_5727354448_op1;
        break;
    }
}
void func_5727354208(void) {
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
            PC = func_5727354208_op0;
        break;
        case 1:
            PC = func_5727354208_op1;
        break;
    }
}
void func_5727354384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5727354384_op0;
        break;
        case 1:
            PC = func_5727354384_op1;
        break;
    }
}
void func_5727354864(void) {
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
            PC = func_5727354864_op0;
        break;
        case 1:
            PC = func_5727354864_op1;
        break;
    }
}
void func_5727354992(void) {
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
            PC = func_5727354992_op0;
        break;
    }
}
void func_5727354784(void) {
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
            PC = func_5727354784_op0;
        break;
    }
}
void func_5727355344(void) {
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
            PC = func_5727355344_op0;
        break;
        case 1:
            PC = func_5727355344_op1;
        break;
        case 2:
            PC = func_5727355344_op2;
        break;
        case 3:
            PC = func_5727355344_op3;
        break;
        case 4:
            PC = func_5727355344_op4;
        break;
    }
}
void func_5727355776(void) {
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
            PC = func_5727355776_op0;
        break;
        case 1:
            PC = func_5727355776_op1;
        break;
        case 2:
            PC = func_5727355776_op2;
        break;
        case 3:
            PC = func_5727355776_op3;
        break;
        case 4:
            PC = func_5727355776_op4;
        break;
        case 5:
            PC = func_5727355776_op5;
        break;
        case 6:
            PC = func_5727355776_op6;
        break;
    }
}
void func_5727355712(void) {
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
    PC = exp_5727355712;
}
void func_5727355968(void) {
    extend(91);
    NEXT();
}
void func_5727355536(void) {
    extend(93);
    NEXT();
}
void func_5727356096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5727356096;
}
void func_5727356560(void) {
    extend(48);
    NEXT();
}
void func_5727356688(void) {
    extend(49);
    NEXT();
}
void func_5727356816(void) {
    extend(50);
    NEXT();
}
void func_5727355408(void) {
    extend(51);
    NEXT();
}
void func_5727357200(void) {
    extend(52);
    NEXT();
}
void func_5727357392(void) {
    extend(53);
    NEXT();
}
void func_5727357520(void) {
    extend(54);
    NEXT();
}
void func_5727357648(void) {
    extend(55);
    NEXT();
}
void func_5727357776(void) {
    extend(56);
    NEXT();
}
void func_5727357328(void) {
    extend(57);
    NEXT();
}
void func_5727355264(void) {
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
    PC = exp_5727355264;
}
void func_5727358160(void) {
    extend(44);
    NEXT();
}
void func_5727356304(void) {
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
    PC = exp_5727356304;
}
void func_5727356432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5727356432;
}
void func_5727358368(void) {
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
    PC = exp_5727358368;
}
void func_5727358496(void) {
    extend(123);
    NEXT();
}
void func_5727358624(void) {
    extend(125);
    NEXT();
}
void func_5727358800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5727358800;
}
void func_5727358944(void) {
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
    PC = exp_5727358944;
}
void func_5727356944(void) {
    extend(58);
    NEXT();
}
void func_5727358288(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5727359712(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5727359840(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5727360000(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5727360128(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5727359552(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5727360656(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5727360784(void) {
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
    PC =func_5727354784_op0;
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
