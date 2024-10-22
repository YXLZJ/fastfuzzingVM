#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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
void func_5291146464(void);
void func_5291147024(void);
void func_5291146832(void);
void func_5291146592(void);
void func_5291146768(void);
void func_5291147248(void);
void func_5291147376(void);
void func_5291147168(void);
void func_5291147728(void);
void func_5291148160(void);
void func_5291148096(void);
void func_5291148352(void);
void func_5291147920(void);
void func_5291148480(void);
void func_5291148944(void);
void func_5291149072(void);
void func_5291149200(void);
void func_5291147792(void);
void func_5291149584(void);
void func_5291149776(void);
void func_5291149904(void);
void func_5291150032(void);
void func_5291150160(void);
void func_5291149712(void);
void func_5291147648(void);
void func_5291150544(void);
void func_5291148688(void);
void func_5291148816(void);
void func_5291150752(void);
void func_5291150880(void);
void func_5291151008(void);
void func_5291151184(void);
void func_5291151328(void);
void func_5291149328(void);
void func_5291150672(void);
void func_5291152096(void);
void func_5291152224(void);
void func_5291152384(void);
void func_5291152512(void);
void func_5291151936(void);
void func_5291153040(void);
void func_5291153168(void);
void HALT(void);
void RETURN(void);
Inst func_5291146464_op0[2] = {func_5291148096, RETURN};
Inst func_5291146464_op1[2] = {func_5291148480, RETURN};
Inst func_5291147024_op0[2] = {func_5291148944, RETURN};
Inst func_5291147024_op1[2] = {func_5291149072, RETURN};
Inst func_5291147024_op2[2] = {func_5291149200, RETURN};
Inst func_5291147024_op3[2] = {func_5291147792, RETURN};
Inst func_5291147024_op4[2] = {func_5291149584, RETURN};
Inst func_5291147024_op5[2] = {func_5291149776, RETURN};
Inst func_5291147024_op6[2] = {func_5291149904, RETURN};
Inst func_5291147024_op7[2] = {func_5291150032, RETURN};
Inst func_5291147024_op8[2] = {func_5291150160, RETURN};
Inst func_5291147024_op9[2] = {func_5291149712, RETURN};
Inst func_5291146832_op0[2] = {func_5291147648, RETURN};
Inst func_5291146832_op1[2] = {func_5291148160, RETURN};
Inst func_5291146592_op0[2] = {func_5291148688, RETURN};
Inst func_5291146592_op1[2] = {func_5291147376, RETURN};
Inst func_5291146768_op0[2] = {func_5291147024, RETURN};
Inst func_5291146768_op1[2] = {func_5291148816, RETURN};
Inst func_5291147248_op0[2] = {func_5291150752, RETURN};
Inst func_5291147248_op1[2] = {func_5291151184, RETURN};
Inst func_5291147376_op0[2] = {func_5291151328, RETURN};
Inst func_5291147168_op0[2] = {func_5291148160, HALT};
Inst func_5291147728_op0[2] = {func_5291150672, RETURN};
Inst func_5291147728_op1[2] = {func_5291152096, RETURN};
Inst func_5291147728_op2[2] = {func_5291152224, RETURN};
Inst func_5291147728_op3[2] = {func_5291152384, RETURN};
Inst func_5291147728_op4[2] = {func_5291152512, RETURN};
Inst func_5291148160_op0[2] = {func_5291147248, RETURN};
Inst func_5291148160_op1[2] = {func_5291146464, RETURN};
Inst func_5291148160_op2[2] = {func_5291147728, RETURN};
Inst func_5291148160_op3[2] = {func_5291146768, RETURN};
Inst func_5291148160_op4[2] = {func_5291151936, RETURN};
Inst func_5291148160_op5[2] = {func_5291153040, RETURN};
Inst func_5291148160_op6[2] = {func_5291153168, RETURN};
Inst exp_5291148096[4] = {func_5291148352, func_5291146832, func_5291147920, RETURN};
Inst exp_5291148480[3] = {func_5291148352, func_5291147920, RETURN};
Inst exp_5291147648[4] = {func_5291148160, func_5291150544, func_5291146832, RETURN};
Inst exp_5291148688[4] = {func_5291147376, func_5291150544, func_5291146592, RETURN};
Inst exp_5291148816[3] = {func_5291147024, func_5291146768, RETURN};
Inst exp_5291150752[4] = {func_5291150880, func_5291146592, func_5291151008, RETURN};
Inst exp_5291151184[3] = {func_5291150880, func_5291151008, RETURN};
Inst exp_5291151328[4] = {func_5291147728, func_5291149328, func_5291148160, RETURN};
void func_5291146464(void) {
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
            PC = func_5291146464_op0;
        break;
        case 1:
            PC = func_5291146464_op1;
        break;
    }
}
void func_5291147024(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5291147024_op0;
        break;
        case 1:
            PC = func_5291147024_op1;
        break;
        case 2:
            PC = func_5291147024_op2;
        break;
        case 3:
            PC = func_5291147024_op3;
        break;
        case 4:
            PC = func_5291147024_op4;
        break;
        case 5:
            PC = func_5291147024_op5;
        break;
        case 6:
            PC = func_5291147024_op6;
        break;
        case 7:
            PC = func_5291147024_op7;
        break;
        case 8:
            PC = func_5291147024_op8;
        break;
        case 9:
            PC = func_5291147024_op9;
        break;
    }
}
void func_5291146832(void) {
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
            PC = func_5291146832_op0;
        break;
        case 1:
            PC = func_5291146832_op1;
        break;
    }
}
void func_5291146592(void) {
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
            PC = func_5291146592_op0;
        break;
        case 1:
            PC = func_5291146592_op1;
        break;
    }
}
void func_5291146768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5291146768_op0;
        break;
        case 1:
            PC = func_5291146768_op1;
        break;
    }
}
void func_5291147248(void) {
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
            PC = func_5291147248_op0;
        break;
        case 1:
            PC = func_5291147248_op1;
        break;
    }
}
void func_5291147376(void) {
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
            PC = func_5291147376_op0;
        break;
    }
}
void func_5291147168(void) {
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
            PC = func_5291147168_op0;
        break;
    }
}
void func_5291147728(void) {
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
            PC = func_5291147728_op0;
        break;
        case 1:
            PC = func_5291147728_op1;
        break;
        case 2:
            PC = func_5291147728_op2;
        break;
        case 3:
            PC = func_5291147728_op3;
        break;
        case 4:
            PC = func_5291147728_op4;
        break;
    }
}
void func_5291148160(void) {
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
            PC = func_5291148160_op0;
        break;
        case 1:
            PC = func_5291148160_op1;
        break;
        case 2:
            PC = func_5291148160_op2;
        break;
        case 3:
            PC = func_5291148160_op3;
        break;
        case 4:
            PC = func_5291148160_op4;
        break;
        case 5:
            PC = func_5291148160_op5;
        break;
        case 6:
            PC = func_5291148160_op6;
        break;
    }
}
void func_5291148096(void) {
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
    PC = exp_5291148096;
}
void func_5291148352(void) {
    extend(91);
    NEXT();
}
void func_5291147920(void) {
    extend(93);
    NEXT();
}
void func_5291148480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5291148480;
}
void func_5291148944(void) {
    extend(48);
    NEXT();
}
void func_5291149072(void) {
    extend(49);
    NEXT();
}
void func_5291149200(void) {
    extend(50);
    NEXT();
}
void func_5291147792(void) {
    extend(51);
    NEXT();
}
void func_5291149584(void) {
    extend(52);
    NEXT();
}
void func_5291149776(void) {
    extend(53);
    NEXT();
}
void func_5291149904(void) {
    extend(54);
    NEXT();
}
void func_5291150032(void) {
    extend(55);
    NEXT();
}
void func_5291150160(void) {
    extend(56);
    NEXT();
}
void func_5291149712(void) {
    extend(57);
    NEXT();
}
void func_5291147648(void) {
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
    PC = exp_5291147648;
}
void func_5291150544(void) {
    extend(44);
    NEXT();
}
void func_5291148688(void) {
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
    PC = exp_5291148688;
}
void func_5291148816(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5291148816;
}
void func_5291150752(void) {
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
    PC = exp_5291150752;
}
void func_5291150880(void) {
    extend(123);
    NEXT();
}
void func_5291151008(void) {
    extend(125);
    NEXT();
}
void func_5291151184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5291151184;
}
void func_5291151328(void) {
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
    PC = exp_5291151328;
}
void func_5291149328(void) {
    extend(58);
    NEXT();
}
void func_5291150672(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5291152096(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5291152224(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5291152384(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5291152512(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5291151936(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5291153040(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5291153168(void) {
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
    PC =func_5291147168_op0;
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
