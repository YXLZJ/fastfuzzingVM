#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 30
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
void func_5014322400(void);
void func_5014322960(void);
void func_5014322768(void);
void func_5014322528(void);
void func_5014322704(void);
void func_5014323184(void);
void func_5014323312(void);
void func_5014323104(void);
void func_5014323664(void);
void func_5014324096(void);
void func_5014324032(void);
void func_5014324288(void);
void func_5014323856(void);
void func_5014324416(void);
void func_5014324880(void);
void func_5014325008(void);
void func_5014325136(void);
void func_5014323728(void);
void func_5014325520(void);
void func_5014325712(void);
void func_5014325840(void);
void func_5014325968(void);
void func_5014326096(void);
void func_5014325648(void);
void func_5014323584(void);
void func_5014326480(void);
void func_5014324624(void);
void func_5014324752(void);
void func_5014326688(void);
void func_5014326816(void);
void func_5014326944(void);
void func_5014327120(void);
void func_5014327264(void);
void func_5014325264(void);
void func_5014326608(void);
void func_5014328032(void);
void func_5014328160(void);
void func_5014328320(void);
void func_5014328448(void);
void func_5014327872(void);
void func_5014328976(void);
void func_5014329104(void);
void HALT(void);
void RETURN(void);
Inst func_5014322400_op0[2] = {func_5014324032, RETURN};
Inst func_5014322400_op1[2] = {func_5014324416, RETURN};
Inst func_5014322960_op0[2] = {func_5014324880, RETURN};
Inst func_5014322960_op1[2] = {func_5014325008, RETURN};
Inst func_5014322960_op2[2] = {func_5014325136, RETURN};
Inst func_5014322960_op3[2] = {func_5014323728, RETURN};
Inst func_5014322960_op4[2] = {func_5014325520, RETURN};
Inst func_5014322960_op5[2] = {func_5014325712, RETURN};
Inst func_5014322960_op6[2] = {func_5014325840, RETURN};
Inst func_5014322960_op7[2] = {func_5014325968, RETURN};
Inst func_5014322960_op8[2] = {func_5014326096, RETURN};
Inst func_5014322960_op9[2] = {func_5014325648, RETURN};
Inst func_5014322768_op0[2] = {func_5014323584, RETURN};
Inst func_5014322768_op1[2] = {func_5014324096, RETURN};
Inst func_5014322528_op0[2] = {func_5014324624, RETURN};
Inst func_5014322528_op1[2] = {func_5014323312, RETURN};
Inst func_5014322704_op0[2] = {func_5014322960, RETURN};
Inst func_5014322704_op1[2] = {func_5014324752, RETURN};
Inst func_5014323184_op0[2] = {func_5014326688, RETURN};
Inst func_5014323184_op1[2] = {func_5014327120, RETURN};
Inst func_5014323312_op0[2] = {func_5014327264, RETURN};
Inst func_5014323104_op0[2] = {func_5014324096, HALT};
Inst func_5014323664_op0[2] = {func_5014326608, RETURN};
Inst func_5014323664_op1[2] = {func_5014328032, RETURN};
Inst func_5014323664_op2[2] = {func_5014328160, RETURN};
Inst func_5014323664_op3[2] = {func_5014328320, RETURN};
Inst func_5014323664_op4[2] = {func_5014328448, RETURN};
Inst func_5014324096_op0[2] = {func_5014323184, RETURN};
Inst func_5014324096_op1[2] = {func_5014322400, RETURN};
Inst func_5014324096_op2[2] = {func_5014323664, RETURN};
Inst func_5014324096_op3[2] = {func_5014322704, RETURN};
Inst func_5014324096_op4[2] = {func_5014327872, RETURN};
Inst func_5014324096_op5[2] = {func_5014328976, RETURN};
Inst func_5014324096_op6[2] = {func_5014329104, RETURN};
Inst exp_5014324032[4] = {func_5014324288, func_5014322768, func_5014323856, RETURN};
Inst exp_5014324416[3] = {func_5014324288, func_5014323856, RETURN};
Inst exp_5014323584[4] = {func_5014324096, func_5014326480, func_5014322768, RETURN};
Inst exp_5014324624[4] = {func_5014323312, func_5014326480, func_5014322528, RETURN};
Inst exp_5014324752[3] = {func_5014322960, func_5014322704, RETURN};
Inst exp_5014326688[4] = {func_5014326816, func_5014322528, func_5014326944, RETURN};
Inst exp_5014327120[3] = {func_5014326816, func_5014326944, RETURN};
Inst exp_5014327264[4] = {func_5014323664, func_5014325264, func_5014324096, RETURN};
void func_5014322400(void) {
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
            PC = func_5014322400_op0;
        break;
        case 1:
            PC = func_5014322400_op1;
        break;
    }
}
void func_5014322960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5014322960_op0;
        break;
        case 1:
            PC = func_5014322960_op1;
        break;
        case 2:
            PC = func_5014322960_op2;
        break;
        case 3:
            PC = func_5014322960_op3;
        break;
        case 4:
            PC = func_5014322960_op4;
        break;
        case 5:
            PC = func_5014322960_op5;
        break;
        case 6:
            PC = func_5014322960_op6;
        break;
        case 7:
            PC = func_5014322960_op7;
        break;
        case 8:
            PC = func_5014322960_op8;
        break;
        case 9:
            PC = func_5014322960_op9;
        break;
    }
}
void func_5014322768(void) {
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
            PC = func_5014322768_op0;
        break;
        case 1:
            PC = func_5014322768_op1;
        break;
    }
}
void func_5014322528(void) {
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
            PC = func_5014322528_op0;
        break;
        case 1:
            PC = func_5014322528_op1;
        break;
    }
}
void func_5014322704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5014322704_op0;
        break;
        case 1:
            PC = func_5014322704_op1;
        break;
    }
}
void func_5014323184(void) {
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
            PC = func_5014323184_op0;
        break;
        case 1:
            PC = func_5014323184_op1;
        break;
    }
}
void func_5014323312(void) {
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
            PC = func_5014323312_op0;
        break;
    }
}
void func_5014323104(void) {
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
            PC = func_5014323104_op0;
        break;
    }
}
void func_5014323664(void) {
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
            PC = func_5014323664_op0;
        break;
        case 1:
            PC = func_5014323664_op1;
        break;
        case 2:
            PC = func_5014323664_op2;
        break;
        case 3:
            PC = func_5014323664_op3;
        break;
        case 4:
            PC = func_5014323664_op4;
        break;
    }
}
void func_5014324096(void) {
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
            PC = func_5014324096_op0;
        break;
        case 1:
            PC = func_5014324096_op1;
        break;
        case 2:
            PC = func_5014324096_op2;
        break;
        case 3:
            PC = func_5014324096_op3;
        break;
        case 4:
            PC = func_5014324096_op4;
        break;
        case 5:
            PC = func_5014324096_op5;
        break;
        case 6:
            PC = func_5014324096_op6;
        break;
    }
}
void func_5014324032(void) {
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
    PC = exp_5014324032;
}
void func_5014324288(void) {
    extend(91);
    NEXT();
}
void func_5014323856(void) {
    extend(93);
    NEXT();
}
void func_5014324416(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5014324416;
}
void func_5014324880(void) {
    extend(48);
    NEXT();
}
void func_5014325008(void) {
    extend(49);
    NEXT();
}
void func_5014325136(void) {
    extend(50);
    NEXT();
}
void func_5014323728(void) {
    extend(51);
    NEXT();
}
void func_5014325520(void) {
    extend(52);
    NEXT();
}
void func_5014325712(void) {
    extend(53);
    NEXT();
}
void func_5014325840(void) {
    extend(54);
    NEXT();
}
void func_5014325968(void) {
    extend(55);
    NEXT();
}
void func_5014326096(void) {
    extend(56);
    NEXT();
}
void func_5014325648(void) {
    extend(57);
    NEXT();
}
void func_5014323584(void) {
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
    PC = exp_5014323584;
}
void func_5014326480(void) {
    extend(44);
    NEXT();
}
void func_5014324624(void) {
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
    PC = exp_5014324624;
}
void func_5014324752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5014324752;
}
void func_5014326688(void) {
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
    PC = exp_5014326688;
}
void func_5014326816(void) {
    extend(123);
    NEXT();
}
void func_5014326944(void) {
    extend(125);
    NEXT();
}
void func_5014327120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5014327120;
}
void func_5014327264(void) {
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
    PC = exp_5014327264;
}
void func_5014325264(void) {
    extend(58);
    NEXT();
}
void func_5014326608(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5014328032(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5014328160(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5014328320(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5014328448(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5014327872(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5014328976(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5014329104(void) {
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
    PC =func_5014323104_op0;
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
