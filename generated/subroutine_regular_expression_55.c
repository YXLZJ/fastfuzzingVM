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

void func_5433750592(unsigned depth);
void func_5433767104(unsigned depth);
void func_5433767312(unsigned depth);
void func_5433767520(unsigned depth);
void func_5433766976(unsigned depth);
void func_5433768176(unsigned depth);
void func_5433768304(unsigned depth);
void func_5433768080(unsigned depth);
void func_5433767856(unsigned depth);
void func_5433769872(unsigned depth);
void func_5433768992(unsigned depth);
void func_5433768432(unsigned depth);
void func_5433768560(unsigned depth);
void func_5433768688(unsigned depth);
void func_5433768816(unsigned depth);
void func_5433769120(unsigned depth);
void func_5433767776(unsigned depth);
void func_5433767920(unsigned depth);
void func_5433769568(unsigned depth);
void func_5433769696(unsigned depth);
void func_5433770000(unsigned depth);
void func_5433770128(unsigned depth);
void func_5433770656(unsigned depth);
void func_5433770336(unsigned depth);
void func_5433770256(unsigned depth);
void func_5433770528(unsigned depth);
void func_5433770848(unsigned depth);
void func_5433770976(unsigned depth);
void func_5433771472(unsigned depth);
void func_5433771600(unsigned depth);
void func_5433771728(unsigned depth);
void func_5433771888(unsigned depth);
void func_5433772016(unsigned depth);
void func_5433769376(unsigned depth);
void func_5433772592(unsigned depth);
void func_5433772720(unsigned depth);
void func_5433772848(unsigned depth);
void func_5433769312(unsigned depth);
void func_5433771168(unsigned depth);
void func_5433773168(unsigned depth);
void func_5433773296(unsigned depth);
void func_5433773424(unsigned depth);
void func_5433774896(unsigned depth);
void func_5433775024(unsigned depth);
void func_5433775152(unsigned depth);
void func_5433775312(unsigned depth);
void func_5433775440(unsigned depth);
void func_5433775632(unsigned depth);
void func_5433775760(unsigned depth);
void func_5433775888(unsigned depth);
void func_5433776016(unsigned depth);
void func_5433775568(unsigned depth);
void func_5433776336(unsigned depth);
void func_5433776464(unsigned depth);
void func_5433776592(unsigned depth);
void func_5433776720(unsigned depth);
void func_5433776848(unsigned depth);
void func_5433776976(unsigned depth);
void func_5433777104(unsigned depth);
void func_5433776144(unsigned depth);
void func_5433777488(unsigned depth);
void func_5433777616(unsigned depth);
void func_5433777744(unsigned depth);
void func_5433777872(unsigned depth);
void func_5433778000(unsigned depth);
void func_5433772144(unsigned depth);
void func_5433772272(unsigned depth);
void func_5433772400(unsigned depth);
void func_5433772528(unsigned depth);
void func_5433778128(unsigned depth);
void func_5433778256(unsigned depth);
void func_5433778384(unsigned depth);
void func_5433778512(unsigned depth);
void func_5433778640(unsigned depth);
void func_5433778768(unsigned depth);
void func_5433777232(unsigned depth);
void func_5433777360(unsigned depth);
void func_5433779408(unsigned depth);
void func_5433779536(unsigned depth);
void func_5433779664(unsigned depth);
void func_5433779792(unsigned depth);
void func_5433779920(unsigned depth);
void func_5433780048(unsigned depth);
void func_5433780176(unsigned depth);
void func_5433780304(unsigned depth);
void func_5433780432(unsigned depth);
void func_5433780560(unsigned depth);
void func_5433780688(unsigned depth);
void func_5433780816(unsigned depth);
void func_5433780944(unsigned depth);
void func_5433781072(unsigned depth);
void func_5433781200(unsigned depth);
void func_5433781328(unsigned depth);
void func_5433781456(unsigned depth);
void func_5433773984(unsigned depth);
void func_5433774144(unsigned depth);
void func_5433774272(unsigned depth);
void func_5433774464(unsigned depth);
void func_5433774592(unsigned depth);
void func_5433774400(unsigned depth);
void func_5433781648(unsigned depth);
void func_5433781776(unsigned depth);
void func_5433781904(unsigned depth);
void func_5433773552(unsigned depth);
void func_5433773680(unsigned depth);
void func_5433771376(unsigned depth);
void func_5433782032(unsigned depth);
void func_5433782160(unsigned depth);
void func_5433782288(unsigned depth);
void func_5433771296(unsigned depth);
void func_5433782416(unsigned depth);
void func_5433783072(unsigned depth);
void func_5433783216(unsigned depth);
void func_5433783376(unsigned depth);
void func_5433783504(unsigned depth);
void func_5433783696(unsigned depth);
void func_5433783824(unsigned depth);
void func_5433783952(unsigned depth);
void func_5433784080(unsigned depth);
void func_5433783632(unsigned depth);
void func_5433784400(unsigned depth);
void func_5433782704(unsigned depth);
void func_5433750592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5433770336(depth+1);
        break;
        case 1:
            func_5433769696(depth+1);
        break;
    }
    return;
}
void func_5433767104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433770256(depth+1);
        break;
    }
    return;
}
void func_5433767312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5433770000(depth+1);
        break;
        case 1:
            func_5433768688(depth+1);
        break;
        case 2:
            func_5433768304(depth+1);
        break;
    }
    return;
}
void func_5433767520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5433768560(depth+1);
        break;
        case 1:
            func_5433770528(depth+1);
        break;
    }
    return;
}
void func_5433766976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433770976(depth+1);
        break;
    }
    return;
}
void func_5433768176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5433771472(depth+1);
        break;
        case 1:
            func_5433771600(depth+1);
        break;
        case 2:
            func_5433771728(depth+1);
        break;
        case 3:
            func_5433771888(depth+1);
        break;
        case 4:
            func_5433772016(depth+1);
        break;
        case 5:
            func_5433769376(depth+1);
        break;
        case 6:
            func_5433772592(depth+1);
        break;
        case 7:
            func_5433772720(depth+1);
        break;
        case 8:
            func_5433772848(depth+1);
        break;
        case 9:
            func_5433769312(depth+1);
        break;
    }
    return;
}
void func_5433768304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5433767856(depth+1);
        break;
        case 1:
            func_5433767104(depth+1);
        break;
        case 2:
            func_5433768080(depth+1);
        break;
        case 3:
            func_5433767520(depth+1);
        break;
        case 4:
            func_5433769568(depth+1);
        break;
    }
    return;
}
void func_5433768080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433771168(depth+1);
        break;
    }
    return;
}
void func_5433767856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433773168(depth+1);
        break;
    }
    return;
}
void func_5433769872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5433774896(depth+1);
        break;
        case 1:
            func_5433775024(depth+1);
        break;
        case 2:
            func_5433775152(depth+1);
        break;
        case 3:
            func_5433775312(depth+1);
        break;
        case 4:
            func_5433775440(depth+1);
        break;
        case 5:
            func_5433775632(depth+1);
        break;
        case 6:
            func_5433775760(depth+1);
        break;
        case 7:
            func_5433775888(depth+1);
        break;
        case 8:
            func_5433776016(depth+1);
        break;
        case 9:
            func_5433775568(depth+1);
        break;
        case 10:
            func_5433776336(depth+1);
        break;
        case 11:
            func_5433776464(depth+1);
        break;
        case 12:
            func_5433776592(depth+1);
        break;
        case 13:
            func_5433776720(depth+1);
        break;
        case 14:
            func_5433776848(depth+1);
        break;
        case 15:
            func_5433776976(depth+1);
        break;
        case 16:
            func_5433777104(depth+1);
        break;
        case 17:
            func_5433776144(depth+1);
        break;
        case 18:
            func_5433777488(depth+1);
        break;
        case 19:
            func_5433777616(depth+1);
        break;
        case 20:
            func_5433777744(depth+1);
        break;
        case 21:
            func_5433777872(depth+1);
        break;
        case 22:
            func_5433778000(depth+1);
        break;
        case 23:
            func_5433772144(depth+1);
        break;
        case 24:
            func_5433772272(depth+1);
        break;
        case 25:
            func_5433772400(depth+1);
        break;
        case 26:
            func_5433772528(depth+1);
        break;
        case 27:
            func_5433778128(depth+1);
        break;
        case 28:
            func_5433778256(depth+1);
        break;
        case 29:
            func_5433778384(depth+1);
        break;
        case 30:
            func_5433778512(depth+1);
        break;
        case 31:
            func_5433778640(depth+1);
        break;
        case 32:
            func_5433778768(depth+1);
        break;
        case 33:
            func_5433777232(depth+1);
        break;
        case 34:
            func_5433777360(depth+1);
        break;
        case 35:
            func_5433779408(depth+1);
        break;
        case 36:
            func_5433779536(depth+1);
        break;
        case 37:
            func_5433779664(depth+1);
        break;
        case 38:
            func_5433779792(depth+1);
        break;
        case 39:
            func_5433779920(depth+1);
        break;
        case 40:
            func_5433780048(depth+1);
        break;
        case 41:
            func_5433780176(depth+1);
        break;
        case 42:
            func_5433780304(depth+1);
        break;
        case 43:
            func_5433780432(depth+1);
        break;
        case 44:
            func_5433780560(depth+1);
        break;
        case 45:
            func_5433780688(depth+1);
        break;
        case 46:
            func_5433780816(depth+1);
        break;
        case 47:
            func_5433780944(depth+1);
        break;
        case 48:
            func_5433781072(depth+1);
        break;
        case 49:
            func_5433781200(depth+1);
        break;
        case 50:
            func_5433781328(depth+1);
        break;
        case 51:
            func_5433781456(depth+1);
        break;
    }
    return;
}
void func_5433768992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5433770848(depth+1);
        break;
        case 1:
            func_5433770256(depth+1);
        break;
        case 2:
            func_5433773984(depth+1);
        break;
        case 3:
            func_5433774144(depth+1);
        break;
        case 4:
            func_5433774272(depth+1);
        break;
        case 5:
            func_5433774464(depth+1);
        break;
        case 6:
            func_5433771168(depth+1);
        break;
        case 7:
            func_5433774592(depth+1);
        break;
        case 8:
            func_5433773296(depth+1);
        break;
        case 9:
            func_5433773424(depth+1);
        break;
        case 10:
            func_5433774400(depth+1);
        break;
        case 11:
            func_5433781648(depth+1);
        break;
        case 12:
            func_5433781776(depth+1);
        break;
        case 13:
            func_5433781904(depth+1);
        break;
    }
    return;
}
void func_5433768432(unsigned depth) {
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
            func_5433773552(depth+1);
        break;
    }
    return;
}
void func_5433768560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5433769872(depth+1);
        break;
        case 1:
            func_5433768176(depth+1);
        break;
        case 2:
            func_5433770656(depth+1);
        break;
    }
    return;
}
void func_5433768688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433771376(depth+1);
        break;
    }
    return;
}
void func_5433768816(unsigned depth) {
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
            func_5433782032(depth+1);
        break;
    }
    return;
}
void func_5433769120(unsigned depth) {
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
            func_5433782160(depth+1);
        break;
    }
    return;
}
void func_5433767776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5433769120(depth+1);
        break;
        case 1:
            func_5433767520(depth+1);
        break;
    }
    return;
}
void func_5433767920(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5433767776(depth+1);
        break;
        case 1:
            func_5433771296(depth+1);
        break;
    }
    return;
}
void func_5433769568(unsigned depth) {
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
            func_5433768816(depth+1);
        break;
        case 1:
            func_5433768432(depth+1);
        break;
    }
    return;
}
void func_5433769696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5433766976(depth+1);
        break;
        case 1:
            func_5433767312(depth+1);
        break;
    }
    return;
}
void func_5433770000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433782416(depth+1);
        break;
    }
    return;
}
void func_5433770128(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433750592(depth+1);
        break;
    }
    return;
}
void func_5433770656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5433783072(depth+1);
        break;
        case 1:
            func_5433782288(depth+1);
        break;
        case 2:
            func_5433783216(depth+1);
        break;
        case 3:
            func_5433783376(depth+1);
        break;
        case 4:
            func_5433783504(depth+1);
        break;
        case 5:
            func_5433783696(depth+1);
        break;
        case 6:
            func_5433783824(depth+1);
        break;
        case 7:
            func_5433783952(depth+1);
        break;
        case 8:
            func_5433784080(depth+1);
        break;
        case 9:
            func_5433783632(depth+1);
        break;
        case 10:
            func_5433784400(depth+1);
        break;
    }
    return;
}
void func_5433770336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5433782704(depth+1);
        break;
    }
    return;
}
void func_5433770256(unsigned depth) {
    extend(46);
    return;
}
void func_5433770528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5433770848(depth+1);
    func_5433768992(depth+1);
    return;
}
void func_5433770848(unsigned depth) {
    extend(92);
    return;
}
void func_5433770976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5433769696(depth+1);
    func_5433767312(depth+1);
    return;
}
void func_5433771472(unsigned depth) {
    extend(48);
    return;
}
void func_5433771600(unsigned depth) {
    extend(49);
    return;
}
void func_5433771728(unsigned depth) {
    extend(50);
    return;
}
void func_5433771888(unsigned depth) {
    extend(51);
    return;
}
void func_5433772016(unsigned depth) {
    extend(52);
    return;
}
void func_5433769376(unsigned depth) {
    extend(53);
    return;
}
void func_5433772592(unsigned depth) {
    extend(54);
    return;
}
void func_5433772720(unsigned depth) {
    extend(55);
    return;
}
void func_5433772848(unsigned depth) {
    extend(56);
    return;
}
void func_5433769312(unsigned depth) {
    extend(57);
    return;
}
void func_5433771168(unsigned depth) {
    extend(36);
    return;
}
void func_5433773168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5433773296(depth+1);
    func_5433750592(depth+1);
    func_5433773424(depth+1);
    return;
}
void func_5433773296(unsigned depth) {
    extend(40);
    return;
}
void func_5433773424(unsigned depth) {
    extend(41);
    return;
}
void func_5433774896(unsigned depth) {
    extend(97);
    return;
}
void func_5433775024(unsigned depth) {
    extend(98);
    return;
}
void func_5433775152(unsigned depth) {
    extend(99);
    return;
}
void func_5433775312(unsigned depth) {
    extend(100);
    return;
}
void func_5433775440(unsigned depth) {
    extend(101);
    return;
}
void func_5433775632(unsigned depth) {
    extend(102);
    return;
}
void func_5433775760(unsigned depth) {
    extend(103);
    return;
}
void func_5433775888(unsigned depth) {
    extend(104);
    return;
}
void func_5433776016(unsigned depth) {
    extend(105);
    return;
}
void func_5433775568(unsigned depth) {
    extend(106);
    return;
}
void func_5433776336(unsigned depth) {
    extend(107);
    return;
}
void func_5433776464(unsigned depth) {
    extend(108);
    return;
}
void func_5433776592(unsigned depth) {
    extend(109);
    return;
}
void func_5433776720(unsigned depth) {
    extend(110);
    return;
}
void func_5433776848(unsigned depth) {
    extend(111);
    return;
}
void func_5433776976(unsigned depth) {
    extend(112);
    return;
}
void func_5433777104(unsigned depth) {
    extend(113);
    return;
}
void func_5433776144(unsigned depth) {
    extend(114);
    return;
}
void func_5433777488(unsigned depth) {
    extend(115);
    return;
}
void func_5433777616(unsigned depth) {
    extend(116);
    return;
}
void func_5433777744(unsigned depth) {
    extend(117);
    return;
}
void func_5433777872(unsigned depth) {
    extend(118);
    return;
}
void func_5433778000(unsigned depth) {
    extend(119);
    return;
}
void func_5433772144(unsigned depth) {
    extend(120);
    return;
}
void func_5433772272(unsigned depth) {
    extend(121);
    return;
}
void func_5433772400(unsigned depth) {
    extend(122);
    return;
}
void func_5433772528(unsigned depth) {
    extend(65);
    return;
}
void func_5433778128(unsigned depth) {
    extend(66);
    return;
}
void func_5433778256(unsigned depth) {
    extend(67);
    return;
}
void func_5433778384(unsigned depth) {
    extend(68);
    return;
}
void func_5433778512(unsigned depth) {
    extend(69);
    return;
}
void func_5433778640(unsigned depth) {
    extend(70);
    return;
}
void func_5433778768(unsigned depth) {
    extend(71);
    return;
}
void func_5433777232(unsigned depth) {
    extend(72);
    return;
}
void func_5433777360(unsigned depth) {
    extend(73);
    return;
}
void func_5433779408(unsigned depth) {
    extend(74);
    return;
}
void func_5433779536(unsigned depth) {
    extend(75);
    return;
}
void func_5433779664(unsigned depth) {
    extend(76);
    return;
}
void func_5433779792(unsigned depth) {
    extend(77);
    return;
}
void func_5433779920(unsigned depth) {
    extend(78);
    return;
}
void func_5433780048(unsigned depth) {
    extend(79);
    return;
}
void func_5433780176(unsigned depth) {
    extend(80);
    return;
}
void func_5433780304(unsigned depth) {
    extend(81);
    return;
}
void func_5433780432(unsigned depth) {
    extend(82);
    return;
}
void func_5433780560(unsigned depth) {
    extend(83);
    return;
}
void func_5433780688(unsigned depth) {
    extend(84);
    return;
}
void func_5433780816(unsigned depth) {
    extend(85);
    return;
}
void func_5433780944(unsigned depth) {
    extend(86);
    return;
}
void func_5433781072(unsigned depth) {
    extend(87);
    return;
}
void func_5433781200(unsigned depth) {
    extend(88);
    return;
}
void func_5433781328(unsigned depth) {
    extend(89);
    return;
}
void func_5433781456(unsigned depth) {
    extend(90);
    return;
}
void func_5433773984(unsigned depth) {
    extend(42);
    return;
}
void func_5433774144(unsigned depth) {
    extend(43);
    return;
}
void func_5433774272(unsigned depth) {
    extend(63);
    return;
}
void func_5433774464(unsigned depth) {
    extend(94);
    return;
}
void func_5433774592(unsigned depth) {
    extend(124);
    return;
}
void func_5433774400(unsigned depth) {
    extend(91);
    return;
}
void func_5433781648(unsigned depth) {
    extend(93);
    return;
}
void func_5433781776(unsigned depth) {
    extend(123);
    return;
}
void func_5433781904(unsigned depth) {
    extend(125);
    return;
}
void func_5433773552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5433773680(depth+1);
    func_5433767920(depth+1);
    func_5433781648(depth+1);
    return;
}
void func_5433773680(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5433771376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5433768304(depth+1);
    func_5433774144(depth+1);
    return;
}
void func_5433782032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5433774400(depth+1);
    func_5433767920(depth+1);
    func_5433781648(depth+1);
    return;
}
void func_5433782160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5433767520(depth+1);
    func_5433782288(depth+1);
    func_5433767520(depth+1);
    return;
}
void func_5433782288(unsigned depth) {
    extend(45);
    return;
}
void func_5433771296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5433767776(depth+1);
    func_5433767920(depth+1);
    return;
}
void func_5433782416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5433768304(depth+1);
    func_5433773984(depth+1);
    return;
}
void func_5433783072(unsigned depth) {
    extend(95);
    return;
}
void func_5433783216(unsigned depth) {
    extend(64);
    return;
}
void func_5433783376(unsigned depth) {
    extend(35);
    return;
}
void func_5433783504(unsigned depth) {
    extend(37);
    return;
}
void func_5433783696(unsigned depth) {
    extend(38);
    return;
}
void func_5433783824(unsigned depth) {
    extend(61);
    return;
}
void func_5433783952(unsigned depth) {
    extend(126);
    return;
}
void func_5433784080(unsigned depth) {
    extend(96);
    return;
}
void func_5433783632(unsigned depth) {
    extend(39);
    return;
}
void func_5433784400(unsigned depth) {
    extend(34);
    return;
}
void func_5433782704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5433750592(depth+1);
    func_5433774592(depth+1);
    func_5433769696(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5433770128(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
