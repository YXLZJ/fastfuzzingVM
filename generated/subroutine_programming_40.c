#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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

void func_5131775376(unsigned depth);
void func_5131776128(unsigned depth);
void func_5131776288(unsigned depth);
void func_5131776000(unsigned depth);
void func_5131775648(unsigned depth);
void func_5131775248(unsigned depth);
void func_5131775888(unsigned depth);
void func_5131776416(unsigned depth);
void func_5131778048(unsigned depth);
void func_5131775568(unsigned depth);
void func_5131776608(unsigned depth);
void func_5131776816(unsigned depth);
void func_5131776736(unsigned depth);
void func_5131777248(unsigned depth);
void func_5131777536(unsigned depth);
void func_5131777088(unsigned depth);
void func_5131777008(unsigned depth);
void func_5131777472(unsigned depth);
void func_5131777792(unsigned depth);
void func_5131777920(unsigned depth);
void func_5131779072(unsigned depth);
void func_5131779200(unsigned depth);
void func_5131779328(unsigned depth);
void func_5131779456(unsigned depth);
void func_5131779584(unsigned depth);
void func_5131779712(unsigned depth);
void func_5131779872(unsigned depth);
void func_5131780000(unsigned depth);
void func_5131780160(unsigned depth);
void func_5131780288(unsigned depth);
void func_5131780512(unsigned depth);
void func_5131780640(unsigned depth);
void func_5131780816(unsigned depth);
void func_5131778304(unsigned depth);
void func_5131778944(unsigned depth);
void func_5131778496(unsigned depth);
void func_5131781392(unsigned depth);
void func_5131781520(unsigned depth);
void func_5131781648(unsigned depth);
void func_5131781840(unsigned depth);
void func_5131781968(unsigned depth);
void func_5131782096(unsigned depth);
void func_5131782224(unsigned depth);
void func_5131781776(unsigned depth);
void func_5131778432(unsigned depth);
void func_5131782768(unsigned depth);
void func_5131778624(unsigned depth);
void func_5131778752(unsigned depth);
void func_5131782624(unsigned depth);
void func_5131782992(unsigned depth);
void func_5131783120(unsigned depth);
void func_5131777376(unsigned depth);
void func_5131783728(unsigned depth);
void func_5131778112(unsigned depth);
void func_5131783984(unsigned depth);
void func_5131783328(unsigned depth);
void func_5131784288(unsigned depth);
void func_5131784416(unsigned depth);
void func_5131785760(unsigned depth);
void func_5131785888(unsigned depth);
void func_5131786016(unsigned depth);
void func_5131786176(unsigned depth);
void func_5131786304(unsigned depth);
void func_5131786496(unsigned depth);
void func_5131786624(unsigned depth);
void func_5131780944(unsigned depth);
void func_5131781072(unsigned depth);
void func_5131786432(unsigned depth);
void func_5131786688(unsigned depth);
void func_5131786816(unsigned depth);
void func_5131786944(unsigned depth);
void func_5131787072(unsigned depth);
void func_5131787200(unsigned depth);
void func_5131787328(unsigned depth);
void func_5131787456(unsigned depth);
void func_5131781200(unsigned depth);
void func_5131787840(unsigned depth);
void func_5131787968(unsigned depth);
void func_5131788096(unsigned depth);
void func_5131788224(unsigned depth);
void func_5131788352(unsigned depth);
void func_5131788480(unsigned depth);
void func_5131788608(unsigned depth);
void func_5131788736(unsigned depth);
void func_5131788864(unsigned depth);
void func_5131788992(unsigned depth);
void func_5131789120(unsigned depth);
void func_5131789248(unsigned depth);
void func_5131789376(unsigned depth);
void func_5131789504(unsigned depth);
void func_5131789632(unsigned depth);
void func_5131787584(unsigned depth);
void func_5131787712(unsigned depth);
void func_5131790272(unsigned depth);
void func_5131790400(unsigned depth);
void func_5131790528(unsigned depth);
void func_5131790656(unsigned depth);
void func_5131790784(unsigned depth);
void func_5131790912(unsigned depth);
void func_5131791040(unsigned depth);
void func_5131791168(unsigned depth);
void func_5131791296(unsigned depth);
void func_5131791424(unsigned depth);
void func_5131791552(unsigned depth);
void func_5131791680(unsigned depth);
void func_5131791808(unsigned depth);
void func_5131791936(unsigned depth);
void func_5131792064(unsigned depth);
void func_5131792192(unsigned depth);
void func_5131792320(unsigned depth);
void func_5131784112(unsigned depth);
void func_5131783456(unsigned depth);
void func_5131784688(unsigned depth);
void func_5131784816(unsigned depth);
void func_5131785312(unsigned depth);
void func_5131785440(unsigned depth);
void func_5131784944(unsigned depth);
void func_5131785568(unsigned depth);
void func_5131792528(unsigned depth);
void func_5131792656(unsigned depth);
void func_5131792784(unsigned depth);
void func_5131792912(unsigned depth);
void func_5131793040(unsigned depth);
void func_5131793168(unsigned depth);
void func_5131793296(unsigned depth);
void func_5131792448(unsigned depth);
void func_5131785216(unsigned depth);
void func_5131775376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131777472(depth+1);
        break;
    }
    return;
}
void func_5131776128(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5131779072(depth+1);
        break;
        case 1:
            func_5131779328(depth+1);
        break;
        case 2:
            func_5131779584(depth+1);
        break;
        case 3:
            func_5131779872(depth+1);
        break;
        case 4:
            func_5131780160(depth+1);
        break;
        case 5:
            func_5131780512(depth+1);
        break;
        case 6:
            func_5131780816(depth+1);
        break;
    }
    return;
}
void func_5131776288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5131778944(depth+1);
        break;
        case 1:
            func_5131778496(depth+1);
        break;
        case 2:
            func_5131781392(depth+1);
        break;
        case 3:
            func_5131781520(depth+1);
        break;
        case 4:
            func_5131781648(depth+1);
        break;
        case 5:
            func_5131781840(depth+1);
        break;
        case 6:
            func_5131781968(depth+1);
        break;
        case 7:
            func_5131782096(depth+1);
        break;
        case 8:
            func_5131782224(depth+1);
        break;
        case 9:
            func_5131781776(depth+1);
        break;
    }
    return;
}
void func_5131776000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131778432(depth+1);
        break;
        case 1:
            func_5131778624(depth+1);
        break;
        case 2:
            func_5131777536(depth+1);
        break;
    }
    return;
}
void func_5131775648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131782624(depth+1);
        break;
        case 1:
            func_5131775568(depth+1);
        break;
        case 2:
            func_5131775888(depth+1);
        break;
    }
    return;
}
void func_5131775248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131777376(depth+1);
        break;
    }
    return;
}
void func_5131775888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131783328(depth+1);
        break;
        case 1:
            func_5131778048(depth+1);
        break;
    }
    return;
}
void func_5131776416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131784288(depth+1);
        break;
    }
    return;
}
void func_5131778048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5131785760(depth+1);
        break;
        case 1:
            func_5131785888(depth+1);
        break;
        case 2:
            func_5131786016(depth+1);
        break;
        case 3:
            func_5131786176(depth+1);
        break;
        case 4:
            func_5131786304(depth+1);
        break;
        case 5:
            func_5131786496(depth+1);
        break;
        case 6:
            func_5131786624(depth+1);
        break;
        case 7:
            func_5131780944(depth+1);
        break;
        case 8:
            func_5131781072(depth+1);
        break;
        case 9:
            func_5131786432(depth+1);
        break;
        case 10:
            func_5131786688(depth+1);
        break;
        case 11:
            func_5131786816(depth+1);
        break;
        case 12:
            func_5131786944(depth+1);
        break;
        case 13:
            func_5131787072(depth+1);
        break;
        case 14:
            func_5131787200(depth+1);
        break;
        case 15:
            func_5131787328(depth+1);
        break;
        case 16:
            func_5131787456(depth+1);
        break;
        case 17:
            func_5131781200(depth+1);
        break;
        case 18:
            func_5131787840(depth+1);
        break;
        case 19:
            func_5131787968(depth+1);
        break;
        case 20:
            func_5131788096(depth+1);
        break;
        case 21:
            func_5131788224(depth+1);
        break;
        case 22:
            func_5131788352(depth+1);
        break;
        case 23:
            func_5131788480(depth+1);
        break;
        case 24:
            func_5131788608(depth+1);
        break;
        case 25:
            func_5131788736(depth+1);
        break;
        case 26:
            func_5131788864(depth+1);
        break;
        case 27:
            func_5131788992(depth+1);
        break;
        case 28:
            func_5131789120(depth+1);
        break;
        case 29:
            func_5131789248(depth+1);
        break;
        case 30:
            func_5131789376(depth+1);
        break;
        case 31:
            func_5131789504(depth+1);
        break;
        case 32:
            func_5131789632(depth+1);
        break;
        case 33:
            func_5131787584(depth+1);
        break;
        case 34:
            func_5131787712(depth+1);
        break;
        case 35:
            func_5131790272(depth+1);
        break;
        case 36:
            func_5131790400(depth+1);
        break;
        case 37:
            func_5131790528(depth+1);
        break;
        case 38:
            func_5131790656(depth+1);
        break;
        case 39:
            func_5131790784(depth+1);
        break;
        case 40:
            func_5131790912(depth+1);
        break;
        case 41:
            func_5131791040(depth+1);
        break;
        case 42:
            func_5131791168(depth+1);
        break;
        case 43:
            func_5131791296(depth+1);
        break;
        case 44:
            func_5131791424(depth+1);
        break;
        case 45:
            func_5131791552(depth+1);
        break;
        case 46:
            func_5131791680(depth+1);
        break;
        case 47:
            func_5131791808(depth+1);
        break;
        case 48:
            func_5131791936(depth+1);
        break;
        case 49:
            func_5131792064(depth+1);
        break;
        case 50:
            func_5131792192(depth+1);
        break;
        case 51:
            func_5131792320(depth+1);
        break;
    }
    return;
}
void func_5131775568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131784112(depth+1);
        break;
        case 1:
            func_5131776288(depth+1);
        break;
    }
    return;
}
void func_5131776608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5131783456(depth+1);
        break;
        case 1:
            func_5131777248(depth+1);
        break;
    }
    return;
}
void func_5131776816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131784688(depth+1);
        break;
    }
    return;
}
void func_5131776736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131776608(depth+1);
        break;
    }
    return;
}
void func_5131777248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5131777088(depth+1);
        break;
        case 1:
            func_5131775376(depth+1);
        break;
        case 2:
            func_5131776416(depth+1);
        break;
        case 3:
            func_5131777008(depth+1);
        break;
        case 4:
            func_5131775248(depth+1);
        break;
        case 5:
            func_5131776816(depth+1);
        break;
    }
    return;
}
void func_5131777536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131785312(depth+1);
        break;
        case 1:
            func_5131784944(depth+1);
        break;
        case 2:
            func_5131775648(depth+1);
        break;
    }
    return;
}
void func_5131777088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5131792528(depth+1);
        break;
        case 1:
            func_5131792912(depth+1);
        break;
        case 2:
            func_5131793168(depth+1);
        break;
    }
    return;
}
void func_5131777008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5131792448(depth+1);
        break;
    }
    return;
}
void func_5131777472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_5131775888(depth+1);
    func_5131777792(depth+1);
    func_5131776000(depth+1);
    func_5131777920(depth+1);
    return;
}
void func_5131777792(unsigned depth) {
    extend(61);
    return;
}
void func_5131777920(unsigned depth) {
    extend(59);
    return;
}
void func_5131779072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131779200(depth+1);
    func_5131776000(depth+1);
    return;
}
void func_5131779200(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5131779328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131779456(depth+1);
    func_5131776000(depth+1);
    return;
}
void func_5131779456(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_5131779584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131779712(depth+1);
    func_5131776000(depth+1);
    return;
}
void func_5131779712(unsigned depth) {
    extend(62);
    return;
}
void func_5131779872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131780000(depth+1);
    func_5131776000(depth+1);
    return;
}
void func_5131780000(unsigned depth) {
    extend(60);
    return;
}
void func_5131780160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5131776128(depth+1);
    func_5131780288(depth+1);
    func_5131776128(depth+1);
    return;
}
void func_5131780288(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5131780512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5131776128(depth+1);
    func_5131780640(depth+1);
    func_5131776128(depth+1);
    return;
}
void func_5131780640(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5131780816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5131778304(depth+1);
    func_5131776128(depth+1);
    return;
}
void func_5131778304(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_5131778944(unsigned depth) {
    extend(48);
    return;
}
void func_5131778496(unsigned depth) {
    extend(49);
    return;
}
void func_5131781392(unsigned depth) {
    extend(50);
    return;
}
void func_5131781520(unsigned depth) {
    extend(51);
    return;
}
void func_5131781648(unsigned depth) {
    extend(52);
    return;
}
void func_5131781840(unsigned depth) {
    extend(53);
    return;
}
void func_5131781968(unsigned depth) {
    extend(54);
    return;
}
void func_5131782096(unsigned depth) {
    extend(55);
    return;
}
void func_5131782224(unsigned depth) {
    extend(56);
    return;
}
void func_5131781776(unsigned depth) {
    extend(57);
    return;
}
void func_5131778432(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131782768(depth+1);
    func_5131777536(depth+1);
    return;
}
void func_5131782768(unsigned depth) {
    extend(43);
    return;
}
void func_5131778624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5131776000(depth+1);
    func_5131778752(depth+1);
    func_5131777536(depth+1);
    return;
}
void func_5131778752(unsigned depth) {
    extend(45);
    return;
}
void func_5131782624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5131782992(depth+1);
    func_5131776000(depth+1);
    func_5131783120(depth+1);
    return;
}
void func_5131782992(unsigned depth) {
    extend(40);
    return;
}
void func_5131783120(unsigned depth) {
    extend(41);
    return;
}
void func_5131777376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_5131783728(depth+1);
    func_5131775888(depth+1);
    func_5131782992(depth+1);
    func_5131783120(depth+1);
    func_5131778112(depth+1);
    func_5131776608(depth+1);
    func_5131783984(depth+1);
    return;
}
void func_5131783728(unsigned depth) {
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    return;
}
void func_5131778112(unsigned depth) {
    extend(123);
    return;
}
void func_5131783984(unsigned depth) {
    extend(125);
    return;
}
void func_5131783328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_5131778048(depth+1);
    func_5131775888(depth+1);
    return;
}
void func_5131784288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_5131784416(depth+1);
    func_5131782992(depth+1);
    func_5131776128(depth+1);
    func_5131783120(depth+1);
    func_5131778112(depth+1);
    func_5131776608(depth+1);
    func_5131783984(depth+1);
    return;
}
void func_5131784416(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5131785760(unsigned depth) {
    extend(97);
    return;
}
void func_5131785888(unsigned depth) {
    extend(98);
    return;
}
void func_5131786016(unsigned depth) {
    extend(99);
    return;
}
void func_5131786176(unsigned depth) {
    extend(100);
    return;
}
void func_5131786304(unsigned depth) {
    extend(101);
    return;
}
void func_5131786496(unsigned depth) {
    extend(102);
    return;
}
void func_5131786624(unsigned depth) {
    extend(103);
    return;
}
void func_5131780944(unsigned depth) {
    extend(104);
    return;
}
void func_5131781072(unsigned depth) {
    extend(105);
    return;
}
void func_5131786432(unsigned depth) {
    extend(106);
    return;
}
void func_5131786688(unsigned depth) {
    extend(107);
    return;
}
void func_5131786816(unsigned depth) {
    extend(108);
    return;
}
void func_5131786944(unsigned depth) {
    extend(109);
    return;
}
void func_5131787072(unsigned depth) {
    extend(110);
    return;
}
void func_5131787200(unsigned depth) {
    extend(111);
    return;
}
void func_5131787328(unsigned depth) {
    extend(112);
    return;
}
void func_5131787456(unsigned depth) {
    extend(113);
    return;
}
void func_5131781200(unsigned depth) {
    extend(114);
    return;
}
void func_5131787840(unsigned depth) {
    extend(115);
    return;
}
void func_5131787968(unsigned depth) {
    extend(116);
    return;
}
void func_5131788096(unsigned depth) {
    extend(117);
    return;
}
void func_5131788224(unsigned depth) {
    extend(118);
    return;
}
void func_5131788352(unsigned depth) {
    extend(119);
    return;
}
void func_5131788480(unsigned depth) {
    extend(120);
    return;
}
void func_5131788608(unsigned depth) {
    extend(121);
    return;
}
void func_5131788736(unsigned depth) {
    extend(122);
    return;
}
void func_5131788864(unsigned depth) {
    extend(65);
    return;
}
void func_5131788992(unsigned depth) {
    extend(66);
    return;
}
void func_5131789120(unsigned depth) {
    extend(67);
    return;
}
void func_5131789248(unsigned depth) {
    extend(68);
    return;
}
void func_5131789376(unsigned depth) {
    extend(69);
    return;
}
void func_5131789504(unsigned depth) {
    extend(70);
    return;
}
void func_5131789632(unsigned depth) {
    extend(71);
    return;
}
void func_5131787584(unsigned depth) {
    extend(72);
    return;
}
void func_5131787712(unsigned depth) {
    extend(73);
    return;
}
void func_5131790272(unsigned depth) {
    extend(74);
    return;
}
void func_5131790400(unsigned depth) {
    extend(75);
    return;
}
void func_5131790528(unsigned depth) {
    extend(76);
    return;
}
void func_5131790656(unsigned depth) {
    extend(77);
    return;
}
void func_5131790784(unsigned depth) {
    extend(78);
    return;
}
void func_5131790912(unsigned depth) {
    extend(79);
    return;
}
void func_5131791040(unsigned depth) {
    extend(80);
    return;
}
void func_5131791168(unsigned depth) {
    extend(81);
    return;
}
void func_5131791296(unsigned depth) {
    extend(82);
    return;
}
void func_5131791424(unsigned depth) {
    extend(83);
    return;
}
void func_5131791552(unsigned depth) {
    extend(84);
    return;
}
void func_5131791680(unsigned depth) {
    extend(85);
    return;
}
void func_5131791808(unsigned depth) {
    extend(86);
    return;
}
void func_5131791936(unsigned depth) {
    extend(87);
    return;
}
void func_5131792064(unsigned depth) {
    extend(88);
    return;
}
void func_5131792192(unsigned depth) {
    extend(89);
    return;
}
void func_5131792320(unsigned depth) {
    extend(90);
    return;
}
void func_5131784112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5131776288(depth+1);
    func_5131775568(depth+1);
    return;
}
void func_5131783456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    func_5131776608(depth+1);
    func_5131777248(depth+1);
    return;
}
void func_5131784688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    func_5131784816(depth+1);
    func_5131776000(depth+1);
    func_5131777920(depth+1);
    return;
}
void func_5131784816(unsigned depth) {
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    return;
}
void func_5131785312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5131777536(depth+1);
    func_5131785440(depth+1);
    func_5131775648(depth+1);
    return;
}
void func_5131785440(unsigned depth) {
    extend(42);
    return;
}
void func_5131784944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5131777536(depth+1);
    func_5131785568(depth+1);
    func_5131775648(depth+1);
    return;
}
void func_5131785568(unsigned depth) {
    extend(47);
    return;
}
void func_5131792528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_5131792656(depth+1);
    func_5131775888(depth+1);
    func_5131792784(depth+1);
    return;
}
void func_5131792656(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5131792784(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_5131792912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_5131793040(depth+1);
    func_5131775888(depth+1);
    func_5131792784(depth+1);
    return;
}
void func_5131793040(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_5131793168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_5131793296(depth+1);
    func_5131775888(depth+1);
    func_5131792784(depth+1);
    return;
}
void func_5131793296(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_5131792448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_5131785216(depth+1);
    func_5131782992(depth+1);
    func_5131776128(depth+1);
    func_5131783120(depth+1);
    func_5131778112(depth+1);
    func_5131776608(depth+1);
    func_5131783984(depth+1);
    return;
}
void func_5131785216(unsigned depth) {
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
    static unsigned count = 23;
    seed = time(NULL);
    func_5131776736(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
