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

void func_5400204832(unsigned depth);
void func_5400205200(unsigned depth);
void func_5400205616(unsigned depth);
void func_5400205712(unsigned depth);
void func_5400205488(unsigned depth);
void func_5400205408(unsigned depth);
void func_5400206112(unsigned depth);
void func_5400205328(unsigned depth);
void func_5400205840(unsigned depth);
void func_5400206368(unsigned depth);
void func_5400206032(unsigned depth);
void func_5400206304(unsigned depth);
void func_5400206720(unsigned depth);
void func_5400207088(unsigned depth);
void func_5400206928(unsigned depth);
void func_5400206656(unsigned depth);
void func_5400206848(unsigned depth);
void func_5400205904(unsigned depth);
void func_5400207952(unsigned depth);
void func_5400208080(unsigned depth);
void func_5400208208(unsigned depth);
void func_5400208336(unsigned depth);
void func_5400208464(unsigned depth);
void func_5400208592(unsigned depth);
void func_5400208976(unsigned depth);
void func_5400206560(unsigned depth);
void func_5400209168(unsigned depth);
void func_5400209296(unsigned depth);
void func_5400209424(unsigned depth);
void func_5400209616(unsigned depth);
void func_5400209744(unsigned depth);
void func_5400209872(unsigned depth);
void func_5400210000(unsigned depth);
void func_5400209552(unsigned depth);
void func_5400210576(unsigned depth);
void func_5400210704(unsigned depth);
void func_5400207744(unsigned depth);
void func_5400207872(unsigned depth);
void func_5400208880(unsigned depth);
void func_5400211056(unsigned depth);
void func_5400211184(unsigned depth);
void func_5400208720(unsigned depth);
void func_5400211952(unsigned depth);
void func_5400212080(unsigned depth);
void func_5400207216(unsigned depth);
void func_5400211728(unsigned depth);
void func_5400212400(unsigned depth);
void func_5400212528(unsigned depth);
void func_5400212656(unsigned depth);
void func_5400212784(unsigned depth);
void func_5400212976(unsigned depth);
void func_5400213104(unsigned depth);
void func_5400213232(unsigned depth);
void func_5400213360(unsigned depth);
void func_5400212912(unsigned depth);
void func_5400214128(unsigned depth);
void func_5400211376(unsigned depth);
void func_5400213952(unsigned depth);
void func_5400211552(unsigned depth);
void func_5400213616(unsigned depth);
void func_5400213744(unsigned depth);
void func_5400214256(unsigned depth);
void func_5400215104(unsigned depth);
void func_5400215232(unsigned depth);
void func_5400214384(unsigned depth);
void func_5400210064(unsigned depth);
void func_5400215040(unsigned depth);
void func_5400210432(unsigned depth);
void func_5400204832(unsigned depth) {
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
            func_5400206656(depth+1);
        break;
    }
    return;
}
void func_5400205200(unsigned depth) {
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
            func_5400207952(depth+1);
        break;
        case 1:
            func_5400208208(depth+1);
        break;
        case 2:
            func_5400208464(depth+1);
        break;
    }
    return;
}
void func_5400205616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5400208976(depth+1);
        break;
        case 1:
            func_5400206560(depth+1);
        break;
        case 2:
            func_5400209168(depth+1);
        break;
        case 3:
            func_5400209296(depth+1);
        break;
        case 4:
            func_5400209424(depth+1);
        break;
        case 5:
            func_5400209616(depth+1);
        break;
        case 6:
            func_5400209744(depth+1);
        break;
        case 7:
            func_5400209872(depth+1);
        break;
        case 8:
            func_5400210000(depth+1);
        break;
        case 9:
            func_5400209552(depth+1);
        break;
    }
    return;
}
void func_5400205712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5400210576(depth+1);
        break;
        case 1:
            func_5400207744(depth+1);
        break;
        case 2:
            func_5400207088(depth+1);
        break;
    }
    return;
}
void func_5400205488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5400208880(depth+1);
        break;
        case 1:
            func_5400205840(depth+1);
        break;
        case 2:
            func_5400206112(depth+1);
        break;
    }
    return;
}
void func_5400205408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5400208720(depth+1);
        break;
    }
    return;
}
void func_5400206112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5400211728(depth+1);
        break;
        case 1:
            func_5400212400(depth+1);
        break;
        case 2:
            func_5400212528(depth+1);
        break;
        case 3:
            func_5400212656(depth+1);
        break;
        case 4:
            func_5400212784(depth+1);
        break;
        case 5:
            func_5400212976(depth+1);
        break;
        case 6:
            func_5400213104(depth+1);
        break;
        case 7:
            func_5400213232(depth+1);
        break;
        case 8:
            func_5400213360(depth+1);
        break;
    }
    return;
}
void func_5400205328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5400212912(depth+1);
        break;
        case 1:
            func_5400211376(depth+1);
        break;
    }
    return;
}
void func_5400205840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5400205616(depth+1);
        break;
        case 1:
            func_5400211552(depth+1);
        break;
    }
    return;
}
void func_5400206368(unsigned depth) {
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
            func_5400213616(depth+1);
        break;
    }
    return;
}
void func_5400206032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5400214256(depth+1);
        break;
    }
    return;
}
void func_5400206304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5400206032(depth+1);
        break;
    }
    return;
}
void func_5400206720(unsigned depth) {
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
            func_5400205328(depth+1);
        break;
        case 1:
            func_5400206928(depth+1);
        break;
        case 2:
            func_5400205408(depth+1);
        break;
        case 3:
            func_5400204832(depth+1);
        break;
        case 4:
            func_5400206368(depth+1);
        break;
    }
    return;
}
void func_5400207088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5400215104(depth+1);
        break;
        case 1:
            func_5400214384(depth+1);
        break;
        case 2:
            func_5400205488(depth+1);
        break;
    }
    return;
}
void func_5400206928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5400215040(depth+1);
        break;
    }
    return;
}
void func_5400206656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5400206112(depth+1);
    func_5400206848(depth+1);
    func_5400205712(depth+1);
    func_5400205904(depth+1);
    return;
}
void func_5400206848(unsigned depth) {
    extend(61);
    return;
}
void func_5400205904(unsigned depth) {
    extend(59);
    return;
}
void func_5400207952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5400205712(depth+1);
    func_5400208080(depth+1);
    func_5400205712(depth+1);
    return;
}
void func_5400208080(unsigned depth) {
    extend(62);
    return;
}
void func_5400208208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5400205712(depth+1);
    func_5400208336(depth+1);
    func_5400205712(depth+1);
    return;
}
void func_5400208336(unsigned depth) {
    extend(60);
    return;
}
void func_5400208464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5400205712(depth+1);
    func_5400208592(depth+1);
    func_5400205712(depth+1);
    return;
}
void func_5400208592(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5400208976(unsigned depth) {
    extend(48);
    return;
}
void func_5400206560(unsigned depth) {
    extend(49);
    return;
}
void func_5400209168(unsigned depth) {
    extend(50);
    return;
}
void func_5400209296(unsigned depth) {
    extend(51);
    return;
}
void func_5400209424(unsigned depth) {
    extend(52);
    return;
}
void func_5400209616(unsigned depth) {
    extend(53);
    return;
}
void func_5400209744(unsigned depth) {
    extend(54);
    return;
}
void func_5400209872(unsigned depth) {
    extend(55);
    return;
}
void func_5400210000(unsigned depth) {
    extend(56);
    return;
}
void func_5400209552(unsigned depth) {
    extend(57);
    return;
}
void func_5400210576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5400205712(depth+1);
    func_5400210704(depth+1);
    func_5400207088(depth+1);
    return;
}
void func_5400210704(unsigned depth) {
    extend(43);
    return;
}
void func_5400207744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5400205712(depth+1);
    func_5400207872(depth+1);
    func_5400207088(depth+1);
    return;
}
void func_5400207872(unsigned depth) {
    extend(45);
    return;
}
void func_5400208880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5400211056(depth+1);
    func_5400205712(depth+1);
    func_5400211184(depth+1);
    return;
}
void func_5400211056(unsigned depth) {
    extend(40);
    return;
}
void func_5400211184(unsigned depth) {
    extend(41);
    return;
}
void func_5400208720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5400211952(depth+1);
    func_5400211056(depth+1);
    func_5400204832(depth+1);
    func_5400205904(depth+1);
    func_5400205200(depth+1);
    func_5400205904(depth+1);
    func_5400204832(depth+1);
    func_5400211184(depth+1);
    func_5400212080(depth+1);
    func_5400206032(depth+1);
    func_5400207216(depth+1);
    return;
}
void func_5400211952(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5400212080(unsigned depth) {
    extend(123);
    return;
}
void func_5400207216(unsigned depth) {
    extend(125);
    return;
}
void func_5400211728(unsigned depth) {
    extend(105);
    return;
}
void func_5400212400(unsigned depth) {
    extend(106);
    return;
}
void func_5400212528(unsigned depth) {
    extend(107);
    return;
}
void func_5400212656(unsigned depth) {
    extend(120);
    return;
}
void func_5400212784(unsigned depth) {
    extend(121);
    return;
}
void func_5400212976(unsigned depth) {
    extend(122);
    return;
}
void func_5400213104(unsigned depth) {
    extend(97);
    return;
}
void func_5400213232(unsigned depth) {
    extend(98);
    return;
}
void func_5400213360(unsigned depth) {
    extend(99);
    return;
}
void func_5400212912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5400214128(depth+1);
    func_5400211056(depth+1);
    func_5400205200(depth+1);
    func_5400211184(depth+1);
    func_5400212080(depth+1);
    func_5400206032(depth+1);
    func_5400207216(depth+1);
    return;
}
void func_5400214128(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5400211376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5400214128(depth+1);
    func_5400211056(depth+1);
    func_5400205200(depth+1);
    func_5400211184(depth+1);
    func_5400212080(depth+1);
    func_5400206032(depth+1);
    func_5400207216(depth+1);
    func_5400213952(depth+1);
    func_5400212080(depth+1);
    func_5400206032(depth+1);
    func_5400207216(depth+1);
    return;
}
void func_5400213952(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5400211552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5400205616(depth+1);
    func_5400205840(depth+1);
    return;
}
void func_5400213616(unsigned depth) {
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
    func_5400213744(depth+1);
    func_5400211056(depth+1);
    func_5400205712(depth+1);
    func_5400211184(depth+1);
    func_5400205904(depth+1);
    return;
}
void func_5400213744(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5400214256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5400206720(depth+1);
    func_5400206032(depth+1);
    return;
}
void func_5400215104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5400207088(depth+1);
    func_5400215232(depth+1);
    func_5400205488(depth+1);
    return;
}
void func_5400215232(unsigned depth) {
    extend(42);
    return;
}
void func_5400214384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5400207088(depth+1);
    func_5400210064(depth+1);
    func_5400205488(depth+1);
    return;
}
void func_5400210064(unsigned depth) {
    extend(47);
    return;
}
void func_5400215040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5400210432(depth+1);
    func_5400211056(depth+1);
    func_5400205200(depth+1);
    func_5400211184(depth+1);
    func_5400212080(depth+1);
    func_5400206032(depth+1);
    func_5400207216(depth+1);
    return;
}
void func_5400210432(unsigned depth) {
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
    func_5400206304(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
