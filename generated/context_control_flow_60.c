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
void func_5425370656(void);
void func_5425371024(void);
void func_5425371440(void);
void func_5425371536(void);
void func_5425371312(void);
void func_5425371232(void);
void func_5425371936(void);
void func_5425371152(void);
void func_5425371664(void);
void func_5425372192(void);
void func_5425371856(void);
void func_5425372128(void);
void func_5425372544(void);
void func_5425372912(void);
void func_5425372752(void);
void func_5425372480(void);
void func_5425372672(void);
void func_5425371728(void);
void func_5425373776(void);
void func_5425373904(void);
void func_5425374032(void);
void func_5425374160(void);
void func_5425374288(void);
void func_5425374416(void);
void func_5425374800(void);
void func_5425372384(void);
void func_5425374992(void);
void func_5425375120(void);
void func_5425375248(void);
void func_5425375440(void);
void func_5425375568(void);
void func_5425375696(void);
void func_5425375824(void);
void func_5425375376(void);
void func_5425376400(void);
void func_5425376528(void);
void func_5425373568(void);
void func_5425373696(void);
void func_5425374704(void);
void func_5425376880(void);
void func_5425377008(void);
void func_5425374544(void);
void func_5425377776(void);
void func_5425377904(void);
void func_5425373040(void);
void func_5425377552(void);
void func_5425378224(void);
void func_5425378352(void);
void func_5425378480(void);
void func_5425378608(void);
void func_5425378800(void);
void func_5425378928(void);
void func_5425379056(void);
void func_5425379184(void);
void func_5425378736(void);
void func_5425379952(void);
void func_5425377200(void);
void func_5425379776(void);
void func_5425377376(void);
void func_5425379440(void);
void func_5425379568(void);
void func_5425380080(void);
void func_5425380928(void);
void func_5425381056(void);
void func_5425380208(void);
void func_5425375888(void);
void func_5425380864(void);
void func_5425376256(void);
void HALT(void);
void RETURN(void);
Inst func_5425370656_op0[2] = {func_5425372480, RETURN};
Inst func_5425371024_op0[2] = {func_5425373776, RETURN};
Inst func_5425371024_op1[2] = {func_5425374032, RETURN};
Inst func_5425371024_op2[2] = {func_5425374288, RETURN};
Inst func_5425371440_op0[2] = {func_5425374800, RETURN};
Inst func_5425371440_op1[2] = {func_5425372384, RETURN};
Inst func_5425371440_op2[2] = {func_5425374992, RETURN};
Inst func_5425371440_op3[2] = {func_5425375120, RETURN};
Inst func_5425371440_op4[2] = {func_5425375248, RETURN};
Inst func_5425371440_op5[2] = {func_5425375440, RETURN};
Inst func_5425371440_op6[2] = {func_5425375568, RETURN};
Inst func_5425371440_op7[2] = {func_5425375696, RETURN};
Inst func_5425371440_op8[2] = {func_5425375824, RETURN};
Inst func_5425371440_op9[2] = {func_5425375376, RETURN};
Inst func_5425371536_op0[2] = {func_5425376400, RETURN};
Inst func_5425371536_op1[2] = {func_5425373568, RETURN};
Inst func_5425371536_op2[2] = {func_5425372912, RETURN};
Inst func_5425371312_op0[2] = {func_5425374704, RETURN};
Inst func_5425371312_op1[2] = {func_5425371664, RETURN};
Inst func_5425371312_op2[2] = {func_5425371936, RETURN};
Inst func_5425371232_op0[2] = {func_5425374544, RETURN};
Inst func_5425371936_op0[2] = {func_5425377552, RETURN};
Inst func_5425371936_op1[2] = {func_5425378224, RETURN};
Inst func_5425371936_op2[2] = {func_5425378352, RETURN};
Inst func_5425371936_op3[2] = {func_5425378480, RETURN};
Inst func_5425371936_op4[2] = {func_5425378608, RETURN};
Inst func_5425371936_op5[2] = {func_5425378800, RETURN};
Inst func_5425371936_op6[2] = {func_5425378928, RETURN};
Inst func_5425371936_op7[2] = {func_5425379056, RETURN};
Inst func_5425371936_op8[2] = {func_5425379184, RETURN};
Inst func_5425371152_op0[2] = {func_5425378736, RETURN};
Inst func_5425371152_op1[2] = {func_5425377200, RETURN};
Inst func_5425371664_op0[2] = {func_5425371440, RETURN};
Inst func_5425371664_op1[2] = {func_5425377376, RETURN};
Inst func_5425372192_op0[2] = {func_5425379440, RETURN};
Inst func_5425371856_op0[2] = {func_5425380080, RETURN};
Inst func_5425372128_op0[2] = {func_5425371856, HALT};
Inst func_5425372544_op0[2] = {func_5425371152, RETURN};
Inst func_5425372544_op1[2] = {func_5425372752, RETURN};
Inst func_5425372544_op2[2] = {func_5425371232, RETURN};
Inst func_5425372544_op3[2] = {func_5425370656, RETURN};
Inst func_5425372544_op4[2] = {func_5425372192, RETURN};
Inst func_5425372912_op0[2] = {func_5425380928, RETURN};
Inst func_5425372912_op1[2] = {func_5425380208, RETURN};
Inst func_5425372912_op2[2] = {func_5425371312, RETURN};
Inst func_5425372752_op0[2] = {func_5425380864, RETURN};
Inst exp_5425372480[5] = {func_5425371936, func_5425372672, func_5425371536, func_5425371728, RETURN};
Inst exp_5425373776[4] = {func_5425371536, func_5425373904, func_5425371536, RETURN};
Inst exp_5425374032[4] = {func_5425371536, func_5425374160, func_5425371536, RETURN};
Inst exp_5425374288[4] = {func_5425371536, func_5425374416, func_5425371536, RETURN};
Inst exp_5425376400[4] = {func_5425371536, func_5425376528, func_5425372912, RETURN};
Inst exp_5425373568[4] = {func_5425371536, func_5425373696, func_5425372912, RETURN};
Inst exp_5425374704[4] = {func_5425376880, func_5425371536, func_5425377008, RETURN};
Inst exp_5425374544[12] = {func_5425377776, func_5425376880, func_5425370656, func_5425371728, func_5425371024, func_5425371728, func_5425370656, func_5425377008, func_5425377904, func_5425371856, func_5425373040, RETURN};
Inst exp_5425378736[8] = {func_5425379952, func_5425376880, func_5425371024, func_5425377008, func_5425377904, func_5425371856, func_5425373040, RETURN};
Inst exp_5425377200[12] = {func_5425379952, func_5425376880, func_5425371024, func_5425377008, func_5425377904, func_5425371856, func_5425373040, func_5425379776, func_5425377904, func_5425371856, func_5425373040, RETURN};
Inst exp_5425377376[3] = {func_5425371440, func_5425371664, RETURN};
Inst exp_5425379440[6] = {func_5425379568, func_5425376880, func_5425371536, func_5425377008, func_5425371728, RETURN};
Inst exp_5425380080[3] = {func_5425372544, func_5425371856, RETURN};
Inst exp_5425380928[4] = {func_5425372912, func_5425381056, func_5425371312, RETURN};
Inst exp_5425380208[4] = {func_5425372912, func_5425375888, func_5425371312, RETURN};
Inst exp_5425380864[8] = {func_5425376256, func_5425376880, func_5425371024, func_5425377008, func_5425377904, func_5425371856, func_5425373040, RETURN};
void func_5425370656(void) {
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
            PC = func_5425370656_op0;
        break;
    }
}
void func_5425371024(void) {
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
            PC = func_5425371024_op0;
        break;
        case 1:
            PC = func_5425371024_op1;
        break;
        case 2:
            PC = func_5425371024_op2;
        break;
    }
}
void func_5425371440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371440_op0;
        break;
        case 1:
            PC = func_5425371440_op1;
        break;
        case 2:
            PC = func_5425371440_op2;
        break;
        case 3:
            PC = func_5425371440_op3;
        break;
        case 4:
            PC = func_5425371440_op4;
        break;
        case 5:
            PC = func_5425371440_op5;
        break;
        case 6:
            PC = func_5425371440_op6;
        break;
        case 7:
            PC = func_5425371440_op7;
        break;
        case 8:
            PC = func_5425371440_op8;
        break;
        case 9:
            PC = func_5425371440_op9;
        break;
    }
}
void func_5425371536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371536_op0;
        break;
        case 1:
            PC = func_5425371536_op1;
        break;
        case 2:
            PC = func_5425371536_op2;
        break;
    }
}
void func_5425371312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371312_op0;
        break;
        case 1:
            PC = func_5425371312_op1;
        break;
        case 2:
            PC = func_5425371312_op2;
        break;
    }
}
void func_5425371232(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371232_op0;
        break;
    }
}
void func_5425371936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371936_op0;
        break;
        case 1:
            PC = func_5425371936_op1;
        break;
        case 2:
            PC = func_5425371936_op2;
        break;
        case 3:
            PC = func_5425371936_op3;
        break;
        case 4:
            PC = func_5425371936_op4;
        break;
        case 5:
            PC = func_5425371936_op5;
        break;
        case 6:
            PC = func_5425371936_op6;
        break;
        case 7:
            PC = func_5425371936_op7;
        break;
        case 8:
            PC = func_5425371936_op8;
        break;
    }
}
void func_5425371152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371152_op0;
        break;
        case 1:
            PC = func_5425371152_op1;
        break;
    }
}
void func_5425371664(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371664_op0;
        break;
        case 1:
            PC = func_5425371664_op1;
        break;
    }
}
void func_5425372192(void) {
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
            PC = func_5425372192_op0;
        break;
    }
}
void func_5425371856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5425371856_op0;
        break;
    }
}
void func_5425372128(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5425372128_op0;
        break;
    }
}
void func_5425372544(void) {
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
            PC = func_5425372544_op0;
        break;
        case 1:
            PC = func_5425372544_op1;
        break;
        case 2:
            PC = func_5425372544_op2;
        break;
        case 3:
            PC = func_5425372544_op3;
        break;
        case 4:
            PC = func_5425372544_op4;
        break;
    }
}
void func_5425372912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5425372912_op0;
        break;
        case 1:
            PC = func_5425372912_op1;
        break;
        case 2:
            PC = func_5425372912_op2;
        break;
    }
}
void func_5425372752(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5425372752_op0;
        break;
    }
}
void func_5425372480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5425372480;
}
void func_5425372672(void) {
    extend(61);
    NEXT();
}
void func_5425371728(void) {
    extend(59);
    NEXT();
}
void func_5425373776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425373776;
}
void func_5425373904(void) {
    extend(62);
    NEXT();
}
void func_5425374032(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425374032;
}
void func_5425374160(void) {
    extend(60);
    NEXT();
}
void func_5425374288(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425374288;
}
void func_5425374416(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5425374800(void) {
    extend(48);
    NEXT();
}
void func_5425372384(void) {
    extend(49);
    NEXT();
}
void func_5425374992(void) {
    extend(50);
    NEXT();
}
void func_5425375120(void) {
    extend(51);
    NEXT();
}
void func_5425375248(void) {
    extend(52);
    NEXT();
}
void func_5425375440(void) {
    extend(53);
    NEXT();
}
void func_5425375568(void) {
    extend(54);
    NEXT();
}
void func_5425375696(void) {
    extend(55);
    NEXT();
}
void func_5425375824(void) {
    extend(56);
    NEXT();
}
void func_5425375376(void) {
    extend(57);
    NEXT();
}
void func_5425376400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425376400;
}
void func_5425376528(void) {
    extend(43);
    NEXT();
}
void func_5425373568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425373568;
}
void func_5425373696(void) {
    extend(45);
    NEXT();
}
void func_5425374704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5425374704;
}
void func_5425376880(void) {
    extend(40);
    NEXT();
}
void func_5425377008(void) {
    extend(41);
    NEXT();
}
void func_5425374544(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5425374544;
}
void func_5425377776(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5425377904(void) {
    extend(123);
    NEXT();
}
void func_5425373040(void) {
    extend(125);
    NEXT();
}
void func_5425377552(void) {
    extend(105);
    NEXT();
}
void func_5425378224(void) {
    extend(106);
    NEXT();
}
void func_5425378352(void) {
    extend(107);
    NEXT();
}
void func_5425378480(void) {
    extend(120);
    NEXT();
}
void func_5425378608(void) {
    extend(121);
    NEXT();
}
void func_5425378800(void) {
    extend(122);
    NEXT();
}
void func_5425378928(void) {
    extend(97);
    NEXT();
}
void func_5425379056(void) {
    extend(98);
    NEXT();
}
void func_5425379184(void) {
    extend(99);
    NEXT();
}
void func_5425378736(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5425378736;
}
void func_5425379952(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5425377200(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5425377200;
}
void func_5425379776(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5425377376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5425377376;
}
void func_5425379440(void) {
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
    PC = exp_5425379440;
}
void func_5425379568(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5425380080(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5425380080;
}
void func_5425380928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425380928;
}
void func_5425381056(void) {
    extend(42);
    NEXT();
}
void func_5425380208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5425380208;
}
void func_5425375888(void) {
    extend(47);
    NEXT();
}
void func_5425380864(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5425380864;
}
void func_5425376256(void) {
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
    PC =func_5425372128_op0;
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
