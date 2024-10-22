#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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

void func_4972391824(unsigned depth);
void func_4972392576(unsigned depth);
void func_4972392736(unsigned depth);
void func_4972392448(unsigned depth);
void func_4972392096(unsigned depth);
void func_4972391696(unsigned depth);
void func_4972392336(unsigned depth);
void func_4972392864(unsigned depth);
void func_4972394496(unsigned depth);
void func_4972392016(unsigned depth);
void func_4972393056(unsigned depth);
void func_4972393264(unsigned depth);
void func_4972393184(unsigned depth);
void func_4972393696(unsigned depth);
void func_4972393984(unsigned depth);
void func_4972393536(unsigned depth);
void func_4972393456(unsigned depth);
void func_4972393920(unsigned depth);
void func_4972394240(unsigned depth);
void func_4972394368(unsigned depth);
void func_4972395520(unsigned depth);
void func_4972395648(unsigned depth);
void func_4972395776(unsigned depth);
void func_4972395904(unsigned depth);
void func_4972396032(unsigned depth);
void func_4972396160(unsigned depth);
void func_4972396320(unsigned depth);
void func_4972396448(unsigned depth);
void func_4972396608(unsigned depth);
void func_4972396736(unsigned depth);
void func_4972396960(unsigned depth);
void func_4972397088(unsigned depth);
void func_4972397264(unsigned depth);
void func_4972394752(unsigned depth);
void func_4972395392(unsigned depth);
void func_4972394944(unsigned depth);
void func_4972397840(unsigned depth);
void func_4972397968(unsigned depth);
void func_4972398096(unsigned depth);
void func_4972398288(unsigned depth);
void func_4972398416(unsigned depth);
void func_4972398544(unsigned depth);
void func_4972398672(unsigned depth);
void func_4972398224(unsigned depth);
void func_4972394880(unsigned depth);
void func_4972399216(unsigned depth);
void func_4972395072(unsigned depth);
void func_4972395200(unsigned depth);
void func_4972399072(unsigned depth);
void func_4972399440(unsigned depth);
void func_4972399568(unsigned depth);
void func_4972393824(unsigned depth);
void func_4972400176(unsigned depth);
void func_4972394560(unsigned depth);
void func_4972400432(unsigned depth);
void func_4972399776(unsigned depth);
void func_4972400736(unsigned depth);
void func_4972400864(unsigned depth);
void func_4972402208(unsigned depth);
void func_4972402336(unsigned depth);
void func_4972402464(unsigned depth);
void func_4972402624(unsigned depth);
void func_4972402752(unsigned depth);
void func_4972402944(unsigned depth);
void func_4972403072(unsigned depth);
void func_4972397392(unsigned depth);
void func_4972397520(unsigned depth);
void func_4972402880(unsigned depth);
void func_4972403136(unsigned depth);
void func_4972403264(unsigned depth);
void func_4972403392(unsigned depth);
void func_4972403520(unsigned depth);
void func_4972403648(unsigned depth);
void func_4972403776(unsigned depth);
void func_4972403904(unsigned depth);
void func_4972397648(unsigned depth);
void func_4972404288(unsigned depth);
void func_4972404416(unsigned depth);
void func_4972404544(unsigned depth);
void func_4972404672(unsigned depth);
void func_4972404800(unsigned depth);
void func_4972404928(unsigned depth);
void func_4972405056(unsigned depth);
void func_4972405184(unsigned depth);
void func_4972405312(unsigned depth);
void func_4972405440(unsigned depth);
void func_4972405568(unsigned depth);
void func_4972405696(unsigned depth);
void func_4972405824(unsigned depth);
void func_4972405952(unsigned depth);
void func_4972406080(unsigned depth);
void func_4972404032(unsigned depth);
void func_4972404160(unsigned depth);
void func_4972406720(unsigned depth);
void func_4972406848(unsigned depth);
void func_4972406976(unsigned depth);
void func_4972407104(unsigned depth);
void func_4972407232(unsigned depth);
void func_4972407360(unsigned depth);
void func_4972407488(unsigned depth);
void func_4972407616(unsigned depth);
void func_4972407744(unsigned depth);
void func_4972407872(unsigned depth);
void func_4972408000(unsigned depth);
void func_4972408128(unsigned depth);
void func_4972408256(unsigned depth);
void func_4972408384(unsigned depth);
void func_4972408512(unsigned depth);
void func_4972408640(unsigned depth);
void func_4972408768(unsigned depth);
void func_4972400560(unsigned depth);
void func_4972399904(unsigned depth);
void func_4972401136(unsigned depth);
void func_4972401264(unsigned depth);
void func_4972401760(unsigned depth);
void func_4972401888(unsigned depth);
void func_4972401392(unsigned depth);
void func_4972402016(unsigned depth);
void func_4972408976(unsigned depth);
void func_4972409104(unsigned depth);
void func_4972409232(unsigned depth);
void func_4972409360(unsigned depth);
void func_4972409488(unsigned depth);
void func_4972409616(unsigned depth);
void func_4972409744(unsigned depth);
void func_4972408896(unsigned depth);
void func_4972401664(unsigned depth);
void func_4972391824(unsigned depth) {
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
            func_4972393920(depth+1);
        break;
    }
    return;
}
void func_4972392576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4972395520(depth+1);
        break;
        case 1:
            func_4972395776(depth+1);
        break;
        case 2:
            func_4972396032(depth+1);
        break;
        case 3:
            func_4972396320(depth+1);
        break;
        case 4:
            func_4972396608(depth+1);
        break;
        case 5:
            func_4972396960(depth+1);
        break;
        case 6:
            func_4972397264(depth+1);
        break;
    }
    return;
}
void func_4972392736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4972395392(depth+1);
        break;
        case 1:
            func_4972394944(depth+1);
        break;
        case 2:
            func_4972397840(depth+1);
        break;
        case 3:
            func_4972397968(depth+1);
        break;
        case 4:
            func_4972398096(depth+1);
        break;
        case 5:
            func_4972398288(depth+1);
        break;
        case 6:
            func_4972398416(depth+1);
        break;
        case 7:
            func_4972398544(depth+1);
        break;
        case 8:
            func_4972398672(depth+1);
        break;
        case 9:
            func_4972398224(depth+1);
        break;
    }
    return;
}
void func_4972392448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4972394880(depth+1);
        break;
        case 1:
            func_4972395072(depth+1);
        break;
        case 2:
            func_4972393984(depth+1);
        break;
    }
    return;
}
void func_4972392096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4972399072(depth+1);
        break;
        case 1:
            func_4972392016(depth+1);
        break;
        case 2:
            func_4972392336(depth+1);
        break;
    }
    return;
}
void func_4972391696(unsigned depth) {
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
            func_4972393824(depth+1);
        break;
    }
    return;
}
void func_4972392336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4972399776(depth+1);
        break;
        case 1:
            func_4972394496(depth+1);
        break;
    }
    return;
}
void func_4972392864(unsigned depth) {
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
            func_4972400736(depth+1);
        break;
    }
    return;
}
void func_4972394496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4972402208(depth+1);
        break;
        case 1:
            func_4972402336(depth+1);
        break;
        case 2:
            func_4972402464(depth+1);
        break;
        case 3:
            func_4972402624(depth+1);
        break;
        case 4:
            func_4972402752(depth+1);
        break;
        case 5:
            func_4972402944(depth+1);
        break;
        case 6:
            func_4972403072(depth+1);
        break;
        case 7:
            func_4972397392(depth+1);
        break;
        case 8:
            func_4972397520(depth+1);
        break;
        case 9:
            func_4972402880(depth+1);
        break;
        case 10:
            func_4972403136(depth+1);
        break;
        case 11:
            func_4972403264(depth+1);
        break;
        case 12:
            func_4972403392(depth+1);
        break;
        case 13:
            func_4972403520(depth+1);
        break;
        case 14:
            func_4972403648(depth+1);
        break;
        case 15:
            func_4972403776(depth+1);
        break;
        case 16:
            func_4972403904(depth+1);
        break;
        case 17:
            func_4972397648(depth+1);
        break;
        case 18:
            func_4972404288(depth+1);
        break;
        case 19:
            func_4972404416(depth+1);
        break;
        case 20:
            func_4972404544(depth+1);
        break;
        case 21:
            func_4972404672(depth+1);
        break;
        case 22:
            func_4972404800(depth+1);
        break;
        case 23:
            func_4972404928(depth+1);
        break;
        case 24:
            func_4972405056(depth+1);
        break;
        case 25:
            func_4972405184(depth+1);
        break;
        case 26:
            func_4972405312(depth+1);
        break;
        case 27:
            func_4972405440(depth+1);
        break;
        case 28:
            func_4972405568(depth+1);
        break;
        case 29:
            func_4972405696(depth+1);
        break;
        case 30:
            func_4972405824(depth+1);
        break;
        case 31:
            func_4972405952(depth+1);
        break;
        case 32:
            func_4972406080(depth+1);
        break;
        case 33:
            func_4972404032(depth+1);
        break;
        case 34:
            func_4972404160(depth+1);
        break;
        case 35:
            func_4972406720(depth+1);
        break;
        case 36:
            func_4972406848(depth+1);
        break;
        case 37:
            func_4972406976(depth+1);
        break;
        case 38:
            func_4972407104(depth+1);
        break;
        case 39:
            func_4972407232(depth+1);
        break;
        case 40:
            func_4972407360(depth+1);
        break;
        case 41:
            func_4972407488(depth+1);
        break;
        case 42:
            func_4972407616(depth+1);
        break;
        case 43:
            func_4972407744(depth+1);
        break;
        case 44:
            func_4972407872(depth+1);
        break;
        case 45:
            func_4972408000(depth+1);
        break;
        case 46:
            func_4972408128(depth+1);
        break;
        case 47:
            func_4972408256(depth+1);
        break;
        case 48:
            func_4972408384(depth+1);
        break;
        case 49:
            func_4972408512(depth+1);
        break;
        case 50:
            func_4972408640(depth+1);
        break;
        case 51:
            func_4972408768(depth+1);
        break;
    }
    return;
}
void func_4972392016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4972400560(depth+1);
        break;
        case 1:
            func_4972392736(depth+1);
        break;
    }
    return;
}
void func_4972393056(unsigned depth) {
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
            func_4972399904(depth+1);
        break;
        case 1:
            func_4972393696(depth+1);
        break;
    }
    return;
}
void func_4972393264(unsigned depth) {
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
            func_4972401136(depth+1);
        break;
    }
    return;
}
void func_4972393184(unsigned depth) {
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
            func_4972393056(depth+1);
        break;
    }
    return;
}
void func_4972393696(unsigned depth) {
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
            func_4972393536(depth+1);
        break;
        case 1:
            func_4972391824(depth+1);
        break;
        case 2:
            func_4972392864(depth+1);
        break;
        case 3:
            func_4972393456(depth+1);
        break;
        case 4:
            func_4972391696(depth+1);
        break;
        case 5:
            func_4972393264(depth+1);
        break;
    }
    return;
}
void func_4972393984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4972401760(depth+1);
        break;
        case 1:
            func_4972401392(depth+1);
        break;
        case 2:
            func_4972392096(depth+1);
        break;
    }
    return;
}
void func_4972393536(unsigned depth) {
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
            func_4972408976(depth+1);
        break;
        case 1:
            func_4972409360(depth+1);
        break;
        case 2:
            func_4972409616(depth+1);
        break;
    }
    return;
}
void func_4972393456(unsigned depth) {
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
            func_4972408896(depth+1);
        break;
    }
    return;
}
void func_4972393920(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_4972392336(depth+1);
    func_4972394240(depth+1);
    func_4972392448(depth+1);
    func_4972394368(depth+1);
    return;
}
void func_4972394240(unsigned depth) {
    extend(61);
    return;
}
void func_4972394368(unsigned depth) {
    extend(59);
    return;
}
void func_4972395520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972395648(depth+1);
    func_4972392448(depth+1);
    return;
}
void func_4972395648(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4972395776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972395904(depth+1);
    func_4972392448(depth+1);
    return;
}
void func_4972395904(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_4972396032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972396160(depth+1);
    func_4972392448(depth+1);
    return;
}
void func_4972396160(unsigned depth) {
    extend(62);
    return;
}
void func_4972396320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972396448(depth+1);
    func_4972392448(depth+1);
    return;
}
void func_4972396448(unsigned depth) {
    extend(60);
    return;
}
void func_4972396608(unsigned depth) {
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
    func_4972392576(depth+1);
    func_4972396736(depth+1);
    func_4972392576(depth+1);
    return;
}
void func_4972396736(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4972396960(unsigned depth) {
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
    func_4972392576(depth+1);
    func_4972397088(depth+1);
    func_4972392576(depth+1);
    return;
}
void func_4972397088(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4972397264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4972394752(depth+1);
    func_4972392576(depth+1);
    return;
}
void func_4972394752(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_4972395392(unsigned depth) {
    extend(48);
    return;
}
void func_4972394944(unsigned depth) {
    extend(49);
    return;
}
void func_4972397840(unsigned depth) {
    extend(50);
    return;
}
void func_4972397968(unsigned depth) {
    extend(51);
    return;
}
void func_4972398096(unsigned depth) {
    extend(52);
    return;
}
void func_4972398288(unsigned depth) {
    extend(53);
    return;
}
void func_4972398416(unsigned depth) {
    extend(54);
    return;
}
void func_4972398544(unsigned depth) {
    extend(55);
    return;
}
void func_4972398672(unsigned depth) {
    extend(56);
    return;
}
void func_4972398224(unsigned depth) {
    extend(57);
    return;
}
void func_4972394880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972399216(depth+1);
    func_4972393984(depth+1);
    return;
}
void func_4972399216(unsigned depth) {
    extend(43);
    return;
}
void func_4972395072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_4972392448(depth+1);
    func_4972395200(depth+1);
    func_4972393984(depth+1);
    return;
}
void func_4972395200(unsigned depth) {
    extend(45);
    return;
}
void func_4972399072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_4972399440(depth+1);
    func_4972392448(depth+1);
    func_4972399568(depth+1);
    return;
}
void func_4972399440(unsigned depth) {
    extend(40);
    return;
}
void func_4972399568(unsigned depth) {
    extend(41);
    return;
}
void func_4972393824(unsigned depth) {
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
    func_4972400176(depth+1);
    func_4972392336(depth+1);
    func_4972399440(depth+1);
    func_4972399568(depth+1);
    func_4972394560(depth+1);
    func_4972393056(depth+1);
    func_4972400432(depth+1);
    return;
}
void func_4972400176(unsigned depth) {
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
void func_4972394560(unsigned depth) {
    extend(123);
    return;
}
void func_4972400432(unsigned depth) {
    extend(125);
    return;
}
void func_4972399776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_4972394496(depth+1);
    func_4972392336(depth+1);
    return;
}
void func_4972400736(unsigned depth) {
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
    func_4972400864(depth+1);
    func_4972399440(depth+1);
    func_4972392576(depth+1);
    func_4972399568(depth+1);
    func_4972394560(depth+1);
    func_4972393056(depth+1);
    func_4972400432(depth+1);
    return;
}
void func_4972400864(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4972402208(unsigned depth) {
    extend(97);
    return;
}
void func_4972402336(unsigned depth) {
    extend(98);
    return;
}
void func_4972402464(unsigned depth) {
    extend(99);
    return;
}
void func_4972402624(unsigned depth) {
    extend(100);
    return;
}
void func_4972402752(unsigned depth) {
    extend(101);
    return;
}
void func_4972402944(unsigned depth) {
    extend(102);
    return;
}
void func_4972403072(unsigned depth) {
    extend(103);
    return;
}
void func_4972397392(unsigned depth) {
    extend(104);
    return;
}
void func_4972397520(unsigned depth) {
    extend(105);
    return;
}
void func_4972402880(unsigned depth) {
    extend(106);
    return;
}
void func_4972403136(unsigned depth) {
    extend(107);
    return;
}
void func_4972403264(unsigned depth) {
    extend(108);
    return;
}
void func_4972403392(unsigned depth) {
    extend(109);
    return;
}
void func_4972403520(unsigned depth) {
    extend(110);
    return;
}
void func_4972403648(unsigned depth) {
    extend(111);
    return;
}
void func_4972403776(unsigned depth) {
    extend(112);
    return;
}
void func_4972403904(unsigned depth) {
    extend(113);
    return;
}
void func_4972397648(unsigned depth) {
    extend(114);
    return;
}
void func_4972404288(unsigned depth) {
    extend(115);
    return;
}
void func_4972404416(unsigned depth) {
    extend(116);
    return;
}
void func_4972404544(unsigned depth) {
    extend(117);
    return;
}
void func_4972404672(unsigned depth) {
    extend(118);
    return;
}
void func_4972404800(unsigned depth) {
    extend(119);
    return;
}
void func_4972404928(unsigned depth) {
    extend(120);
    return;
}
void func_4972405056(unsigned depth) {
    extend(121);
    return;
}
void func_4972405184(unsigned depth) {
    extend(122);
    return;
}
void func_4972405312(unsigned depth) {
    extend(65);
    return;
}
void func_4972405440(unsigned depth) {
    extend(66);
    return;
}
void func_4972405568(unsigned depth) {
    extend(67);
    return;
}
void func_4972405696(unsigned depth) {
    extend(68);
    return;
}
void func_4972405824(unsigned depth) {
    extend(69);
    return;
}
void func_4972405952(unsigned depth) {
    extend(70);
    return;
}
void func_4972406080(unsigned depth) {
    extend(71);
    return;
}
void func_4972404032(unsigned depth) {
    extend(72);
    return;
}
void func_4972404160(unsigned depth) {
    extend(73);
    return;
}
void func_4972406720(unsigned depth) {
    extend(74);
    return;
}
void func_4972406848(unsigned depth) {
    extend(75);
    return;
}
void func_4972406976(unsigned depth) {
    extend(76);
    return;
}
void func_4972407104(unsigned depth) {
    extend(77);
    return;
}
void func_4972407232(unsigned depth) {
    extend(78);
    return;
}
void func_4972407360(unsigned depth) {
    extend(79);
    return;
}
void func_4972407488(unsigned depth) {
    extend(80);
    return;
}
void func_4972407616(unsigned depth) {
    extend(81);
    return;
}
void func_4972407744(unsigned depth) {
    extend(82);
    return;
}
void func_4972407872(unsigned depth) {
    extend(83);
    return;
}
void func_4972408000(unsigned depth) {
    extend(84);
    return;
}
void func_4972408128(unsigned depth) {
    extend(85);
    return;
}
void func_4972408256(unsigned depth) {
    extend(86);
    return;
}
void func_4972408384(unsigned depth) {
    extend(87);
    return;
}
void func_4972408512(unsigned depth) {
    extend(88);
    return;
}
void func_4972408640(unsigned depth) {
    extend(89);
    return;
}
void func_4972408768(unsigned depth) {
    extend(90);
    return;
}
void func_4972400560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4972392736(depth+1);
    func_4972392016(depth+1);
    return;
}
void func_4972399904(unsigned depth) {
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
    func_4972393056(depth+1);
    func_4972393696(depth+1);
    return;
}
void func_4972401136(unsigned depth) {
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
    func_4972401264(depth+1);
    func_4972392448(depth+1);
    func_4972394368(depth+1);
    return;
}
void func_4972401264(unsigned depth) {
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
void func_4972401760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_4972393984(depth+1);
    func_4972401888(depth+1);
    func_4972392096(depth+1);
    return;
}
void func_4972401888(unsigned depth) {
    extend(42);
    return;
}
void func_4972401392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_4972393984(depth+1);
    func_4972402016(depth+1);
    func_4972392096(depth+1);
    return;
}
void func_4972402016(unsigned depth) {
    extend(47);
    return;
}
void func_4972408976(unsigned depth) {
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
    func_4972409104(depth+1);
    func_4972392336(depth+1);
    func_4972409232(depth+1);
    return;
}
void func_4972409104(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4972409232(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_4972409360(unsigned depth) {
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
    func_4972409488(depth+1);
    func_4972392336(depth+1);
    func_4972409232(depth+1);
    return;
}
void func_4972409488(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_4972409616(unsigned depth) {
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
    func_4972409744(depth+1);
    func_4972392336(depth+1);
    func_4972409232(depth+1);
    return;
}
void func_4972409744(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_4972408896(unsigned depth) {
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
    func_4972401664(depth+1);
    func_4972399440(depth+1);
    func_4972392576(depth+1);
    func_4972399568(depth+1);
    func_4972394560(depth+1);
    func_4972393056(depth+1);
    func_4972400432(depth+1);
    return;
}
void func_4972401664(unsigned depth) {
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
    func_4972393184(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
