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
void func_5492466400(void);
void func_5492475840(void);
void func_5492475760(void);
void func_5492475680(void);
void func_5492476304(void);
void func_5492475408(void);
void func_5492476832(void);
void func_5492475600(void);
void func_5492476128(void);
void func_5492476192(void);
void func_5492477072(void);
void func_5492477200(void);
void func_5492477424(void);
void func_5492477552(void);
void func_5492477680(void);
void func_5492478048(void);
void func_5492478176(void);
void func_5492476496(void);
void func_5492478560(void);
void func_5492478688(void);
void func_5492478816(void);
void func_5492478944(void);
void func_5492479072(void);
void func_5492479232(void);
void func_5492479360(void);
void func_5492479584(void);
void func_5492479712(void);
void func_5492479840(void);
void func_5492479968(void);
void func_5492480096(void);
void func_5492480288(void);
void func_5492479520(void);
void func_5492477328(void);
void func_5492478304(void);
void func_5492478432(void);
void func_5492477872(void);
void func_5492481776(void);
void func_5492481904(void);
void func_5492481712(void);
void func_5492480944(void);
void func_5492477936(void);
void func_5492482352(void);
void func_5492482480(void);
void func_5492482608(void);
void func_5492482800(void);
void func_5492482928(void);
void func_5492483056(void);
void func_5492483184(void);
void func_5492482736(void);
void func_5492483504(void);
void func_5492483632(void);
void func_5492480768(void);
void func_5492480480(void);
void func_5492483904(void);
void func_5492484032(void);
void HALT(void);
void RETURN(void);
Inst func_5492466400_op0[2] = {func_5492477424, RETURN};
Inst func_5492475840_op0[2] = {func_5492478048, RETURN};
Inst func_5492475840_op1[2] = {func_5492476496, RETURN};
Inst func_5492475840_op2[2] = {func_5492478688, RETURN};
Inst func_5492475760_op0[2] = {func_5492478944, RETURN};
Inst func_5492475760_op1[2] = {func_5492477200, RETURN};
Inst func_5492475760_op2[2] = {func_5492479232, RETURN};
Inst func_5492475680_op0[2] = {func_5492476832, RETURN};
Inst func_5492475680_op1[2] = {func_5492476304, RETURN};
Inst func_5492476304_op0[2] = {func_5492479584, RETURN};
Inst func_5492476304_op1[2] = {func_5492479712, RETURN};
Inst func_5492476304_op2[2] = {func_5492479840, RETURN};
Inst func_5492476304_op3[2] = {func_5492479968, RETURN};
Inst func_5492476304_op4[2] = {func_5492480096, RETURN};
Inst func_5492476304_op5[2] = {func_5492480288, RETURN};
Inst func_5492475408_op0[2] = {func_5492479520, RETURN};
Inst func_5492475408_op1[2] = {func_5492481712, RETURN};
Inst func_5492476832_op0[2] = {func_5492480944, RETURN};
Inst func_5492476832_op1[2] = {func_5492477936, RETURN};
Inst func_5492476832_op2[2] = {func_5492482352, RETURN};
Inst func_5492476832_op3[2] = {func_5492482480, RETURN};
Inst func_5492476832_op4[2] = {func_5492482608, RETURN};
Inst func_5492476832_op5[2] = {func_5492482800, RETURN};
Inst func_5492476832_op6[2] = {func_5492482928, RETURN};
Inst func_5492476832_op7[2] = {func_5492483056, RETURN};
Inst func_5492476832_op8[2] = {func_5492483184, RETURN};
Inst func_5492476832_op9[2] = {func_5492482736, RETURN};
Inst func_5492475600_op0[2] = {func_5492483504, RETURN};
Inst func_5492476128_op0[2] = {func_5492475408, HALT};
Inst func_5492476192_op0[2] = {func_5492475408, RETURN};
Inst func_5492476192_op1[2] = {func_5492466400, RETURN};
Inst func_5492476192_op2[2] = {func_5492475600, RETURN};
Inst func_5492477072_op0[2] = {func_5492480768, RETURN};
Inst func_5492477072_op1[2] = {func_5492480480, RETURN};
Inst func_5492477200_op0[2] = {func_5492475680, RETURN};
Inst func_5492477200_op1[2] = {func_5492483904, RETURN};
Inst exp_5492477424[5] = {func_5492476304, func_5492477552, func_5492475760, func_5492477680, RETURN};
Inst exp_5492478048[4] = {func_5492475760, func_5492478176, func_5492475760, RETURN};
Inst exp_5492476496[4] = {func_5492475760, func_5492478560, func_5492475760, RETURN};
Inst exp_5492478688[4] = {func_5492475760, func_5492478816, func_5492475760, RETURN};
Inst exp_5492478944[4] = {func_5492477200, func_5492479072, func_5492475760, RETURN};
Inst exp_5492479232[4] = {func_5492477200, func_5492479360, func_5492475760, RETURN};
Inst exp_5492479520[12] = {func_5492477328, func_5492478304, func_5492475840, func_5492478432, func_5492477872, func_5492477072, func_5492481776, func_5492481904, func_5492477872, func_5492477072, func_5492481776, RETURN};
Inst exp_5492481712[8] = {func_5492477328, func_5492478304, func_5492475840, func_5492478432, func_5492477872, func_5492477072, func_5492481776, RETURN};
Inst exp_5492483504[6] = {func_5492483632, func_5492478304, func_5492475760, func_5492478432, func_5492477680, RETURN};
Inst exp_5492480768[3] = {func_5492476192, func_5492477072, RETURN};
Inst exp_5492480480[1] = {RETURN};
Inst exp_5492483904[4] = {func_5492475680, func_5492484032, func_5492477200, RETURN};
void func_5492466400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492466400_op0;
        break;
    }
}
void func_5492475840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492475840_op0;
        break;
        case 1:
            PC = func_5492475840_op1;
        break;
        case 2:
            PC = func_5492475840_op2;
        break;
    }
}
void func_5492475760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492475760_op0;
        break;
        case 1:
            PC = func_5492475760_op1;
        break;
        case 2:
            PC = func_5492475760_op2;
        break;
    }
}
void func_5492475680(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492475680_op0;
        break;
        case 1:
            PC = func_5492475680_op1;
        break;
    }
}
void func_5492476304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5492476304_op0;
        break;
        case 1:
            PC = func_5492476304_op1;
        break;
        case 2:
            PC = func_5492476304_op2;
        break;
        case 3:
            PC = func_5492476304_op3;
        break;
        case 4:
            PC = func_5492476304_op4;
        break;
        case 5:
            PC = func_5492476304_op5;
        break;
    }
}
void func_5492475408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492475408_op0;
        break;
        case 1:
            PC = func_5492475408_op1;
        break;
    }
}
void func_5492476832(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5492476832_op0;
        break;
        case 1:
            PC = func_5492476832_op1;
        break;
        case 2:
            PC = func_5492476832_op2;
        break;
        case 3:
            PC = func_5492476832_op3;
        break;
        case 4:
            PC = func_5492476832_op4;
        break;
        case 5:
            PC = func_5492476832_op5;
        break;
        case 6:
            PC = func_5492476832_op6;
        break;
        case 7:
            PC = func_5492476832_op7;
        break;
        case 8:
            PC = func_5492476832_op8;
        break;
        case 9:
            PC = func_5492476832_op9;
        break;
    }
}
void func_5492475600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492475600_op0;
        break;
    }
}
void func_5492476128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492476128_op0;
        break;
    }
}
void func_5492476192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492476192_op0;
        break;
        case 1:
            PC = func_5492476192_op1;
        break;
        case 2:
            PC = func_5492476192_op2;
        break;
    }
}
void func_5492477072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492477072_op0;
        break;
        case 1:
            PC = func_5492477072_op1;
        break;
    }
}
void func_5492477200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492477200_op0;
        break;
        case 1:
            PC = func_5492477200_op1;
        break;
    }
}
void func_5492477424(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5492477424;
}
void func_5492477552(void) {
    extend(61);
    NEXT();
}
void func_5492477680(void) {
    extend(59);
    NEXT();
}
void func_5492478048(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492478048;
}
void func_5492478176(void) {
    extend(62);
    NEXT();
}
void func_5492476496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492476496;
}
void func_5492478560(void) {
    extend(60);
    NEXT();
}
void func_5492478688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492478688;
}
void func_5492478816(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5492478944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492478944;
}
void func_5492479072(void) {
    extend(43);
    NEXT();
}
void func_5492479232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492479232;
}
void func_5492479360(void) {
    extend(45);
    NEXT();
}
void func_5492479584(void) {
    extend(120);
    NEXT();
}
void func_5492479712(void) {
    extend(121);
    NEXT();
}
void func_5492479840(void) {
    extend(122);
    NEXT();
}
void func_5492479968(void) {
    extend(97);
    NEXT();
}
void func_5492480096(void) {
    extend(98);
    NEXT();
}
void func_5492480288(void) {
    extend(99);
    NEXT();
}
void func_5492479520(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5492479520;
}
void func_5492477328(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5492478304(void) {
    extend(40);
    NEXT();
}
void func_5492478432(void) {
    extend(41);
    NEXT();
}
void func_5492477872(void) {
    extend(123);
    NEXT();
}
void func_5492481776(void) {
    extend(125);
    NEXT();
}
void func_5492481904(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5492481712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        NEXT();
        return;
    }
    store();
    PC = exp_5492481712;
}
void func_5492480944(void) {
    extend(48);
    NEXT();
}
void func_5492477936(void) {
    extend(49);
    NEXT();
}
void func_5492482352(void) {
    extend(50);
    NEXT();
}
void func_5492482480(void) {
    extend(51);
    NEXT();
}
void func_5492482608(void) {
    extend(52);
    NEXT();
}
void func_5492482800(void) {
    extend(53);
    NEXT();
}
void func_5492482928(void) {
    extend(54);
    NEXT();
}
void func_5492483056(void) {
    extend(55);
    NEXT();
}
void func_5492483184(void) {
    extend(56);
    NEXT();
}
void func_5492482736(void) {
    extend(57);
    NEXT();
}
void func_5492483504(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5492483504;
}
void func_5492483632(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5492480768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5492480768;
}
void func_5492480480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492480480;
}
void func_5492483904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492483904;
}
void func_5492484032(void) {
    extend(42);
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
    PC =func_5492476128_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 12;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
