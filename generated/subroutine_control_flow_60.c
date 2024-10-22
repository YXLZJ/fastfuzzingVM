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

bool endless = false;

void func_4804613664(unsigned depth);
void func_4804614032(unsigned depth);
void func_4804614448(unsigned depth);
void func_4804614544(unsigned depth);
void func_4804614320(unsigned depth);
void func_4804614240(unsigned depth);
void func_4804614944(unsigned depth);
void func_4804614160(unsigned depth);
void func_4804614672(unsigned depth);
void func_4804615200(unsigned depth);
void func_4804614864(unsigned depth);
void func_4804615136(unsigned depth);
void func_4804615552(unsigned depth);
void func_4804615920(unsigned depth);
void func_4804615760(unsigned depth);
void func_4804615488(unsigned depth);
void func_4804615680(unsigned depth);
void func_4804614736(unsigned depth);
void func_4804616784(unsigned depth);
void func_4804616912(unsigned depth);
void func_4804617040(unsigned depth);
void func_4804617168(unsigned depth);
void func_4804617296(unsigned depth);
void func_4804617424(unsigned depth);
void func_4804617808(unsigned depth);
void func_4804615392(unsigned depth);
void func_4804618000(unsigned depth);
void func_4804618128(unsigned depth);
void func_4804618256(unsigned depth);
void func_4804618448(unsigned depth);
void func_4804618576(unsigned depth);
void func_4804618704(unsigned depth);
void func_4804618832(unsigned depth);
void func_4804618384(unsigned depth);
void func_4804619408(unsigned depth);
void func_4804619536(unsigned depth);
void func_4804616576(unsigned depth);
void func_4804616704(unsigned depth);
void func_4804617712(unsigned depth);
void func_4804619888(unsigned depth);
void func_4804620016(unsigned depth);
void func_4804617552(unsigned depth);
void func_4804620784(unsigned depth);
void func_4804620912(unsigned depth);
void func_4804616048(unsigned depth);
void func_4804620560(unsigned depth);
void func_4804621232(unsigned depth);
void func_4804621360(unsigned depth);
void func_4804621488(unsigned depth);
void func_4804621616(unsigned depth);
void func_4804621808(unsigned depth);
void func_4804621936(unsigned depth);
void func_4804622064(unsigned depth);
void func_4804622192(unsigned depth);
void func_4804621744(unsigned depth);
void func_4804622960(unsigned depth);
void func_4804620208(unsigned depth);
void func_4804622784(unsigned depth);
void func_4804620384(unsigned depth);
void func_4804622448(unsigned depth);
void func_4804622576(unsigned depth);
void func_4804623088(unsigned depth);
void func_4804623936(unsigned depth);
void func_4804624064(unsigned depth);
void func_4804623216(unsigned depth);
void func_4804618896(unsigned depth);
void func_4804623872(unsigned depth);
void func_4804619264(unsigned depth);
void func_4804613664(unsigned depth) {
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
            func_4804615488(depth+1);
        break;
    }
    return;
}
void func_4804614032(unsigned depth) {
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
            func_4804616784(depth+1);
        break;
        case 1:
            func_4804617040(depth+1);
        break;
        case 2:
            func_4804617296(depth+1);
        break;
    }
    return;
}
void func_4804614448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4804617808(depth+1);
        break;
        case 1:
            func_4804615392(depth+1);
        break;
        case 2:
            func_4804618000(depth+1);
        break;
        case 3:
            func_4804618128(depth+1);
        break;
        case 4:
            func_4804618256(depth+1);
        break;
        case 5:
            func_4804618448(depth+1);
        break;
        case 6:
            func_4804618576(depth+1);
        break;
        case 7:
            func_4804618704(depth+1);
        break;
        case 8:
            func_4804618832(depth+1);
        break;
        case 9:
            func_4804618384(depth+1);
        break;
    }
    return;
}
void func_4804614544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4804619408(depth+1);
        break;
        case 1:
            func_4804616576(depth+1);
        break;
        case 2:
            func_4804615920(depth+1);
        break;
    }
    return;
}
void func_4804614320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4804617712(depth+1);
        break;
        case 1:
            func_4804614672(depth+1);
        break;
        case 2:
            func_4804614944(depth+1);
        break;
    }
    return;
}
void func_4804614240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4804617552(depth+1);
        break;
    }
    return;
}
void func_4804614944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4804620560(depth+1);
        break;
        case 1:
            func_4804621232(depth+1);
        break;
        case 2:
            func_4804621360(depth+1);
        break;
        case 3:
            func_4804621488(depth+1);
        break;
        case 4:
            func_4804621616(depth+1);
        break;
        case 5:
            func_4804621808(depth+1);
        break;
        case 6:
            func_4804621936(depth+1);
        break;
        case 7:
            func_4804622064(depth+1);
        break;
        case 8:
            func_4804622192(depth+1);
        break;
    }
    return;
}
void func_4804614160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4804621744(depth+1);
        break;
        case 1:
            func_4804620208(depth+1);
        break;
    }
    return;
}
void func_4804614672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4804614448(depth+1);
        break;
        case 1:
            func_4804620384(depth+1);
        break;
    }
    return;
}
void func_4804615200(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4804622448(depth+1);
        break;
    }
    return;
}
void func_4804614864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4804623088(depth+1);
        break;
    }
    return;
}
void func_4804615136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4804614864(depth+1);
        break;
    }
    return;
}
void func_4804615552(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4804614160(depth+1);
        break;
        case 1:
            func_4804615760(depth+1);
        break;
        case 2:
            func_4804614240(depth+1);
        break;
        case 3:
            func_4804613664(depth+1);
        break;
        case 4:
            func_4804615200(depth+1);
        break;
    }
    return;
}
void func_4804615920(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4804623936(depth+1);
        break;
        case 1:
            func_4804623216(depth+1);
        break;
        case 2:
            func_4804614320(depth+1);
        break;
    }
    return;
}
void func_4804615760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4804623872(depth+1);
        break;
    }
    return;
}
void func_4804615488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4804614944(depth+1);
    func_4804615680(depth+1);
    func_4804614544(depth+1);
    func_4804614736(depth+1);
    return;
}
void func_4804615680(unsigned depth) {
    extend(61);
    return;
}
void func_4804614736(unsigned depth) {
    extend(59);
    return;
}
void func_4804616784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4804614544(depth+1);
    func_4804616912(depth+1);
    func_4804614544(depth+1);
    return;
}
void func_4804616912(unsigned depth) {
    extend(62);
    return;
}
void func_4804617040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4804614544(depth+1);
    func_4804617168(depth+1);
    func_4804614544(depth+1);
    return;
}
void func_4804617168(unsigned depth) {
    extend(60);
    return;
}
void func_4804617296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4804614544(depth+1);
    func_4804617424(depth+1);
    func_4804614544(depth+1);
    return;
}
void func_4804617424(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4804617808(unsigned depth) {
    extend(48);
    return;
}
void func_4804615392(unsigned depth) {
    extend(49);
    return;
}
void func_4804618000(unsigned depth) {
    extend(50);
    return;
}
void func_4804618128(unsigned depth) {
    extend(51);
    return;
}
void func_4804618256(unsigned depth) {
    extend(52);
    return;
}
void func_4804618448(unsigned depth) {
    extend(53);
    return;
}
void func_4804618576(unsigned depth) {
    extend(54);
    return;
}
void func_4804618704(unsigned depth) {
    extend(55);
    return;
}
void func_4804618832(unsigned depth) {
    extend(56);
    return;
}
void func_4804618384(unsigned depth) {
    extend(57);
    return;
}
void func_4804619408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4804614544(depth+1);
    func_4804619536(depth+1);
    func_4804615920(depth+1);
    return;
}
void func_4804619536(unsigned depth) {
    extend(43);
    return;
}
void func_4804616576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4804614544(depth+1);
    func_4804616704(depth+1);
    func_4804615920(depth+1);
    return;
}
void func_4804616704(unsigned depth) {
    extend(45);
    return;
}
void func_4804617712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4804619888(depth+1);
    func_4804614544(depth+1);
    func_4804620016(depth+1);
    return;
}
void func_4804619888(unsigned depth) {
    extend(40);
    return;
}
void func_4804620016(unsigned depth) {
    extend(41);
    return;
}
void func_4804617552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4804620784(depth+1);
    func_4804619888(depth+1);
    func_4804613664(depth+1);
    func_4804614736(depth+1);
    func_4804614032(depth+1);
    func_4804614736(depth+1);
    func_4804613664(depth+1);
    func_4804620016(depth+1);
    func_4804620912(depth+1);
    func_4804614864(depth+1);
    func_4804616048(depth+1);
    return;
}
void func_4804620784(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4804620912(unsigned depth) {
    extend(123);
    return;
}
void func_4804616048(unsigned depth) {
    extend(125);
    return;
}
void func_4804620560(unsigned depth) {
    extend(105);
    return;
}
void func_4804621232(unsigned depth) {
    extend(106);
    return;
}
void func_4804621360(unsigned depth) {
    extend(107);
    return;
}
void func_4804621488(unsigned depth) {
    extend(120);
    return;
}
void func_4804621616(unsigned depth) {
    extend(121);
    return;
}
void func_4804621808(unsigned depth) {
    extend(122);
    return;
}
void func_4804621936(unsigned depth) {
    extend(97);
    return;
}
void func_4804622064(unsigned depth) {
    extend(98);
    return;
}
void func_4804622192(unsigned depth) {
    extend(99);
    return;
}
void func_4804621744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4804622960(depth+1);
    func_4804619888(depth+1);
    func_4804614032(depth+1);
    func_4804620016(depth+1);
    func_4804620912(depth+1);
    func_4804614864(depth+1);
    func_4804616048(depth+1);
    return;
}
void func_4804622960(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4804620208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4804622960(depth+1);
    func_4804619888(depth+1);
    func_4804614032(depth+1);
    func_4804620016(depth+1);
    func_4804620912(depth+1);
    func_4804614864(depth+1);
    func_4804616048(depth+1);
    func_4804622784(depth+1);
    func_4804620912(depth+1);
    func_4804614864(depth+1);
    func_4804616048(depth+1);
    return;
}
void func_4804622784(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4804620384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4804614448(depth+1);
    func_4804614672(depth+1);
    return;
}
void func_4804622448(unsigned depth) {
    if(depth > MAX_DEPTH) {
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
        return;
    }
    func_4804622576(depth+1);
    func_4804619888(depth+1);
    func_4804614544(depth+1);
    func_4804620016(depth+1);
    func_4804614736(depth+1);
    return;
}
void func_4804622576(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4804623088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4804615552(depth+1);
    func_4804614864(depth+1);
    return;
}
void func_4804623936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4804615920(depth+1);
    func_4804624064(depth+1);
    func_4804614320(depth+1);
    return;
}
void func_4804624064(unsigned depth) {
    extend(42);
    return;
}
void func_4804623216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4804615920(depth+1);
    func_4804618896(depth+1);
    func_4804614320(depth+1);
    return;
}
void func_4804618896(unsigned depth) {
    extend(47);
    return;
}
void func_4804623872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4804619264(depth+1);
    func_4804619888(depth+1);
    func_4804614032(depth+1);
    func_4804620016(depth+1);
    func_4804620912(depth+1);
    func_4804614864(depth+1);
    func_4804616048(depth+1);
    return;
}
void func_4804619264(unsigned depth) {
    extend(32);
    extend(119);
    extend(104);
    extend(105);
    extend(108);
    extend(101);
    extend(32);
    return;
}
int main(void) {
    static unsigned count = 16;
    seed = time(NULL);
    func_4804615136(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
