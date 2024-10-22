#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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

void func_5668646288(unsigned depth);
void func_5668647040(unsigned depth);
void func_5668647200(unsigned depth);
void func_5668646912(unsigned depth);
void func_5668646560(unsigned depth);
void func_5668646160(unsigned depth);
void func_5668646800(unsigned depth);
void func_5668647328(unsigned depth);
void func_5668648960(unsigned depth);
void func_5668646480(unsigned depth);
void func_5668647520(unsigned depth);
void func_5668647728(unsigned depth);
void func_5668647648(unsigned depth);
void func_5668648160(unsigned depth);
void func_5668648448(unsigned depth);
void func_5668648000(unsigned depth);
void func_5668647920(unsigned depth);
void func_5668648384(unsigned depth);
void func_5668648704(unsigned depth);
void func_5668648832(unsigned depth);
void func_5668649984(unsigned depth);
void func_5668650112(unsigned depth);
void func_5668650240(unsigned depth);
void func_5668650368(unsigned depth);
void func_5668650496(unsigned depth);
void func_5668650624(unsigned depth);
void func_5668650784(unsigned depth);
void func_5668650912(unsigned depth);
void func_5668651072(unsigned depth);
void func_5668651200(unsigned depth);
void func_5668651424(unsigned depth);
void func_5668651552(unsigned depth);
void func_5668651728(unsigned depth);
void func_5668649216(unsigned depth);
void func_5668649856(unsigned depth);
void func_5668649408(unsigned depth);
void func_5668652304(unsigned depth);
void func_5668652432(unsigned depth);
void func_5668652560(unsigned depth);
void func_5668652752(unsigned depth);
void func_5668652880(unsigned depth);
void func_5668653008(unsigned depth);
void func_5668653136(unsigned depth);
void func_5668652688(unsigned depth);
void func_5668649344(unsigned depth);
void func_5668653680(unsigned depth);
void func_5668649536(unsigned depth);
void func_5668649664(unsigned depth);
void func_5668653536(unsigned depth);
void func_5668653904(unsigned depth);
void func_5668654032(unsigned depth);
void func_5668648288(unsigned depth);
void func_5668654640(unsigned depth);
void func_5668649024(unsigned depth);
void func_5668654896(unsigned depth);
void func_5668654240(unsigned depth);
void func_5668655200(unsigned depth);
void func_5668655328(unsigned depth);
void func_5668656672(unsigned depth);
void func_5668656800(unsigned depth);
void func_5668656928(unsigned depth);
void func_5668657088(unsigned depth);
void func_5668657216(unsigned depth);
void func_5668657408(unsigned depth);
void func_5668657536(unsigned depth);
void func_5668651856(unsigned depth);
void func_5668651984(unsigned depth);
void func_5668657344(unsigned depth);
void func_5668657600(unsigned depth);
void func_5668657728(unsigned depth);
void func_5668657856(unsigned depth);
void func_5668657984(unsigned depth);
void func_5668658112(unsigned depth);
void func_5668658240(unsigned depth);
void func_5668658368(unsigned depth);
void func_5668652112(unsigned depth);
void func_5668658752(unsigned depth);
void func_5668658880(unsigned depth);
void func_5668659008(unsigned depth);
void func_5668659136(unsigned depth);
void func_5668659264(unsigned depth);
void func_5668659392(unsigned depth);
void func_5668659520(unsigned depth);
void func_5668659648(unsigned depth);
void func_5668659776(unsigned depth);
void func_5668659904(unsigned depth);
void func_5668660032(unsigned depth);
void func_5668660160(unsigned depth);
void func_5668660288(unsigned depth);
void func_5668660416(unsigned depth);
void func_5668660544(unsigned depth);
void func_5668658496(unsigned depth);
void func_5668658624(unsigned depth);
void func_5668661184(unsigned depth);
void func_5668661312(unsigned depth);
void func_5668661440(unsigned depth);
void func_5668661568(unsigned depth);
void func_5668661696(unsigned depth);
void func_5668661824(unsigned depth);
void func_5668661952(unsigned depth);
void func_5668662080(unsigned depth);
void func_5668662208(unsigned depth);
void func_5668662336(unsigned depth);
void func_5668662464(unsigned depth);
void func_5668662592(unsigned depth);
void func_5668662720(unsigned depth);
void func_5668662848(unsigned depth);
void func_5668662976(unsigned depth);
void func_5668663104(unsigned depth);
void func_5668663232(unsigned depth);
void func_5668655024(unsigned depth);
void func_5668654368(unsigned depth);
void func_5668655600(unsigned depth);
void func_5668655728(unsigned depth);
void func_5668656224(unsigned depth);
void func_5668656352(unsigned depth);
void func_5668655856(unsigned depth);
void func_5668656480(unsigned depth);
void func_5668663440(unsigned depth);
void func_5668663568(unsigned depth);
void func_5668663696(unsigned depth);
void func_5668663824(unsigned depth);
void func_5668663952(unsigned depth);
void func_5668664080(unsigned depth);
void func_5668664208(unsigned depth);
void func_5668663360(unsigned depth);
void func_5668656128(unsigned depth);
void func_5668646288(unsigned depth) {
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
            func_5668648384(depth+1);
        break;
    }
    return;
}
void func_5668647040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5668649984(depth+1);
        break;
        case 1:
            func_5668650240(depth+1);
        break;
        case 2:
            func_5668650496(depth+1);
        break;
        case 3:
            func_5668650784(depth+1);
        break;
        case 4:
            func_5668651072(depth+1);
        break;
        case 5:
            func_5668651424(depth+1);
        break;
        case 6:
            func_5668651728(depth+1);
        break;
    }
    return;
}
void func_5668647200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5668649856(depth+1);
        break;
        case 1:
            func_5668649408(depth+1);
        break;
        case 2:
            func_5668652304(depth+1);
        break;
        case 3:
            func_5668652432(depth+1);
        break;
        case 4:
            func_5668652560(depth+1);
        break;
        case 5:
            func_5668652752(depth+1);
        break;
        case 6:
            func_5668652880(depth+1);
        break;
        case 7:
            func_5668653008(depth+1);
        break;
        case 8:
            func_5668653136(depth+1);
        break;
        case 9:
            func_5668652688(depth+1);
        break;
    }
    return;
}
void func_5668646912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5668649344(depth+1);
        break;
        case 1:
            func_5668649536(depth+1);
        break;
        case 2:
            func_5668648448(depth+1);
        break;
    }
    return;
}
void func_5668646560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5668653536(depth+1);
        break;
        case 1:
            func_5668646480(depth+1);
        break;
        case 2:
            func_5668646800(depth+1);
        break;
    }
    return;
}
void func_5668646160(unsigned depth) {
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
            func_5668648288(depth+1);
        break;
    }
    return;
}
void func_5668646800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5668654240(depth+1);
        break;
        case 1:
            func_5668648960(depth+1);
        break;
    }
    return;
}
void func_5668647328(unsigned depth) {
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
            func_5668655200(depth+1);
        break;
    }
    return;
}
void func_5668648960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5668656672(depth+1);
        break;
        case 1:
            func_5668656800(depth+1);
        break;
        case 2:
            func_5668656928(depth+1);
        break;
        case 3:
            func_5668657088(depth+1);
        break;
        case 4:
            func_5668657216(depth+1);
        break;
        case 5:
            func_5668657408(depth+1);
        break;
        case 6:
            func_5668657536(depth+1);
        break;
        case 7:
            func_5668651856(depth+1);
        break;
        case 8:
            func_5668651984(depth+1);
        break;
        case 9:
            func_5668657344(depth+1);
        break;
        case 10:
            func_5668657600(depth+1);
        break;
        case 11:
            func_5668657728(depth+1);
        break;
        case 12:
            func_5668657856(depth+1);
        break;
        case 13:
            func_5668657984(depth+1);
        break;
        case 14:
            func_5668658112(depth+1);
        break;
        case 15:
            func_5668658240(depth+1);
        break;
        case 16:
            func_5668658368(depth+1);
        break;
        case 17:
            func_5668652112(depth+1);
        break;
        case 18:
            func_5668658752(depth+1);
        break;
        case 19:
            func_5668658880(depth+1);
        break;
        case 20:
            func_5668659008(depth+1);
        break;
        case 21:
            func_5668659136(depth+1);
        break;
        case 22:
            func_5668659264(depth+1);
        break;
        case 23:
            func_5668659392(depth+1);
        break;
        case 24:
            func_5668659520(depth+1);
        break;
        case 25:
            func_5668659648(depth+1);
        break;
        case 26:
            func_5668659776(depth+1);
        break;
        case 27:
            func_5668659904(depth+1);
        break;
        case 28:
            func_5668660032(depth+1);
        break;
        case 29:
            func_5668660160(depth+1);
        break;
        case 30:
            func_5668660288(depth+1);
        break;
        case 31:
            func_5668660416(depth+1);
        break;
        case 32:
            func_5668660544(depth+1);
        break;
        case 33:
            func_5668658496(depth+1);
        break;
        case 34:
            func_5668658624(depth+1);
        break;
        case 35:
            func_5668661184(depth+1);
        break;
        case 36:
            func_5668661312(depth+1);
        break;
        case 37:
            func_5668661440(depth+1);
        break;
        case 38:
            func_5668661568(depth+1);
        break;
        case 39:
            func_5668661696(depth+1);
        break;
        case 40:
            func_5668661824(depth+1);
        break;
        case 41:
            func_5668661952(depth+1);
        break;
        case 42:
            func_5668662080(depth+1);
        break;
        case 43:
            func_5668662208(depth+1);
        break;
        case 44:
            func_5668662336(depth+1);
        break;
        case 45:
            func_5668662464(depth+1);
        break;
        case 46:
            func_5668662592(depth+1);
        break;
        case 47:
            func_5668662720(depth+1);
        break;
        case 48:
            func_5668662848(depth+1);
        break;
        case 49:
            func_5668662976(depth+1);
        break;
        case 50:
            func_5668663104(depth+1);
        break;
        case 51:
            func_5668663232(depth+1);
        break;
    }
    return;
}
void func_5668646480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5668655024(depth+1);
        break;
        case 1:
            func_5668647200(depth+1);
        break;
    }
    return;
}
void func_5668647520(unsigned depth) {
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
            func_5668654368(depth+1);
        break;
        case 1:
            func_5668648160(depth+1);
        break;
    }
    return;
}
void func_5668647728(unsigned depth) {
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
            func_5668655600(depth+1);
        break;
    }
    return;
}
void func_5668647648(unsigned depth) {
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
            func_5668647520(depth+1);
        break;
    }
    return;
}
void func_5668648160(unsigned depth) {
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
            func_5668648000(depth+1);
        break;
        case 1:
            func_5668646288(depth+1);
        break;
        case 2:
            func_5668647328(depth+1);
        break;
        case 3:
            func_5668647920(depth+1);
        break;
        case 4:
            func_5668646160(depth+1);
        break;
        case 5:
            func_5668647728(depth+1);
        break;
    }
    return;
}
void func_5668648448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5668656224(depth+1);
        break;
        case 1:
            func_5668655856(depth+1);
        break;
        case 2:
            func_5668646560(depth+1);
        break;
    }
    return;
}
void func_5668648000(unsigned depth) {
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
            func_5668663440(depth+1);
        break;
        case 1:
            func_5668663824(depth+1);
        break;
        case 2:
            func_5668664080(depth+1);
        break;
    }
    return;
}
void func_5668647920(unsigned depth) {
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
            func_5668663360(depth+1);
        break;
    }
    return;
}
void func_5668648384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_5668646800(depth+1);
    func_5668648704(depth+1);
    func_5668646912(depth+1);
    func_5668648832(depth+1);
    return;
}
void func_5668648704(unsigned depth) {
    extend(61);
    return;
}
void func_5668648832(unsigned depth) {
    extend(59);
    return;
}
void func_5668649984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668650112(depth+1);
    func_5668646912(depth+1);
    return;
}
void func_5668650112(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5668650240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668650368(depth+1);
    func_5668646912(depth+1);
    return;
}
void func_5668650368(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_5668650496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668650624(depth+1);
    func_5668646912(depth+1);
    return;
}
void func_5668650624(unsigned depth) {
    extend(62);
    return;
}
void func_5668650784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668650912(depth+1);
    func_5668646912(depth+1);
    return;
}
void func_5668650912(unsigned depth) {
    extend(60);
    return;
}
void func_5668651072(unsigned depth) {
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
    func_5668647040(depth+1);
    func_5668651200(depth+1);
    func_5668647040(depth+1);
    return;
}
void func_5668651200(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5668651424(unsigned depth) {
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
    func_5668647040(depth+1);
    func_5668651552(depth+1);
    func_5668647040(depth+1);
    return;
}
void func_5668651552(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5668651728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5668649216(depth+1);
    func_5668647040(depth+1);
    return;
}
void func_5668649216(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_5668649856(unsigned depth) {
    extend(48);
    return;
}
void func_5668649408(unsigned depth) {
    extend(49);
    return;
}
void func_5668652304(unsigned depth) {
    extend(50);
    return;
}
void func_5668652432(unsigned depth) {
    extend(51);
    return;
}
void func_5668652560(unsigned depth) {
    extend(52);
    return;
}
void func_5668652752(unsigned depth) {
    extend(53);
    return;
}
void func_5668652880(unsigned depth) {
    extend(54);
    return;
}
void func_5668653008(unsigned depth) {
    extend(55);
    return;
}
void func_5668653136(unsigned depth) {
    extend(56);
    return;
}
void func_5668652688(unsigned depth) {
    extend(57);
    return;
}
void func_5668649344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668653680(depth+1);
    func_5668648448(depth+1);
    return;
}
void func_5668653680(unsigned depth) {
    extend(43);
    return;
}
void func_5668649536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5668646912(depth+1);
    func_5668649664(depth+1);
    func_5668648448(depth+1);
    return;
}
void func_5668649664(unsigned depth) {
    extend(45);
    return;
}
void func_5668653536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5668653904(depth+1);
    func_5668646912(depth+1);
    func_5668654032(depth+1);
    return;
}
void func_5668653904(unsigned depth) {
    extend(40);
    return;
}
void func_5668654032(unsigned depth) {
    extend(41);
    return;
}
void func_5668648288(unsigned depth) {
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
    func_5668654640(depth+1);
    func_5668646800(depth+1);
    func_5668653904(depth+1);
    func_5668654032(depth+1);
    func_5668649024(depth+1);
    func_5668647520(depth+1);
    func_5668654896(depth+1);
    return;
}
void func_5668654640(unsigned depth) {
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
void func_5668649024(unsigned depth) {
    extend(123);
    return;
}
void func_5668654896(unsigned depth) {
    extend(125);
    return;
}
void func_5668654240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_5668648960(depth+1);
    func_5668646800(depth+1);
    return;
}
void func_5668655200(unsigned depth) {
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
    func_5668655328(depth+1);
    func_5668653904(depth+1);
    func_5668647040(depth+1);
    func_5668654032(depth+1);
    func_5668649024(depth+1);
    func_5668647520(depth+1);
    func_5668654896(depth+1);
    return;
}
void func_5668655328(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5668656672(unsigned depth) {
    extend(97);
    return;
}
void func_5668656800(unsigned depth) {
    extend(98);
    return;
}
void func_5668656928(unsigned depth) {
    extend(99);
    return;
}
void func_5668657088(unsigned depth) {
    extend(100);
    return;
}
void func_5668657216(unsigned depth) {
    extend(101);
    return;
}
void func_5668657408(unsigned depth) {
    extend(102);
    return;
}
void func_5668657536(unsigned depth) {
    extend(103);
    return;
}
void func_5668651856(unsigned depth) {
    extend(104);
    return;
}
void func_5668651984(unsigned depth) {
    extend(105);
    return;
}
void func_5668657344(unsigned depth) {
    extend(106);
    return;
}
void func_5668657600(unsigned depth) {
    extend(107);
    return;
}
void func_5668657728(unsigned depth) {
    extend(108);
    return;
}
void func_5668657856(unsigned depth) {
    extend(109);
    return;
}
void func_5668657984(unsigned depth) {
    extend(110);
    return;
}
void func_5668658112(unsigned depth) {
    extend(111);
    return;
}
void func_5668658240(unsigned depth) {
    extend(112);
    return;
}
void func_5668658368(unsigned depth) {
    extend(113);
    return;
}
void func_5668652112(unsigned depth) {
    extend(114);
    return;
}
void func_5668658752(unsigned depth) {
    extend(115);
    return;
}
void func_5668658880(unsigned depth) {
    extend(116);
    return;
}
void func_5668659008(unsigned depth) {
    extend(117);
    return;
}
void func_5668659136(unsigned depth) {
    extend(118);
    return;
}
void func_5668659264(unsigned depth) {
    extend(119);
    return;
}
void func_5668659392(unsigned depth) {
    extend(120);
    return;
}
void func_5668659520(unsigned depth) {
    extend(121);
    return;
}
void func_5668659648(unsigned depth) {
    extend(122);
    return;
}
void func_5668659776(unsigned depth) {
    extend(65);
    return;
}
void func_5668659904(unsigned depth) {
    extend(66);
    return;
}
void func_5668660032(unsigned depth) {
    extend(67);
    return;
}
void func_5668660160(unsigned depth) {
    extend(68);
    return;
}
void func_5668660288(unsigned depth) {
    extend(69);
    return;
}
void func_5668660416(unsigned depth) {
    extend(70);
    return;
}
void func_5668660544(unsigned depth) {
    extend(71);
    return;
}
void func_5668658496(unsigned depth) {
    extend(72);
    return;
}
void func_5668658624(unsigned depth) {
    extend(73);
    return;
}
void func_5668661184(unsigned depth) {
    extend(74);
    return;
}
void func_5668661312(unsigned depth) {
    extend(75);
    return;
}
void func_5668661440(unsigned depth) {
    extend(76);
    return;
}
void func_5668661568(unsigned depth) {
    extend(77);
    return;
}
void func_5668661696(unsigned depth) {
    extend(78);
    return;
}
void func_5668661824(unsigned depth) {
    extend(79);
    return;
}
void func_5668661952(unsigned depth) {
    extend(80);
    return;
}
void func_5668662080(unsigned depth) {
    extend(81);
    return;
}
void func_5668662208(unsigned depth) {
    extend(82);
    return;
}
void func_5668662336(unsigned depth) {
    extend(83);
    return;
}
void func_5668662464(unsigned depth) {
    extend(84);
    return;
}
void func_5668662592(unsigned depth) {
    extend(85);
    return;
}
void func_5668662720(unsigned depth) {
    extend(86);
    return;
}
void func_5668662848(unsigned depth) {
    extend(87);
    return;
}
void func_5668662976(unsigned depth) {
    extend(88);
    return;
}
void func_5668663104(unsigned depth) {
    extend(89);
    return;
}
void func_5668663232(unsigned depth) {
    extend(90);
    return;
}
void func_5668655024(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5668647200(depth+1);
    func_5668646480(depth+1);
    return;
}
void func_5668654368(unsigned depth) {
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
    func_5668647520(depth+1);
    func_5668648160(depth+1);
    return;
}
void func_5668655600(unsigned depth) {
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
    func_5668655728(depth+1);
    func_5668646912(depth+1);
    func_5668648832(depth+1);
    return;
}
void func_5668655728(unsigned depth) {
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
void func_5668656224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5668648448(depth+1);
    func_5668656352(depth+1);
    func_5668646560(depth+1);
    return;
}
void func_5668656352(unsigned depth) {
    extend(42);
    return;
}
void func_5668655856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5668648448(depth+1);
    func_5668656480(depth+1);
    func_5668646560(depth+1);
    return;
}
void func_5668656480(unsigned depth) {
    extend(47);
    return;
}
void func_5668663440(unsigned depth) {
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
    func_5668663568(depth+1);
    func_5668646800(depth+1);
    func_5668663696(depth+1);
    return;
}
void func_5668663568(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5668663696(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_5668663824(unsigned depth) {
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
    func_5668663952(depth+1);
    func_5668646800(depth+1);
    func_5668663696(depth+1);
    return;
}
void func_5668663952(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_5668664080(unsigned depth) {
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
    func_5668664208(depth+1);
    func_5668646800(depth+1);
    func_5668663696(depth+1);
    return;
}
void func_5668664208(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_5668663360(unsigned depth) {
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
    func_5668656128(depth+1);
    func_5668653904(depth+1);
    func_5668647040(depth+1);
    func_5668654032(depth+1);
    func_5668649024(depth+1);
    func_5668647520(depth+1);
    func_5668654896(depth+1);
    return;
}
void func_5668656128(unsigned depth) {
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
    func_5668647648(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
