#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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
void func_4980774432(void);
void func_4980774800(void);
void func_4980775216(void);
void func_4980775312(void);
void func_4980775088(void);
void func_4980775008(void);
void func_4980775712(void);
void func_4980774928(void);
void func_4980775440(void);
void func_4980775968(void);
void func_4980775632(void);
void func_4980775904(void);
void func_4980776320(void);
void func_4980776688(void);
void func_4980776528(void);
void func_4980776256(void);
void func_4980776448(void);
void func_4980775504(void);
void func_4980777552(void);
void func_4980777680(void);
void func_4980777808(void);
void func_4980777936(void);
void func_4980778064(void);
void func_4980778192(void);
void func_4980778576(void);
void func_4980776160(void);
void func_4980778768(void);
void func_4980778896(void);
void func_4980779024(void);
void func_4980779216(void);
void func_4980779344(void);
void func_4980779472(void);
void func_4980779600(void);
void func_4980779152(void);
void func_4980780176(void);
void func_4980780304(void);
void func_4980777344(void);
void func_4980777472(void);
void func_4980778480(void);
void func_4980780656(void);
void func_4980780784(void);
void func_4980778320(void);
void func_4980781552(void);
void func_4980781680(void);
void func_4980776816(void);
void func_4980781328(void);
void func_4980782000(void);
void func_4980782128(void);
void func_4980782256(void);
void func_4980782384(void);
void func_4980782576(void);
void func_4980782704(void);
void func_4980782832(void);
void func_4980782960(void);
void func_4980782512(void);
void func_4980783728(void);
void func_4980780976(void);
void func_4980783552(void);
void func_4980781152(void);
void func_4980783216(void);
void func_4980783344(void);
void func_4980783856(void);
void func_4980784704(void);
void func_4980784832(void);
void func_4980783984(void);
void func_4980779664(void);
void func_4980784640(void);
void func_4980780032(void);
void HALT(void);
void RETURN(void);
Inst func_4980774432_op0[2] = {func_4980776256, RETURN};
Inst func_4980774800_op0[2] = {func_4980777552, RETURN};
Inst func_4980774800_op1[2] = {func_4980777808, RETURN};
Inst func_4980774800_op2[2] = {func_4980778064, RETURN};
Inst func_4980775216_op0[2] = {func_4980778576, RETURN};
Inst func_4980775216_op1[2] = {func_4980776160, RETURN};
Inst func_4980775216_op2[2] = {func_4980778768, RETURN};
Inst func_4980775216_op3[2] = {func_4980778896, RETURN};
Inst func_4980775216_op4[2] = {func_4980779024, RETURN};
Inst func_4980775216_op5[2] = {func_4980779216, RETURN};
Inst func_4980775216_op6[2] = {func_4980779344, RETURN};
Inst func_4980775216_op7[2] = {func_4980779472, RETURN};
Inst func_4980775216_op8[2] = {func_4980779600, RETURN};
Inst func_4980775216_op9[2] = {func_4980779152, RETURN};
Inst func_4980775312_op0[2] = {func_4980780176, RETURN};
Inst func_4980775312_op1[2] = {func_4980777344, RETURN};
Inst func_4980775312_op2[2] = {func_4980776688, RETURN};
Inst func_4980775088_op0[2] = {func_4980778480, RETURN};
Inst func_4980775088_op1[2] = {func_4980775440, RETURN};
Inst func_4980775088_op2[2] = {func_4980775712, RETURN};
Inst func_4980775008_op0[2] = {func_4980778320, RETURN};
Inst func_4980775712_op0[2] = {func_4980781328, RETURN};
Inst func_4980775712_op1[2] = {func_4980782000, RETURN};
Inst func_4980775712_op2[2] = {func_4980782128, RETURN};
Inst func_4980775712_op3[2] = {func_4980782256, RETURN};
Inst func_4980775712_op4[2] = {func_4980782384, RETURN};
Inst func_4980775712_op5[2] = {func_4980782576, RETURN};
Inst func_4980775712_op6[2] = {func_4980782704, RETURN};
Inst func_4980775712_op7[2] = {func_4980782832, RETURN};
Inst func_4980775712_op8[2] = {func_4980782960, RETURN};
Inst func_4980774928_op0[2] = {func_4980782512, RETURN};
Inst func_4980774928_op1[2] = {func_4980780976, RETURN};
Inst func_4980775440_op0[2] = {func_4980775216, RETURN};
Inst func_4980775440_op1[2] = {func_4980781152, RETURN};
Inst func_4980775968_op0[2] = {func_4980783216, RETURN};
Inst func_4980775632_op0[2] = {func_4980783856, RETURN};
Inst func_4980775904_op0[2] = {func_4980775632, HALT};
Inst func_4980776320_op0[2] = {func_4980774928, RETURN};
Inst func_4980776320_op1[2] = {func_4980776528, RETURN};
Inst func_4980776320_op2[2] = {func_4980775008, RETURN};
Inst func_4980776320_op3[2] = {func_4980774432, RETURN};
Inst func_4980776320_op4[2] = {func_4980775968, RETURN};
Inst func_4980776688_op0[2] = {func_4980784704, RETURN};
Inst func_4980776688_op1[2] = {func_4980783984, RETURN};
Inst func_4980776688_op2[2] = {func_4980775088, RETURN};
Inst func_4980776528_op0[2] = {func_4980784640, RETURN};
Inst exp_4980776256[5] = {func_4980775712, func_4980776448, func_4980775312, func_4980775504, RETURN};
Inst exp_4980777552[4] = {func_4980775312, func_4980777680, func_4980775312, RETURN};
Inst exp_4980777808[4] = {func_4980775312, func_4980777936, func_4980775312, RETURN};
Inst exp_4980778064[4] = {func_4980775312, func_4980778192, func_4980775312, RETURN};
Inst exp_4980780176[4] = {func_4980775312, func_4980780304, func_4980776688, RETURN};
Inst exp_4980777344[4] = {func_4980775312, func_4980777472, func_4980776688, RETURN};
Inst exp_4980778480[4] = {func_4980780656, func_4980775312, func_4980780784, RETURN};
Inst exp_4980778320[12] = {func_4980781552, func_4980780656, func_4980774432, func_4980775504, func_4980774800, func_4980775504, func_4980774432, func_4980780784, func_4980781680, func_4980775632, func_4980776816, RETURN};
Inst exp_4980782512[8] = {func_4980783728, func_4980780656, func_4980774800, func_4980780784, func_4980781680, func_4980775632, func_4980776816, RETURN};
Inst exp_4980780976[12] = {func_4980783728, func_4980780656, func_4980774800, func_4980780784, func_4980781680, func_4980775632, func_4980776816, func_4980783552, func_4980781680, func_4980775632, func_4980776816, RETURN};
Inst exp_4980781152[3] = {func_4980775216, func_4980775440, RETURN};
Inst exp_4980783216[6] = {func_4980783344, func_4980780656, func_4980775312, func_4980780784, func_4980775504, RETURN};
Inst exp_4980783856[3] = {func_4980776320, func_4980775632, RETURN};
Inst exp_4980784704[4] = {func_4980776688, func_4980784832, func_4980775088, RETURN};
Inst exp_4980783984[4] = {func_4980776688, func_4980779664, func_4980775088, RETURN};
Inst exp_4980784640[8] = {func_4980780032, func_4980780656, func_4980774800, func_4980780784, func_4980781680, func_4980775632, func_4980776816, RETURN};
void func_4980774432(void) {
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
            PC = func_4980774432_op0;
        break;
    }
}
void func_4980774800(void) {
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
            PC = func_4980774800_op0;
        break;
        case 1:
            PC = func_4980774800_op1;
        break;
        case 2:
            PC = func_4980774800_op2;
        break;
    }
}
void func_4980775216(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775216_op0;
        break;
        case 1:
            PC = func_4980775216_op1;
        break;
        case 2:
            PC = func_4980775216_op2;
        break;
        case 3:
            PC = func_4980775216_op3;
        break;
        case 4:
            PC = func_4980775216_op4;
        break;
        case 5:
            PC = func_4980775216_op5;
        break;
        case 6:
            PC = func_4980775216_op6;
        break;
        case 7:
            PC = func_4980775216_op7;
        break;
        case 8:
            PC = func_4980775216_op8;
        break;
        case 9:
            PC = func_4980775216_op9;
        break;
    }
}
void func_4980775312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775312_op0;
        break;
        case 1:
            PC = func_4980775312_op1;
        break;
        case 2:
            PC = func_4980775312_op2;
        break;
    }
}
void func_4980775088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775088_op0;
        break;
        case 1:
            PC = func_4980775088_op1;
        break;
        case 2:
            PC = func_4980775088_op2;
        break;
    }
}
void func_4980775008(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775008_op0;
        break;
    }
}
void func_4980775712(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775712_op0;
        break;
        case 1:
            PC = func_4980775712_op1;
        break;
        case 2:
            PC = func_4980775712_op2;
        break;
        case 3:
            PC = func_4980775712_op3;
        break;
        case 4:
            PC = func_4980775712_op4;
        break;
        case 5:
            PC = func_4980775712_op5;
        break;
        case 6:
            PC = func_4980775712_op6;
        break;
        case 7:
            PC = func_4980775712_op7;
        break;
        case 8:
            PC = func_4980775712_op8;
        break;
    }
}
void func_4980774928(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4980774928_op0;
        break;
        case 1:
            PC = func_4980774928_op1;
        break;
    }
}
void func_4980775440(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775440_op0;
        break;
        case 1:
            PC = func_4980775440_op1;
        break;
    }
}
void func_4980775968(void) {
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
            PC = func_4980775968_op0;
        break;
    }
}
void func_4980775632(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775632_op0;
        break;
    }
}
void func_4980775904(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4980775904_op0;
        break;
    }
}
void func_4980776320(void) {
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
            PC = func_4980776320_op0;
        break;
        case 1:
            PC = func_4980776320_op1;
        break;
        case 2:
            PC = func_4980776320_op2;
        break;
        case 3:
            PC = func_4980776320_op3;
        break;
        case 4:
            PC = func_4980776320_op4;
        break;
    }
}
void func_4980776688(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_4980776688_op0;
        break;
        case 1:
            PC = func_4980776688_op1;
        break;
        case 2:
            PC = func_4980776688_op2;
        break;
    }
}
void func_4980776528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_4980776528_op0;
        break;
    }
}
void func_4980776256(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_4980776256;
}
void func_4980776448(void) {
    extend(61);
    NEXT();
}
void func_4980775504(void) {
    extend(59);
    NEXT();
}
void func_4980777552(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980777552;
}
void func_4980777680(void) {
    extend(62);
    NEXT();
}
void func_4980777808(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980777808;
}
void func_4980777936(void) {
    extend(60);
    NEXT();
}
void func_4980778064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980778064;
}
void func_4980778192(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_4980778576(void) {
    extend(48);
    NEXT();
}
void func_4980776160(void) {
    extend(49);
    NEXT();
}
void func_4980778768(void) {
    extend(50);
    NEXT();
}
void func_4980778896(void) {
    extend(51);
    NEXT();
}
void func_4980779024(void) {
    extend(52);
    NEXT();
}
void func_4980779216(void) {
    extend(53);
    NEXT();
}
void func_4980779344(void) {
    extend(54);
    NEXT();
}
void func_4980779472(void) {
    extend(55);
    NEXT();
}
void func_4980779600(void) {
    extend(56);
    NEXT();
}
void func_4980779152(void) {
    extend(57);
    NEXT();
}
void func_4980780176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980780176;
}
void func_4980780304(void) {
    extend(43);
    NEXT();
}
void func_4980777344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980777344;
}
void func_4980777472(void) {
    extend(45);
    NEXT();
}
void func_4980778480(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_4980778480;
}
void func_4980780656(void) {
    extend(40);
    NEXT();
}
void func_4980780784(void) {
    extend(41);
    NEXT();
}
void func_4980778320(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4980778320;
}
void func_4980781552(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_4980781680(void) {
    extend(123);
    NEXT();
}
void func_4980776816(void) {
    extend(125);
    NEXT();
}
void func_4980781328(void) {
    extend(105);
    NEXT();
}
void func_4980782000(void) {
    extend(106);
    NEXT();
}
void func_4980782128(void) {
    extend(107);
    NEXT();
}
void func_4980782256(void) {
    extend(120);
    NEXT();
}
void func_4980782384(void) {
    extend(121);
    NEXT();
}
void func_4980782576(void) {
    extend(122);
    NEXT();
}
void func_4980782704(void) {
    extend(97);
    NEXT();
}
void func_4980782832(void) {
    extend(98);
    NEXT();
}
void func_4980782960(void) {
    extend(99);
    NEXT();
}
void func_4980782512(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4980782512;
}
void func_4980783728(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_4980780976(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4980780976;
}
void func_4980783552(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_4980781152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_4980781152;
}
void func_4980783216(void) {
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
    PC = exp_4980783216;
}
void func_4980783344(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_4980783856(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4980783856;
}
void func_4980784704(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980784704;
}
void func_4980784832(void) {
    extend(42);
    NEXT();
}
void func_4980783984(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_4980783984;
}
void func_4980779664(void) {
    extend(47);
    NEXT();
}
void func_4980784640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_4980784640;
}
void func_4980780032(void) {
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
    PC =func_4980775904_op0;
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
