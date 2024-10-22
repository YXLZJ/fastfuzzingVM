#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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

void func_5752532368(unsigned depth);
void func_5752533120(unsigned depth);
void func_5752533280(unsigned depth);
void func_5752532992(unsigned depth);
void func_5752532640(unsigned depth);
void func_5752532240(unsigned depth);
void func_5752532880(unsigned depth);
void func_5752533408(unsigned depth);
void func_5752535040(unsigned depth);
void func_5752532560(unsigned depth);
void func_5752533600(unsigned depth);
void func_5752533808(unsigned depth);
void func_5752533728(unsigned depth);
void func_5752534240(unsigned depth);
void func_5752534528(unsigned depth);
void func_5752534080(unsigned depth);
void func_5752534000(unsigned depth);
void func_5752534464(unsigned depth);
void func_5752534784(unsigned depth);
void func_5752534912(unsigned depth);
void func_5752536064(unsigned depth);
void func_5752536192(unsigned depth);
void func_5752536320(unsigned depth);
void func_5752536448(unsigned depth);
void func_5752536576(unsigned depth);
void func_5752536704(unsigned depth);
void func_5752536864(unsigned depth);
void func_5752536992(unsigned depth);
void func_5752537152(unsigned depth);
void func_5752537280(unsigned depth);
void func_5752537504(unsigned depth);
void func_5752537632(unsigned depth);
void func_5752537808(unsigned depth);
void func_5752535296(unsigned depth);
void func_5752535936(unsigned depth);
void func_5752535488(unsigned depth);
void func_5752538384(unsigned depth);
void func_5752538512(unsigned depth);
void func_5752538640(unsigned depth);
void func_5752538832(unsigned depth);
void func_5752538960(unsigned depth);
void func_5752539088(unsigned depth);
void func_5752539216(unsigned depth);
void func_5752538768(unsigned depth);
void func_5752535424(unsigned depth);
void func_5752539760(unsigned depth);
void func_5752535616(unsigned depth);
void func_5752535744(unsigned depth);
void func_5752539616(unsigned depth);
void func_5752539984(unsigned depth);
void func_5752540112(unsigned depth);
void func_5752534368(unsigned depth);
void func_5752540720(unsigned depth);
void func_5752535104(unsigned depth);
void func_5752540976(unsigned depth);
void func_5752540320(unsigned depth);
void func_5752541280(unsigned depth);
void func_5752541408(unsigned depth);
void func_5752542752(unsigned depth);
void func_5752542880(unsigned depth);
void func_5752543008(unsigned depth);
void func_5752543168(unsigned depth);
void func_5752543296(unsigned depth);
void func_5752543488(unsigned depth);
void func_5752543616(unsigned depth);
void func_5752537936(unsigned depth);
void func_5752538064(unsigned depth);
void func_5752543424(unsigned depth);
void func_5752543680(unsigned depth);
void func_5752543808(unsigned depth);
void func_5752543936(unsigned depth);
void func_5752544064(unsigned depth);
void func_5752544192(unsigned depth);
void func_5752544320(unsigned depth);
void func_5752544448(unsigned depth);
void func_5752538192(unsigned depth);
void func_5752544832(unsigned depth);
void func_5752544960(unsigned depth);
void func_5752545088(unsigned depth);
void func_5752545216(unsigned depth);
void func_5752545344(unsigned depth);
void func_5752545472(unsigned depth);
void func_5752545600(unsigned depth);
void func_5752545728(unsigned depth);
void func_5752545856(unsigned depth);
void func_5752545984(unsigned depth);
void func_5752546112(unsigned depth);
void func_5752546240(unsigned depth);
void func_5752546368(unsigned depth);
void func_5752546496(unsigned depth);
void func_5752546624(unsigned depth);
void func_5752544576(unsigned depth);
void func_5752544704(unsigned depth);
void func_5752547264(unsigned depth);
void func_5752547392(unsigned depth);
void func_5752547520(unsigned depth);
void func_5752547648(unsigned depth);
void func_5752547776(unsigned depth);
void func_5752547904(unsigned depth);
void func_5752548032(unsigned depth);
void func_5752548160(unsigned depth);
void func_5752548288(unsigned depth);
void func_5752548416(unsigned depth);
void func_5752548544(unsigned depth);
void func_5752548672(unsigned depth);
void func_5752548800(unsigned depth);
void func_5752548928(unsigned depth);
void func_5752549056(unsigned depth);
void func_5752549184(unsigned depth);
void func_5752549312(unsigned depth);
void func_5752541104(unsigned depth);
void func_5752540448(unsigned depth);
void func_5752541680(unsigned depth);
void func_5752541808(unsigned depth);
void func_5752542304(unsigned depth);
void func_5752542432(unsigned depth);
void func_5752541936(unsigned depth);
void func_5752542560(unsigned depth);
void func_5752549520(unsigned depth);
void func_5752549648(unsigned depth);
void func_5752549776(unsigned depth);
void func_5752549904(unsigned depth);
void func_5752550032(unsigned depth);
void func_5752550160(unsigned depth);
void func_5752550288(unsigned depth);
void func_5752549440(unsigned depth);
void func_5752542208(unsigned depth);
void func_5752532368(unsigned depth) {
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
            func_5752534464(depth+1);
        break;
    }
    return;
}
void func_5752533120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5752536064(depth+1);
        break;
        case 1:
            func_5752536320(depth+1);
        break;
        case 2:
            func_5752536576(depth+1);
        break;
        case 3:
            func_5752536864(depth+1);
        break;
        case 4:
            func_5752537152(depth+1);
        break;
        case 5:
            func_5752537504(depth+1);
        break;
        case 6:
            func_5752537808(depth+1);
        break;
    }
    return;
}
void func_5752533280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5752535936(depth+1);
        break;
        case 1:
            func_5752535488(depth+1);
        break;
        case 2:
            func_5752538384(depth+1);
        break;
        case 3:
            func_5752538512(depth+1);
        break;
        case 4:
            func_5752538640(depth+1);
        break;
        case 5:
            func_5752538832(depth+1);
        break;
        case 6:
            func_5752538960(depth+1);
        break;
        case 7:
            func_5752539088(depth+1);
        break;
        case 8:
            func_5752539216(depth+1);
        break;
        case 9:
            func_5752538768(depth+1);
        break;
    }
    return;
}
void func_5752532992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5752535424(depth+1);
        break;
        case 1:
            func_5752535616(depth+1);
        break;
        case 2:
            func_5752534528(depth+1);
        break;
    }
    return;
}
void func_5752532640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5752539616(depth+1);
        break;
        case 1:
            func_5752532560(depth+1);
        break;
        case 2:
            func_5752532880(depth+1);
        break;
    }
    return;
}
void func_5752532240(unsigned depth) {
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
            func_5752534368(depth+1);
        break;
    }
    return;
}
void func_5752532880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5752540320(depth+1);
        break;
        case 1:
            func_5752535040(depth+1);
        break;
    }
    return;
}
void func_5752533408(unsigned depth) {
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
            func_5752541280(depth+1);
        break;
    }
    return;
}
void func_5752535040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5752542752(depth+1);
        break;
        case 1:
            func_5752542880(depth+1);
        break;
        case 2:
            func_5752543008(depth+1);
        break;
        case 3:
            func_5752543168(depth+1);
        break;
        case 4:
            func_5752543296(depth+1);
        break;
        case 5:
            func_5752543488(depth+1);
        break;
        case 6:
            func_5752543616(depth+1);
        break;
        case 7:
            func_5752537936(depth+1);
        break;
        case 8:
            func_5752538064(depth+1);
        break;
        case 9:
            func_5752543424(depth+1);
        break;
        case 10:
            func_5752543680(depth+1);
        break;
        case 11:
            func_5752543808(depth+1);
        break;
        case 12:
            func_5752543936(depth+1);
        break;
        case 13:
            func_5752544064(depth+1);
        break;
        case 14:
            func_5752544192(depth+1);
        break;
        case 15:
            func_5752544320(depth+1);
        break;
        case 16:
            func_5752544448(depth+1);
        break;
        case 17:
            func_5752538192(depth+1);
        break;
        case 18:
            func_5752544832(depth+1);
        break;
        case 19:
            func_5752544960(depth+1);
        break;
        case 20:
            func_5752545088(depth+1);
        break;
        case 21:
            func_5752545216(depth+1);
        break;
        case 22:
            func_5752545344(depth+1);
        break;
        case 23:
            func_5752545472(depth+1);
        break;
        case 24:
            func_5752545600(depth+1);
        break;
        case 25:
            func_5752545728(depth+1);
        break;
        case 26:
            func_5752545856(depth+1);
        break;
        case 27:
            func_5752545984(depth+1);
        break;
        case 28:
            func_5752546112(depth+1);
        break;
        case 29:
            func_5752546240(depth+1);
        break;
        case 30:
            func_5752546368(depth+1);
        break;
        case 31:
            func_5752546496(depth+1);
        break;
        case 32:
            func_5752546624(depth+1);
        break;
        case 33:
            func_5752544576(depth+1);
        break;
        case 34:
            func_5752544704(depth+1);
        break;
        case 35:
            func_5752547264(depth+1);
        break;
        case 36:
            func_5752547392(depth+1);
        break;
        case 37:
            func_5752547520(depth+1);
        break;
        case 38:
            func_5752547648(depth+1);
        break;
        case 39:
            func_5752547776(depth+1);
        break;
        case 40:
            func_5752547904(depth+1);
        break;
        case 41:
            func_5752548032(depth+1);
        break;
        case 42:
            func_5752548160(depth+1);
        break;
        case 43:
            func_5752548288(depth+1);
        break;
        case 44:
            func_5752548416(depth+1);
        break;
        case 45:
            func_5752548544(depth+1);
        break;
        case 46:
            func_5752548672(depth+1);
        break;
        case 47:
            func_5752548800(depth+1);
        break;
        case 48:
            func_5752548928(depth+1);
        break;
        case 49:
            func_5752549056(depth+1);
        break;
        case 50:
            func_5752549184(depth+1);
        break;
        case 51:
            func_5752549312(depth+1);
        break;
    }
    return;
}
void func_5752532560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5752541104(depth+1);
        break;
        case 1:
            func_5752533280(depth+1);
        break;
    }
    return;
}
void func_5752533600(unsigned depth) {
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
            func_5752540448(depth+1);
        break;
        case 1:
            func_5752534240(depth+1);
        break;
    }
    return;
}
void func_5752533808(unsigned depth) {
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
            func_5752541680(depth+1);
        break;
    }
    return;
}
void func_5752533728(unsigned depth) {
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
            func_5752533600(depth+1);
        break;
    }
    return;
}
void func_5752534240(unsigned depth) {
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
            func_5752534080(depth+1);
        break;
        case 1:
            func_5752532368(depth+1);
        break;
        case 2:
            func_5752533408(depth+1);
        break;
        case 3:
            func_5752534000(depth+1);
        break;
        case 4:
            func_5752532240(depth+1);
        break;
        case 5:
            func_5752533808(depth+1);
        break;
    }
    return;
}
void func_5752534528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5752542304(depth+1);
        break;
        case 1:
            func_5752541936(depth+1);
        break;
        case 2:
            func_5752532640(depth+1);
        break;
    }
    return;
}
void func_5752534080(unsigned depth) {
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
            func_5752549520(depth+1);
        break;
        case 1:
            func_5752549904(depth+1);
        break;
        case 2:
            func_5752550160(depth+1);
        break;
    }
    return;
}
void func_5752534000(unsigned depth) {
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
            func_5752549440(depth+1);
        break;
    }
    return;
}
void func_5752534464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_5752532880(depth+1);
    func_5752534784(depth+1);
    func_5752532992(depth+1);
    func_5752534912(depth+1);
    return;
}
void func_5752534784(unsigned depth) {
    extend(61);
    return;
}
void func_5752534912(unsigned depth) {
    extend(59);
    return;
}
void func_5752536064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752536192(depth+1);
    func_5752532992(depth+1);
    return;
}
void func_5752536192(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5752536320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752536448(depth+1);
    func_5752532992(depth+1);
    return;
}
void func_5752536448(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_5752536576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752536704(depth+1);
    func_5752532992(depth+1);
    return;
}
void func_5752536704(unsigned depth) {
    extend(62);
    return;
}
void func_5752536864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752536992(depth+1);
    func_5752532992(depth+1);
    return;
}
void func_5752536992(unsigned depth) {
    extend(60);
    return;
}
void func_5752537152(unsigned depth) {
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
    func_5752533120(depth+1);
    func_5752537280(depth+1);
    func_5752533120(depth+1);
    return;
}
void func_5752537280(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5752537504(unsigned depth) {
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
    func_5752533120(depth+1);
    func_5752537632(depth+1);
    func_5752533120(depth+1);
    return;
}
void func_5752537632(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5752537808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5752535296(depth+1);
    func_5752533120(depth+1);
    return;
}
void func_5752535296(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_5752535936(unsigned depth) {
    extend(48);
    return;
}
void func_5752535488(unsigned depth) {
    extend(49);
    return;
}
void func_5752538384(unsigned depth) {
    extend(50);
    return;
}
void func_5752538512(unsigned depth) {
    extend(51);
    return;
}
void func_5752538640(unsigned depth) {
    extend(52);
    return;
}
void func_5752538832(unsigned depth) {
    extend(53);
    return;
}
void func_5752538960(unsigned depth) {
    extend(54);
    return;
}
void func_5752539088(unsigned depth) {
    extend(55);
    return;
}
void func_5752539216(unsigned depth) {
    extend(56);
    return;
}
void func_5752538768(unsigned depth) {
    extend(57);
    return;
}
void func_5752535424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752539760(depth+1);
    func_5752534528(depth+1);
    return;
}
void func_5752539760(unsigned depth) {
    extend(43);
    return;
}
void func_5752535616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5752532992(depth+1);
    func_5752535744(depth+1);
    func_5752534528(depth+1);
    return;
}
void func_5752535744(unsigned depth) {
    extend(45);
    return;
}
void func_5752539616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5752539984(depth+1);
    func_5752532992(depth+1);
    func_5752540112(depth+1);
    return;
}
void func_5752539984(unsigned depth) {
    extend(40);
    return;
}
void func_5752540112(unsigned depth) {
    extend(41);
    return;
}
void func_5752534368(unsigned depth) {
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
    func_5752540720(depth+1);
    func_5752532880(depth+1);
    func_5752539984(depth+1);
    func_5752540112(depth+1);
    func_5752535104(depth+1);
    func_5752533600(depth+1);
    func_5752540976(depth+1);
    return;
}
void func_5752540720(unsigned depth) {
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
void func_5752535104(unsigned depth) {
    extend(123);
    return;
}
void func_5752540976(unsigned depth) {
    extend(125);
    return;
}
void func_5752540320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_5752535040(depth+1);
    func_5752532880(depth+1);
    return;
}
void func_5752541280(unsigned depth) {
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
    func_5752541408(depth+1);
    func_5752539984(depth+1);
    func_5752533120(depth+1);
    func_5752540112(depth+1);
    func_5752535104(depth+1);
    func_5752533600(depth+1);
    func_5752540976(depth+1);
    return;
}
void func_5752541408(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5752542752(unsigned depth) {
    extend(97);
    return;
}
void func_5752542880(unsigned depth) {
    extend(98);
    return;
}
void func_5752543008(unsigned depth) {
    extend(99);
    return;
}
void func_5752543168(unsigned depth) {
    extend(100);
    return;
}
void func_5752543296(unsigned depth) {
    extend(101);
    return;
}
void func_5752543488(unsigned depth) {
    extend(102);
    return;
}
void func_5752543616(unsigned depth) {
    extend(103);
    return;
}
void func_5752537936(unsigned depth) {
    extend(104);
    return;
}
void func_5752538064(unsigned depth) {
    extend(105);
    return;
}
void func_5752543424(unsigned depth) {
    extend(106);
    return;
}
void func_5752543680(unsigned depth) {
    extend(107);
    return;
}
void func_5752543808(unsigned depth) {
    extend(108);
    return;
}
void func_5752543936(unsigned depth) {
    extend(109);
    return;
}
void func_5752544064(unsigned depth) {
    extend(110);
    return;
}
void func_5752544192(unsigned depth) {
    extend(111);
    return;
}
void func_5752544320(unsigned depth) {
    extend(112);
    return;
}
void func_5752544448(unsigned depth) {
    extend(113);
    return;
}
void func_5752538192(unsigned depth) {
    extend(114);
    return;
}
void func_5752544832(unsigned depth) {
    extend(115);
    return;
}
void func_5752544960(unsigned depth) {
    extend(116);
    return;
}
void func_5752545088(unsigned depth) {
    extend(117);
    return;
}
void func_5752545216(unsigned depth) {
    extend(118);
    return;
}
void func_5752545344(unsigned depth) {
    extend(119);
    return;
}
void func_5752545472(unsigned depth) {
    extend(120);
    return;
}
void func_5752545600(unsigned depth) {
    extend(121);
    return;
}
void func_5752545728(unsigned depth) {
    extend(122);
    return;
}
void func_5752545856(unsigned depth) {
    extend(65);
    return;
}
void func_5752545984(unsigned depth) {
    extend(66);
    return;
}
void func_5752546112(unsigned depth) {
    extend(67);
    return;
}
void func_5752546240(unsigned depth) {
    extend(68);
    return;
}
void func_5752546368(unsigned depth) {
    extend(69);
    return;
}
void func_5752546496(unsigned depth) {
    extend(70);
    return;
}
void func_5752546624(unsigned depth) {
    extend(71);
    return;
}
void func_5752544576(unsigned depth) {
    extend(72);
    return;
}
void func_5752544704(unsigned depth) {
    extend(73);
    return;
}
void func_5752547264(unsigned depth) {
    extend(74);
    return;
}
void func_5752547392(unsigned depth) {
    extend(75);
    return;
}
void func_5752547520(unsigned depth) {
    extend(76);
    return;
}
void func_5752547648(unsigned depth) {
    extend(77);
    return;
}
void func_5752547776(unsigned depth) {
    extend(78);
    return;
}
void func_5752547904(unsigned depth) {
    extend(79);
    return;
}
void func_5752548032(unsigned depth) {
    extend(80);
    return;
}
void func_5752548160(unsigned depth) {
    extend(81);
    return;
}
void func_5752548288(unsigned depth) {
    extend(82);
    return;
}
void func_5752548416(unsigned depth) {
    extend(83);
    return;
}
void func_5752548544(unsigned depth) {
    extend(84);
    return;
}
void func_5752548672(unsigned depth) {
    extend(85);
    return;
}
void func_5752548800(unsigned depth) {
    extend(86);
    return;
}
void func_5752548928(unsigned depth) {
    extend(87);
    return;
}
void func_5752549056(unsigned depth) {
    extend(88);
    return;
}
void func_5752549184(unsigned depth) {
    extend(89);
    return;
}
void func_5752549312(unsigned depth) {
    extend(90);
    return;
}
void func_5752541104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5752533280(depth+1);
    func_5752532560(depth+1);
    return;
}
void func_5752540448(unsigned depth) {
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
    func_5752533600(depth+1);
    func_5752534240(depth+1);
    return;
}
void func_5752541680(unsigned depth) {
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
    func_5752541808(depth+1);
    func_5752532992(depth+1);
    func_5752534912(depth+1);
    return;
}
void func_5752541808(unsigned depth) {
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
void func_5752542304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5752534528(depth+1);
    func_5752542432(depth+1);
    func_5752532640(depth+1);
    return;
}
void func_5752542432(unsigned depth) {
    extend(42);
    return;
}
void func_5752541936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5752534528(depth+1);
    func_5752542560(depth+1);
    func_5752532640(depth+1);
    return;
}
void func_5752542560(unsigned depth) {
    extend(47);
    return;
}
void func_5752549520(unsigned depth) {
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
    func_5752549648(depth+1);
    func_5752532880(depth+1);
    func_5752549776(depth+1);
    return;
}
void func_5752549648(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5752549776(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_5752549904(unsigned depth) {
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
    func_5752550032(depth+1);
    func_5752532880(depth+1);
    func_5752549776(depth+1);
    return;
}
void func_5752550032(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_5752550160(unsigned depth) {
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
    func_5752550288(depth+1);
    func_5752532880(depth+1);
    func_5752549776(depth+1);
    return;
}
void func_5752550288(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_5752549440(unsigned depth) {
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
    func_5752542208(depth+1);
    func_5752539984(depth+1);
    func_5752533120(depth+1);
    func_5752540112(depth+1);
    func_5752535104(depth+1);
    func_5752533600(depth+1);
    func_5752540976(depth+1);
    return;
}
void func_5752542208(unsigned depth) {
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
    func_5752533728(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
