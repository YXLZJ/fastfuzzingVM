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
void func_5794456288(void);
void func_5794465728(void);
void func_5794465648(void);
void func_5794465568(void);
void func_5794466192(void);
void func_5794465296(void);
void func_5794466720(void);
void func_5794465488(void);
void func_5794466016(void);
void func_5794466080(void);
void func_5794466960(void);
void func_5794467088(void);
void func_5794467312(void);
void func_5794467440(void);
void func_5794467568(void);
void func_5794467936(void);
void func_5794468064(void);
void func_5794466384(void);
void func_5794468448(void);
void func_5794468576(void);
void func_5794468704(void);
void func_5794468832(void);
void func_5794468960(void);
void func_5794469120(void);
void func_5794469248(void);
void func_5794469472(void);
void func_5794469600(void);
void func_5794469728(void);
void func_5794469856(void);
void func_5794469984(void);
void func_5794470176(void);
void func_5794469408(void);
void func_5794467216(void);
void func_5794468192(void);
void func_5794468320(void);
void func_5794467760(void);
void func_5794471664(void);
void func_5794471792(void);
void func_5794471600(void);
void func_5794470832(void);
void func_5794467824(void);
void func_5794472240(void);
void func_5794472368(void);
void func_5794472496(void);
void func_5794472688(void);
void func_5794472816(void);
void func_5794472944(void);
void func_5794473072(void);
void func_5794472624(void);
void func_5794473392(void);
void func_5794473520(void);
void func_5794470656(void);
void func_5794470368(void);
void func_5794473792(void);
void func_5794473920(void);
void HALT(void);
void RETURN(void);
Inst func_5794456288_op0[2] = {func_5794467312, RETURN};
Inst func_5794465728_op0[2] = {func_5794467936, RETURN};
Inst func_5794465728_op1[2] = {func_5794466384, RETURN};
Inst func_5794465728_op2[2] = {func_5794468576, RETURN};
Inst func_5794465648_op0[2] = {func_5794468832, RETURN};
Inst func_5794465648_op1[2] = {func_5794467088, RETURN};
Inst func_5794465648_op2[2] = {func_5794469120, RETURN};
Inst func_5794465568_op0[2] = {func_5794466720, RETURN};
Inst func_5794465568_op1[2] = {func_5794466192, RETURN};
Inst func_5794466192_op0[2] = {func_5794469472, RETURN};
Inst func_5794466192_op1[2] = {func_5794469600, RETURN};
Inst func_5794466192_op2[2] = {func_5794469728, RETURN};
Inst func_5794466192_op3[2] = {func_5794469856, RETURN};
Inst func_5794466192_op4[2] = {func_5794469984, RETURN};
Inst func_5794466192_op5[2] = {func_5794470176, RETURN};
Inst func_5794465296_op0[2] = {func_5794469408, RETURN};
Inst func_5794465296_op1[2] = {func_5794471600, RETURN};
Inst func_5794466720_op0[2] = {func_5794470832, RETURN};
Inst func_5794466720_op1[2] = {func_5794467824, RETURN};
Inst func_5794466720_op2[2] = {func_5794472240, RETURN};
Inst func_5794466720_op3[2] = {func_5794472368, RETURN};
Inst func_5794466720_op4[2] = {func_5794472496, RETURN};
Inst func_5794466720_op5[2] = {func_5794472688, RETURN};
Inst func_5794466720_op6[2] = {func_5794472816, RETURN};
Inst func_5794466720_op7[2] = {func_5794472944, RETURN};
Inst func_5794466720_op8[2] = {func_5794473072, RETURN};
Inst func_5794466720_op9[2] = {func_5794472624, RETURN};
Inst func_5794465488_op0[2] = {func_5794473392, RETURN};
Inst func_5794466016_op0[2] = {func_5794465296, HALT};
Inst func_5794466080_op0[2] = {func_5794465296, RETURN};
Inst func_5794466080_op1[2] = {func_5794456288, RETURN};
Inst func_5794466080_op2[2] = {func_5794465488, RETURN};
Inst func_5794466960_op0[2] = {func_5794470656, RETURN};
Inst func_5794466960_op1[2] = {func_5794470368, RETURN};
Inst func_5794467088_op0[2] = {func_5794465568, RETURN};
Inst func_5794467088_op1[2] = {func_5794473792, RETURN};
Inst exp_5794467312[5] = {func_5794466192, func_5794467440, func_5794465648, func_5794467568, RETURN};
Inst exp_5794467936[4] = {func_5794465648, func_5794468064, func_5794465648, RETURN};
Inst exp_5794466384[4] = {func_5794465648, func_5794468448, func_5794465648, RETURN};
Inst exp_5794468576[4] = {func_5794465648, func_5794468704, func_5794465648, RETURN};
Inst exp_5794468832[4] = {func_5794467088, func_5794468960, func_5794465648, RETURN};
Inst exp_5794469120[4] = {func_5794467088, func_5794469248, func_5794465648, RETURN};
Inst exp_5794469408[12] = {func_5794467216, func_5794468192, func_5794465728, func_5794468320, func_5794467760, func_5794466960, func_5794471664, func_5794471792, func_5794467760, func_5794466960, func_5794471664, RETURN};
Inst exp_5794471600[8] = {func_5794467216, func_5794468192, func_5794465728, func_5794468320, func_5794467760, func_5794466960, func_5794471664, RETURN};
Inst exp_5794473392[6] = {func_5794473520, func_5794468192, func_5794465648, func_5794468320, func_5794467568, RETURN};
Inst exp_5794470656[3] = {func_5794466080, func_5794466960, RETURN};
Inst exp_5794470368[1] = {RETURN};
Inst exp_5794473792[4] = {func_5794465568, func_5794473920, func_5794467088, RETURN};
void func_5794456288(void) {
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
            PC = func_5794456288_op0;
        break;
    }
}
void func_5794465728(void) {
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
            PC = func_5794465728_op0;
        break;
        case 1:
            PC = func_5794465728_op1;
        break;
        case 2:
            PC = func_5794465728_op2;
        break;
    }
}
void func_5794465648(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5794465648_op0;
        break;
        case 1:
            PC = func_5794465648_op1;
        break;
        case 2:
            PC = func_5794465648_op2;
        break;
    }
}
void func_5794465568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5794465568_op0;
        break;
        case 1:
            PC = func_5794465568_op1;
        break;
    }
}
void func_5794466192(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(6);
    store();
    switch (branch) {
        case 0:
            PC = func_5794466192_op0;
        break;
        case 1:
            PC = func_5794466192_op1;
        break;
        case 2:
            PC = func_5794466192_op2;
        break;
        case 3:
            PC = func_5794466192_op3;
        break;
        case 4:
            PC = func_5794466192_op4;
        break;
        case 5:
            PC = func_5794466192_op5;
        break;
    }
}
void func_5794465296(void) {
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
            PC = func_5794465296_op0;
        break;
        case 1:
            PC = func_5794465296_op1;
        break;
    }
}
void func_5794466720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5794466720_op0;
        break;
        case 1:
            PC = func_5794466720_op1;
        break;
        case 2:
            PC = func_5794466720_op2;
        break;
        case 3:
            PC = func_5794466720_op3;
        break;
        case 4:
            PC = func_5794466720_op4;
        break;
        case 5:
            PC = func_5794466720_op5;
        break;
        case 6:
            PC = func_5794466720_op6;
        break;
        case 7:
            PC = func_5794466720_op7;
        break;
        case 8:
            PC = func_5794466720_op8;
        break;
        case 9:
            PC = func_5794466720_op9;
        break;
    }
}
void func_5794465488(void) {
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
            PC = func_5794465488_op0;
        break;
    }
}
void func_5794466016(void) {
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
            PC = func_5794466016_op0;
        break;
    }
}
void func_5794466080(void) {
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
            PC = func_5794466080_op0;
        break;
        case 1:
            PC = func_5794466080_op1;
        break;
        case 2:
            PC = func_5794466080_op2;
        break;
    }
}
void func_5794466960(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5794466960_op0;
        break;
        case 1:
            PC = func_5794466960_op1;
        break;
    }
}
void func_5794467088(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5794467088_op0;
        break;
        case 1:
            PC = func_5794467088_op1;
        break;
    }
}
void func_5794467312(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5794467312;
}
void func_5794467440(void) {
    extend(61);
    NEXT();
}
void func_5794467568(void) {
    extend(59);
    NEXT();
}
void func_5794467936(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794467936;
}
void func_5794468064(void) {
    extend(62);
    NEXT();
}
void func_5794466384(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794466384;
}
void func_5794468448(void) {
    extend(60);
    NEXT();
}
void func_5794468576(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794468576;
}
void func_5794468704(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5794468832(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794468832;
}
void func_5794468960(void) {
    extend(43);
    NEXT();
}
void func_5794469120(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794469120;
}
void func_5794469248(void) {
    extend(45);
    NEXT();
}
void func_5794469472(void) {
    extend(120);
    NEXT();
}
void func_5794469600(void) {
    extend(121);
    NEXT();
}
void func_5794469728(void) {
    extend(122);
    NEXT();
}
void func_5794469856(void) {
    extend(97);
    NEXT();
}
void func_5794469984(void) {
    extend(98);
    NEXT();
}
void func_5794470176(void) {
    extend(99);
    NEXT();
}
void func_5794469408(void) {
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
    PC = exp_5794469408;
}
void func_5794467216(void) {
    extend(105);
    extend(102);
    NEXT();
}
void func_5794468192(void) {
    extend(40);
    NEXT();
}
void func_5794468320(void) {
    extend(41);
    NEXT();
}
void func_5794467760(void) {
    extend(123);
    NEXT();
}
void func_5794471664(void) {
    extend(125);
    NEXT();
}
void func_5794471792(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5794471600(void) {
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
    PC = exp_5794471600;
}
void func_5794470832(void) {
    extend(48);
    NEXT();
}
void func_5794467824(void) {
    extend(49);
    NEXT();
}
void func_5794472240(void) {
    extend(50);
    NEXT();
}
void func_5794472368(void) {
    extend(51);
    NEXT();
}
void func_5794472496(void) {
    extend(52);
    NEXT();
}
void func_5794472688(void) {
    extend(53);
    NEXT();
}
void func_5794472816(void) {
    extend(54);
    NEXT();
}
void func_5794472944(void) {
    extend(55);
    NEXT();
}
void func_5794473072(void) {
    extend(56);
    NEXT();
}
void func_5794472624(void) {
    extend(57);
    NEXT();
}
void func_5794473392(void) {
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
    PC = exp_5794473392;
}
void func_5794473520(void) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    NEXT();
}
void func_5794470656(void) {
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
    PC = exp_5794470656;
}
void func_5794470368(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5794470368;
}
void func_5794473792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5794473792;
}
void func_5794473920(void) {
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
    PC =func_5794466016_op0;
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
