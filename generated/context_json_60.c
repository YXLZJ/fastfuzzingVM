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
void func_5064654048(void);
void func_5064654608(void);
void func_5064654416(void);
void func_5064654176(void);
void func_5064654352(void);
void func_5064654832(void);
void func_5064654960(void);
void func_5064654752(void);
void func_5064655312(void);
void func_5064655744(void);
void func_5064655680(void);
void func_5064655936(void);
void func_5064655504(void);
void func_5064656064(void);
void func_5064656528(void);
void func_5064656656(void);
void func_5064656784(void);
void func_5064655376(void);
void func_5064657168(void);
void func_5064657360(void);
void func_5064657488(void);
void func_5064657616(void);
void func_5064657744(void);
void func_5064657296(void);
void func_5064655232(void);
void func_5064658128(void);
void func_5064656272(void);
void func_5064656400(void);
void func_5064658336(void);
void func_5064658464(void);
void func_5064658592(void);
void func_5064658768(void);
void func_5064658912(void);
void func_5064656912(void);
void func_5064658256(void);
void func_5064659680(void);
void func_5064659808(void);
void func_5064659968(void);
void func_5064660096(void);
void func_5064659520(void);
void func_5064660624(void);
void func_5064660752(void);
void HALT(void);
void RETURN(void);
Inst func_5064654048_op0[2] = {func_5064655680, RETURN};
Inst func_5064654048_op1[2] = {func_5064656064, RETURN};
Inst func_5064654608_op0[2] = {func_5064656528, RETURN};
Inst func_5064654608_op1[2] = {func_5064656656, RETURN};
Inst func_5064654608_op2[2] = {func_5064656784, RETURN};
Inst func_5064654608_op3[2] = {func_5064655376, RETURN};
Inst func_5064654608_op4[2] = {func_5064657168, RETURN};
Inst func_5064654608_op5[2] = {func_5064657360, RETURN};
Inst func_5064654608_op6[2] = {func_5064657488, RETURN};
Inst func_5064654608_op7[2] = {func_5064657616, RETURN};
Inst func_5064654608_op8[2] = {func_5064657744, RETURN};
Inst func_5064654608_op9[2] = {func_5064657296, RETURN};
Inst func_5064654416_op0[2] = {func_5064655232, RETURN};
Inst func_5064654416_op1[2] = {func_5064655744, RETURN};
Inst func_5064654176_op0[2] = {func_5064656272, RETURN};
Inst func_5064654176_op1[2] = {func_5064654960, RETURN};
Inst func_5064654352_op0[2] = {func_5064654608, RETURN};
Inst func_5064654352_op1[2] = {func_5064656400, RETURN};
Inst func_5064654832_op0[2] = {func_5064658336, RETURN};
Inst func_5064654832_op1[2] = {func_5064658768, RETURN};
Inst func_5064654960_op0[2] = {func_5064658912, RETURN};
Inst func_5064654752_op0[2] = {func_5064655744, HALT};
Inst func_5064655312_op0[2] = {func_5064658256, RETURN};
Inst func_5064655312_op1[2] = {func_5064659680, RETURN};
Inst func_5064655312_op2[2] = {func_5064659808, RETURN};
Inst func_5064655312_op3[2] = {func_5064659968, RETURN};
Inst func_5064655312_op4[2] = {func_5064660096, RETURN};
Inst func_5064655744_op0[2] = {func_5064654832, RETURN};
Inst func_5064655744_op1[2] = {func_5064654048, RETURN};
Inst func_5064655744_op2[2] = {func_5064655312, RETURN};
Inst func_5064655744_op3[2] = {func_5064654352, RETURN};
Inst func_5064655744_op4[2] = {func_5064659520, RETURN};
Inst func_5064655744_op5[2] = {func_5064660624, RETURN};
Inst func_5064655744_op6[2] = {func_5064660752, RETURN};
Inst exp_5064655680[4] = {func_5064655936, func_5064654416, func_5064655504, RETURN};
Inst exp_5064656064[3] = {func_5064655936, func_5064655504, RETURN};
Inst exp_5064655232[4] = {func_5064655744, func_5064658128, func_5064654416, RETURN};
Inst exp_5064656272[4] = {func_5064654960, func_5064658128, func_5064654176, RETURN};
Inst exp_5064656400[3] = {func_5064654608, func_5064654352, RETURN};
Inst exp_5064658336[4] = {func_5064658464, func_5064654176, func_5064658592, RETURN};
Inst exp_5064658768[3] = {func_5064658464, func_5064658592, RETURN};
Inst exp_5064658912[4] = {func_5064655312, func_5064656912, func_5064655744, RETURN};
void func_5064654048(void) {
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
            PC = func_5064654048_op0;
        break;
        case 1:
            PC = func_5064654048_op1;
        break;
    }
}
void func_5064654608(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5064654608_op0;
        break;
        case 1:
            PC = func_5064654608_op1;
        break;
        case 2:
            PC = func_5064654608_op2;
        break;
        case 3:
            PC = func_5064654608_op3;
        break;
        case 4:
            PC = func_5064654608_op4;
        break;
        case 5:
            PC = func_5064654608_op5;
        break;
        case 6:
            PC = func_5064654608_op6;
        break;
        case 7:
            PC = func_5064654608_op7;
        break;
        case 8:
            PC = func_5064654608_op8;
        break;
        case 9:
            PC = func_5064654608_op9;
        break;
    }
}
void func_5064654416(void) {
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
            PC = func_5064654416_op0;
        break;
        case 1:
            PC = func_5064654416_op1;
        break;
    }
}
void func_5064654176(void) {
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
            PC = func_5064654176_op0;
        break;
        case 1:
            PC = func_5064654176_op1;
        break;
    }
}
void func_5064654352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5064654352_op0;
        break;
        case 1:
            PC = func_5064654352_op1;
        break;
    }
}
void func_5064654832(void) {
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
            PC = func_5064654832_op0;
        break;
        case 1:
            PC = func_5064654832_op1;
        break;
    }
}
void func_5064654960(void) {
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
            PC = func_5064654960_op0;
        break;
    }
}
void func_5064654752(void) {
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
            PC = func_5064654752_op0;
        break;
    }
}
void func_5064655312(void) {
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
            PC = func_5064655312_op0;
        break;
        case 1:
            PC = func_5064655312_op1;
        break;
        case 2:
            PC = func_5064655312_op2;
        break;
        case 3:
            PC = func_5064655312_op3;
        break;
        case 4:
            PC = func_5064655312_op4;
        break;
    }
}
void func_5064655744(void) {
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
            PC = func_5064655744_op0;
        break;
        case 1:
            PC = func_5064655744_op1;
        break;
        case 2:
            PC = func_5064655744_op2;
        break;
        case 3:
            PC = func_5064655744_op3;
        break;
        case 4:
            PC = func_5064655744_op4;
        break;
        case 5:
            PC = func_5064655744_op5;
        break;
        case 6:
            PC = func_5064655744_op6;
        break;
    }
}
void func_5064655680(void) {
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
    PC = exp_5064655680;
}
void func_5064655936(void) {
    extend(91);
    NEXT();
}
void func_5064655504(void) {
    extend(93);
    NEXT();
}
void func_5064656064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5064656064;
}
void func_5064656528(void) {
    extend(48);
    NEXT();
}
void func_5064656656(void) {
    extend(49);
    NEXT();
}
void func_5064656784(void) {
    extend(50);
    NEXT();
}
void func_5064655376(void) {
    extend(51);
    NEXT();
}
void func_5064657168(void) {
    extend(52);
    NEXT();
}
void func_5064657360(void) {
    extend(53);
    NEXT();
}
void func_5064657488(void) {
    extend(54);
    NEXT();
}
void func_5064657616(void) {
    extend(55);
    NEXT();
}
void func_5064657744(void) {
    extend(56);
    NEXT();
}
void func_5064657296(void) {
    extend(57);
    NEXT();
}
void func_5064655232(void) {
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
    PC = exp_5064655232;
}
void func_5064658128(void) {
    extend(44);
    NEXT();
}
void func_5064656272(void) {
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
    PC = exp_5064656272;
}
void func_5064656400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5064656400;
}
void func_5064658336(void) {
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
    PC = exp_5064658336;
}
void func_5064658464(void) {
    extend(123);
    NEXT();
}
void func_5064658592(void) {
    extend(125);
    NEXT();
}
void func_5064658768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5064658768;
}
void func_5064658912(void) {
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
    PC = exp_5064658912;
}
void func_5064656912(void) {
    extend(58);
    NEXT();
}
void func_5064658256(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5064659680(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5064659808(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5064659968(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5064660096(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5064659520(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5064660624(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5064660752(void) {
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
    PC =func_5064654752_op0;
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
