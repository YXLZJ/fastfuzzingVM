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

void func_5551199776(unsigned depth);
void func_5551200144(unsigned depth);
void func_5551200560(unsigned depth);
void func_5551200656(unsigned depth);
void func_5551200432(unsigned depth);
void func_5551200352(unsigned depth);
void func_5551201056(unsigned depth);
void func_5551200272(unsigned depth);
void func_5551200784(unsigned depth);
void func_5551201312(unsigned depth);
void func_5551200976(unsigned depth);
void func_5551201248(unsigned depth);
void func_5551201664(unsigned depth);
void func_5551202032(unsigned depth);
void func_5551201872(unsigned depth);
void func_5551201600(unsigned depth);
void func_5551201792(unsigned depth);
void func_5551200848(unsigned depth);
void func_5551202896(unsigned depth);
void func_5551203024(unsigned depth);
void func_5551203152(unsigned depth);
void func_5551203280(unsigned depth);
void func_5551203408(unsigned depth);
void func_5551203536(unsigned depth);
void func_5551203920(unsigned depth);
void func_5551201504(unsigned depth);
void func_5551204112(unsigned depth);
void func_5551204240(unsigned depth);
void func_5551204368(unsigned depth);
void func_5551204560(unsigned depth);
void func_5551204688(unsigned depth);
void func_5551204816(unsigned depth);
void func_5551204944(unsigned depth);
void func_5551204496(unsigned depth);
void func_5551205520(unsigned depth);
void func_5551205648(unsigned depth);
void func_5551202688(unsigned depth);
void func_5551202816(unsigned depth);
void func_5551203824(unsigned depth);
void func_5551206000(unsigned depth);
void func_5551206128(unsigned depth);
void func_5551203664(unsigned depth);
void func_5551206896(unsigned depth);
void func_5551207024(unsigned depth);
void func_5551202160(unsigned depth);
void func_5551206672(unsigned depth);
void func_5551207344(unsigned depth);
void func_5551207472(unsigned depth);
void func_5551207600(unsigned depth);
void func_5551207728(unsigned depth);
void func_5551207920(unsigned depth);
void func_5551208048(unsigned depth);
void func_5551208176(unsigned depth);
void func_5551208304(unsigned depth);
void func_5551207856(unsigned depth);
void func_5551209072(unsigned depth);
void func_5551206320(unsigned depth);
void func_5551208896(unsigned depth);
void func_5551206496(unsigned depth);
void func_5551208560(unsigned depth);
void func_5551208688(unsigned depth);
void func_5551209200(unsigned depth);
void func_5551210048(unsigned depth);
void func_5551210176(unsigned depth);
void func_5551209328(unsigned depth);
void func_5551205008(unsigned depth);
void func_5551209984(unsigned depth);
void func_5551205376(unsigned depth);
void func_5551199776(unsigned depth) {
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
            func_5551201600(depth+1);
        break;
    }
    return;
}
void func_5551200144(unsigned depth) {
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
            func_5551202896(depth+1);
        break;
        case 1:
            func_5551203152(depth+1);
        break;
        case 2:
            func_5551203408(depth+1);
        break;
    }
    return;
}
void func_5551200560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5551203920(depth+1);
        break;
        case 1:
            func_5551201504(depth+1);
        break;
        case 2:
            func_5551204112(depth+1);
        break;
        case 3:
            func_5551204240(depth+1);
        break;
        case 4:
            func_5551204368(depth+1);
        break;
        case 5:
            func_5551204560(depth+1);
        break;
        case 6:
            func_5551204688(depth+1);
        break;
        case 7:
            func_5551204816(depth+1);
        break;
        case 8:
            func_5551204944(depth+1);
        break;
        case 9:
            func_5551204496(depth+1);
        break;
    }
    return;
}
void func_5551200656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5551205520(depth+1);
        break;
        case 1:
            func_5551202688(depth+1);
        break;
        case 2:
            func_5551202032(depth+1);
        break;
    }
    return;
}
void func_5551200432(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5551203824(depth+1);
        break;
        case 1:
            func_5551200784(depth+1);
        break;
        case 2:
            func_5551201056(depth+1);
        break;
    }
    return;
}
void func_5551200352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5551203664(depth+1);
        break;
    }
    return;
}
void func_5551201056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5551206672(depth+1);
        break;
        case 1:
            func_5551207344(depth+1);
        break;
        case 2:
            func_5551207472(depth+1);
        break;
        case 3:
            func_5551207600(depth+1);
        break;
        case 4:
            func_5551207728(depth+1);
        break;
        case 5:
            func_5551207920(depth+1);
        break;
        case 6:
            func_5551208048(depth+1);
        break;
        case 7:
            func_5551208176(depth+1);
        break;
        case 8:
            func_5551208304(depth+1);
        break;
    }
    return;
}
void func_5551200272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5551207856(depth+1);
        break;
        case 1:
            func_5551206320(depth+1);
        break;
    }
    return;
}
void func_5551200784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5551200560(depth+1);
        break;
        case 1:
            func_5551206496(depth+1);
        break;
    }
    return;
}
void func_5551201312(unsigned depth) {
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
            func_5551208560(depth+1);
        break;
    }
    return;
}
void func_5551200976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5551209200(depth+1);
        break;
    }
    return;
}
void func_5551201248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5551200976(depth+1);
        break;
    }
    return;
}
void func_5551201664(unsigned depth) {
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
            func_5551200272(depth+1);
        break;
        case 1:
            func_5551201872(depth+1);
        break;
        case 2:
            func_5551200352(depth+1);
        break;
        case 3:
            func_5551199776(depth+1);
        break;
        case 4:
            func_5551201312(depth+1);
        break;
    }
    return;
}
void func_5551202032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5551210048(depth+1);
        break;
        case 1:
            func_5551209328(depth+1);
        break;
        case 2:
            func_5551200432(depth+1);
        break;
    }
    return;
}
void func_5551201872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5551209984(depth+1);
        break;
    }
    return;
}
void func_5551201600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5551201056(depth+1);
    func_5551201792(depth+1);
    func_5551200656(depth+1);
    func_5551200848(depth+1);
    return;
}
void func_5551201792(unsigned depth) {
    extend(61);
    return;
}
void func_5551200848(unsigned depth) {
    extend(59);
    return;
}
void func_5551202896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5551200656(depth+1);
    func_5551203024(depth+1);
    func_5551200656(depth+1);
    return;
}
void func_5551203024(unsigned depth) {
    extend(62);
    return;
}
void func_5551203152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5551200656(depth+1);
    func_5551203280(depth+1);
    func_5551200656(depth+1);
    return;
}
void func_5551203280(unsigned depth) {
    extend(60);
    return;
}
void func_5551203408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5551200656(depth+1);
    func_5551203536(depth+1);
    func_5551200656(depth+1);
    return;
}
void func_5551203536(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5551203920(unsigned depth) {
    extend(48);
    return;
}
void func_5551201504(unsigned depth) {
    extend(49);
    return;
}
void func_5551204112(unsigned depth) {
    extend(50);
    return;
}
void func_5551204240(unsigned depth) {
    extend(51);
    return;
}
void func_5551204368(unsigned depth) {
    extend(52);
    return;
}
void func_5551204560(unsigned depth) {
    extend(53);
    return;
}
void func_5551204688(unsigned depth) {
    extend(54);
    return;
}
void func_5551204816(unsigned depth) {
    extend(55);
    return;
}
void func_5551204944(unsigned depth) {
    extend(56);
    return;
}
void func_5551204496(unsigned depth) {
    extend(57);
    return;
}
void func_5551205520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5551200656(depth+1);
    func_5551205648(depth+1);
    func_5551202032(depth+1);
    return;
}
void func_5551205648(unsigned depth) {
    extend(43);
    return;
}
void func_5551202688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5551200656(depth+1);
    func_5551202816(depth+1);
    func_5551202032(depth+1);
    return;
}
void func_5551202816(unsigned depth) {
    extend(45);
    return;
}
void func_5551203824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5551206000(depth+1);
    func_5551200656(depth+1);
    func_5551206128(depth+1);
    return;
}
void func_5551206000(unsigned depth) {
    extend(40);
    return;
}
void func_5551206128(unsigned depth) {
    extend(41);
    return;
}
void func_5551203664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5551206896(depth+1);
    func_5551206000(depth+1);
    func_5551199776(depth+1);
    func_5551200848(depth+1);
    func_5551200144(depth+1);
    func_5551200848(depth+1);
    func_5551199776(depth+1);
    func_5551206128(depth+1);
    func_5551207024(depth+1);
    func_5551200976(depth+1);
    func_5551202160(depth+1);
    return;
}
void func_5551206896(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5551207024(unsigned depth) {
    extend(123);
    return;
}
void func_5551202160(unsigned depth) {
    extend(125);
    return;
}
void func_5551206672(unsigned depth) {
    extend(105);
    return;
}
void func_5551207344(unsigned depth) {
    extend(106);
    return;
}
void func_5551207472(unsigned depth) {
    extend(107);
    return;
}
void func_5551207600(unsigned depth) {
    extend(120);
    return;
}
void func_5551207728(unsigned depth) {
    extend(121);
    return;
}
void func_5551207920(unsigned depth) {
    extend(122);
    return;
}
void func_5551208048(unsigned depth) {
    extend(97);
    return;
}
void func_5551208176(unsigned depth) {
    extend(98);
    return;
}
void func_5551208304(unsigned depth) {
    extend(99);
    return;
}
void func_5551207856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5551209072(depth+1);
    func_5551206000(depth+1);
    func_5551200144(depth+1);
    func_5551206128(depth+1);
    func_5551207024(depth+1);
    func_5551200976(depth+1);
    func_5551202160(depth+1);
    return;
}
void func_5551209072(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5551206320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5551209072(depth+1);
    func_5551206000(depth+1);
    func_5551200144(depth+1);
    func_5551206128(depth+1);
    func_5551207024(depth+1);
    func_5551200976(depth+1);
    func_5551202160(depth+1);
    func_5551208896(depth+1);
    func_5551207024(depth+1);
    func_5551200976(depth+1);
    func_5551202160(depth+1);
    return;
}
void func_5551208896(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5551206496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5551200560(depth+1);
    func_5551200784(depth+1);
    return;
}
void func_5551208560(unsigned depth) {
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
    func_5551208688(depth+1);
    func_5551206000(depth+1);
    func_5551200656(depth+1);
    func_5551206128(depth+1);
    func_5551200848(depth+1);
    return;
}
void func_5551208688(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5551209200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5551201664(depth+1);
    func_5551200976(depth+1);
    return;
}
void func_5551210048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5551202032(depth+1);
    func_5551210176(depth+1);
    func_5551200432(depth+1);
    return;
}
void func_5551210176(unsigned depth) {
    extend(42);
    return;
}
void func_5551209328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5551202032(depth+1);
    func_5551205008(depth+1);
    func_5551200432(depth+1);
    return;
}
void func_5551205008(unsigned depth) {
    extend(47);
    return;
}
void func_5551209984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5551205376(depth+1);
    func_5551206000(depth+1);
    func_5551200144(depth+1);
    func_5551206128(depth+1);
    func_5551207024(depth+1);
    func_5551200976(depth+1);
    func_5551202160(depth+1);
    return;
}
void func_5551205376(unsigned depth) {
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
    func_5551201248(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
