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

bool endless = false;

void func_5232432672(unsigned depth);
void func_5232433040(unsigned depth);
void func_5232433456(unsigned depth);
void func_5232433552(unsigned depth);
void func_5232433328(unsigned depth);
void func_5232433248(unsigned depth);
void func_5232433952(unsigned depth);
void func_5232433168(unsigned depth);
void func_5232433680(unsigned depth);
void func_5232434208(unsigned depth);
void func_5232433872(unsigned depth);
void func_5232434144(unsigned depth);
void func_5232434560(unsigned depth);
void func_5232434928(unsigned depth);
void func_5232434768(unsigned depth);
void func_5232434496(unsigned depth);
void func_5232434688(unsigned depth);
void func_5232433744(unsigned depth);
void func_5232435792(unsigned depth);
void func_5232435920(unsigned depth);
void func_5232436048(unsigned depth);
void func_5232436176(unsigned depth);
void func_5232436304(unsigned depth);
void func_5232436432(unsigned depth);
void func_5232436816(unsigned depth);
void func_5232434400(unsigned depth);
void func_5232437008(unsigned depth);
void func_5232437136(unsigned depth);
void func_5232437264(unsigned depth);
void func_5232437456(unsigned depth);
void func_5232437584(unsigned depth);
void func_5232437712(unsigned depth);
void func_5233459328(unsigned depth);
void func_5233460128(unsigned depth);
void func_5233460576(unsigned depth);
void func_5233460720(unsigned depth);
void func_5233460896(unsigned depth);
void func_5233461024(unsigned depth);
void func_5233460496(unsigned depth);
void func_5233461328(unsigned depth);
void func_5233461456(unsigned depth);
void func_5233460336(unsigned depth);
void func_5233462256(unsigned depth);
void func_5233462384(unsigned depth);
void func_5233460256(unsigned depth);
void func_5233462064(unsigned depth);
void func_5233462704(unsigned depth);
void func_5233462832(unsigned depth);
void func_5233462992(unsigned depth);
void func_5233463120(unsigned depth);
void func_5233463312(unsigned depth);
void func_5233463440(unsigned depth);
void func_5233463568(unsigned depth);
void func_5233463696(unsigned depth);
void func_5233463248(unsigned depth);
void func_5233464464(unsigned depth);
void func_5233461680(unsigned depth);
void func_5233464288(unsigned depth);
void func_5233461856(unsigned depth);
void func_5233461984(unsigned depth);
void func_5233464016(unsigned depth);
void func_5233464208(unsigned depth);
void func_5233464784(unsigned depth);
void func_5233465504(unsigned depth);
void func_5233464656(unsigned depth);
void func_5233459392(unsigned depth);
void func_5233465376(unsigned depth);
void func_5233459760(unsigned depth);
void func_5232432672(unsigned depth) {
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
            func_5232434496(depth+1);
        break;
    }
    return;
}
void func_5232433040(unsigned depth) {
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
            func_5232435792(depth+1);
        break;
        case 1:
            func_5232436048(depth+1);
        break;
        case 2:
            func_5232436304(depth+1);
        break;
    }
    return;
}
void func_5232433456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5232436816(depth+1);
        break;
        case 1:
            func_5232434400(depth+1);
        break;
        case 2:
            func_5232437008(depth+1);
        break;
        case 3:
            func_5232437136(depth+1);
        break;
        case 4:
            func_5232437264(depth+1);
        break;
        case 5:
            func_5232437456(depth+1);
        break;
        case 6:
            func_5232437584(depth+1);
        break;
        case 7:
            func_5232437712(depth+1);
        break;
        case 8:
            func_5233459328(depth+1);
        break;
        case 9:
            func_5233460128(depth+1);
        break;
    }
    return;
}
void func_5232433552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5233460576(depth+1);
        break;
        case 1:
            func_5233460896(depth+1);
        break;
        case 2:
            func_5232434928(depth+1);
        break;
    }
    return;
}
void func_5232433328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5233460496(depth+1);
        break;
        case 1:
            func_5232433680(depth+1);
        break;
        case 2:
            func_5232433952(depth+1);
        break;
    }
    return;
}
void func_5232433248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5233460336(depth+1);
        break;
    }
    return;
}
void func_5232433952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5233462064(depth+1);
        break;
        case 1:
            func_5233462704(depth+1);
        break;
        case 2:
            func_5233462832(depth+1);
        break;
        case 3:
            func_5233462992(depth+1);
        break;
        case 4:
            func_5233463120(depth+1);
        break;
        case 5:
            func_5233463312(depth+1);
        break;
        case 6:
            func_5233463440(depth+1);
        break;
        case 7:
            func_5233463568(depth+1);
        break;
        case 8:
            func_5233463696(depth+1);
        break;
    }
    return;
}
void func_5232433168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5233463248(depth+1);
        break;
        case 1:
            func_5233461680(depth+1);
        break;
    }
    return;
}
void func_5232433680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5232433456(depth+1);
        break;
        case 1:
            func_5233461856(depth+1);
        break;
    }
    return;
}
void func_5232434208(unsigned depth) {
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
            func_5233461984(depth+1);
        break;
    }
    return;
}
void func_5232433872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5233464208(depth+1);
        break;
    }
    return;
}
void func_5232434144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5232433872(depth+1);
        break;
    }
    return;
}
void func_5232434560(unsigned depth) {
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
            func_5232433168(depth+1);
        break;
        case 1:
            func_5232434768(depth+1);
        break;
        case 2:
            func_5232433248(depth+1);
        break;
        case 3:
            func_5232432672(depth+1);
        break;
        case 4:
            func_5232434208(depth+1);
        break;
    }
    return;
}
void func_5232434928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5233464784(depth+1);
        break;
        case 1:
            func_5233464656(depth+1);
        break;
        case 2:
            func_5232433328(depth+1);
        break;
    }
    return;
}
void func_5232434768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5233465376(depth+1);
        break;
    }
    return;
}
void func_5232434496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5232433952(depth+1);
    func_5232434688(depth+1);
    func_5232433552(depth+1);
    func_5232433744(depth+1);
    return;
}
void func_5232434688(unsigned depth) {
    extend(61);
    return;
}
void func_5232433744(unsigned depth) {
    extend(59);
    return;
}
void func_5232435792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5232433552(depth+1);
    func_5232435920(depth+1);
    func_5232433552(depth+1);
    return;
}
void func_5232435920(unsigned depth) {
    extend(62);
    return;
}
void func_5232436048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5232433552(depth+1);
    func_5232436176(depth+1);
    func_5232433552(depth+1);
    return;
}
void func_5232436176(unsigned depth) {
    extend(60);
    return;
}
void func_5232436304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5232433552(depth+1);
    func_5232436432(depth+1);
    func_5232433552(depth+1);
    return;
}
void func_5232436432(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5232436816(unsigned depth) {
    extend(48);
    return;
}
void func_5232434400(unsigned depth) {
    extend(49);
    return;
}
void func_5232437008(unsigned depth) {
    extend(50);
    return;
}
void func_5232437136(unsigned depth) {
    extend(51);
    return;
}
void func_5232437264(unsigned depth) {
    extend(52);
    return;
}
void func_5232437456(unsigned depth) {
    extend(53);
    return;
}
void func_5232437584(unsigned depth) {
    extend(54);
    return;
}
void func_5232437712(unsigned depth) {
    extend(55);
    return;
}
void func_5233459328(unsigned depth) {
    extend(56);
    return;
}
void func_5233460128(unsigned depth) {
    extend(57);
    return;
}
void func_5233460576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5232433552(depth+1);
    func_5233460720(depth+1);
    func_5232434928(depth+1);
    return;
}
void func_5233460720(unsigned depth) {
    extend(43);
    return;
}
void func_5233460896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5232433552(depth+1);
    func_5233461024(depth+1);
    func_5232434928(depth+1);
    return;
}
void func_5233461024(unsigned depth) {
    extend(45);
    return;
}
void func_5233460496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5233461328(depth+1);
    func_5232433552(depth+1);
    func_5233461456(depth+1);
    return;
}
void func_5233461328(unsigned depth) {
    extend(40);
    return;
}
void func_5233461456(unsigned depth) {
    extend(41);
    return;
}
void func_5233460336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5233462256(depth+1);
    func_5233461328(depth+1);
    func_5232432672(depth+1);
    func_5232433744(depth+1);
    func_5232433040(depth+1);
    func_5232433744(depth+1);
    func_5232432672(depth+1);
    func_5233461456(depth+1);
    func_5233462384(depth+1);
    func_5232433872(depth+1);
    func_5233460256(depth+1);
    return;
}
void func_5233462256(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5233462384(unsigned depth) {
    extend(123);
    return;
}
void func_5233460256(unsigned depth) {
    extend(125);
    return;
}
void func_5233462064(unsigned depth) {
    extend(105);
    return;
}
void func_5233462704(unsigned depth) {
    extend(106);
    return;
}
void func_5233462832(unsigned depth) {
    extend(107);
    return;
}
void func_5233462992(unsigned depth) {
    extend(120);
    return;
}
void func_5233463120(unsigned depth) {
    extend(121);
    return;
}
void func_5233463312(unsigned depth) {
    extend(122);
    return;
}
void func_5233463440(unsigned depth) {
    extend(97);
    return;
}
void func_5233463568(unsigned depth) {
    extend(98);
    return;
}
void func_5233463696(unsigned depth) {
    extend(99);
    return;
}
void func_5233463248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5233464464(depth+1);
    func_5233461328(depth+1);
    func_5232433040(depth+1);
    func_5233461456(depth+1);
    func_5233462384(depth+1);
    func_5232433872(depth+1);
    func_5233460256(depth+1);
    return;
}
void func_5233464464(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5233461680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5233464464(depth+1);
    func_5233461328(depth+1);
    func_5232433040(depth+1);
    func_5233461456(depth+1);
    func_5233462384(depth+1);
    func_5232433872(depth+1);
    func_5233460256(depth+1);
    func_5233464288(depth+1);
    func_5233462384(depth+1);
    func_5232433872(depth+1);
    func_5233460256(depth+1);
    return;
}
void func_5233464288(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5233461856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5232433456(depth+1);
    func_5232433680(depth+1);
    return;
}
void func_5233461984(unsigned depth) {
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
    func_5233464016(depth+1);
    func_5233461328(depth+1);
    func_5232433552(depth+1);
    func_5233461456(depth+1);
    func_5232433744(depth+1);
    return;
}
void func_5233464016(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5233464208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5232434560(depth+1);
    func_5232433872(depth+1);
    return;
}
void func_5233464784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5232434928(depth+1);
    func_5233465504(depth+1);
    func_5232433328(depth+1);
    return;
}
void func_5233465504(unsigned depth) {
    extend(42);
    return;
}
void func_5233464656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5232434928(depth+1);
    func_5233459392(depth+1);
    func_5232433328(depth+1);
    return;
}
void func_5233459392(unsigned depth) {
    extend(47);
    return;
}
void func_5233465376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5233459760(depth+1);
    func_5233461328(depth+1);
    func_5232433040(depth+1);
    func_5233461456(depth+1);
    func_5233462384(depth+1);
    func_5232433872(depth+1);
    func_5233460256(depth+1);
    return;
}
void func_5233459760(unsigned depth) {
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
    func_5232434144(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
