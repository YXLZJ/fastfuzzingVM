#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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

void func_5056263232(unsigned depth);
void func_5056279744(unsigned depth);
void func_5056279952(unsigned depth);
void func_5056280160(unsigned depth);
void func_5056279616(unsigned depth);
void func_5056280816(unsigned depth);
void func_5056280944(unsigned depth);
void func_5056280720(unsigned depth);
void func_5056280496(unsigned depth);
void func_5056282512(unsigned depth);
void func_5056281632(unsigned depth);
void func_5056281072(unsigned depth);
void func_5056281200(unsigned depth);
void func_5056281328(unsigned depth);
void func_5056281456(unsigned depth);
void func_5056281760(unsigned depth);
void func_5056280416(unsigned depth);
void func_5056280560(unsigned depth);
void func_5056282208(unsigned depth);
void func_5056282336(unsigned depth);
void func_5056282640(unsigned depth);
void func_5056282768(unsigned depth);
void func_5056283296(unsigned depth);
void func_5056282976(unsigned depth);
void func_5056282896(unsigned depth);
void func_5056283168(unsigned depth);
void func_5056283488(unsigned depth);
void func_5056283616(unsigned depth);
void func_5056284112(unsigned depth);
void func_5056284240(unsigned depth);
void func_5056284368(unsigned depth);
void func_5056284528(unsigned depth);
void func_5056284656(unsigned depth);
void func_5056282016(unsigned depth);
void func_5056285232(unsigned depth);
void func_5056285360(unsigned depth);
void func_5056285488(unsigned depth);
void func_5056281952(unsigned depth);
void func_5056283808(unsigned depth);
void func_5056285808(unsigned depth);
void func_5056285936(unsigned depth);
void func_5056286064(unsigned depth);
void func_5056287536(unsigned depth);
void func_5056287664(unsigned depth);
void func_5056287792(unsigned depth);
void func_5056287952(unsigned depth);
void func_5056288080(unsigned depth);
void func_5056288272(unsigned depth);
void func_5056288400(unsigned depth);
void func_5056288528(unsigned depth);
void func_5056288656(unsigned depth);
void func_5056288208(unsigned depth);
void func_5056288976(unsigned depth);
void func_5056289104(unsigned depth);
void func_5056289232(unsigned depth);
void func_5056289360(unsigned depth);
void func_5056289488(unsigned depth);
void func_5056289616(unsigned depth);
void func_5056289744(unsigned depth);
void func_5056288784(unsigned depth);
void func_5056290128(unsigned depth);
void func_5056290256(unsigned depth);
void func_5056290384(unsigned depth);
void func_5056290512(unsigned depth);
void func_5056290640(unsigned depth);
void func_5056284784(unsigned depth);
void func_5056284912(unsigned depth);
void func_5056285040(unsigned depth);
void func_5056285168(unsigned depth);
void func_5056290768(unsigned depth);
void func_5056290896(unsigned depth);
void func_5056291024(unsigned depth);
void func_5056291152(unsigned depth);
void func_5056291280(unsigned depth);
void func_5056291408(unsigned depth);
void func_5056289872(unsigned depth);
void func_5056290000(unsigned depth);
void func_5056292048(unsigned depth);
void func_5056292176(unsigned depth);
void func_5056292304(unsigned depth);
void func_5056292432(unsigned depth);
void func_5056292560(unsigned depth);
void func_5056292688(unsigned depth);
void func_5056292816(unsigned depth);
void func_5056292944(unsigned depth);
void func_5056293072(unsigned depth);
void func_5056293200(unsigned depth);
void func_5056293328(unsigned depth);
void func_5056293456(unsigned depth);
void func_5056293584(unsigned depth);
void func_5056293712(unsigned depth);
void func_5056293840(unsigned depth);
void func_5056293968(unsigned depth);
void func_5056294096(unsigned depth);
void func_5056286624(unsigned depth);
void func_5056286784(unsigned depth);
void func_5056286912(unsigned depth);
void func_5056287104(unsigned depth);
void func_5056287232(unsigned depth);
void func_5056287040(unsigned depth);
void func_5056294288(unsigned depth);
void func_5056294416(unsigned depth);
void func_5056294544(unsigned depth);
void func_5056286192(unsigned depth);
void func_5056286320(unsigned depth);
void func_5056284016(unsigned depth);
void func_5056294672(unsigned depth);
void func_5056294800(unsigned depth);
void func_5056294928(unsigned depth);
void func_5056283936(unsigned depth);
void func_5056295056(unsigned depth);
void func_5056295712(unsigned depth);
void func_5056295856(unsigned depth);
void func_5056296016(unsigned depth);
void func_5056296144(unsigned depth);
void func_5056296336(unsigned depth);
void func_5056296464(unsigned depth);
void func_5056296592(unsigned depth);
void func_5056296720(unsigned depth);
void func_5056296272(unsigned depth);
void func_5056297040(unsigned depth);
void func_5056295344(unsigned depth);
void func_5056263232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5056282976(depth+1);
        break;
        case 1:
            func_5056282336(depth+1);
        break;
    }
    return;
}
void func_5056279744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056282896(depth+1);
        break;
    }
    return;
}
void func_5056279952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5056282640(depth+1);
        break;
        case 1:
            func_5056281328(depth+1);
        break;
        case 2:
            func_5056280944(depth+1);
        break;
    }
    return;
}
void func_5056280160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5056281200(depth+1);
        break;
        case 1:
            func_5056283168(depth+1);
        break;
    }
    return;
}
void func_5056279616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056283616(depth+1);
        break;
    }
    return;
}
void func_5056280816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5056284112(depth+1);
        break;
        case 1:
            func_5056284240(depth+1);
        break;
        case 2:
            func_5056284368(depth+1);
        break;
        case 3:
            func_5056284528(depth+1);
        break;
        case 4:
            func_5056284656(depth+1);
        break;
        case 5:
            func_5056282016(depth+1);
        break;
        case 6:
            func_5056285232(depth+1);
        break;
        case 7:
            func_5056285360(depth+1);
        break;
        case 8:
            func_5056285488(depth+1);
        break;
        case 9:
            func_5056281952(depth+1);
        break;
    }
    return;
}
void func_5056280944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5056280496(depth+1);
        break;
        case 1:
            func_5056279744(depth+1);
        break;
        case 2:
            func_5056280720(depth+1);
        break;
        case 3:
            func_5056280160(depth+1);
        break;
        case 4:
            func_5056282208(depth+1);
        break;
    }
    return;
}
void func_5056280720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056283808(depth+1);
        break;
    }
    return;
}
void func_5056280496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056285808(depth+1);
        break;
    }
    return;
}
void func_5056282512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5056287536(depth+1);
        break;
        case 1:
            func_5056287664(depth+1);
        break;
        case 2:
            func_5056287792(depth+1);
        break;
        case 3:
            func_5056287952(depth+1);
        break;
        case 4:
            func_5056288080(depth+1);
        break;
        case 5:
            func_5056288272(depth+1);
        break;
        case 6:
            func_5056288400(depth+1);
        break;
        case 7:
            func_5056288528(depth+1);
        break;
        case 8:
            func_5056288656(depth+1);
        break;
        case 9:
            func_5056288208(depth+1);
        break;
        case 10:
            func_5056288976(depth+1);
        break;
        case 11:
            func_5056289104(depth+1);
        break;
        case 12:
            func_5056289232(depth+1);
        break;
        case 13:
            func_5056289360(depth+1);
        break;
        case 14:
            func_5056289488(depth+1);
        break;
        case 15:
            func_5056289616(depth+1);
        break;
        case 16:
            func_5056289744(depth+1);
        break;
        case 17:
            func_5056288784(depth+1);
        break;
        case 18:
            func_5056290128(depth+1);
        break;
        case 19:
            func_5056290256(depth+1);
        break;
        case 20:
            func_5056290384(depth+1);
        break;
        case 21:
            func_5056290512(depth+1);
        break;
        case 22:
            func_5056290640(depth+1);
        break;
        case 23:
            func_5056284784(depth+1);
        break;
        case 24:
            func_5056284912(depth+1);
        break;
        case 25:
            func_5056285040(depth+1);
        break;
        case 26:
            func_5056285168(depth+1);
        break;
        case 27:
            func_5056290768(depth+1);
        break;
        case 28:
            func_5056290896(depth+1);
        break;
        case 29:
            func_5056291024(depth+1);
        break;
        case 30:
            func_5056291152(depth+1);
        break;
        case 31:
            func_5056291280(depth+1);
        break;
        case 32:
            func_5056291408(depth+1);
        break;
        case 33:
            func_5056289872(depth+1);
        break;
        case 34:
            func_5056290000(depth+1);
        break;
        case 35:
            func_5056292048(depth+1);
        break;
        case 36:
            func_5056292176(depth+1);
        break;
        case 37:
            func_5056292304(depth+1);
        break;
        case 38:
            func_5056292432(depth+1);
        break;
        case 39:
            func_5056292560(depth+1);
        break;
        case 40:
            func_5056292688(depth+1);
        break;
        case 41:
            func_5056292816(depth+1);
        break;
        case 42:
            func_5056292944(depth+1);
        break;
        case 43:
            func_5056293072(depth+1);
        break;
        case 44:
            func_5056293200(depth+1);
        break;
        case 45:
            func_5056293328(depth+1);
        break;
        case 46:
            func_5056293456(depth+1);
        break;
        case 47:
            func_5056293584(depth+1);
        break;
        case 48:
            func_5056293712(depth+1);
        break;
        case 49:
            func_5056293840(depth+1);
        break;
        case 50:
            func_5056293968(depth+1);
        break;
        case 51:
            func_5056294096(depth+1);
        break;
    }
    return;
}
void func_5056281632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5056283488(depth+1);
        break;
        case 1:
            func_5056282896(depth+1);
        break;
        case 2:
            func_5056286624(depth+1);
        break;
        case 3:
            func_5056286784(depth+1);
        break;
        case 4:
            func_5056286912(depth+1);
        break;
        case 5:
            func_5056287104(depth+1);
        break;
        case 6:
            func_5056283808(depth+1);
        break;
        case 7:
            func_5056287232(depth+1);
        break;
        case 8:
            func_5056285936(depth+1);
        break;
        case 9:
            func_5056286064(depth+1);
        break;
        case 10:
            func_5056287040(depth+1);
        break;
        case 11:
            func_5056294288(depth+1);
        break;
        case 12:
            func_5056294416(depth+1);
        break;
        case 13:
            func_5056294544(depth+1);
        break;
    }
    return;
}
void func_5056281072(unsigned depth) {
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
            func_5056286192(depth+1);
        break;
    }
    return;
}
void func_5056281200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5056282512(depth+1);
        break;
        case 1:
            func_5056280816(depth+1);
        break;
        case 2:
            func_5056283296(depth+1);
        break;
    }
    return;
}
void func_5056281328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056284016(depth+1);
        break;
    }
    return;
}
void func_5056281456(unsigned depth) {
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
            func_5056294672(depth+1);
        break;
    }
    return;
}
void func_5056281760(unsigned depth) {
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
            func_5056294800(depth+1);
        break;
    }
    return;
}
void func_5056280416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5056281760(depth+1);
        break;
        case 1:
            func_5056280160(depth+1);
        break;
    }
    return;
}
void func_5056280560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5056280416(depth+1);
        break;
        case 1:
            func_5056283936(depth+1);
        break;
    }
    return;
}
void func_5056282208(unsigned depth) {
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
            func_5056281456(depth+1);
        break;
        case 1:
            func_5056281072(depth+1);
        break;
    }
    return;
}
void func_5056282336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5056279616(depth+1);
        break;
        case 1:
            func_5056279952(depth+1);
        break;
    }
    return;
}
void func_5056282640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056295056(depth+1);
        break;
    }
    return;
}
void func_5056282768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056263232(depth+1);
        break;
    }
    return;
}
void func_5056283296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5056295712(depth+1);
        break;
        case 1:
            func_5056294928(depth+1);
        break;
        case 2:
            func_5056295856(depth+1);
        break;
        case 3:
            func_5056296016(depth+1);
        break;
        case 4:
            func_5056296144(depth+1);
        break;
        case 5:
            func_5056296336(depth+1);
        break;
        case 6:
            func_5056296464(depth+1);
        break;
        case 7:
            func_5056296592(depth+1);
        break;
        case 8:
            func_5056296720(depth+1);
        break;
        case 9:
            func_5056296272(depth+1);
        break;
        case 10:
            func_5056297040(depth+1);
        break;
    }
    return;
}
void func_5056282976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5056295344(depth+1);
        break;
    }
    return;
}
void func_5056282896(unsigned depth) {
    extend(46);
    return;
}
void func_5056283168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5056283488(depth+1);
    func_5056281632(depth+1);
    return;
}
void func_5056283488(unsigned depth) {
    extend(92);
    return;
}
void func_5056283616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5056282336(depth+1);
    func_5056279952(depth+1);
    return;
}
void func_5056284112(unsigned depth) {
    extend(48);
    return;
}
void func_5056284240(unsigned depth) {
    extend(49);
    return;
}
void func_5056284368(unsigned depth) {
    extend(50);
    return;
}
void func_5056284528(unsigned depth) {
    extend(51);
    return;
}
void func_5056284656(unsigned depth) {
    extend(52);
    return;
}
void func_5056282016(unsigned depth) {
    extend(53);
    return;
}
void func_5056285232(unsigned depth) {
    extend(54);
    return;
}
void func_5056285360(unsigned depth) {
    extend(55);
    return;
}
void func_5056285488(unsigned depth) {
    extend(56);
    return;
}
void func_5056281952(unsigned depth) {
    extend(57);
    return;
}
void func_5056283808(unsigned depth) {
    extend(36);
    return;
}
void func_5056285808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5056285936(depth+1);
    func_5056263232(depth+1);
    func_5056286064(depth+1);
    return;
}
void func_5056285936(unsigned depth) {
    extend(40);
    return;
}
void func_5056286064(unsigned depth) {
    extend(41);
    return;
}
void func_5056287536(unsigned depth) {
    extend(97);
    return;
}
void func_5056287664(unsigned depth) {
    extend(98);
    return;
}
void func_5056287792(unsigned depth) {
    extend(99);
    return;
}
void func_5056287952(unsigned depth) {
    extend(100);
    return;
}
void func_5056288080(unsigned depth) {
    extend(101);
    return;
}
void func_5056288272(unsigned depth) {
    extend(102);
    return;
}
void func_5056288400(unsigned depth) {
    extend(103);
    return;
}
void func_5056288528(unsigned depth) {
    extend(104);
    return;
}
void func_5056288656(unsigned depth) {
    extend(105);
    return;
}
void func_5056288208(unsigned depth) {
    extend(106);
    return;
}
void func_5056288976(unsigned depth) {
    extend(107);
    return;
}
void func_5056289104(unsigned depth) {
    extend(108);
    return;
}
void func_5056289232(unsigned depth) {
    extend(109);
    return;
}
void func_5056289360(unsigned depth) {
    extend(110);
    return;
}
void func_5056289488(unsigned depth) {
    extend(111);
    return;
}
void func_5056289616(unsigned depth) {
    extend(112);
    return;
}
void func_5056289744(unsigned depth) {
    extend(113);
    return;
}
void func_5056288784(unsigned depth) {
    extend(114);
    return;
}
void func_5056290128(unsigned depth) {
    extend(115);
    return;
}
void func_5056290256(unsigned depth) {
    extend(116);
    return;
}
void func_5056290384(unsigned depth) {
    extend(117);
    return;
}
void func_5056290512(unsigned depth) {
    extend(118);
    return;
}
void func_5056290640(unsigned depth) {
    extend(119);
    return;
}
void func_5056284784(unsigned depth) {
    extend(120);
    return;
}
void func_5056284912(unsigned depth) {
    extend(121);
    return;
}
void func_5056285040(unsigned depth) {
    extend(122);
    return;
}
void func_5056285168(unsigned depth) {
    extend(65);
    return;
}
void func_5056290768(unsigned depth) {
    extend(66);
    return;
}
void func_5056290896(unsigned depth) {
    extend(67);
    return;
}
void func_5056291024(unsigned depth) {
    extend(68);
    return;
}
void func_5056291152(unsigned depth) {
    extend(69);
    return;
}
void func_5056291280(unsigned depth) {
    extend(70);
    return;
}
void func_5056291408(unsigned depth) {
    extend(71);
    return;
}
void func_5056289872(unsigned depth) {
    extend(72);
    return;
}
void func_5056290000(unsigned depth) {
    extend(73);
    return;
}
void func_5056292048(unsigned depth) {
    extend(74);
    return;
}
void func_5056292176(unsigned depth) {
    extend(75);
    return;
}
void func_5056292304(unsigned depth) {
    extend(76);
    return;
}
void func_5056292432(unsigned depth) {
    extend(77);
    return;
}
void func_5056292560(unsigned depth) {
    extend(78);
    return;
}
void func_5056292688(unsigned depth) {
    extend(79);
    return;
}
void func_5056292816(unsigned depth) {
    extend(80);
    return;
}
void func_5056292944(unsigned depth) {
    extend(81);
    return;
}
void func_5056293072(unsigned depth) {
    extend(82);
    return;
}
void func_5056293200(unsigned depth) {
    extend(83);
    return;
}
void func_5056293328(unsigned depth) {
    extend(84);
    return;
}
void func_5056293456(unsigned depth) {
    extend(85);
    return;
}
void func_5056293584(unsigned depth) {
    extend(86);
    return;
}
void func_5056293712(unsigned depth) {
    extend(87);
    return;
}
void func_5056293840(unsigned depth) {
    extend(88);
    return;
}
void func_5056293968(unsigned depth) {
    extend(89);
    return;
}
void func_5056294096(unsigned depth) {
    extend(90);
    return;
}
void func_5056286624(unsigned depth) {
    extend(42);
    return;
}
void func_5056286784(unsigned depth) {
    extend(43);
    return;
}
void func_5056286912(unsigned depth) {
    extend(63);
    return;
}
void func_5056287104(unsigned depth) {
    extend(94);
    return;
}
void func_5056287232(unsigned depth) {
    extend(124);
    return;
}
void func_5056287040(unsigned depth) {
    extend(91);
    return;
}
void func_5056294288(unsigned depth) {
    extend(93);
    return;
}
void func_5056294416(unsigned depth) {
    extend(123);
    return;
}
void func_5056294544(unsigned depth) {
    extend(125);
    return;
}
void func_5056286192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5056286320(depth+1);
    func_5056280560(depth+1);
    func_5056294288(depth+1);
    return;
}
void func_5056286320(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5056284016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5056280944(depth+1);
    func_5056286784(depth+1);
    return;
}
void func_5056294672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5056287040(depth+1);
    func_5056280560(depth+1);
    func_5056294288(depth+1);
    return;
}
void func_5056294800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5056280160(depth+1);
    func_5056294928(depth+1);
    func_5056280160(depth+1);
    return;
}
void func_5056294928(unsigned depth) {
    extend(45);
    return;
}
void func_5056283936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5056280416(depth+1);
    func_5056280560(depth+1);
    return;
}
void func_5056295056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5056280944(depth+1);
    func_5056286624(depth+1);
    return;
}
void func_5056295712(unsigned depth) {
    extend(95);
    return;
}
void func_5056295856(unsigned depth) {
    extend(64);
    return;
}
void func_5056296016(unsigned depth) {
    extend(35);
    return;
}
void func_5056296144(unsigned depth) {
    extend(37);
    return;
}
void func_5056296336(unsigned depth) {
    extend(38);
    return;
}
void func_5056296464(unsigned depth) {
    extend(61);
    return;
}
void func_5056296592(unsigned depth) {
    extend(126);
    return;
}
void func_5056296720(unsigned depth) {
    extend(96);
    return;
}
void func_5056296272(unsigned depth) {
    extend(39);
    return;
}
void func_5056297040(unsigned depth) {
    extend(34);
    return;
}
void func_5056295344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5056263232(depth+1);
    func_5056287232(depth+1);
    func_5056282336(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5056282768(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
