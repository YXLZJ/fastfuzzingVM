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

bool endless = false;

void func_5089813216(unsigned depth);
void func_5089822656(unsigned depth);
void func_5089822576(unsigned depth);
void func_5089822496(unsigned depth);
void func_5089823120(unsigned depth);
void func_5089822224(unsigned depth);
void func_5089823648(unsigned depth);
void func_5089822416(unsigned depth);
void func_5089822944(unsigned depth);
void func_5089823008(unsigned depth);
void func_5089823888(unsigned depth);
void func_5089824016(unsigned depth);
void func_5089824240(unsigned depth);
void func_5089824368(unsigned depth);
void func_5089824496(unsigned depth);
void func_5089824864(unsigned depth);
void func_5089824992(unsigned depth);
void func_5089823312(unsigned depth);
void func_5089825376(unsigned depth);
void func_5089825504(unsigned depth);
void func_5089825632(unsigned depth);
void func_5089825760(unsigned depth);
void func_5089825888(unsigned depth);
void func_5089826048(unsigned depth);
void func_5089826176(unsigned depth);
void func_5089826400(unsigned depth);
void func_5089826528(unsigned depth);
void func_5089826656(unsigned depth);
void func_5089826784(unsigned depth);
void func_5089826912(unsigned depth);
void func_5089827104(unsigned depth);
void func_5089826336(unsigned depth);
void func_5089824144(unsigned depth);
void func_5089825120(unsigned depth);
void func_5089825248(unsigned depth);
void func_5089824688(unsigned depth);
void func_5089828592(unsigned depth);
void func_5089828720(unsigned depth);
void func_5089828528(unsigned depth);
void func_5089827760(unsigned depth);
void func_5089824752(unsigned depth);
void func_5089829168(unsigned depth);
void func_5089829296(unsigned depth);
void func_5089829424(unsigned depth);
void func_5089829616(unsigned depth);
void func_5089829744(unsigned depth);
void func_5089829872(unsigned depth);
void func_5089830000(unsigned depth);
void func_5089829552(unsigned depth);
void func_5089830320(unsigned depth);
void func_5089830448(unsigned depth);
void func_5089827584(unsigned depth);
void func_5089827296(unsigned depth);
void func_5089830720(unsigned depth);
void func_5089830848(unsigned depth);
void func_5089813216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5089824240(depth+1);
        break;
    }
    return;
}
void func_5089822656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5089824864(depth+1);
        break;
        case 1:
            func_5089823312(depth+1);
        break;
        case 2:
            func_5089825504(depth+1);
        break;
    }
    return;
}
void func_5089822576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5089825760(depth+1);
        break;
        case 1:
            func_5089824016(depth+1);
        break;
        case 2:
            func_5089826048(depth+1);
        break;
    }
    return;
}
void func_5089822496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5089823648(depth+1);
        break;
        case 1:
            func_5089823120(depth+1);
        break;
    }
    return;
}
void func_5089823120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5089826400(depth+1);
        break;
        case 1:
            func_5089826528(depth+1);
        break;
        case 2:
            func_5089826656(depth+1);
        break;
        case 3:
            func_5089826784(depth+1);
        break;
        case 4:
            func_5089826912(depth+1);
        break;
        case 5:
            func_5089827104(depth+1);
        break;
    }
    return;
}
void func_5089822224(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5089826336(depth+1);
        break;
        case 1:
            func_5089828528(depth+1);
        break;
    }
    return;
}
void func_5089823648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5089827760(depth+1);
        break;
        case 1:
            func_5089824752(depth+1);
        break;
        case 2:
            func_5089829168(depth+1);
        break;
        case 3:
            func_5089829296(depth+1);
        break;
        case 4:
            func_5089829424(depth+1);
        break;
        case 5:
            func_5089829616(depth+1);
        break;
        case 6:
            func_5089829744(depth+1);
        break;
        case 7:
            func_5089829872(depth+1);
        break;
        case 8:
            func_5089830000(depth+1);
        break;
        case 9:
            func_5089829552(depth+1);
        break;
    }
    return;
}
void func_5089822416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5089830320(depth+1);
        break;
    }
    return;
}
void func_5089822944(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5089822224(depth+1);
        break;
    }
    return;
}
void func_5089823008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5089822224(depth+1);
        break;
        case 1:
            func_5089813216(depth+1);
        break;
        case 2:
            func_5089822416(depth+1);
        break;
    }
    return;
}
void func_5089823888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5089827584(depth+1);
        break;
        case 1:
            func_5089827296(depth+1);
        break;
    }
    return;
}
void func_5089824016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5089822496(depth+1);
        break;
        case 1:
            func_5089830720(depth+1);
        break;
    }
    return;
}
void func_5089824240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5089823120(depth+1);
    func_5089824368(depth+1);
    func_5089822576(depth+1);
    func_5089824496(depth+1);
    return;
}
void func_5089824368(unsigned depth) {
    extend(61);
    return;
}
void func_5089824496(unsigned depth) {
    extend(59);
    return;
}
void func_5089824864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5089822576(depth+1);
    func_5089824992(depth+1);
    func_5089822576(depth+1);
    return;
}
void func_5089824992(unsigned depth) {
    extend(62);
    return;
}
void func_5089823312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5089822576(depth+1);
    func_5089825376(depth+1);
    func_5089822576(depth+1);
    return;
}
void func_5089825376(unsigned depth) {
    extend(60);
    return;
}
void func_5089825504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5089822576(depth+1);
    func_5089825632(depth+1);
    func_5089822576(depth+1);
    return;
}
void func_5089825632(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5089825760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5089824016(depth+1);
    func_5089825888(depth+1);
    func_5089822576(depth+1);
    return;
}
void func_5089825888(unsigned depth) {
    extend(43);
    return;
}
void func_5089826048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5089824016(depth+1);
    func_5089826176(depth+1);
    func_5089822576(depth+1);
    return;
}
void func_5089826176(unsigned depth) {
    extend(45);
    return;
}
void func_5089826400(unsigned depth) {
    extend(120);
    return;
}
void func_5089826528(unsigned depth) {
    extend(121);
    return;
}
void func_5089826656(unsigned depth) {
    extend(122);
    return;
}
void func_5089826784(unsigned depth) {
    extend(97);
    return;
}
void func_5089826912(unsigned depth) {
    extend(98);
    return;
}
void func_5089827104(unsigned depth) {
    extend(99);
    return;
}
void func_5089826336(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_5089824144(depth+1);
    func_5089825120(depth+1);
    func_5089822656(depth+1);
    func_5089825248(depth+1);
    func_5089824688(depth+1);
    func_5089823888(depth+1);
    func_5089828592(depth+1);
    func_5089828720(depth+1);
    func_5089824688(depth+1);
    func_5089823888(depth+1);
    func_5089828592(depth+1);
    return;
}
void func_5089824144(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5089825120(unsigned depth) {
    extend(40);
    return;
}
void func_5089825248(unsigned depth) {
    extend(41);
    return;
}
void func_5089824688(unsigned depth) {
    extend(123);
    return;
}
void func_5089828592(unsigned depth) {
    extend(125);
    return;
}
void func_5089828720(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5089828528(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_5089824144(depth+1);
    func_5089825120(depth+1);
    func_5089822656(depth+1);
    func_5089825248(depth+1);
    func_5089824688(depth+1);
    func_5089823888(depth+1);
    func_5089828592(depth+1);
    return;
}
void func_5089827760(unsigned depth) {
    extend(48);
    return;
}
void func_5089824752(unsigned depth) {
    extend(49);
    return;
}
void func_5089829168(unsigned depth) {
    extend(50);
    return;
}
void func_5089829296(unsigned depth) {
    extend(51);
    return;
}
void func_5089829424(unsigned depth) {
    extend(52);
    return;
}
void func_5089829616(unsigned depth) {
    extend(53);
    return;
}
void func_5089829744(unsigned depth) {
    extend(54);
    return;
}
void func_5089829872(unsigned depth) {
    extend(55);
    return;
}
void func_5089830000(unsigned depth) {
    extend(56);
    return;
}
void func_5089829552(unsigned depth) {
    extend(57);
    return;
}
void func_5089830320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5089830448(depth+1);
    func_5089825120(depth+1);
    func_5089822576(depth+1);
    func_5089825248(depth+1);
    func_5089824496(depth+1);
    return;
}
void func_5089830448(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5089827584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5089823008(depth+1);
    func_5089823888(depth+1);
    return;
}
void func_5089827296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5089830720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5089822496(depth+1);
    func_5089830848(depth+1);
    func_5089824016(depth+1);
    return;
}
void func_5089830848(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5089822944(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
