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
void func_4963984096(void);
void func_4963993536(void);
void func_4963993456(void);
void func_4963993376(void);
void func_4963994000(void);
void func_4963993104(void);
void func_4963994528(void);
void func_4963993296(void);
void func_4963993824(void);
void func_4963993888(void);
void func_4963994768(void);
void func_4963994896(void);
void func_4963995120(void);
void func_4963995248(void);
void func_4963995376(void);
void func_4963995744(void);
void func_4963995872(void);
void func_4963994192(void);
void func_4963996256(void);
void func_4963996384(void);
void func_4963996512(void);
void func_4963996640(void);
void func_4963996768(void);
void func_4963996928(void);
void func_4963997056(void);
void func_4963997280(void);
void func_4963997408(void);
void func_4963997536(void);
void func_4963997664(void);
void func_4963997792(void);
void func_4963997984(void);
void func_4963997216(void);
void func_4963995024(void);
void func_4963996000(void);
void func_4963996128(void);
void func_4963995568(void);
void func_4963999472(void);
void func_4963999600(void);
void func_4963999408(void);
void func_4963998640(void);
void func_4963995632(void);
void func_4964000048(void);
void func_4964000176(void);
void func_4964000304(void);
void func_4964000496(void);
void func_4964000624(void);
void func_4964000752(void);
void func_4964000880(void);
void func_4964000432(void);
void func_4964001200(void);
void func_4964001328(void);
void func_4963998464(void);
void func_4963998176(void);
void func_4964001600(void);
void func_4964001728(void);
void HALT(void);
void RETURN(void);
Inst func_4963984096_op0[2] = {func_4963995120, RETURN};
Inst func_4963993536_op0[2] = {func_4963995744, RETURN};
Inst func_4963993536_op1[2] = {func_4963994192, RETURN};
Inst func_4963993536_op2[2] = {func_4963996384, RETURN};
Inst func_4963993456_op0[2] = {func_4963996640, RETURN};
Inst func_4963993456_op1[2] = {func_4963994896, RETURN};
Inst func_4963993456_op2[2] = {func_4963996928, RETURN};
Inst func_4963993376_op0[2] = {func_4963994528, RETURN};
Inst func_4963993376_op1[2] = {func_4963994000, RETURN};
Inst func_4963994000_op0[2] = {func_4963997280, RETURN};
Inst func_4963994000_op1[2] = {func_4963997408, RETURN};
Inst func_4963994000_op2[2] = {func_4963997536, RETURN};
Inst func_4963994000_op3[2] = {func_4963997664, RETURN};
Inst func_4963994000_op4[2] = {func_4963997792, RETURN};
Inst func_4963994000_op5[2] = {func_4963997984, RETURN};
Inst func_4963993104_op0[2] = {func_4963997216, RETURN};
Inst func_4963993104_op1[2] = {func_4963999408, RETURN};
Inst func_4963994528_op0[2] = {func_4963998640, RETURN};
Inst func_4963994528_op1[2] = {func_4963995632, RETURN};
Inst func_4963994528_op2[2] = {func_4964000048, RETURN};
Inst func_4963994528_op3[2] = {func_4964000176, RETURN};
Inst func_4963994528_op4[2] = {func_4964000304, RETURN};
Inst func_4963994528_op5[2] = {func_4964000496, RETURN};
Inst func_4963994528_op6[2] = {func_4964000624, RETURN};
Inst func_4963994528_op7[2] = {func_4964000752, RETURN};
Inst func_4963994528_op8[2] = {func_4964000880, RETURN};
Inst func_4963994528_op9[2] = {func_4964000432, RETURN};
Inst func_4963993296_op0[2] = {func_4964001200, RETURN};
Inst func_4963993824_op0[2] = {func_4963993104, HALT};
Inst func_4963993888_op0[2] = {func_4963993104, RETURN};
Inst func_4963993888_op1[2] = {func_4963984096, RETURN};
Inst func_4963993888_op2[2] = {func_4963993296, RETURN};
Inst func_4963994768_op0[2] = {func_4963998464, RETURN};
Inst func_4963994768_op1[2] = {func_4963998176, RETURN};
Inst func_4963994896_op0[2] = {func_4963993376, RETURN};
Inst func_4963994896_op1[2] = {func_4964001600, RETURN};
Inst exp_4963995120[5] = {func_4963994000, func_4963995248, func_4963993456, func_4963995376, RETURN};
Inst exp_4963995744[4] = {func_4963993456, func_4963995872, func_4963993456, RETURN};
Inst exp_4963994192[4] = {func_4963993456, func_4963996256, func_4963993456, RETURN};
Inst exp_4963996384[4] = {func_4963993456, func_4963996512, func_4963993456, RETURN};
Inst exp_4963996640[4] = {func_4963994896, func_4963996768, func_4963993456, RETURN};
Inst exp_4963996928[4] = {func_4963994896, func_4963997056, func_4963993456, RETURN};
Inst exp_4963997216[12] = {func_4963995024, func_4963996000, func_4963993536, func_4963996128, func_4963995568, func_4963994768, func_4963999472, func_4963999600, func_4963995568, func_4963994768, func_4963999472, RETURN};
Inst exp_4963999408[8] = {func_4963995024, func_4963996000, func_4963993536, func_4963996128, func_4963995568, func_4963994768, func_4963999472, RETURN};
Inst exp_4964001200[6] = {func_4964001328, func_4963996000, func_4963993456, func_4963996128, func_4963995376, RETURN};
Inst exp_4963998464[3] = {func_4963993888, func_4963994768, RETURN};
Inst exp_4963998176[1] = {RETURN};
Inst exp_4964001600[4] = {func_4963993376, func_4964001728, func_4963994896, RETURN};
void func_4963984096(void) {
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
            PC = func_4963984096_op0;
        break;
    }
}
void func_4963993536(void) {
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
            PC = func_4963993536_op0;
        break;
        case 1:
            PC = func_4963993536_op1;
        break;
        case 2:
            PC = func_4963993536_op2;
        break;
    }
}
void func_4963993456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4963993456_op0;
        break;
        case 1:
            PC = func_4963993456_op1;
        break;
        case 2:
            PC = func_4963993456_op2;
        break;
    }
}
void func_4963993376(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4963993376_op0;
        break;
        case 1:
            PC = func_4963993376_op1;
        break;
    }
}
void func_4963994000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_4963994000_op0;
        break;
        case 1:
            PC = func_4963994000_op1;
        break;
        case 2:
            PC = func_4963994000_op2;
        break;
        case 3:
            PC = func_4963994000_op3;
        break;
        case 4:
            PC = func_4963994000_op4;
        break;
        case 5:
            PC = func_4963994000_op5;
        break;
    }
}
void func_4963993104(void) {
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
            PC = func_4963993104_op0;
        break;
        case 1:
            PC = func_4963993104_op1;
        break;
    }
}
void func_4963994528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4963994528_op0;
        break;
        case 1:
            PC = func_4963994528_op1;
        break;
        case 2:
            PC = func_4963994528_op2;
        break;
        case 3:
            PC = func_4963994528_op3;
        break;
        case 4:
            PC = func_4963994528_op4;
        break;
        case 5:
            PC = func_4963994528_op5;
        break;
        case 6:
            PC = func_4963994528_op6;
        break;
        case 7:
            PC = func_4963994528_op7;
        break;
        case 8:
            PC = func_4963994528_op8;
        break;
        case 9:
            PC = func_4963994528_op9;
        break;
    }
}
void func_4963993296(void) {
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
            PC = func_4963993296_op0;
        break;
    }
}
void func_4963993824(void) {
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
            PC = func_4963993824_op0;
        break;
    }
}
void func_4963993888(void) {
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
            PC = func_4963993888_op0;
        break;
        case 1:
            PC = func_4963993888_op1;
        break;
        case 2:
            PC = func_4963993888_op2;
        break;
    }
}
void func_4963994768(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4963994768_op0;
        break;
        case 1:
            PC = func_4963994768_op1;
        break;
    }
}
void func_4963994896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4963994896_op0;
        break;
        case 1:
            PC = func_4963994896_op1;
        break;
    }
}
void func_4963995120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_4963995120;
}
void func_4963995248(void) {
    extend(61);
    NEXT();
}
void func_4963995376(void) {
    extend(59);
    NEXT();
}
void func_4963995744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4963995744;
}
void func_4963995872(void) {
    extend(62);
    NEXT();
}
void func_4963994192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4963994192;
}
void func_4963996256(void) {
    extend(60);
    NEXT();
}
void func_4963996384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4963996384;
}
void func_4963996512(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_4963996640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4963996640;
}
void func_4963996768(void) {
    extend(43);
    NEXT();
}
void func_4963996928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4963996928;
}
void func_4963997056(void) {
    extend(45);
    NEXT();
}
void func_4963997280(void) {
    extend(120);
    NEXT();
}
void func_4963997408(void) {
    extend(121);
    NEXT();
}
void func_4963997536(void) {
    extend(122);
    NEXT();
}
void func_4963997664(void) {
    extend(97);
    NEXT();
}
void func_4963997792(void) {
    extend(98);
    NEXT();
}
void func_4963997984(void) {
    extend(99);
    NEXT();
}
void func_4963997216(void) {
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
    PC = exp_4963997216;
}
void func_4963995024(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_4963996000(void) {
    extend(40);
    NEXT();
}
void func_4963996128(void) {
    extend(41);
    NEXT();
}
void func_4963995568(void) {
    extend(123);
    NEXT();
}
void func_4963999472(void) {
    extend(125);
    NEXT();
}
void func_4963999600(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_4963999408(void) {
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
    PC = exp_4963999408;
}
void func_4963998640(void) {
    extend(48);
    NEXT();
}
void func_4963995632(void) {
    extend(49);
    NEXT();
}
void func_4964000048(void) {
    extend(50);
    NEXT();
}
void func_4964000176(void) {
    extend(51);
    NEXT();
}
void func_4964000304(void) {
    extend(52);
    NEXT();
}
void func_4964000496(void) {
    extend(53);
    NEXT();
}
void func_4964000624(void) {
    extend(54);
    NEXT();
}
void func_4964000752(void) {
    extend(55);
    NEXT();
}
void func_4964000880(void) {
    extend(56);
    NEXT();
}
void func_4964000432(void) {
    extend(57);
    NEXT();
}
void func_4964001200(void) {
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
    PC = exp_4964001200;
}
void func_4964001328(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_4963998464(void) {
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
    PC = exp_4963998464;
}
void func_4963998176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4963998176;
}
void func_4964001600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4964001600;
}
void func_4964001728(void) {
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
    PC =func_4963993824_op0;
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
