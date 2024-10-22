#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 55
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
void func_5492479520(void);
void func_5492479888(void);
void func_5492480304(void);
void func_5492480400(void);
void func_5492480176(void);
void func_5492480096(void);
void func_5492480800(void);
void func_5492480016(void);
void func_5492480528(void);
void func_5492481056(void);
void func_5492480720(void);
void func_5492480992(void);
void func_5492481408(void);
void func_5492481776(void);
void func_5492481616(void);
void func_5492481344(void);
void func_5492481536(void);
void func_5492480592(void);
void func_5492482640(void);
void func_5492482768(void);
void func_5492482896(void);
void func_5492483024(void);
void func_5492483152(void);
void func_5492483280(void);
void func_5492483664(void);
void func_5492481248(void);
void func_5492483856(void);
void func_5492483984(void);
void func_5492484112(void);
void func_5492484304(void);
void func_5492484432(void);
void func_5492484560(void);
void func_5492484688(void);
void func_5492484240(void);
void func_5492485264(void);
void func_5492485392(void);
void func_5492482432(void);
void func_5492482560(void);
void func_5492483568(void);
void func_5492485744(void);
void func_5492485872(void);
void func_5492483408(void);
void func_5492486640(void);
void func_5492486768(void);
void func_5492481904(void);
void func_5492486416(void);
void func_5492487088(void);
void func_5492487216(void);
void func_5492487344(void);
void func_5492487472(void);
void func_5492487664(void);
void func_5492487792(void);
void func_5492487920(void);
void func_5492488048(void);
void func_5492487600(void);
void func_5492488816(void);
void func_5492486064(void);
void func_5492488640(void);
void func_5492486240(void);
void func_5492488304(void);
void func_5492488432(void);
void func_5492488944(void);
void func_5492489792(void);
void func_5492489920(void);
void func_5492489072(void);
void func_5492484752(void);
void func_5492489728(void);
void func_5492485120(void);
void HALT(void);
void RETURN(void);
Inst func_5492479520_op0[2] = {func_5492481344, RETURN};
Inst func_5492479888_op0[2] = {func_5492482640, RETURN};
Inst func_5492479888_op1[2] = {func_5492482896, RETURN};
Inst func_5492479888_op2[2] = {func_5492483152, RETURN};
Inst func_5492480304_op0[2] = {func_5492483664, RETURN};
Inst func_5492480304_op1[2] = {func_5492481248, RETURN};
Inst func_5492480304_op2[2] = {func_5492483856, RETURN};
Inst func_5492480304_op3[2] = {func_5492483984, RETURN};
Inst func_5492480304_op4[2] = {func_5492484112, RETURN};
Inst func_5492480304_op5[2] = {func_5492484304, RETURN};
Inst func_5492480304_op6[2] = {func_5492484432, RETURN};
Inst func_5492480304_op7[2] = {func_5492484560, RETURN};
Inst func_5492480304_op8[2] = {func_5492484688, RETURN};
Inst func_5492480304_op9[2] = {func_5492484240, RETURN};
Inst func_5492480400_op0[2] = {func_5492485264, RETURN};
Inst func_5492480400_op1[2] = {func_5492482432, RETURN};
Inst func_5492480400_op2[2] = {func_5492481776, RETURN};
Inst func_5492480176_op0[2] = {func_5492483568, RETURN};
Inst func_5492480176_op1[2] = {func_5492480528, RETURN};
Inst func_5492480176_op2[2] = {func_5492480800, RETURN};
Inst func_5492480096_op0[2] = {func_5492483408, RETURN};
Inst func_5492480800_op0[2] = {func_5492486416, RETURN};
Inst func_5492480800_op1[2] = {func_5492487088, RETURN};
Inst func_5492480800_op2[2] = {func_5492487216, RETURN};
Inst func_5492480800_op3[2] = {func_5492487344, RETURN};
Inst func_5492480800_op4[2] = {func_5492487472, RETURN};
Inst func_5492480800_op5[2] = {func_5492487664, RETURN};
Inst func_5492480800_op6[2] = {func_5492487792, RETURN};
Inst func_5492480800_op7[2] = {func_5492487920, RETURN};
Inst func_5492480800_op8[2] = {func_5492488048, RETURN};
Inst func_5492480016_op0[2] = {func_5492487600, RETURN};
Inst func_5492480016_op1[2] = {func_5492486064, RETURN};
Inst func_5492480528_op0[2] = {func_5492480304, RETURN};
Inst func_5492480528_op1[2] = {func_5492486240, RETURN};
Inst func_5492481056_op0[2] = {func_5492488304, RETURN};
Inst func_5492480720_op0[2] = {func_5492488944, RETURN};
Inst func_5492480992_op0[2] = {func_5492480720, HALT};
Inst func_5492481408_op0[2] = {func_5492480016, RETURN};
Inst func_5492481408_op1[2] = {func_5492481616, RETURN};
Inst func_5492481408_op2[2] = {func_5492480096, RETURN};
Inst func_5492481408_op3[2] = {func_5492479520, RETURN};
Inst func_5492481408_op4[2] = {func_5492481056, RETURN};
Inst func_5492481776_op0[2] = {func_5492489792, RETURN};
Inst func_5492481776_op1[2] = {func_5492489072, RETURN};
Inst func_5492481776_op2[2] = {func_5492480176, RETURN};
Inst func_5492481616_op0[2] = {func_5492489728, RETURN};
Inst exp_5492481344[5] = {func_5492480800, func_5492481536, func_5492480400, func_5492480592, RETURN};
Inst exp_5492482640[4] = {func_5492480400, func_5492482768, func_5492480400, RETURN};
Inst exp_5492482896[4] = {func_5492480400, func_5492483024, func_5492480400, RETURN};
Inst exp_5492483152[4] = {func_5492480400, func_5492483280, func_5492480400, RETURN};
Inst exp_5492485264[4] = {func_5492480400, func_5492485392, func_5492481776, RETURN};
Inst exp_5492482432[4] = {func_5492480400, func_5492482560, func_5492481776, RETURN};
Inst exp_5492483568[4] = {func_5492485744, func_5492480400, func_5492485872, RETURN};
Inst exp_5492483408[12] = {func_5492486640, func_5492485744, func_5492479520, func_5492480592, func_5492479888, func_5492480592, func_5492479520, func_5492485872, func_5492486768, func_5492480720, func_5492481904, RETURN};
Inst exp_5492487600[8] = {func_5492488816, func_5492485744, func_5492479888, func_5492485872, func_5492486768, func_5492480720, func_5492481904, RETURN};
Inst exp_5492486064[12] = {func_5492488816, func_5492485744, func_5492479888, func_5492485872, func_5492486768, func_5492480720, func_5492481904, func_5492488640, func_5492486768, func_5492480720, func_5492481904, RETURN};
Inst exp_5492486240[3] = {func_5492480304, func_5492480528, RETURN};
Inst exp_5492488304[6] = {func_5492488432, func_5492485744, func_5492480400, func_5492485872, func_5492480592, RETURN};
Inst exp_5492488944[3] = {func_5492481408, func_5492480720, RETURN};
Inst exp_5492489792[4] = {func_5492481776, func_5492489920, func_5492480176, RETURN};
Inst exp_5492489072[4] = {func_5492481776, func_5492484752, func_5492480176, RETURN};
Inst exp_5492489728[8] = {func_5492485120, func_5492485744, func_5492479888, func_5492485872, func_5492486768, func_5492480720, func_5492481904, RETURN};
void func_5492479520(void) {
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
            PC = func_5492479520_op0;
        break;
    }
}
void func_5492479888(void) {
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
            PC = func_5492479888_op0;
        break;
        case 1:
            PC = func_5492479888_op1;
        break;
        case 2:
            PC = func_5492479888_op2;
        break;
    }
}
void func_5492480304(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(10);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480304_op0;
        break;
        case 1:
            PC = func_5492480304_op1;
        break;
        case 2:
            PC = func_5492480304_op2;
        break;
        case 3:
            PC = func_5492480304_op3;
        break;
        case 4:
            PC = func_5492480304_op4;
        break;
        case 5:
            PC = func_5492480304_op5;
        break;
        case 6:
            PC = func_5492480304_op6;
        break;
        case 7:
            PC = func_5492480304_op7;
        break;
        case 8:
            PC = func_5492480304_op8;
        break;
        case 9:
            PC = func_5492480304_op9;
        break;
    }
}
void func_5492480400(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480400_op0;
        break;
        case 1:
            PC = func_5492480400_op1;
        break;
        case 2:
            PC = func_5492480400_op2;
        break;
    }
}
void func_5492480176(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480176_op0;
        break;
        case 1:
            PC = func_5492480176_op1;
        break;
        case 2:
            PC = func_5492480176_op2;
        break;
    }
}
void func_5492480096(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480096_op0;
        break;
    }
}
void func_5492480800(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(9);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480800_op0;
        break;
        case 1:
            PC = func_5492480800_op1;
        break;
        case 2:
            PC = func_5492480800_op2;
        break;
        case 3:
            PC = func_5492480800_op3;
        break;
        case 4:
            PC = func_5492480800_op4;
        break;
        case 5:
            PC = func_5492480800_op5;
        break;
        case 6:
            PC = func_5492480800_op6;
        break;
        case 7:
            PC = func_5492480800_op7;
        break;
        case 8:
            PC = func_5492480800_op8;
        break;
    }
}
void func_5492480016(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480016_op0;
        break;
        case 1:
            PC = func_5492480016_op1;
        break;
    }
}
void func_5492480528(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        NEXT();
        return;
    }
    xor(2);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480528_op0;
        break;
        case 1:
            PC = func_5492480528_op1;
        break;
    }
}
void func_5492481056(void) {
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
            PC = func_5492481056_op0;
        break;
    }
}
void func_5492480720(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480720_op0;
        break;
    }
}
void func_5492480992(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492480992_op0;
        break;
    }
}
void func_5492481408(void) {
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
            PC = func_5492481408_op0;
        break;
        case 1:
            PC = func_5492481408_op1;
        break;
        case 2:
            PC = func_5492481408_op2;
        break;
        case 3:
            PC = func_5492481408_op3;
        break;
        case 4:
            PC = func_5492481408_op4;
        break;
    }
}
void func_5492481776(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        NEXT();
        return;
    }
    xor(3);
    store();
    switch (branch) {
        case 0:
            PC = func_5492481776_op0;
        break;
        case 1:
            PC = func_5492481776_op1;
        break;
        case 2:
            PC = func_5492481776_op2;
        break;
    }
}
void func_5492481616(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    xor(1);
    store();
    switch (branch) {
        case 0:
            PC = func_5492481616_op0;
        break;
    }
}
void func_5492481344(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        NEXT();
        return;
    }
    store();
    PC = exp_5492481344;
}
void func_5492481536(void) {
    extend(61);
    NEXT();
}
void func_5492480592(void) {
    extend(59);
    NEXT();
}
void func_5492482640(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492482640;
}
void func_5492482768(void) {
    extend(62);
    NEXT();
}
void func_5492482896(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492482896;
}
void func_5492483024(void) {
    extend(60);
    NEXT();
}
void func_5492483152(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492483152;
}
void func_5492483280(void) {
    extend(61);
    extend(61);
    NEXT();
}
void func_5492483664(void) {
    extend(48);
    NEXT();
}
void func_5492481248(void) {
    extend(49);
    NEXT();
}
void func_5492483856(void) {
    extend(50);
    NEXT();
}
void func_5492483984(void) {
    extend(51);
    NEXT();
}
void func_5492484112(void) {
    extend(52);
    NEXT();
}
void func_5492484304(void) {
    extend(53);
    NEXT();
}
void func_5492484432(void) {
    extend(54);
    NEXT();
}
void func_5492484560(void) {
    extend(55);
    NEXT();
}
void func_5492484688(void) {
    extend(56);
    NEXT();
}
void func_5492484240(void) {
    extend(57);
    NEXT();
}
void func_5492485264(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492485264;
}
void func_5492485392(void) {
    extend(43);
    NEXT();
}
void func_5492482432(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492482432;
}
void func_5492482560(void) {
    extend(45);
    NEXT();
}
void func_5492483568(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        NEXT();
        return;
    }
    store();
    PC = exp_5492483568;
}
void func_5492485744(void) {
    extend(40);
    NEXT();
}
void func_5492485872(void) {
    extend(41);
    NEXT();
}
void func_5492483408(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492483408;
}
void func_5492486640(void) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    NEXT();
}
void func_5492486768(void) {
    extend(123);
    NEXT();
}
void func_5492481904(void) {
    extend(125);
    NEXT();
}
void func_5492486416(void) {
    extend(105);
    NEXT();
}
void func_5492487088(void) {
    extend(106);
    NEXT();
}
void func_5492487216(void) {
    extend(107);
    NEXT();
}
void func_5492487344(void) {
    extend(120);
    NEXT();
}
void func_5492487472(void) {
    extend(121);
    NEXT();
}
void func_5492487664(void) {
    extend(122);
    NEXT();
}
void func_5492487792(void) {
    extend(97);
    NEXT();
}
void func_5492487920(void) {
    extend(98);
    NEXT();
}
void func_5492488048(void) {
    extend(99);
    NEXT();
}
void func_5492487600(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492487600;
}
void func_5492488816(void) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    NEXT();
}
void func_5492486064(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492486064;
}
void func_5492488640(void) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    NEXT();
}
void func_5492486240(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(57);
        extend(57);
        NEXT();
        return;
    }
    store();
    PC = exp_5492486240;
}
void func_5492488304(void) {
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
    PC = exp_5492488304;
}
void func_5492488432(void) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    NEXT();
}
void func_5492488944(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492488944;
}
void func_5492489792(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492489792;
}
void func_5492489920(void) {
    extend(42);
    NEXT();
}
void func_5492489072(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        NEXT();
        return;
    }
    store();
    PC = exp_5492489072;
}
void func_5492484752(void) {
    extend(47);
    NEXT();
}
void func_5492489728(void) {
    if(stack.top == stack.frames + MAX_DEPTH) {
        NEXT();
        return;
    }
    store();
    PC = exp_5492489728;
}
void func_5492485120(void) {
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
    PC =func_5492480992_op0;
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
