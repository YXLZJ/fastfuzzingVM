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

void func_4997557648(unsigned depth);
void func_4997558400(unsigned depth);
void func_4997558560(unsigned depth);
void func_4997558272(unsigned depth);
void func_4997557920(unsigned depth);
void func_4997557520(unsigned depth);
void func_4997558160(unsigned depth);
void func_4997558688(unsigned depth);
void func_4997560320(unsigned depth);
void func_4997557840(unsigned depth);
void func_4997558880(unsigned depth);
void func_4997559088(unsigned depth);
void func_4997559008(unsigned depth);
void func_4997559520(unsigned depth);
void func_4997559808(unsigned depth);
void func_4997559360(unsigned depth);
void func_4997559280(unsigned depth);
void func_4997559744(unsigned depth);
void func_4997560064(unsigned depth);
void func_4997560192(unsigned depth);
void func_4997561344(unsigned depth);
void func_4997561472(unsigned depth);
void func_4997561600(unsigned depth);
void func_4997561728(unsigned depth);
void func_4997561856(unsigned depth);
void func_4997561984(unsigned depth);
void func_4997562144(unsigned depth);
void func_4997562272(unsigned depth);
void func_4997562432(unsigned depth);
void func_4997562560(unsigned depth);
void func_4997562784(unsigned depth);
void func_4997562912(unsigned depth);
void func_4997563088(unsigned depth);
void func_4997560576(unsigned depth);
void func_4997561216(unsigned depth);
void func_4997560768(unsigned depth);
void func_4997563664(unsigned depth);
void func_4997563792(unsigned depth);
void func_4997563920(unsigned depth);
void func_4997564112(unsigned depth);
void func_4997564240(unsigned depth);
void func_4997564368(unsigned depth);
void func_4997564496(unsigned depth);
void func_4997564048(unsigned depth);
void func_4997560704(unsigned depth);
void func_4997565040(unsigned depth);
void func_4997560896(unsigned depth);
void func_4997561024(unsigned depth);
void func_4997564896(unsigned depth);
void func_4997565264(unsigned depth);
void func_4997565392(unsigned depth);
void func_4997559648(unsigned depth);
void func_4997566000(unsigned depth);
void func_4997560384(unsigned depth);
void func_4997566256(unsigned depth);
void func_4997565600(unsigned depth);
void func_4997566560(unsigned depth);
void func_4997566688(unsigned depth);
void func_4997568032(unsigned depth);
void func_4997568160(unsigned depth);
void func_4997568288(unsigned depth);
void func_4997568448(unsigned depth);
void func_4997568576(unsigned depth);
void func_4997568768(unsigned depth);
void func_4997568896(unsigned depth);
void func_4997563216(unsigned depth);
void func_4997563344(unsigned depth);
void func_4997568704(unsigned depth);
void func_4997568960(unsigned depth);
void func_4997569088(unsigned depth);
void func_4997569216(unsigned depth);
void func_4997569344(unsigned depth);
void func_4997569472(unsigned depth);
void func_4997569600(unsigned depth);
void func_4997569728(unsigned depth);
void func_4997563472(unsigned depth);
void func_4997570112(unsigned depth);
void func_4997570240(unsigned depth);
void func_4997570368(unsigned depth);
void func_4997570496(unsigned depth);
void func_4997570624(unsigned depth);
void func_4997570752(unsigned depth);
void func_4997570880(unsigned depth);
void func_4997571008(unsigned depth);
void func_4997571136(unsigned depth);
void func_4997571264(unsigned depth);
void func_4997571392(unsigned depth);
void func_4997571520(unsigned depth);
void func_4997571648(unsigned depth);
void func_4997571776(unsigned depth);
void func_4997571904(unsigned depth);
void func_4997569856(unsigned depth);
void func_4997569984(unsigned depth);
void func_4997572544(unsigned depth);
void func_4997572672(unsigned depth);
void func_4997572800(unsigned depth);
void func_4997572928(unsigned depth);
void func_4997573056(unsigned depth);
void func_4997573184(unsigned depth);
void func_4997573312(unsigned depth);
void func_4997573440(unsigned depth);
void func_4997573568(unsigned depth);
void func_4997573696(unsigned depth);
void func_4997573824(unsigned depth);
void func_4997573952(unsigned depth);
void func_4997574080(unsigned depth);
void func_4997574208(unsigned depth);
void func_4997574336(unsigned depth);
void func_4997574464(unsigned depth);
void func_4997574592(unsigned depth);
void func_4997566384(unsigned depth);
void func_4997565728(unsigned depth);
void func_4997566960(unsigned depth);
void func_4997567088(unsigned depth);
void func_4997567584(unsigned depth);
void func_4997567712(unsigned depth);
void func_4997567216(unsigned depth);
void func_4997567840(unsigned depth);
void func_4997574800(unsigned depth);
void func_4997574928(unsigned depth);
void func_4997575056(unsigned depth);
void func_4997575184(unsigned depth);
void func_4997575312(unsigned depth);
void func_4997575440(unsigned depth);
void func_4997575568(unsigned depth);
void func_4997574720(unsigned depth);
void func_4997567488(unsigned depth);
void func_4997557648(unsigned depth) {
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
            func_4997559744(depth+1);
        break;
    }
    return;
}
void func_4997558400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4997561344(depth+1);
        break;
        case 1:
            func_4997561600(depth+1);
        break;
        case 2:
            func_4997561856(depth+1);
        break;
        case 3:
            func_4997562144(depth+1);
        break;
        case 4:
            func_4997562432(depth+1);
        break;
        case 5:
            func_4997562784(depth+1);
        break;
        case 6:
            func_4997563088(depth+1);
        break;
    }
    return;
}
void func_4997558560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4997561216(depth+1);
        break;
        case 1:
            func_4997560768(depth+1);
        break;
        case 2:
            func_4997563664(depth+1);
        break;
        case 3:
            func_4997563792(depth+1);
        break;
        case 4:
            func_4997563920(depth+1);
        break;
        case 5:
            func_4997564112(depth+1);
        break;
        case 6:
            func_4997564240(depth+1);
        break;
        case 7:
            func_4997564368(depth+1);
        break;
        case 8:
            func_4997564496(depth+1);
        break;
        case 9:
            func_4997564048(depth+1);
        break;
    }
    return;
}
void func_4997558272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4997560704(depth+1);
        break;
        case 1:
            func_4997560896(depth+1);
        break;
        case 2:
            func_4997559808(depth+1);
        break;
    }
    return;
}
void func_4997557920(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4997564896(depth+1);
        break;
        case 1:
            func_4997557840(depth+1);
        break;
        case 2:
            func_4997558160(depth+1);
        break;
    }
    return;
}
void func_4997557520(unsigned depth) {
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
            func_4997559648(depth+1);
        break;
    }
    return;
}
void func_4997558160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4997565600(depth+1);
        break;
        case 1:
            func_4997560320(depth+1);
        break;
    }
    return;
}
void func_4997558688(unsigned depth) {
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
            func_4997566560(depth+1);
        break;
    }
    return;
}
void func_4997560320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4997568032(depth+1);
        break;
        case 1:
            func_4997568160(depth+1);
        break;
        case 2:
            func_4997568288(depth+1);
        break;
        case 3:
            func_4997568448(depth+1);
        break;
        case 4:
            func_4997568576(depth+1);
        break;
        case 5:
            func_4997568768(depth+1);
        break;
        case 6:
            func_4997568896(depth+1);
        break;
        case 7:
            func_4997563216(depth+1);
        break;
        case 8:
            func_4997563344(depth+1);
        break;
        case 9:
            func_4997568704(depth+1);
        break;
        case 10:
            func_4997568960(depth+1);
        break;
        case 11:
            func_4997569088(depth+1);
        break;
        case 12:
            func_4997569216(depth+1);
        break;
        case 13:
            func_4997569344(depth+1);
        break;
        case 14:
            func_4997569472(depth+1);
        break;
        case 15:
            func_4997569600(depth+1);
        break;
        case 16:
            func_4997569728(depth+1);
        break;
        case 17:
            func_4997563472(depth+1);
        break;
        case 18:
            func_4997570112(depth+1);
        break;
        case 19:
            func_4997570240(depth+1);
        break;
        case 20:
            func_4997570368(depth+1);
        break;
        case 21:
            func_4997570496(depth+1);
        break;
        case 22:
            func_4997570624(depth+1);
        break;
        case 23:
            func_4997570752(depth+1);
        break;
        case 24:
            func_4997570880(depth+1);
        break;
        case 25:
            func_4997571008(depth+1);
        break;
        case 26:
            func_4997571136(depth+1);
        break;
        case 27:
            func_4997571264(depth+1);
        break;
        case 28:
            func_4997571392(depth+1);
        break;
        case 29:
            func_4997571520(depth+1);
        break;
        case 30:
            func_4997571648(depth+1);
        break;
        case 31:
            func_4997571776(depth+1);
        break;
        case 32:
            func_4997571904(depth+1);
        break;
        case 33:
            func_4997569856(depth+1);
        break;
        case 34:
            func_4997569984(depth+1);
        break;
        case 35:
            func_4997572544(depth+1);
        break;
        case 36:
            func_4997572672(depth+1);
        break;
        case 37:
            func_4997572800(depth+1);
        break;
        case 38:
            func_4997572928(depth+1);
        break;
        case 39:
            func_4997573056(depth+1);
        break;
        case 40:
            func_4997573184(depth+1);
        break;
        case 41:
            func_4997573312(depth+1);
        break;
        case 42:
            func_4997573440(depth+1);
        break;
        case 43:
            func_4997573568(depth+1);
        break;
        case 44:
            func_4997573696(depth+1);
        break;
        case 45:
            func_4997573824(depth+1);
        break;
        case 46:
            func_4997573952(depth+1);
        break;
        case 47:
            func_4997574080(depth+1);
        break;
        case 48:
            func_4997574208(depth+1);
        break;
        case 49:
            func_4997574336(depth+1);
        break;
        case 50:
            func_4997574464(depth+1);
        break;
        case 51:
            func_4997574592(depth+1);
        break;
    }
    return;
}
void func_4997557840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4997566384(depth+1);
        break;
        case 1:
            func_4997558560(depth+1);
        break;
    }
    return;
}
void func_4997558880(unsigned depth) {
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
            func_4997565728(depth+1);
        break;
        case 1:
            func_4997559520(depth+1);
        break;
    }
    return;
}
void func_4997559088(unsigned depth) {
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
            func_4997566960(depth+1);
        break;
    }
    return;
}
void func_4997559008(unsigned depth) {
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
            func_4997558880(depth+1);
        break;
    }
    return;
}
void func_4997559520(unsigned depth) {
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
            func_4997559360(depth+1);
        break;
        case 1:
            func_4997557648(depth+1);
        break;
        case 2:
            func_4997558688(depth+1);
        break;
        case 3:
            func_4997559280(depth+1);
        break;
        case 4:
            func_4997557520(depth+1);
        break;
        case 5:
            func_4997559088(depth+1);
        break;
    }
    return;
}
void func_4997559808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4997567584(depth+1);
        break;
        case 1:
            func_4997567216(depth+1);
        break;
        case 2:
            func_4997557920(depth+1);
        break;
    }
    return;
}
void func_4997559360(unsigned depth) {
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
            func_4997574800(depth+1);
        break;
        case 1:
            func_4997575184(depth+1);
        break;
        case 2:
            func_4997575440(depth+1);
        break;
    }
    return;
}
void func_4997559280(unsigned depth) {
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
            func_4997574720(depth+1);
        break;
    }
    return;
}
void func_4997559744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_4997558160(depth+1);
    func_4997560064(depth+1);
    func_4997558272(depth+1);
    func_4997560192(depth+1);
    return;
}
void func_4997560064(unsigned depth) {
    extend(61);
    return;
}
void func_4997560192(unsigned depth) {
    extend(59);
    return;
}
void func_4997561344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997561472(depth+1);
    func_4997558272(depth+1);
    return;
}
void func_4997561472(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4997561600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997561728(depth+1);
    func_4997558272(depth+1);
    return;
}
void func_4997561728(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_4997561856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997561984(depth+1);
    func_4997558272(depth+1);
    return;
}
void func_4997561984(unsigned depth) {
    extend(62);
    return;
}
void func_4997562144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997562272(depth+1);
    func_4997558272(depth+1);
    return;
}
void func_4997562272(unsigned depth) {
    extend(60);
    return;
}
void func_4997562432(unsigned depth) {
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
    func_4997558400(depth+1);
    func_4997562560(depth+1);
    func_4997558400(depth+1);
    return;
}
void func_4997562560(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4997562784(unsigned depth) {
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
    func_4997558400(depth+1);
    func_4997562912(depth+1);
    func_4997558400(depth+1);
    return;
}
void func_4997562912(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4997563088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4997560576(depth+1);
    func_4997558400(depth+1);
    return;
}
void func_4997560576(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_4997561216(unsigned depth) {
    extend(48);
    return;
}
void func_4997560768(unsigned depth) {
    extend(49);
    return;
}
void func_4997563664(unsigned depth) {
    extend(50);
    return;
}
void func_4997563792(unsigned depth) {
    extend(51);
    return;
}
void func_4997563920(unsigned depth) {
    extend(52);
    return;
}
void func_4997564112(unsigned depth) {
    extend(53);
    return;
}
void func_4997564240(unsigned depth) {
    extend(54);
    return;
}
void func_4997564368(unsigned depth) {
    extend(55);
    return;
}
void func_4997564496(unsigned depth) {
    extend(56);
    return;
}
void func_4997564048(unsigned depth) {
    extend(57);
    return;
}
void func_4997560704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997565040(depth+1);
    func_4997559808(depth+1);
    return;
}
void func_4997565040(unsigned depth) {
    extend(43);
    return;
}
void func_4997560896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_4997558272(depth+1);
    func_4997561024(depth+1);
    func_4997559808(depth+1);
    return;
}
void func_4997561024(unsigned depth) {
    extend(45);
    return;
}
void func_4997564896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_4997565264(depth+1);
    func_4997558272(depth+1);
    func_4997565392(depth+1);
    return;
}
void func_4997565264(unsigned depth) {
    extend(40);
    return;
}
void func_4997565392(unsigned depth) {
    extend(41);
    return;
}
void func_4997559648(unsigned depth) {
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
    func_4997566000(depth+1);
    func_4997558160(depth+1);
    func_4997565264(depth+1);
    func_4997565392(depth+1);
    func_4997560384(depth+1);
    func_4997558880(depth+1);
    func_4997566256(depth+1);
    return;
}
void func_4997566000(unsigned depth) {
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
void func_4997560384(unsigned depth) {
    extend(123);
    return;
}
void func_4997566256(unsigned depth) {
    extend(125);
    return;
}
void func_4997565600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_4997560320(depth+1);
    func_4997558160(depth+1);
    return;
}
void func_4997566560(unsigned depth) {
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
    func_4997566688(depth+1);
    func_4997565264(depth+1);
    func_4997558400(depth+1);
    func_4997565392(depth+1);
    func_4997560384(depth+1);
    func_4997558880(depth+1);
    func_4997566256(depth+1);
    return;
}
void func_4997566688(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4997568032(unsigned depth) {
    extend(97);
    return;
}
void func_4997568160(unsigned depth) {
    extend(98);
    return;
}
void func_4997568288(unsigned depth) {
    extend(99);
    return;
}
void func_4997568448(unsigned depth) {
    extend(100);
    return;
}
void func_4997568576(unsigned depth) {
    extend(101);
    return;
}
void func_4997568768(unsigned depth) {
    extend(102);
    return;
}
void func_4997568896(unsigned depth) {
    extend(103);
    return;
}
void func_4997563216(unsigned depth) {
    extend(104);
    return;
}
void func_4997563344(unsigned depth) {
    extend(105);
    return;
}
void func_4997568704(unsigned depth) {
    extend(106);
    return;
}
void func_4997568960(unsigned depth) {
    extend(107);
    return;
}
void func_4997569088(unsigned depth) {
    extend(108);
    return;
}
void func_4997569216(unsigned depth) {
    extend(109);
    return;
}
void func_4997569344(unsigned depth) {
    extend(110);
    return;
}
void func_4997569472(unsigned depth) {
    extend(111);
    return;
}
void func_4997569600(unsigned depth) {
    extend(112);
    return;
}
void func_4997569728(unsigned depth) {
    extend(113);
    return;
}
void func_4997563472(unsigned depth) {
    extend(114);
    return;
}
void func_4997570112(unsigned depth) {
    extend(115);
    return;
}
void func_4997570240(unsigned depth) {
    extend(116);
    return;
}
void func_4997570368(unsigned depth) {
    extend(117);
    return;
}
void func_4997570496(unsigned depth) {
    extend(118);
    return;
}
void func_4997570624(unsigned depth) {
    extend(119);
    return;
}
void func_4997570752(unsigned depth) {
    extend(120);
    return;
}
void func_4997570880(unsigned depth) {
    extend(121);
    return;
}
void func_4997571008(unsigned depth) {
    extend(122);
    return;
}
void func_4997571136(unsigned depth) {
    extend(65);
    return;
}
void func_4997571264(unsigned depth) {
    extend(66);
    return;
}
void func_4997571392(unsigned depth) {
    extend(67);
    return;
}
void func_4997571520(unsigned depth) {
    extend(68);
    return;
}
void func_4997571648(unsigned depth) {
    extend(69);
    return;
}
void func_4997571776(unsigned depth) {
    extend(70);
    return;
}
void func_4997571904(unsigned depth) {
    extend(71);
    return;
}
void func_4997569856(unsigned depth) {
    extend(72);
    return;
}
void func_4997569984(unsigned depth) {
    extend(73);
    return;
}
void func_4997572544(unsigned depth) {
    extend(74);
    return;
}
void func_4997572672(unsigned depth) {
    extend(75);
    return;
}
void func_4997572800(unsigned depth) {
    extend(76);
    return;
}
void func_4997572928(unsigned depth) {
    extend(77);
    return;
}
void func_4997573056(unsigned depth) {
    extend(78);
    return;
}
void func_4997573184(unsigned depth) {
    extend(79);
    return;
}
void func_4997573312(unsigned depth) {
    extend(80);
    return;
}
void func_4997573440(unsigned depth) {
    extend(81);
    return;
}
void func_4997573568(unsigned depth) {
    extend(82);
    return;
}
void func_4997573696(unsigned depth) {
    extend(83);
    return;
}
void func_4997573824(unsigned depth) {
    extend(84);
    return;
}
void func_4997573952(unsigned depth) {
    extend(85);
    return;
}
void func_4997574080(unsigned depth) {
    extend(86);
    return;
}
void func_4997574208(unsigned depth) {
    extend(87);
    return;
}
void func_4997574336(unsigned depth) {
    extend(88);
    return;
}
void func_4997574464(unsigned depth) {
    extend(89);
    return;
}
void func_4997574592(unsigned depth) {
    extend(90);
    return;
}
void func_4997566384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4997558560(depth+1);
    func_4997557840(depth+1);
    return;
}
void func_4997565728(unsigned depth) {
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
    func_4997558880(depth+1);
    func_4997559520(depth+1);
    return;
}
void func_4997566960(unsigned depth) {
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
    func_4997567088(depth+1);
    func_4997558272(depth+1);
    func_4997560192(depth+1);
    return;
}
void func_4997567088(unsigned depth) {
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
void func_4997567584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_4997559808(depth+1);
    func_4997567712(depth+1);
    func_4997557920(depth+1);
    return;
}
void func_4997567712(unsigned depth) {
    extend(42);
    return;
}
void func_4997567216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_4997559808(depth+1);
    func_4997567840(depth+1);
    func_4997557920(depth+1);
    return;
}
void func_4997567840(unsigned depth) {
    extend(47);
    return;
}
void func_4997574800(unsigned depth) {
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
    func_4997574928(depth+1);
    func_4997558160(depth+1);
    func_4997575056(depth+1);
    return;
}
void func_4997574928(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4997575056(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_4997575184(unsigned depth) {
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
    func_4997575312(depth+1);
    func_4997558160(depth+1);
    func_4997575056(depth+1);
    return;
}
void func_4997575312(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_4997575440(unsigned depth) {
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
    func_4997575568(depth+1);
    func_4997558160(depth+1);
    func_4997575056(depth+1);
    return;
}
void func_4997575568(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_4997574720(unsigned depth) {
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
    func_4997567488(depth+1);
    func_4997565264(depth+1);
    func_4997558400(depth+1);
    func_4997565392(depth+1);
    func_4997560384(depth+1);
    func_4997558880(depth+1);
    func_4997566256(depth+1);
    return;
}
void func_4997567488(unsigned depth) {
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
    func_4997559008(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
