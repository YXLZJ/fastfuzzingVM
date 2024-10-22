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
void func_5643474464(void);
void func_5643474832(void);
void func_5643475248(void);
void func_5643475344(void);
void func_5643475120(void);
void func_5643475040(void);
void func_5643475744(void);
void func_5643474960(void);
void func_5643475472(void);
void func_5643476000(void);
void func_5643475664(void);
void func_5643475936(void);
void func_5643476352(void);
void func_5643476720(void);
void func_5643476560(void);
void func_5643476288(void);
void func_5643476480(void);
void func_5643475536(void);
void func_5643477584(void);
void func_5643477712(void);
void func_5643477840(void);
void func_5643477968(void);
void func_5643478096(void);
void func_5643478224(void);
void func_5643478608(void);
void func_5643476192(void);
void func_5643478800(void);
void func_5643478928(void);
void func_5643479056(void);
void func_5643479248(void);
void func_5643479376(void);
void func_5643479504(void);
void func_5643479632(void);
void func_5643479184(void);
void func_5643480208(void);
void func_5643480336(void);
void func_5643477376(void);
void func_5643477504(void);
void func_5643478512(void);
void func_5643480688(void);
void func_5643480816(void);
void func_5643478352(void);
void func_5643481584(void);
void func_5643481712(void);
void func_5643476848(void);
void func_5643481360(void);
void func_5643482032(void);
void func_5643482160(void);
void func_5643482288(void);
void func_5643482416(void);
void func_5643482608(void);
void func_5643482736(void);
void func_5643482864(void);
void func_5643482992(void);
void func_5643482544(void);
void func_5643483760(void);
void func_5643481008(void);
void func_5643483584(void);
void func_5643481184(void);
void func_5643483248(void);
void func_5643483376(void);
void func_5643483888(void);
void func_5643484736(void);
void func_5643484864(void);
void func_5643484016(void);
void func_5643479696(void);
void func_5643484672(void);
void func_5643480064(void);
void HALT(void);
void RETURN(void);
Inst func_5643474464_op0[2] = {func_5643476288, RETURN};
Inst func_5643474832_op0[2] = {func_5643477584, RETURN};
Inst func_5643474832_op1[2] = {func_5643477840, RETURN};
Inst func_5643474832_op2[2] = {func_5643478096, RETURN};
Inst func_5643475248_op0[2] = {func_5643478608, RETURN};
Inst func_5643475248_op1[2] = {func_5643476192, RETURN};
Inst func_5643475248_op2[2] = {func_5643478800, RETURN};
Inst func_5643475248_op3[2] = {func_5643478928, RETURN};
Inst func_5643475248_op4[2] = {func_5643479056, RETURN};
Inst func_5643475248_op5[2] = {func_5643479248, RETURN};
Inst func_5643475248_op6[2] = {func_5643479376, RETURN};
Inst func_5643475248_op7[2] = {func_5643479504, RETURN};
Inst func_5643475248_op8[2] = {func_5643479632, RETURN};
Inst func_5643475248_op9[2] = {func_5643479184, RETURN};
Inst func_5643475344_op0[2] = {func_5643480208, RETURN};
Inst func_5643475344_op1[2] = {func_5643477376, RETURN};
Inst func_5643475344_op2[2] = {func_5643476720, RETURN};
Inst func_5643475120_op0[2] = {func_5643478512, RETURN};
Inst func_5643475120_op1[2] = {func_5643475472, RETURN};
Inst func_5643475120_op2[2] = {func_5643475744, RETURN};
Inst func_5643475040_op0[2] = {func_5643478352, RETURN};
Inst func_5643475744_op0[2] = {func_5643481360, RETURN};
Inst func_5643475744_op1[2] = {func_5643482032, RETURN};
Inst func_5643475744_op2[2] = {func_5643482160, RETURN};
Inst func_5643475744_op3[2] = {func_5643482288, RETURN};
Inst func_5643475744_op4[2] = {func_5643482416, RETURN};
Inst func_5643475744_op5[2] = {func_5643482608, RETURN};
Inst func_5643475744_op6[2] = {func_5643482736, RETURN};
Inst func_5643475744_op7[2] = {func_5643482864, RETURN};
Inst func_5643475744_op8[2] = {func_5643482992, RETURN};
Inst func_5643474960_op0[2] = {func_5643482544, RETURN};
Inst func_5643474960_op1[2] = {func_5643481008, RETURN};
Inst func_5643475472_op0[2] = {func_5643475248, RETURN};
Inst func_5643475472_op1[2] = {func_5643481184, RETURN};
Inst func_5643476000_op0[2] = {func_5643483248, RETURN};
Inst func_5643475664_op0[2] = {func_5643483888, RETURN};
Inst func_5643475936_op0[2] = {func_5643475664, HALT};
Inst func_5643476352_op0[2] = {func_5643474960, RETURN};
Inst func_5643476352_op1[2] = {func_5643476560, RETURN};
Inst func_5643476352_op2[2] = {func_5643475040, RETURN};
Inst func_5643476352_op3[2] = {func_5643474464, RETURN};
Inst func_5643476352_op4[2] = {func_5643476000, RETURN};
Inst func_5643476720_op0[2] = {func_5643484736, RETURN};
Inst func_5643476720_op1[2] = {func_5643484016, RETURN};
Inst func_5643476720_op2[2] = {func_5643475120, RETURN};
Inst func_5643476560_op0[2] = {func_5643484672, RETURN};
Inst exp_5643476288[5] = {func_5643475744, func_5643476480, func_5643475344, func_5643475536, RETURN};
Inst exp_5643477584[4] = {func_5643475344, func_5643477712, func_5643475344, RETURN};
Inst exp_5643477840[4] = {func_5643475344, func_5643477968, func_5643475344, RETURN};
Inst exp_5643478096[4] = {func_5643475344, func_5643478224, func_5643475344, RETURN};
Inst exp_5643480208[4] = {func_5643475344, func_5643480336, func_5643476720, RETURN};
Inst exp_5643477376[4] = {func_5643475344, func_5643477504, func_5643476720, RETURN};
Inst exp_5643478512[4] = {func_5643480688, func_5643475344, func_5643480816, RETURN};
Inst exp_5643478352[12] = {func_5643481584, func_5643480688, func_5643474464, func_5643475536, func_5643474832, func_5643475536, func_5643474464, func_5643480816, func_5643481712, func_5643475664, func_5643476848, RETURN};
Inst exp_5643482544[8] = {func_5643483760, func_5643480688, func_5643474832, func_5643480816, func_5643481712, func_5643475664, func_5643476848, RETURN};
Inst exp_5643481008[12] = {func_5643483760, func_5643480688, func_5643474832, func_5643480816, func_5643481712, func_5643475664, func_5643476848, func_5643483584, func_5643481712, func_5643475664, func_5643476848, RETURN};
Inst exp_5643481184[3] = {func_5643475248, func_5643475472, RETURN};
Inst exp_5643483248[6] = {func_5643483376, func_5643480688, func_5643475344, func_5643480816, func_5643475536, RETURN};
Inst exp_5643483888[3] = {func_5643476352, func_5643475664, RETURN};
Inst exp_5643484736[4] = {func_5643476720, func_5643484864, func_5643475120, RETURN};
Inst exp_5643484016[4] = {func_5643476720, func_5643479696, func_5643475120, RETURN};
Inst exp_5643484672[8] = {func_5643480064, func_5643480688, func_5643474832, func_5643480816, func_5643481712, func_5643475664, func_5643476848, RETURN};
void func_5643474464(void) {
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
            PC = func_5643474464_op0;
        break;
    }
}
void func_5643474832(void) {
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
            PC = func_5643474832_op0;
        break;
        case 1:
            PC = func_5643474832_op1;
        break;
        case 2:
            PC = func_5643474832_op2;
        break;
    }
}
void func_5643475248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475248_op0;
        break;
        case 1:
            PC = func_5643475248_op1;
        break;
        case 2:
            PC = func_5643475248_op2;
        break;
        case 3:
            PC = func_5643475248_op3;
        break;
        case 4:
            PC = func_5643475248_op4;
        break;
        case 5:
            PC = func_5643475248_op5;
        break;
        case 6:
            PC = func_5643475248_op6;
        break;
        case 7:
            PC = func_5643475248_op7;
        break;
        case 8:
            PC = func_5643475248_op8;
        break;
        case 9:
            PC = func_5643475248_op9;
        break;
    }
}
void func_5643475344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475344_op0;
        break;
        case 1:
            PC = func_5643475344_op1;
        break;
        case 2:
            PC = func_5643475344_op2;
        break;
    }
}
void func_5643475120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475120_op0;
        break;
        case 1:
            PC = func_5643475120_op1;
        break;
        case 2:
            PC = func_5643475120_op2;
        break;
    }
}
void func_5643475040(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475040_op0;
        break;
    }
}
void func_5643475744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475744_op0;
        break;
        case 1:
            PC = func_5643475744_op1;
        break;
        case 2:
            PC = func_5643475744_op2;
        break;
        case 3:
            PC = func_5643475744_op3;
        break;
        case 4:
            PC = func_5643475744_op4;
        break;
        case 5:
            PC = func_5643475744_op5;
        break;
        case 6:
            PC = func_5643475744_op6;
        break;
        case 7:
            PC = func_5643475744_op7;
        break;
        case 8:
            PC = func_5643475744_op8;
        break;
    }
}
void func_5643474960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5643474960_op0;
        break;
        case 1:
            PC = func_5643474960_op1;
        break;
    }
}
void func_5643475472(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475472_op0;
        break;
        case 1:
            PC = func_5643475472_op1;
        break;
    }
}
void func_5643476000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
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
            PC = func_5643476000_op0;
        break;
    }
}
void func_5643475664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475664_op0;
        break;
    }
}
void func_5643475936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643475936_op0;
        break;
    }
}
void func_5643476352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    xor(5);
    store();
    switch (branch) {
        case 0:
            PC = func_5643476352_op0;
        break;
        case 1:
            PC = func_5643476352_op1;
        break;
        case 2:
            PC = func_5643476352_op2;
        break;
        case 3:
            PC = func_5643476352_op3;
        break;
        case 4:
            PC = func_5643476352_op4;
        break;
    }
}
void func_5643476720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5643476720_op0;
        break;
        case 1:
            PC = func_5643476720_op1;
        break;
        case 2:
            PC = func_5643476720_op2;
        break;
    }
}
void func_5643476560(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5643476560_op0;
        break;
    }
}
void func_5643476288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5643476288;
}
void func_5643476480(void) {
    extend(61);
    NEXT();
}
void func_5643475536(void) {
    extend(59);
    NEXT();
}
void func_5643477584(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643477584;
}
void func_5643477712(void) {
    extend(62);
    NEXT();
}
void func_5643477840(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643477840;
}
void func_5643477968(void) {
    extend(60);
    NEXT();
}
void func_5643478096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643478096;
}
void func_5643478224(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5643478608(void) {
    extend(48);
    NEXT();
}
void func_5643476192(void) {
    extend(49);
    NEXT();
}
void func_5643478800(void) {
    extend(50);
    NEXT();
}
void func_5643478928(void) {
    extend(51);
    NEXT();
}
void func_5643479056(void) {
    extend(52);
    NEXT();
}
void func_5643479248(void) {
    extend(53);
    NEXT();
}
void func_5643479376(void) {
    extend(54);
    NEXT();
}
void func_5643479504(void) {
    extend(55);
    NEXT();
}
void func_5643479632(void) {
    extend(56);
    NEXT();
}
void func_5643479184(void) {
    extend(57);
    NEXT();
}
void func_5643480208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643480208;
}
void func_5643480336(void) {
    extend(43);
    NEXT();
}
void func_5643477376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643477376;
}
void func_5643477504(void) {
    extend(45);
    NEXT();
}
void func_5643478512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5643478512;
}
void func_5643480688(void) {
    extend(40);
    NEXT();
}
void func_5643480816(void) {
    extend(41);
    NEXT();
}
void func_5643478352(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5643478352;
}
void func_5643481584(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5643481712(void) {
    extend(123);
    NEXT();
}
void func_5643476848(void) {
    extend(125);
    NEXT();
}
void func_5643481360(void) {
    extend(105);
    NEXT();
}
void func_5643482032(void) {
    extend(106);
    NEXT();
}
void func_5643482160(void) {
    extend(107);
    NEXT();
}
void func_5643482288(void) {
    extend(120);
    NEXT();
}
void func_5643482416(void) {
    extend(121);
    NEXT();
}
void func_5643482608(void) {
    extend(122);
    NEXT();
}
void func_5643482736(void) {
    extend(97);
    NEXT();
}
void func_5643482864(void) {
    extend(98);
    NEXT();
}
void func_5643482992(void) {
    extend(99);
    NEXT();
}
void func_5643482544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5643482544;
}
void func_5643483760(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5643481008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5643481008;
}
void func_5643483584(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5643481184(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5643481184;
}
void func_5643483248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5643483248;
}
void func_5643483376(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5643483888(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5643483888;
}
void func_5643484736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643484736;
}
void func_5643484864(void) {
    extend(42);
    NEXT();
}
void func_5643484016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5643484016;
}
void func_5643479696(void) {
    extend(47);
    NEXT();
}
void func_5643484672(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5643484672;
}
void func_5643480064(void) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
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
    PC =func_5643475936_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 16;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
