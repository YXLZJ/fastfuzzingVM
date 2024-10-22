#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 45
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

void func_4787827776(unsigned depth);
void func_4787844288(unsigned depth);
void func_4787844496(unsigned depth);
void func_4787844704(unsigned depth);
void func_4787844160(unsigned depth);
void func_4787845360(unsigned depth);
void func_4787845488(unsigned depth);
void func_4787845264(unsigned depth);
void func_4787845040(unsigned depth);
void func_4787847056(unsigned depth);
void func_4787846176(unsigned depth);
void func_4787845616(unsigned depth);
void func_4787845744(unsigned depth);
void func_4787845872(unsigned depth);
void func_4787846000(unsigned depth);
void func_4787846304(unsigned depth);
void func_4787844960(unsigned depth);
void func_4787845104(unsigned depth);
void func_4787846752(unsigned depth);
void func_4787846880(unsigned depth);
void func_4787847184(unsigned depth);
void func_4787847312(unsigned depth);
void func_4787847840(unsigned depth);
void func_4787847520(unsigned depth);
void func_4787847440(unsigned depth);
void func_4787847712(unsigned depth);
void func_4787848032(unsigned depth);
void func_4787848160(unsigned depth);
void func_4787848656(unsigned depth);
void func_4787848784(unsigned depth);
void func_4787848912(unsigned depth);
void func_4787849072(unsigned depth);
void func_4787849200(unsigned depth);
void func_4787846560(unsigned depth);
void func_4787849776(unsigned depth);
void func_4787849904(unsigned depth);
void func_4787850032(unsigned depth);
void func_4787846496(unsigned depth);
void func_4787848352(unsigned depth);
void func_4787850352(unsigned depth);
void func_4787850480(unsigned depth);
void func_4787850608(unsigned depth);
void func_4787852080(unsigned depth);
void func_4787852208(unsigned depth);
void func_4787852336(unsigned depth);
void func_4787852496(unsigned depth);
void func_4787852624(unsigned depth);
void func_4787852816(unsigned depth);
void func_4787852944(unsigned depth);
void func_4787853072(unsigned depth);
void func_4787853200(unsigned depth);
void func_4787852752(unsigned depth);
void func_4787853520(unsigned depth);
void func_4787853648(unsigned depth);
void func_4787853776(unsigned depth);
void func_4787853904(unsigned depth);
void func_4787854032(unsigned depth);
void func_4787854160(unsigned depth);
void func_4787854288(unsigned depth);
void func_4787853328(unsigned depth);
void func_4787854672(unsigned depth);
void func_4787854800(unsigned depth);
void func_4787854928(unsigned depth);
void func_4787855056(unsigned depth);
void func_4787855184(unsigned depth);
void func_4787849328(unsigned depth);
void func_4787849456(unsigned depth);
void func_4787849584(unsigned depth);
void func_4787849712(unsigned depth);
void func_4787855312(unsigned depth);
void func_4787855440(unsigned depth);
void func_4787855568(unsigned depth);
void func_4787855696(unsigned depth);
void func_4787855824(unsigned depth);
void func_4787855952(unsigned depth);
void func_4787854416(unsigned depth);
void func_4787854544(unsigned depth);
void func_4787856592(unsigned depth);
void func_4787856720(unsigned depth);
void func_4787856848(unsigned depth);
void func_4787856976(unsigned depth);
void func_4787857104(unsigned depth);
void func_4787857232(unsigned depth);
void func_4787857360(unsigned depth);
void func_4787857488(unsigned depth);
void func_4787857616(unsigned depth);
void func_4787857744(unsigned depth);
void func_4787857872(unsigned depth);
void func_4787858000(unsigned depth);
void func_4787858128(unsigned depth);
void func_4787858256(unsigned depth);
void func_4787858384(unsigned depth);
void func_4787858512(unsigned depth);
void func_4787858640(unsigned depth);
void func_4787851168(unsigned depth);
void func_4787851328(unsigned depth);
void func_4787851456(unsigned depth);
void func_4787851648(unsigned depth);
void func_4787851776(unsigned depth);
void func_4787851584(unsigned depth);
void func_4787858832(unsigned depth);
void func_4787858960(unsigned depth);
void func_4787859088(unsigned depth);
void func_4787850736(unsigned depth);
void func_4787850864(unsigned depth);
void func_4787848560(unsigned depth);
void func_4787859216(unsigned depth);
void func_4787859344(unsigned depth);
void func_4787859472(unsigned depth);
void func_4787848480(unsigned depth);
void func_4787859600(unsigned depth);
void func_4787860256(unsigned depth);
void func_4787860400(unsigned depth);
void func_4787860560(unsigned depth);
void func_4787860688(unsigned depth);
void func_4787860880(unsigned depth);
void func_4787861008(unsigned depth);
void func_4787861136(unsigned depth);
void func_4787861264(unsigned depth);
void func_4787860816(unsigned depth);
void func_4787861584(unsigned depth);
void func_4787859888(unsigned depth);
void func_4787827776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787847520(depth+1);
        break;
        case 1:
            func_4787846880(depth+1);
        break;
    }
    return;
}
void func_4787844288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787847440(depth+1);
        break;
    }
    return;
}
void func_4787844496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4787847184(depth+1);
        break;
        case 1:
            func_4787845872(depth+1);
        break;
        case 2:
            func_4787845488(depth+1);
        break;
    }
    return;
}
void func_4787844704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787845744(depth+1);
        break;
        case 1:
            func_4787847712(depth+1);
        break;
    }
    return;
}
void func_4787844160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787848160(depth+1);
        break;
    }
    return;
}
void func_4787845360(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4787848656(depth+1);
        break;
        case 1:
            func_4787848784(depth+1);
        break;
        case 2:
            func_4787848912(depth+1);
        break;
        case 3:
            func_4787849072(depth+1);
        break;
        case 4:
            func_4787849200(depth+1);
        break;
        case 5:
            func_4787846560(depth+1);
        break;
        case 6:
            func_4787849776(depth+1);
        break;
        case 7:
            func_4787849904(depth+1);
        break;
        case 8:
            func_4787850032(depth+1);
        break;
        case 9:
            func_4787846496(depth+1);
        break;
    }
    return;
}
void func_4787845488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4787845040(depth+1);
        break;
        case 1:
            func_4787844288(depth+1);
        break;
        case 2:
            func_4787845264(depth+1);
        break;
        case 3:
            func_4787844704(depth+1);
        break;
        case 4:
            func_4787846752(depth+1);
        break;
    }
    return;
}
void func_4787845264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787848352(depth+1);
        break;
    }
    return;
}
void func_4787845040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787850352(depth+1);
        break;
    }
    return;
}
void func_4787847056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4787852080(depth+1);
        break;
        case 1:
            func_4787852208(depth+1);
        break;
        case 2:
            func_4787852336(depth+1);
        break;
        case 3:
            func_4787852496(depth+1);
        break;
        case 4:
            func_4787852624(depth+1);
        break;
        case 5:
            func_4787852816(depth+1);
        break;
        case 6:
            func_4787852944(depth+1);
        break;
        case 7:
            func_4787853072(depth+1);
        break;
        case 8:
            func_4787853200(depth+1);
        break;
        case 9:
            func_4787852752(depth+1);
        break;
        case 10:
            func_4787853520(depth+1);
        break;
        case 11:
            func_4787853648(depth+1);
        break;
        case 12:
            func_4787853776(depth+1);
        break;
        case 13:
            func_4787853904(depth+1);
        break;
        case 14:
            func_4787854032(depth+1);
        break;
        case 15:
            func_4787854160(depth+1);
        break;
        case 16:
            func_4787854288(depth+1);
        break;
        case 17:
            func_4787853328(depth+1);
        break;
        case 18:
            func_4787854672(depth+1);
        break;
        case 19:
            func_4787854800(depth+1);
        break;
        case 20:
            func_4787854928(depth+1);
        break;
        case 21:
            func_4787855056(depth+1);
        break;
        case 22:
            func_4787855184(depth+1);
        break;
        case 23:
            func_4787849328(depth+1);
        break;
        case 24:
            func_4787849456(depth+1);
        break;
        case 25:
            func_4787849584(depth+1);
        break;
        case 26:
            func_4787849712(depth+1);
        break;
        case 27:
            func_4787855312(depth+1);
        break;
        case 28:
            func_4787855440(depth+1);
        break;
        case 29:
            func_4787855568(depth+1);
        break;
        case 30:
            func_4787855696(depth+1);
        break;
        case 31:
            func_4787855824(depth+1);
        break;
        case 32:
            func_4787855952(depth+1);
        break;
        case 33:
            func_4787854416(depth+1);
        break;
        case 34:
            func_4787854544(depth+1);
        break;
        case 35:
            func_4787856592(depth+1);
        break;
        case 36:
            func_4787856720(depth+1);
        break;
        case 37:
            func_4787856848(depth+1);
        break;
        case 38:
            func_4787856976(depth+1);
        break;
        case 39:
            func_4787857104(depth+1);
        break;
        case 40:
            func_4787857232(depth+1);
        break;
        case 41:
            func_4787857360(depth+1);
        break;
        case 42:
            func_4787857488(depth+1);
        break;
        case 43:
            func_4787857616(depth+1);
        break;
        case 44:
            func_4787857744(depth+1);
        break;
        case 45:
            func_4787857872(depth+1);
        break;
        case 46:
            func_4787858000(depth+1);
        break;
        case 47:
            func_4787858128(depth+1);
        break;
        case 48:
            func_4787858256(depth+1);
        break;
        case 49:
            func_4787858384(depth+1);
        break;
        case 50:
            func_4787858512(depth+1);
        break;
        case 51:
            func_4787858640(depth+1);
        break;
    }
    return;
}
void func_4787846176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_4787848032(depth+1);
        break;
        case 1:
            func_4787847440(depth+1);
        break;
        case 2:
            func_4787851168(depth+1);
        break;
        case 3:
            func_4787851328(depth+1);
        break;
        case 4:
            func_4787851456(depth+1);
        break;
        case 5:
            func_4787851648(depth+1);
        break;
        case 6:
            func_4787848352(depth+1);
        break;
        case 7:
            func_4787851776(depth+1);
        break;
        case 8:
            func_4787850480(depth+1);
        break;
        case 9:
            func_4787850608(depth+1);
        break;
        case 10:
            func_4787851584(depth+1);
        break;
        case 11:
            func_4787858832(depth+1);
        break;
        case 12:
            func_4787858960(depth+1);
        break;
        case 13:
            func_4787859088(depth+1);
        break;
    }
    return;
}
void func_4787845616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787850736(depth+1);
        break;
    }
    return;
}
void func_4787845744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4787847056(depth+1);
        break;
        case 1:
            func_4787845360(depth+1);
        break;
        case 2:
            func_4787847840(depth+1);
        break;
    }
    return;
}
void func_4787845872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787848560(depth+1);
        break;
    }
    return;
}
void func_4787846000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787859216(depth+1);
        break;
    }
    return;
}
void func_4787846304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787859344(depth+1);
        break;
    }
    return;
}
void func_4787844960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787846304(depth+1);
        break;
        case 1:
            func_4787844704(depth+1);
        break;
    }
    return;
}
void func_4787845104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787844960(depth+1);
        break;
        case 1:
            func_4787848480(depth+1);
        break;
    }
    return;
}
void func_4787846752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787846000(depth+1);
        break;
        case 1:
            func_4787845616(depth+1);
        break;
    }
    return;
}
void func_4787846880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4787844160(depth+1);
        break;
        case 1:
            func_4787844496(depth+1);
        break;
    }
    return;
}
void func_4787847184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787859600(depth+1);
        break;
    }
    return;
}
void func_4787847312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787827776(depth+1);
        break;
    }
    return;
}
void func_4787847840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_4787860256(depth+1);
        break;
        case 1:
            func_4787859472(depth+1);
        break;
        case 2:
            func_4787860400(depth+1);
        break;
        case 3:
            func_4787860560(depth+1);
        break;
        case 4:
            func_4787860688(depth+1);
        break;
        case 5:
            func_4787860880(depth+1);
        break;
        case 6:
            func_4787861008(depth+1);
        break;
        case 7:
            func_4787861136(depth+1);
        break;
        case 8:
            func_4787861264(depth+1);
        break;
        case 9:
            func_4787860816(depth+1);
        break;
        case 10:
            func_4787861584(depth+1);
        break;
    }
    return;
}
void func_4787847520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4787859888(depth+1);
        break;
    }
    return;
}
void func_4787847440(unsigned depth) {
    extend(46);
    return;
}
void func_4787847712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_4787848032(depth+1);
    func_4787846176(depth+1);
    return;
}
void func_4787848032(unsigned depth) {
    extend(92);
    return;
}
void func_4787848160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_4787846880(depth+1);
    func_4787844496(depth+1);
    return;
}
void func_4787848656(unsigned depth) {
    extend(48);
    return;
}
void func_4787848784(unsigned depth) {
    extend(49);
    return;
}
void func_4787848912(unsigned depth) {
    extend(50);
    return;
}
void func_4787849072(unsigned depth) {
    extend(51);
    return;
}
void func_4787849200(unsigned depth) {
    extend(52);
    return;
}
void func_4787846560(unsigned depth) {
    extend(53);
    return;
}
void func_4787849776(unsigned depth) {
    extend(54);
    return;
}
void func_4787849904(unsigned depth) {
    extend(55);
    return;
}
void func_4787850032(unsigned depth) {
    extend(56);
    return;
}
void func_4787846496(unsigned depth) {
    extend(57);
    return;
}
void func_4787848352(unsigned depth) {
    extend(36);
    return;
}
void func_4787850352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_4787850480(depth+1);
    func_4787827776(depth+1);
    func_4787850608(depth+1);
    return;
}
void func_4787850480(unsigned depth) {
    extend(40);
    return;
}
void func_4787850608(unsigned depth) {
    extend(41);
    return;
}
void func_4787852080(unsigned depth) {
    extend(97);
    return;
}
void func_4787852208(unsigned depth) {
    extend(98);
    return;
}
void func_4787852336(unsigned depth) {
    extend(99);
    return;
}
void func_4787852496(unsigned depth) {
    extend(100);
    return;
}
void func_4787852624(unsigned depth) {
    extend(101);
    return;
}
void func_4787852816(unsigned depth) {
    extend(102);
    return;
}
void func_4787852944(unsigned depth) {
    extend(103);
    return;
}
void func_4787853072(unsigned depth) {
    extend(104);
    return;
}
void func_4787853200(unsigned depth) {
    extend(105);
    return;
}
void func_4787852752(unsigned depth) {
    extend(106);
    return;
}
void func_4787853520(unsigned depth) {
    extend(107);
    return;
}
void func_4787853648(unsigned depth) {
    extend(108);
    return;
}
void func_4787853776(unsigned depth) {
    extend(109);
    return;
}
void func_4787853904(unsigned depth) {
    extend(110);
    return;
}
void func_4787854032(unsigned depth) {
    extend(111);
    return;
}
void func_4787854160(unsigned depth) {
    extend(112);
    return;
}
void func_4787854288(unsigned depth) {
    extend(113);
    return;
}
void func_4787853328(unsigned depth) {
    extend(114);
    return;
}
void func_4787854672(unsigned depth) {
    extend(115);
    return;
}
void func_4787854800(unsigned depth) {
    extend(116);
    return;
}
void func_4787854928(unsigned depth) {
    extend(117);
    return;
}
void func_4787855056(unsigned depth) {
    extend(118);
    return;
}
void func_4787855184(unsigned depth) {
    extend(119);
    return;
}
void func_4787849328(unsigned depth) {
    extend(120);
    return;
}
void func_4787849456(unsigned depth) {
    extend(121);
    return;
}
void func_4787849584(unsigned depth) {
    extend(122);
    return;
}
void func_4787849712(unsigned depth) {
    extend(65);
    return;
}
void func_4787855312(unsigned depth) {
    extend(66);
    return;
}
void func_4787855440(unsigned depth) {
    extend(67);
    return;
}
void func_4787855568(unsigned depth) {
    extend(68);
    return;
}
void func_4787855696(unsigned depth) {
    extend(69);
    return;
}
void func_4787855824(unsigned depth) {
    extend(70);
    return;
}
void func_4787855952(unsigned depth) {
    extend(71);
    return;
}
void func_4787854416(unsigned depth) {
    extend(72);
    return;
}
void func_4787854544(unsigned depth) {
    extend(73);
    return;
}
void func_4787856592(unsigned depth) {
    extend(74);
    return;
}
void func_4787856720(unsigned depth) {
    extend(75);
    return;
}
void func_4787856848(unsigned depth) {
    extend(76);
    return;
}
void func_4787856976(unsigned depth) {
    extend(77);
    return;
}
void func_4787857104(unsigned depth) {
    extend(78);
    return;
}
void func_4787857232(unsigned depth) {
    extend(79);
    return;
}
void func_4787857360(unsigned depth) {
    extend(80);
    return;
}
void func_4787857488(unsigned depth) {
    extend(81);
    return;
}
void func_4787857616(unsigned depth) {
    extend(82);
    return;
}
void func_4787857744(unsigned depth) {
    extend(83);
    return;
}
void func_4787857872(unsigned depth) {
    extend(84);
    return;
}
void func_4787858000(unsigned depth) {
    extend(85);
    return;
}
void func_4787858128(unsigned depth) {
    extend(86);
    return;
}
void func_4787858256(unsigned depth) {
    extend(87);
    return;
}
void func_4787858384(unsigned depth) {
    extend(88);
    return;
}
void func_4787858512(unsigned depth) {
    extend(89);
    return;
}
void func_4787858640(unsigned depth) {
    extend(90);
    return;
}
void func_4787851168(unsigned depth) {
    extend(42);
    return;
}
void func_4787851328(unsigned depth) {
    extend(43);
    return;
}
void func_4787851456(unsigned depth) {
    extend(63);
    return;
}
void func_4787851648(unsigned depth) {
    extend(94);
    return;
}
void func_4787851776(unsigned depth) {
    extend(124);
    return;
}
void func_4787851584(unsigned depth) {
    extend(91);
    return;
}
void func_4787858832(unsigned depth) {
    extend(93);
    return;
}
void func_4787858960(unsigned depth) {
    extend(123);
    return;
}
void func_4787859088(unsigned depth) {
    extend(125);
    return;
}
void func_4787850736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4787850864(depth+1);
    func_4787845104(depth+1);
    func_4787858832(depth+1);
    return;
}
void func_4787850864(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_4787848560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_4787845488(depth+1);
    func_4787851328(depth+1);
    return;
}
void func_4787859216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4787851584(depth+1);
    func_4787845104(depth+1);
    func_4787858832(depth+1);
    return;
}
void func_4787859344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_4787844704(depth+1);
    func_4787859472(depth+1);
    func_4787844704(depth+1);
    return;
}
void func_4787859472(unsigned depth) {
    extend(45);
    return;
}
void func_4787848480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_4787844960(depth+1);
    func_4787845104(depth+1);
    return;
}
void func_4787859600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_4787845488(depth+1);
    func_4787851168(depth+1);
    return;
}
void func_4787860256(unsigned depth) {
    extend(95);
    return;
}
void func_4787860400(unsigned depth) {
    extend(64);
    return;
}
void func_4787860560(unsigned depth) {
    extend(35);
    return;
}
void func_4787860688(unsigned depth) {
    extend(37);
    return;
}
void func_4787860880(unsigned depth) {
    extend(38);
    return;
}
void func_4787861008(unsigned depth) {
    extend(61);
    return;
}
void func_4787861136(unsigned depth) {
    extend(126);
    return;
}
void func_4787861264(unsigned depth) {
    extend(96);
    return;
}
void func_4787860816(unsigned depth) {
    extend(39);
    return;
}
void func_4787861584(unsigned depth) {
    extend(34);
    return;
}
void func_4787859888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_4787827776(depth+1);
    func_4787851776(depth+1);
    func_4787846880(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_4787847312(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
