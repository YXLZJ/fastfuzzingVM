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
void func_4955593328(void);
void func_4955603536(void);
void func_4955603840(void);
void func_4955604192(void);
void func_4955603904(void);
void func_4955603456(void);
void func_4955603328(void);
void func_4955604656(void);
void func_4955603696(void);
void func_4955604320(void);
void func_4955604448(void);
void func_4955604576(void);
void func_4955605072(void);
void func_4955605200(void);
void func_4955605360(void);
void func_4955605568(void);
void func_4955605696(void);
void func_4955606080(void);
void func_4955604944(void);
void func_4955606432(void);
void func_4955603760(void);
void func_4955606624(void);
void func_4955606752(void);
void func_4955606880(void);
void func_4955607344(void);
void func_4955605488(void);
void func_4955607536(void);
void func_4955607696(void);
void func_4955607824(void);
void func_4955608016(void);
void func_4955608144(void);
void func_4955608272(void);
void func_4955608400(void);
void func_4955607952(void);
void func_4955606208(void);
void func_4955604832(void);
void func_4955609040(void);
void func_4955609168(void);
void func_4955609552(void);
void func_4955609680(void);
void func_4955609808(void);
void func_4955609968(void);
void func_4955610096(void);
void func_4955610288(void);
void func_4955610416(void);
void func_4955610544(void);
void func_4955610672(void);
void func_4955610224(void);
void func_4955609440(void);
void func_4955607072(void);
void func_4955607200(void);
void func_4955609360(void);
void func_4955611184(void);
void HALT(void);
void RETURN(void);
Inst func_4955593328_op0[2] = {func_4955604576, RETURN};
Inst func_4955593328_op1[2] = {func_4955605072, RETURN};
Inst func_4955593328_op2[2] = {func_4955605200, RETURN};
Inst func_4955593328_op3[2] = {func_4955605360, RETURN};
Inst func_4955603536_op0[2] = {func_4955605568, RETURN};
Inst func_4955603536_op1[2] = {func_4955605696, RETURN};
Inst func_4955603840_op0[2] = {func_4955604944, RETURN};
Inst func_4955603840_op1[2] = {func_4955603760, RETURN};
Inst func_4955603840_op2[2] = {func_4955606752, RETURN};
Inst func_4955604192_op0[2] = {func_4955607344, RETURN};
Inst func_4955604192_op1[2] = {func_4955605488, RETURN};
Inst func_4955604192_op2[2] = {func_4955607536, RETURN};
Inst func_4955604192_op3[2] = {func_4955607696, RETURN};
Inst func_4955604192_op4[2] = {func_4955607824, RETURN};
Inst func_4955604192_op5[2] = {func_4955608016, RETURN};
Inst func_4955604192_op6[2] = {func_4955608144, RETURN};
Inst func_4955604192_op7[2] = {func_4955608272, RETURN};
Inst func_4955604192_op8[2] = {func_4955608400, RETURN};
Inst func_4955604192_op9[2] = {func_4955607952, RETURN};
Inst func_4955603904_op0[2] = {func_4955604192, RETURN};
Inst func_4955603904_op1[2] = {func_4955606208, RETURN};
Inst func_4955603456_op0[2] = {func_4955604832, RETURN};
Inst func_4955603328_op0[2] = {func_4955603456, HALT};
Inst func_4955604656_op0[2] = {func_4955609552, RETURN};
Inst func_4955604656_op1[2] = {func_4955609680, RETURN};
Inst func_4955604656_op2[2] = {func_4955609808, RETURN};
Inst func_4955604656_op3[2] = {func_4955609968, RETURN};
Inst func_4955604656_op4[2] = {func_4955610096, RETURN};
Inst func_4955604656_op5[2] = {func_4955610288, RETURN};
Inst func_4955604656_op6[2] = {func_4955610416, RETURN};
Inst func_4955604656_op7[2] = {func_4955610544, RETURN};
Inst func_4955604656_op8[2] = {func_4955610672, RETURN};
Inst func_4955604656_op9[2] = {func_4955610224, RETURN};
Inst func_4955603696_op0[2] = {func_4955609440, RETURN};
Inst func_4955603696_op1[2] = {func_4955607072, RETURN};
Inst func_4955603696_op2[2] = {func_4955607200, RETURN};
Inst func_4955604320_op0[2] = {func_4955603904, RETURN};
Inst func_4955604320_op1[2] = {func_4955604656, RETURN};
Inst func_4955604448_op0[2] = {func_4955609360, RETURN};
Inst exp_4955605696[4] = {func_4955593328, func_4955606080, func_4955603536, RETURN};
Inst exp_4955604944[4] = {func_4955593328, func_4955606432, func_4955604320, RETURN};
Inst exp_4955603760[4] = {func_4955603840, func_4955606624, func_4955603840, RETURN};
Inst exp_4955606752[4] = {func_4955603840, func_4955606880, func_4955603840, RETURN};
Inst exp_4955606208[3] = {func_4955604192, func_4955603904, RETURN};
Inst exp_4955604832[6] = {func_4955609040, func_4955603536, func_4955609168, func_4955603696, func_4955604448, RETURN};
Inst exp_4955609360[3] = {func_4955611184, func_4955603840, RETURN};
void func_4955593328(void) {
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
            PC = func_4955593328_op0;
        break;
        case 1:
            PC = func_4955593328_op1;
        break;
        case 2:
            PC = func_4955593328_op2;
        break;
        case 3:
            PC = func_4955593328_op3;
        break;
    }
}
void func_4955603536(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(42);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4955603536_op0;
        break;
        case 1:
            PC = func_4955603536_op1;
        break;
    }
}
void func_4955603840(void) {
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
            PC = func_4955603840_op0;
        break;
        case 1:
            PC = func_4955603840_op1;
        break;
        case 2:
            PC = func_4955603840_op2;
        break;
    }
}
void func_4955604192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4955604192_op0;
        break;
        case 1:
            PC = func_4955604192_op1;
        break;
        case 2:
            PC = func_4955604192_op2;
        break;
        case 3:
            PC = func_4955604192_op3;
        break;
        case 4:
            PC = func_4955604192_op4;
        break;
        case 5:
            PC = func_4955604192_op5;
        break;
        case 6:
            PC = func_4955604192_op6;
        break;
        case 7:
            PC = func_4955604192_op7;
        break;
        case 8:
            PC = func_4955604192_op8;
        break;
        case 9:
            PC = func_4955604192_op9;
        break;
    }
}
void func_4955603904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4955603904_op0;
        break;
        case 1:
            PC = func_4955603904_op1;
        break;
    }
}
void func_4955603456(void) {
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
            PC = func_4955603456_op0;
        break;
    }
}
void func_4955603328(void) {
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
            PC = func_4955603328_op0;
        break;
    }
}
void func_4955604656(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4955604656_op0;
        break;
        case 1:
            PC = func_4955604656_op1;
        break;
        case 2:
            PC = func_4955604656_op2;
        break;
        case 3:
            PC = func_4955604656_op3;
        break;
        case 4:
            PC = func_4955604656_op4;
        break;
        case 5:
            PC = func_4955604656_op5;
        break;
        case 6:
            PC = func_4955604656_op6;
        break;
        case 7:
            PC = func_4955604656_op7;
        break;
        case 8:
            PC = func_4955604656_op8;
        break;
        case 9:
            PC = func_4955604656_op9;
        break;
    }
}
void func_4955603696(void) {
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
            PC = func_4955603696_op0;
        break;
        case 1:
            PC = func_4955603696_op1;
        break;
        case 2:
            PC = func_4955603696_op2;
        break;
    }
}
void func_4955604320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(106);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4955604320_op0;
        break;
        case 1:
            PC = func_4955604320_op1;
        break;
    }
}
void func_4955604448(void) {
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
            PC = func_4955604448_op0;
        break;
    }
}
void func_4955604576(void) {
    extend(105);
    extend(100);
    NEXT();
}
void func_4955605072(void) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    NEXT();
}
void func_4955605200(void) {
    extend(97);
    extend(103);
    extend(101);
    NEXT();
}
void func_4955605360(void) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    NEXT();
}
void func_4955605568(void) {
    extend(42);
    NEXT();
}
void func_4955605696(void) {
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
    PC = exp_4955605696;
}
void func_4955606080(void) {
    extend(44);
    NEXT();
}
void func_4955604944(void) {
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
    PC = exp_4955604944;
}
void func_4955606432(void) {
    extend(61);
    NEXT();
}
void func_4955603760(void) {
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
    PC = exp_4955603760;
}
void func_4955606624(void) {
    extend(65);
    extend(78);
    extend(68);
    NEXT();
}
void func_4955606752(void) {
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
    PC = exp_4955606752;
}
void func_4955606880(void) {
    extend(79);
    extend(82);
    NEXT();
}
void func_4955607344(void) {
    extend(48);
    NEXT();
}
void func_4955605488(void) {
    extend(49);
    NEXT();
}
void func_4955607536(void) {
    extend(50);
    NEXT();
}
void func_4955607696(void) {
    extend(51);
    NEXT();
}
void func_4955607824(void) {
    extend(52);
    NEXT();
}
void func_4955608016(void) {
    extend(53);
    NEXT();
}
void func_4955608144(void) {
    extend(54);
    NEXT();
}
void func_4955608272(void) {
    extend(55);
    NEXT();
}
void func_4955608400(void) {
    extend(56);
    NEXT();
}
void func_4955607952(void) {
    extend(57);
    NEXT();
}
void func_4955606208(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4955606208;
}
void func_4955604832(void) {
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
    PC = exp_4955604832;
}
void func_4955609040(void) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    NEXT();
}
void func_4955609168(void) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    NEXT();
}
void func_4955609552(void) {
    extend(97);
    NEXT();
}
void func_4955609680(void) {
    extend(98);
    NEXT();
}
void func_4955609808(void) {
    extend(99);
    NEXT();
}
void func_4955609968(void) {
    extend(100);
    NEXT();
}
void func_4955610096(void) {
    extend(101);
    NEXT();
}
void func_4955610288(void) {
    extend(102);
    NEXT();
}
void func_4955610416(void) {
    extend(103);
    NEXT();
}
void func_4955610544(void) {
    extend(104);
    NEXT();
}
void func_4955610672(void) {
    extend(105);
    NEXT();
}
void func_4955610224(void) {
    extend(106);
    NEXT();
}
void func_4955609440(void) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_4955607072(void) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    NEXT();
}
void func_4955607200(void) {
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
void func_4955609360(void) {
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
    PC = exp_4955609360;
}
void func_4955611184(void) {
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
    PC =func_4955603328_op0;
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
