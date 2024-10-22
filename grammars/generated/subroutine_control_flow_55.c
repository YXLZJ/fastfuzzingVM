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

bool endless = false;

void func_5500868128(unsigned depth);
void func_5500868496(unsigned depth);
void func_5500868912(unsigned depth);
void func_5500869008(unsigned depth);
void func_5500868784(unsigned depth);
void func_5500868704(unsigned depth);
void func_5500869408(unsigned depth);
void func_5500868624(unsigned depth);
void func_5500869136(unsigned depth);
void func_5500869664(unsigned depth);
void func_5500869328(unsigned depth);
void func_5500869600(unsigned depth);
void func_5500870016(unsigned depth);
void func_5500870384(unsigned depth);
void func_5500870224(unsigned depth);
void func_5500869952(unsigned depth);
void func_5500870144(unsigned depth);
void func_5500869200(unsigned depth);
void func_5500871248(unsigned depth);
void func_5500871376(unsigned depth);
void func_5500871504(unsigned depth);
void func_5500871632(unsigned depth);
void func_5500871760(unsigned depth);
void func_5500871888(unsigned depth);
void func_5500872272(unsigned depth);
void func_5500869856(unsigned depth);
void func_5500872464(unsigned depth);
void func_5500872592(unsigned depth);
void func_5500872720(unsigned depth);
void func_5500872912(unsigned depth);
void func_5500873040(unsigned depth);
void func_5500873168(unsigned depth);
void func_5500873296(unsigned depth);
void func_5500872848(unsigned depth);
void func_5500873872(unsigned depth);
void func_5500874000(unsigned depth);
void func_5500871040(unsigned depth);
void func_5500871168(unsigned depth);
void func_5500872176(unsigned depth);
void func_5500874352(unsigned depth);
void func_5500874480(unsigned depth);
void func_5500872016(unsigned depth);
void func_5500875248(unsigned depth);
void func_5500875376(unsigned depth);
void func_5500870512(unsigned depth);
void func_5500875024(unsigned depth);
void func_5500875696(unsigned depth);
void func_5500875824(unsigned depth);
void func_5500875952(unsigned depth);
void func_5500876080(unsigned depth);
void func_5500876272(unsigned depth);
void func_5500876400(unsigned depth);
void func_5500876528(unsigned depth);
void func_5500876656(unsigned depth);
void func_5500876208(unsigned depth);
void func_5500877424(unsigned depth);
void func_5500874672(unsigned depth);
void func_5500877248(unsigned depth);
void func_5500874848(unsigned depth);
void func_5500876912(unsigned depth);
void func_5500877040(unsigned depth);
void func_5500877552(unsigned depth);
void func_5500878400(unsigned depth);
void func_5500878528(unsigned depth);
void func_5500877680(unsigned depth);
void func_5500873360(unsigned depth);
void func_5500878336(unsigned depth);
void func_5500873728(unsigned depth);
void func_5500868128(unsigned depth) {
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
            func_5500869952(depth+1);
        break;
    }
    return;
}
void func_5500868496(unsigned depth) {
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
            func_5500871248(depth+1);
        break;
        case 1:
            func_5500871504(depth+1);
        break;
        case 2:
            func_5500871760(depth+1);
        break;
    }
    return;
}
void func_5500868912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5500872272(depth+1);
        break;
        case 1:
            func_5500869856(depth+1);
        break;
        case 2:
            func_5500872464(depth+1);
        break;
        case 3:
            func_5500872592(depth+1);
        break;
        case 4:
            func_5500872720(depth+1);
        break;
        case 5:
            func_5500872912(depth+1);
        break;
        case 6:
            func_5500873040(depth+1);
        break;
        case 7:
            func_5500873168(depth+1);
        break;
        case 8:
            func_5500873296(depth+1);
        break;
        case 9:
            func_5500872848(depth+1);
        break;
    }
    return;
}
void func_5500869008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500873872(depth+1);
        break;
        case 1:
            func_5500871040(depth+1);
        break;
        case 2:
            func_5500870384(depth+1);
        break;
    }
    return;
}
void func_5500868784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500872176(depth+1);
        break;
        case 1:
            func_5500869136(depth+1);
        break;
        case 2:
            func_5500869408(depth+1);
        break;
    }
    return;
}
void func_5500868704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500872016(depth+1);
        break;
    }
    return;
}
void func_5500869408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5500875024(depth+1);
        break;
        case 1:
            func_5500875696(depth+1);
        break;
        case 2:
            func_5500875824(depth+1);
        break;
        case 3:
            func_5500875952(depth+1);
        break;
        case 4:
            func_5500876080(depth+1);
        break;
        case 5:
            func_5500876272(depth+1);
        break;
        case 6:
            func_5500876400(depth+1);
        break;
        case 7:
            func_5500876528(depth+1);
        break;
        case 8:
            func_5500876656(depth+1);
        break;
    }
    return;
}
void func_5500868624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500876208(depth+1);
        break;
        case 1:
            func_5500874672(depth+1);
        break;
    }
    return;
}
void func_5500869136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500868912(depth+1);
        break;
        case 1:
            func_5500874848(depth+1);
        break;
    }
    return;
}
void func_5500869664(unsigned depth) {
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
            func_5500876912(depth+1);
        break;
    }
    return;
}
void func_5500869328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500877552(depth+1);
        break;
    }
    return;
}
void func_5500869600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500869328(depth+1);
        break;
    }
    return;
}
void func_5500870016(unsigned depth) {
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
            func_5500868624(depth+1);
        break;
        case 1:
            func_5500870224(depth+1);
        break;
        case 2:
            func_5500868704(depth+1);
        break;
        case 3:
            func_5500868128(depth+1);
        break;
        case 4:
            func_5500869664(depth+1);
        break;
    }
    return;
}
void func_5500870384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500878400(depth+1);
        break;
        case 1:
            func_5500877680(depth+1);
        break;
        case 2:
            func_5500868784(depth+1);
        break;
    }
    return;
}
void func_5500870224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500878336(depth+1);
        break;
    }
    return;
}
void func_5500869952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5500869408(depth+1);
    func_5500870144(depth+1);
    func_5500869008(depth+1);
    func_5500869200(depth+1);
    return;
}
void func_5500870144(unsigned depth) {
    extend(61);
    return;
}
void func_5500869200(unsigned depth) {
    extend(59);
    return;
}
void func_5500871248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5500869008(depth+1);
    func_5500871376(depth+1);
    func_5500869008(depth+1);
    return;
}
void func_5500871376(unsigned depth) {
    extend(62);
    return;
}
void func_5500871504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5500869008(depth+1);
    func_5500871632(depth+1);
    func_5500869008(depth+1);
    return;
}
void func_5500871632(unsigned depth) {
    extend(60);
    return;
}
void func_5500871760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5500869008(depth+1);
    func_5500871888(depth+1);
    func_5500869008(depth+1);
    return;
}
void func_5500871888(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5500872272(unsigned depth) {
    extend(48);
    return;
}
void func_5500869856(unsigned depth) {
    extend(49);
    return;
}
void func_5500872464(unsigned depth) {
    extend(50);
    return;
}
void func_5500872592(unsigned depth) {
    extend(51);
    return;
}
void func_5500872720(unsigned depth) {
    extend(52);
    return;
}
void func_5500872912(unsigned depth) {
    extend(53);
    return;
}
void func_5500873040(unsigned depth) {
    extend(54);
    return;
}
void func_5500873168(unsigned depth) {
    extend(55);
    return;
}
void func_5500873296(unsigned depth) {
    extend(56);
    return;
}
void func_5500872848(unsigned depth) {
    extend(57);
    return;
}
void func_5500873872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5500869008(depth+1);
    func_5500874000(depth+1);
    func_5500870384(depth+1);
    return;
}
void func_5500874000(unsigned depth) {
    extend(43);
    return;
}
void func_5500871040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5500869008(depth+1);
    func_5500871168(depth+1);
    func_5500870384(depth+1);
    return;
}
void func_5500871168(unsigned depth) {
    extend(45);
    return;
}
void func_5500872176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5500874352(depth+1);
    func_5500869008(depth+1);
    func_5500874480(depth+1);
    return;
}
void func_5500874352(unsigned depth) {
    extend(40);
    return;
}
void func_5500874480(unsigned depth) {
    extend(41);
    return;
}
void func_5500872016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5500875248(depth+1);
    func_5500874352(depth+1);
    func_5500868128(depth+1);
    func_5500869200(depth+1);
    func_5500868496(depth+1);
    func_5500869200(depth+1);
    func_5500868128(depth+1);
    func_5500874480(depth+1);
    func_5500875376(depth+1);
    func_5500869328(depth+1);
    func_5500870512(depth+1);
    return;
}
void func_5500875248(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5500875376(unsigned depth) {
    extend(123);
    return;
}
void func_5500870512(unsigned depth) {
    extend(125);
    return;
}
void func_5500875024(unsigned depth) {
    extend(105);
    return;
}
void func_5500875696(unsigned depth) {
    extend(106);
    return;
}
void func_5500875824(unsigned depth) {
    extend(107);
    return;
}
void func_5500875952(unsigned depth) {
    extend(120);
    return;
}
void func_5500876080(unsigned depth) {
    extend(121);
    return;
}
void func_5500876272(unsigned depth) {
    extend(122);
    return;
}
void func_5500876400(unsigned depth) {
    extend(97);
    return;
}
void func_5500876528(unsigned depth) {
    extend(98);
    return;
}
void func_5500876656(unsigned depth) {
    extend(99);
    return;
}
void func_5500876208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5500877424(depth+1);
    func_5500874352(depth+1);
    func_5500868496(depth+1);
    func_5500874480(depth+1);
    func_5500875376(depth+1);
    func_5500869328(depth+1);
    func_5500870512(depth+1);
    return;
}
void func_5500877424(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5500874672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5500877424(depth+1);
    func_5500874352(depth+1);
    func_5500868496(depth+1);
    func_5500874480(depth+1);
    func_5500875376(depth+1);
    func_5500869328(depth+1);
    func_5500870512(depth+1);
    func_5500877248(depth+1);
    func_5500875376(depth+1);
    func_5500869328(depth+1);
    func_5500870512(depth+1);
    return;
}
void func_5500877248(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5500874848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5500868912(depth+1);
    func_5500869136(depth+1);
    return;
}
void func_5500876912(unsigned depth) {
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
    func_5500877040(depth+1);
    func_5500874352(depth+1);
    func_5500869008(depth+1);
    func_5500874480(depth+1);
    func_5500869200(depth+1);
    return;
}
void func_5500877040(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5500877552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5500870016(depth+1);
    func_5500869328(depth+1);
    return;
}
void func_5500878400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5500870384(depth+1);
    func_5500878528(depth+1);
    func_5500868784(depth+1);
    return;
}
void func_5500878528(unsigned depth) {
    extend(42);
    return;
}
void func_5500877680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5500870384(depth+1);
    func_5500873360(depth+1);
    func_5500868784(depth+1);
    return;
}
void func_5500873360(unsigned depth) {
    extend(47);
    return;
}
void func_5500878336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5500873728(depth+1);
    func_5500874352(depth+1);
    func_5500868496(depth+1);
    func_5500874480(depth+1);
    func_5500875376(depth+1);
    func_5500869328(depth+1);
    func_5500870512(depth+1);
    return;
}
void func_5500873728(unsigned depth) {
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
    func_5500869600(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
