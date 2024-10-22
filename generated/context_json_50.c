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
void func_5324700896(void);
void func_5324701456(void);
void func_5324701264(void);
void func_5324701024(void);
void func_5324701200(void);
void func_5324701680(void);
void func_5324701808(void);
void func_5324701600(void);
void func_5324702160(void);
void func_5324702592(void);
void func_5324702528(void);
void func_5324702784(void);
void func_5324702352(void);
void func_5324702912(void);
void func_5324703376(void);
void func_5324703504(void);
void func_5324703632(void);
void func_5324702224(void);
void func_5324704016(void);
void func_5324704208(void);
void func_5324704336(void);
void func_5324704464(void);
void func_5324704592(void);
void func_5324704144(void);
void func_5324702080(void);
void func_5324704976(void);
void func_5324703120(void);
void func_5324703248(void);
void func_5324705184(void);
void func_5324705312(void);
void func_5324705440(void);
void func_5324705616(void);
void func_5324705760(void);
void func_5324703760(void);
void func_5324705104(void);
void func_5324706528(void);
void func_5324706656(void);
void func_5324706816(void);
void func_5324706944(void);
void func_5324706368(void);
void func_5324707472(void);
void func_5324707600(void);
void HALT(void);
void RETURN(void);
Inst func_5324700896_op0[2] = {func_5324702528, RETURN};
Inst func_5324700896_op1[2] = {func_5324702912, RETURN};
Inst func_5324701456_op0[2] = {func_5324703376, RETURN};
Inst func_5324701456_op1[2] = {func_5324703504, RETURN};
Inst func_5324701456_op2[2] = {func_5324703632, RETURN};
Inst func_5324701456_op3[2] = {func_5324702224, RETURN};
Inst func_5324701456_op4[2] = {func_5324704016, RETURN};
Inst func_5324701456_op5[2] = {func_5324704208, RETURN};
Inst func_5324701456_op6[2] = {func_5324704336, RETURN};
Inst func_5324701456_op7[2] = {func_5324704464, RETURN};
Inst func_5324701456_op8[2] = {func_5324704592, RETURN};
Inst func_5324701456_op9[2] = {func_5324704144, RETURN};
Inst func_5324701264_op0[2] = {func_5324702080, RETURN};
Inst func_5324701264_op1[2] = {func_5324702592, RETURN};
Inst func_5324701024_op0[2] = {func_5324703120, RETURN};
Inst func_5324701024_op1[2] = {func_5324701808, RETURN};
Inst func_5324701200_op0[2] = {func_5324701456, RETURN};
Inst func_5324701200_op1[2] = {func_5324703248, RETURN};
Inst func_5324701680_op0[2] = {func_5324705184, RETURN};
Inst func_5324701680_op1[2] = {func_5324705616, RETURN};
Inst func_5324701808_op0[2] = {func_5324705760, RETURN};
Inst func_5324701600_op0[2] = {func_5324702592, HALT};
Inst func_5324702160_op0[2] = {func_5324705104, RETURN};
Inst func_5324702160_op1[2] = {func_5324706528, RETURN};
Inst func_5324702160_op2[2] = {func_5324706656, RETURN};
Inst func_5324702160_op3[2] = {func_5324706816, RETURN};
Inst func_5324702160_op4[2] = {func_5324706944, RETURN};
Inst func_5324702592_op0[2] = {func_5324701680, RETURN};
Inst func_5324702592_op1[2] = {func_5324700896, RETURN};
Inst func_5324702592_op2[2] = {func_5324702160, RETURN};
Inst func_5324702592_op3[2] = {func_5324701200, RETURN};
Inst func_5324702592_op4[2] = {func_5324706368, RETURN};
Inst func_5324702592_op5[2] = {func_5324707472, RETURN};
Inst func_5324702592_op6[2] = {func_5324707600, RETURN};
Inst exp_5324702528[4] = {func_5324702784, func_5324701264, func_5324702352, RETURN};
Inst exp_5324702912[3] = {func_5324702784, func_5324702352, RETURN};
Inst exp_5324702080[4] = {func_5324702592, func_5324704976, func_5324701264, RETURN};
Inst exp_5324703120[4] = {func_5324701808, func_5324704976, func_5324701024, RETURN};
Inst exp_5324703248[3] = {func_5324701456, func_5324701200, RETURN};
Inst exp_5324705184[4] = {func_5324705312, func_5324701024, func_5324705440, RETURN};
Inst exp_5324705616[3] = {func_5324705312, func_5324705440, RETURN};
Inst exp_5324705760[4] = {func_5324702160, func_5324703760, func_5324702592, RETURN};
void func_5324700896(void) {
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
            PC = func_5324700896_op0;
        break;
        case 1:
            PC = func_5324700896_op1;
        break;
    }
}
void func_5324701456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5324701456_op0;
        break;
        case 1:
            PC = func_5324701456_op1;
        break;
        case 2:
            PC = func_5324701456_op2;
        break;
        case 3:
            PC = func_5324701456_op3;
        break;
        case 4:
            PC = func_5324701456_op4;
        break;
        case 5:
            PC = func_5324701456_op5;
        break;
        case 6:
            PC = func_5324701456_op6;
        break;
        case 7:
            PC = func_5324701456_op7;
        break;
        case 8:
            PC = func_5324701456_op8;
        break;
        case 9:
            PC = func_5324701456_op9;
        break;
    }
}
void func_5324701264(void) {
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
            PC = func_5324701264_op0;
        break;
        case 1:
            PC = func_5324701264_op1;
        break;
    }
}
void func_5324701024(void) {
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
            PC = func_5324701024_op0;
        break;
        case 1:
            PC = func_5324701024_op1;
        break;
    }
}
void func_5324701200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5324701200_op0;
        break;
        case 1:
            PC = func_5324701200_op1;
        break;
    }
}
void func_5324701680(void) {
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
            PC = func_5324701680_op0;
        break;
        case 1:
            PC = func_5324701680_op1;
        break;
    }
}
void func_5324701808(void) {
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
            PC = func_5324701808_op0;
        break;
    }
}
void func_5324701600(void) {
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
            PC = func_5324701600_op0;
        break;
    }
}
void func_5324702160(void) {
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
            PC = func_5324702160_op0;
        break;
        case 1:
            PC = func_5324702160_op1;
        break;
        case 2:
            PC = func_5324702160_op2;
        break;
        case 3:
            PC = func_5324702160_op3;
        break;
        case 4:
            PC = func_5324702160_op4;
        break;
    }
}
void func_5324702592(void) {
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
            PC = func_5324702592_op0;
        break;
        case 1:
            PC = func_5324702592_op1;
        break;
        case 2:
            PC = func_5324702592_op2;
        break;
        case 3:
            PC = func_5324702592_op3;
        break;
        case 4:
            PC = func_5324702592_op4;
        break;
        case 5:
            PC = func_5324702592_op5;
        break;
        case 6:
            PC = func_5324702592_op6;
        break;
    }
}
void func_5324702528(void) {
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
    PC = exp_5324702528;
}
void func_5324702784(void) {
    extend(91);
    NEXT();
}
void func_5324702352(void) {
    extend(93);
    NEXT();
}
void func_5324702912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(91);
        extend(93);
        NEXT();
        return;
    }
    store();
    PC = exp_5324702912;
}
void func_5324703376(void) {
    extend(48);
    NEXT();
}
void func_5324703504(void) {
    extend(49);
    NEXT();
}
void func_5324703632(void) {
    extend(50);
    NEXT();
}
void func_5324702224(void) {
    extend(51);
    NEXT();
}
void func_5324704016(void) {
    extend(52);
    NEXT();
}
void func_5324704208(void) {
    extend(53);
    NEXT();
}
void func_5324704336(void) {
    extend(54);
    NEXT();
}
void func_5324704464(void) {
    extend(55);
    NEXT();
}
void func_5324704592(void) {
    extend(56);
    NEXT();
}
void func_5324704144(void) {
    extend(57);
    NEXT();
}
void func_5324702080(void) {
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
    PC = exp_5324702080;
}
void func_5324704976(void) {
    extend(44);
    NEXT();
}
void func_5324703120(void) {
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
    PC = exp_5324703120;
}
void func_5324703248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5324703248;
}
void func_5324705184(void) {
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
    PC = exp_5324705184;
}
void func_5324705312(void) {
    extend(123);
    NEXT();
}
void func_5324705440(void) {
    extend(125);
    NEXT();
}
void func_5324705616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5324705616;
}
void func_5324705760(void) {
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
    PC = exp_5324705760;
}
void func_5324703760(void) {
    extend(58);
    NEXT();
}
void func_5324705104(void) {
    extend(34);
    extend(97);
    extend(34);
    NEXT();
}
void func_5324706528(void) {
    extend(34);
    extend(98);
    extend(34);
    NEXT();
}
void func_5324706656(void) {
    extend(34);
    extend(99);
    extend(34);
    NEXT();
}
void func_5324706816(void) {
    extend(34);
    extend(100);
    extend(34);
    NEXT();
}
void func_5324706944(void) {
    extend(34);
    extend(101);
    extend(34);
    NEXT();
}
void func_5324706368(void) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    NEXT();
}
void func_5324707472(void) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5324707600(void) {
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
    PC =func_5324701600_op0;
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
