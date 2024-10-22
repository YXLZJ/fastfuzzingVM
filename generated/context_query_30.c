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
void func_5114976880(void);
void func_5114987088(void);
void func_5114987392(void);
void func_5114987744(void);
void func_5114987456(void);
void func_5114987008(void);
void func_5114986880(void);
void func_5114988208(void);
void func_5114987248(void);
void func_5114987872(void);
void func_5114988000(void);
void func_5114988128(void);
void func_5114988624(void);
void func_5114988752(void);
void func_5114988912(void);
void func_5114989120(void);
void func_5114989248(void);
void func_5114989632(void);
void func_5114988496(void);
void func_5114989984(void);
void func_5114987312(void);
void func_5114990176(void);
void func_5114990304(void);
void func_5114990432(void);
void func_5114990896(void);
void func_5114989040(void);
void func_5114991088(void);
void func_5114991248(void);
void func_5114991376(void);
void func_5114991568(void);
void func_5114991696(void);
void func_5114991824(void);
void func_5114991952(void);
void func_5114991504(void);
void func_5114989760(void);
void func_5114988384(void);
void func_5114992592(void);
void func_5114992720(void);
void func_5114993104(void);
void func_5114993232(void);
void func_5114993360(void);
void func_5114993520(void);
void func_5114993648(void);
void func_5114993840(void);
void func_5114993968(void);
void func_5114994096(void);
void func_5114994224(void);
void func_5114993776(void);
void func_5114992992(void);
void func_5114990624(void);
void func_5114990752(void);
void func_5114992912(void);
void func_5114994736(void);
void HALT(void);
void RETURN(void);
Inst func_5114976880_op0[2] = {func_5114988128, RETURN};
Inst func_5114976880_op1[2] = {func_5114988624, RETURN};
Inst func_5114976880_op2[2] = {func_5114988752, RETURN};
Inst func_5114976880_op3[2] = {func_5114988912, RETURN};
Inst func_5114987088_op0[2] = {func_5114989120, RETURN};
Inst func_5114987088_op1[2] = {func_5114989248, RETURN};
Inst func_5114987392_op0[2] = {func_5114988496, RETURN};
Inst func_5114987392_op1[2] = {func_5114987312, RETURN};
Inst func_5114987392_op2[2] = {func_5114990304, RETURN};
Inst func_5114987744_op0[2] = {func_5114990896, RETURN};
Inst func_5114987744_op1[2] = {func_5114989040, RETURN};
Inst func_5114987744_op2[2] = {func_5114991088, RETURN};
Inst func_5114987744_op3[2] = {func_5114991248, RETURN};
Inst func_5114987744_op4[2] = {func_5114991376, RETURN};
Inst func_5114987744_op5[2] = {func_5114991568, RETURN};
Inst func_5114987744_op6[2] = {func_5114991696, RETURN};
Inst func_5114987744_op7[2] = {func_5114991824, RETURN};
Inst func_5114987744_op8[2] = {func_5114991952, RETURN};
Inst func_5114987744_op9[2] = {func_5114991504, RETURN};
Inst func_5114987456_op0[2] = {func_5114987744, RETURN};
Inst func_5114987456_op1[2] = {func_5114989760, RETURN};
Inst func_5114987008_op0[2] = {func_5114988384, RETURN};
Inst func_5114986880_op0[2] = {func_5114987008, HALT};
Inst func_5114988208_op0[2] = {func_5114993104, RETURN};
Inst func_5114988208_op1[2] = {func_5114993232, RETURN};
Inst func_5114988208_op2[2] = {func_5114993360, RETURN};
Inst func_5114988208_op3[2] = {func_5114993520, RETURN};
Inst func_5114988208_op4[2] = {func_5114993648, RETURN};
Inst func_5114988208_op5[2] = {func_5114993840, RETURN};
Inst func_5114988208_op6[2] = {func_5114993968, RETURN};
Inst func_5114988208_op7[2] = {func_5114994096, RETURN};
Inst func_5114988208_op8[2] = {func_5114994224, RETURN};
Inst func_5114988208_op9[2] = {func_5114993776, RETURN};
Inst func_5114987248_op0[2] = {func_5114992992, RETURN};
Inst func_5114987248_op1[2] = {func_5114990624, RETURN};
Inst func_5114987248_op2[2] = {func_5114990752, RETURN};
Inst func_5114987872_op0[2] = {func_5114987456, RETURN};
Inst func_5114987872_op1[2] = {func_5114988208, RETURN};
Inst func_5114988000_op0[2] = {func_5114992912, RETURN};
Inst exp_5114989248[4] = {func_5114976880, func_5114989632, func_5114987088, RETURN};
Inst exp_5114988496[4] = {func_5114976880, func_5114989984, func_5114987872, RETURN};
Inst exp_5114987312[4] = {func_5114987392, func_5114990176, func_5114987392, RETURN};
Inst exp_5114990304[4] = {func_5114987392, func_5114990432, func_5114987392, RETURN};
Inst exp_5114989760[3] = {func_5114987744, func_5114987456, RETURN};
Inst exp_5114988384[6] = {func_5114992592, func_5114987088, func_5114992720, func_5114987248, func_5114988000, RETURN};
Inst exp_5114992912[3] = {func_5114994736, func_5114987392, RETURN};
void func_5114976880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        NEXT();
        return;
    }
    xor(4);
    store();
    switch (branch) {
        case 0:
            PC = func_5114976880_op0;
        break;
        case 1:
            PC = func_5114976880_op1;
        break;
        case 2:
            PC = func_5114976880_op2;
        break;
        case 3:
            PC = func_5114976880_op3;
        break;
    }
}
void func_5114987088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987088_op0;
        break;
        case 1:
            PC = func_5114987088_op1;
        break;
    }
}
void func_5114987392(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987392_op0;
        break;
        case 1:
            PC = func_5114987392_op1;
        break;
        case 2:
            PC = func_5114987392_op2;
        break;
    }
}
void func_5114987744(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987744_op0;
        break;
        case 1:
            PC = func_5114987744_op1;
        break;
        case 2:
            PC = func_5114987744_op2;
        break;
        case 3:
            PC = func_5114987744_op3;
        break;
        case 4:
            PC = func_5114987744_op4;
        break;
        case 5:
            PC = func_5114987744_op5;
        break;
        case 6:
            PC = func_5114987744_op6;
        break;
        case 7:
            PC = func_5114987744_op7;
        break;
        case 8:
            PC = func_5114987744_op8;
        break;
        case 9:
            PC = func_5114987744_op9;
        break;
    }
}
void func_5114987456(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987456_op0;
        break;
        case 1:
            PC = func_5114987456_op1;
        break;
    }
}
void func_5114987008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987008_op0;
        break;
    }
}
void func_5114986880(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5114986880_op0;
        break;
    }
}
void func_5114988208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5114988208_op0;
        break;
        case 1:
            PC = func_5114988208_op1;
        break;
        case 2:
            PC = func_5114988208_op2;
        break;
        case 3:
            PC = func_5114988208_op3;
        break;
        case 4:
            PC = func_5114988208_op4;
        break;
        case 5:
            PC = func_5114988208_op5;
        break;
        case 6:
            PC = func_5114988208_op6;
        break;
        case 7:
            PC = func_5114988208_op7;
        break;
        case 8:
            PC = func_5114988208_op8;
        break;
        case 9:
            PC = func_5114988208_op9;
        break;
    }
}
void func_5114987248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987248_op0;
        break;
        case 1:
            PC = func_5114987248_op1;
        break;
        case 2:
            PC = func_5114987248_op2;
        break;
    }
}
void func_5114987872(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5114987872_op0;
        break;
        case 1:
            PC = func_5114987872_op1;
        break;
    }
}
void func_5114988000(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5114988000_op0;
        break;
    }
}
void func_5114988128(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_5114988624(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_5114988752(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_5114988912(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_5114989120(void) {
    extend(42);
    NEXT();
}
void func_5114989248(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        NEXT();
        return;
    }
    store();
    PC = exp_5114989248;
}
void func_5114989632(void) {
    extend(44);
    NEXT();
}
void func_5114988496(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5114988496;
}
void func_5114989984(void) {
    extend(61);
    NEXT();
}
void func_5114987312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5114987312;
}
void func_5114990176(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_5114990304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5114990304;
}
void func_5114990432(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_5114990896(void) {
    extend(48);
    NEXT();
}
void func_5114989040(void) {
    extend(49);
    NEXT();
}
void func_5114991088(void) {
    extend(50);
    NEXT();
}
void func_5114991248(void) {
    extend(51);
    NEXT();
}
void func_5114991376(void) {
    extend(52);
    NEXT();
}
void func_5114991568(void) {
    extend(53);
    NEXT();
}
void func_5114991696(void) {
    extend(54);
    NEXT();
}
void func_5114991824(void) {
    extend(55);
    NEXT();
}
void func_5114991952(void) {
    extend(56);
    NEXT();
}
void func_5114991504(void) {
    extend(57);
    NEXT();
}
void func_5114989760(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5114989760;
}
void func_5114988384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5114988384;
}
void func_5114992592(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_5114992720(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_5114993104(void) {
    extend(97);
    NEXT();
}
void func_5114993232(void) {
    extend(98);
    NEXT();
}
void func_5114993360(void) {
    extend(99);
    NEXT();
}
void func_5114993520(void) {
    extend(100);
    NEXT();
}
void func_5114993648(void) {
    extend(101);
    NEXT();
}
void func_5114993840(void) {
    extend(102);
    NEXT();
}
void func_5114993968(void) {
    extend(103);
    NEXT();
}
void func_5114994096(void) {
    extend(104);
    NEXT();
}
void func_5114994224(void) {
    extend(105);
    NEXT();
}
void func_5114993776(void) {
    extend(106);
    NEXT();
}
void func_5114992992(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5114990624(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_5114990752(void) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    NEXT();
}
void func_5114992912(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        NEXT();
        return;
    }
    store();
    PC = exp_5114992912;
}
void func_5114994736(void) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
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
    PC =func_5114986880_op0;
    while(running) {
        (*PC)();
    }
}
int main(void) {
    static unsigned count = 7;
    initStack();
    seed = time(NULL);
    mainloop();
    return 0;
}
