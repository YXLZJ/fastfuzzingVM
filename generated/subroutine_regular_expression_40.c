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

void func_5416973376(unsigned depth);
void func_5416989888(unsigned depth);
void func_5416990096(unsigned depth);
void func_5416990304(unsigned depth);
void func_5416989760(unsigned depth);
void func_5416990960(unsigned depth);
void func_5416991088(unsigned depth);
void func_5416990864(unsigned depth);
void func_5416990640(unsigned depth);
void func_5416992656(unsigned depth);
void func_5416991776(unsigned depth);
void func_5416991216(unsigned depth);
void func_5416991344(unsigned depth);
void func_5416991472(unsigned depth);
void func_5416991600(unsigned depth);
void func_5416991904(unsigned depth);
void func_5416990560(unsigned depth);
void func_5416990704(unsigned depth);
void func_5416992352(unsigned depth);
void func_5416992480(unsigned depth);
void func_5416992784(unsigned depth);
void func_5416992912(unsigned depth);
void func_5416993440(unsigned depth);
void func_5416993120(unsigned depth);
void func_5416993040(unsigned depth);
void func_5416993312(unsigned depth);
void func_5416993632(unsigned depth);
void func_5416993760(unsigned depth);
void func_5416994256(unsigned depth);
void func_5416994384(unsigned depth);
void func_5416994512(unsigned depth);
void func_5416994672(unsigned depth);
void func_5416994800(unsigned depth);
void func_5416992160(unsigned depth);
void func_5416995376(unsigned depth);
void func_5416995504(unsigned depth);
void func_5416995632(unsigned depth);
void func_5416992096(unsigned depth);
void func_5416993952(unsigned depth);
void func_5416995952(unsigned depth);
void func_5416996080(unsigned depth);
void func_5416996208(unsigned depth);
void func_5416997680(unsigned depth);
void func_5416997808(unsigned depth);
void func_5416997936(unsigned depth);
void func_5416998096(unsigned depth);
void func_5416998224(unsigned depth);
void func_5416998416(unsigned depth);
void func_5416998544(unsigned depth);
void func_5416998672(unsigned depth);
void func_5416998800(unsigned depth);
void func_5416998352(unsigned depth);
void func_5416999120(unsigned depth);
void func_5416999248(unsigned depth);
void func_5416999376(unsigned depth);
void func_5416999504(unsigned depth);
void func_5416999632(unsigned depth);
void func_5416999760(unsigned depth);
void func_5416999888(unsigned depth);
void func_5416998928(unsigned depth);
void func_5417000272(unsigned depth);
void func_5417000400(unsigned depth);
void func_5417000528(unsigned depth);
void func_5417000656(unsigned depth);
void func_5417000784(unsigned depth);
void func_5416994928(unsigned depth);
void func_5416995056(unsigned depth);
void func_5416995184(unsigned depth);
void func_5416995312(unsigned depth);
void func_5417000912(unsigned depth);
void func_5417001040(unsigned depth);
void func_5417001168(unsigned depth);
void func_5417001296(unsigned depth);
void func_5417001424(unsigned depth);
void func_5417001552(unsigned depth);
void func_5417000016(unsigned depth);
void func_5417000144(unsigned depth);
void func_5417002192(unsigned depth);
void func_5417002320(unsigned depth);
void func_5417002448(unsigned depth);
void func_5417002576(unsigned depth);
void func_5417002704(unsigned depth);
void func_5417002832(unsigned depth);
void func_5417002960(unsigned depth);
void func_5417003088(unsigned depth);
void func_5417003216(unsigned depth);
void func_5417003344(unsigned depth);
void func_5417003472(unsigned depth);
void func_5417003600(unsigned depth);
void func_5417003728(unsigned depth);
void func_5417003856(unsigned depth);
void func_5417003984(unsigned depth);
void func_5417004112(unsigned depth);
void func_5417004240(unsigned depth);
void func_5416996768(unsigned depth);
void func_5416996928(unsigned depth);
void func_5416997056(unsigned depth);
void func_5416997248(unsigned depth);
void func_5416997376(unsigned depth);
void func_5416997184(unsigned depth);
void func_5417004432(unsigned depth);
void func_5417004560(unsigned depth);
void func_5417004688(unsigned depth);
void func_5416996336(unsigned depth);
void func_5416996464(unsigned depth);
void func_5416994160(unsigned depth);
void func_5417004816(unsigned depth);
void func_5417004944(unsigned depth);
void func_5417005072(unsigned depth);
void func_5416994080(unsigned depth);
void func_5417005200(unsigned depth);
void func_5417005856(unsigned depth);
void func_5417006000(unsigned depth);
void func_5417006160(unsigned depth);
void func_5417006288(unsigned depth);
void func_5417006480(unsigned depth);
void func_5417006608(unsigned depth);
void func_5417006736(unsigned depth);
void func_5417006864(unsigned depth);
void func_5417006416(unsigned depth);
void func_5417007184(unsigned depth);
void func_5417005488(unsigned depth);
void func_5416973376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5416993120(depth+1);
        break;
        case 1:
            func_5416992480(depth+1);
        break;
    }
    return;
}
void func_5416989888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416993040(depth+1);
        break;
    }
    return;
}
void func_5416990096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5416992784(depth+1);
        break;
        case 1:
            func_5416991472(depth+1);
        break;
        case 2:
            func_5416991088(depth+1);
        break;
    }
    return;
}
void func_5416990304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5416991344(depth+1);
        break;
        case 1:
            func_5416993312(depth+1);
        break;
    }
    return;
}
void func_5416989760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416993760(depth+1);
        break;
    }
    return;
}
void func_5416990960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5416994256(depth+1);
        break;
        case 1:
            func_5416994384(depth+1);
        break;
        case 2:
            func_5416994512(depth+1);
        break;
        case 3:
            func_5416994672(depth+1);
        break;
        case 4:
            func_5416994800(depth+1);
        break;
        case 5:
            func_5416992160(depth+1);
        break;
        case 6:
            func_5416995376(depth+1);
        break;
        case 7:
            func_5416995504(depth+1);
        break;
        case 8:
            func_5416995632(depth+1);
        break;
        case 9:
            func_5416992096(depth+1);
        break;
    }
    return;
}
void func_5416991088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5416990640(depth+1);
        break;
        case 1:
            func_5416989888(depth+1);
        break;
        case 2:
            func_5416990864(depth+1);
        break;
        case 3:
            func_5416990304(depth+1);
        break;
        case 4:
            func_5416992352(depth+1);
        break;
    }
    return;
}
void func_5416990864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416993952(depth+1);
        break;
    }
    return;
}
void func_5416990640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416995952(depth+1);
        break;
    }
    return;
}
void func_5416992656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5416997680(depth+1);
        break;
        case 1:
            func_5416997808(depth+1);
        break;
        case 2:
            func_5416997936(depth+1);
        break;
        case 3:
            func_5416998096(depth+1);
        break;
        case 4:
            func_5416998224(depth+1);
        break;
        case 5:
            func_5416998416(depth+1);
        break;
        case 6:
            func_5416998544(depth+1);
        break;
        case 7:
            func_5416998672(depth+1);
        break;
        case 8:
            func_5416998800(depth+1);
        break;
        case 9:
            func_5416998352(depth+1);
        break;
        case 10:
            func_5416999120(depth+1);
        break;
        case 11:
            func_5416999248(depth+1);
        break;
        case 12:
            func_5416999376(depth+1);
        break;
        case 13:
            func_5416999504(depth+1);
        break;
        case 14:
            func_5416999632(depth+1);
        break;
        case 15:
            func_5416999760(depth+1);
        break;
        case 16:
            func_5416999888(depth+1);
        break;
        case 17:
            func_5416998928(depth+1);
        break;
        case 18:
            func_5417000272(depth+1);
        break;
        case 19:
            func_5417000400(depth+1);
        break;
        case 20:
            func_5417000528(depth+1);
        break;
        case 21:
            func_5417000656(depth+1);
        break;
        case 22:
            func_5417000784(depth+1);
        break;
        case 23:
            func_5416994928(depth+1);
        break;
        case 24:
            func_5416995056(depth+1);
        break;
        case 25:
            func_5416995184(depth+1);
        break;
        case 26:
            func_5416995312(depth+1);
        break;
        case 27:
            func_5417000912(depth+1);
        break;
        case 28:
            func_5417001040(depth+1);
        break;
        case 29:
            func_5417001168(depth+1);
        break;
        case 30:
            func_5417001296(depth+1);
        break;
        case 31:
            func_5417001424(depth+1);
        break;
        case 32:
            func_5417001552(depth+1);
        break;
        case 33:
            func_5417000016(depth+1);
        break;
        case 34:
            func_5417000144(depth+1);
        break;
        case 35:
            func_5417002192(depth+1);
        break;
        case 36:
            func_5417002320(depth+1);
        break;
        case 37:
            func_5417002448(depth+1);
        break;
        case 38:
            func_5417002576(depth+1);
        break;
        case 39:
            func_5417002704(depth+1);
        break;
        case 40:
            func_5417002832(depth+1);
        break;
        case 41:
            func_5417002960(depth+1);
        break;
        case 42:
            func_5417003088(depth+1);
        break;
        case 43:
            func_5417003216(depth+1);
        break;
        case 44:
            func_5417003344(depth+1);
        break;
        case 45:
            func_5417003472(depth+1);
        break;
        case 46:
            func_5417003600(depth+1);
        break;
        case 47:
            func_5417003728(depth+1);
        break;
        case 48:
            func_5417003856(depth+1);
        break;
        case 49:
            func_5417003984(depth+1);
        break;
        case 50:
            func_5417004112(depth+1);
        break;
        case 51:
            func_5417004240(depth+1);
        break;
    }
    return;
}
void func_5416991776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5416993632(depth+1);
        break;
        case 1:
            func_5416993040(depth+1);
        break;
        case 2:
            func_5416996768(depth+1);
        break;
        case 3:
            func_5416996928(depth+1);
        break;
        case 4:
            func_5416997056(depth+1);
        break;
        case 5:
            func_5416997248(depth+1);
        break;
        case 6:
            func_5416993952(depth+1);
        break;
        case 7:
            func_5416997376(depth+1);
        break;
        case 8:
            func_5416996080(depth+1);
        break;
        case 9:
            func_5416996208(depth+1);
        break;
        case 10:
            func_5416997184(depth+1);
        break;
        case 11:
            func_5417004432(depth+1);
        break;
        case 12:
            func_5417004560(depth+1);
        break;
        case 13:
            func_5417004688(depth+1);
        break;
    }
    return;
}
void func_5416991216(unsigned depth) {
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
            func_5416996336(depth+1);
        break;
    }
    return;
}
void func_5416991344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5416992656(depth+1);
        break;
        case 1:
            func_5416990960(depth+1);
        break;
        case 2:
            func_5416993440(depth+1);
        break;
    }
    return;
}
void func_5416991472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416994160(depth+1);
        break;
    }
    return;
}
void func_5416991600(unsigned depth) {
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
            func_5417004816(depth+1);
        break;
    }
    return;
}
void func_5416991904(unsigned depth) {
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
            func_5417004944(depth+1);
        break;
    }
    return;
}
void func_5416990560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5416991904(depth+1);
        break;
        case 1:
            func_5416990304(depth+1);
        break;
    }
    return;
}
void func_5416990704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5416990560(depth+1);
        break;
        case 1:
            func_5416994080(depth+1);
        break;
    }
    return;
}
void func_5416992352(unsigned depth) {
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
            func_5416991600(depth+1);
        break;
        case 1:
            func_5416991216(depth+1);
        break;
    }
    return;
}
void func_5416992480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5416989760(depth+1);
        break;
        case 1:
            func_5416990096(depth+1);
        break;
    }
    return;
}
void func_5416992784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5417005200(depth+1);
        break;
    }
    return;
}
void func_5416992912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5416973376(depth+1);
        break;
    }
    return;
}
void func_5416993440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5417005856(depth+1);
        break;
        case 1:
            func_5417005072(depth+1);
        break;
        case 2:
            func_5417006000(depth+1);
        break;
        case 3:
            func_5417006160(depth+1);
        break;
        case 4:
            func_5417006288(depth+1);
        break;
        case 5:
            func_5417006480(depth+1);
        break;
        case 6:
            func_5417006608(depth+1);
        break;
        case 7:
            func_5417006736(depth+1);
        break;
        case 8:
            func_5417006864(depth+1);
        break;
        case 9:
            func_5417006416(depth+1);
        break;
        case 10:
            func_5417007184(depth+1);
        break;
    }
    return;
}
void func_5416993120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5417005488(depth+1);
        break;
    }
    return;
}
void func_5416993040(unsigned depth) {
    extend(46);
    return;
}
void func_5416993312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5416993632(depth+1);
    func_5416991776(depth+1);
    return;
}
void func_5416993632(unsigned depth) {
    extend(92);
    return;
}
void func_5416993760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5416992480(depth+1);
    func_5416990096(depth+1);
    return;
}
void func_5416994256(unsigned depth) {
    extend(48);
    return;
}
void func_5416994384(unsigned depth) {
    extend(49);
    return;
}
void func_5416994512(unsigned depth) {
    extend(50);
    return;
}
void func_5416994672(unsigned depth) {
    extend(51);
    return;
}
void func_5416994800(unsigned depth) {
    extend(52);
    return;
}
void func_5416992160(unsigned depth) {
    extend(53);
    return;
}
void func_5416995376(unsigned depth) {
    extend(54);
    return;
}
void func_5416995504(unsigned depth) {
    extend(55);
    return;
}
void func_5416995632(unsigned depth) {
    extend(56);
    return;
}
void func_5416992096(unsigned depth) {
    extend(57);
    return;
}
void func_5416993952(unsigned depth) {
    extend(36);
    return;
}
void func_5416995952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5416996080(depth+1);
    func_5416973376(depth+1);
    func_5416996208(depth+1);
    return;
}
void func_5416996080(unsigned depth) {
    extend(40);
    return;
}
void func_5416996208(unsigned depth) {
    extend(41);
    return;
}
void func_5416997680(unsigned depth) {
    extend(97);
    return;
}
void func_5416997808(unsigned depth) {
    extend(98);
    return;
}
void func_5416997936(unsigned depth) {
    extend(99);
    return;
}
void func_5416998096(unsigned depth) {
    extend(100);
    return;
}
void func_5416998224(unsigned depth) {
    extend(101);
    return;
}
void func_5416998416(unsigned depth) {
    extend(102);
    return;
}
void func_5416998544(unsigned depth) {
    extend(103);
    return;
}
void func_5416998672(unsigned depth) {
    extend(104);
    return;
}
void func_5416998800(unsigned depth) {
    extend(105);
    return;
}
void func_5416998352(unsigned depth) {
    extend(106);
    return;
}
void func_5416999120(unsigned depth) {
    extend(107);
    return;
}
void func_5416999248(unsigned depth) {
    extend(108);
    return;
}
void func_5416999376(unsigned depth) {
    extend(109);
    return;
}
void func_5416999504(unsigned depth) {
    extend(110);
    return;
}
void func_5416999632(unsigned depth) {
    extend(111);
    return;
}
void func_5416999760(unsigned depth) {
    extend(112);
    return;
}
void func_5416999888(unsigned depth) {
    extend(113);
    return;
}
void func_5416998928(unsigned depth) {
    extend(114);
    return;
}
void func_5417000272(unsigned depth) {
    extend(115);
    return;
}
void func_5417000400(unsigned depth) {
    extend(116);
    return;
}
void func_5417000528(unsigned depth) {
    extend(117);
    return;
}
void func_5417000656(unsigned depth) {
    extend(118);
    return;
}
void func_5417000784(unsigned depth) {
    extend(119);
    return;
}
void func_5416994928(unsigned depth) {
    extend(120);
    return;
}
void func_5416995056(unsigned depth) {
    extend(121);
    return;
}
void func_5416995184(unsigned depth) {
    extend(122);
    return;
}
void func_5416995312(unsigned depth) {
    extend(65);
    return;
}
void func_5417000912(unsigned depth) {
    extend(66);
    return;
}
void func_5417001040(unsigned depth) {
    extend(67);
    return;
}
void func_5417001168(unsigned depth) {
    extend(68);
    return;
}
void func_5417001296(unsigned depth) {
    extend(69);
    return;
}
void func_5417001424(unsigned depth) {
    extend(70);
    return;
}
void func_5417001552(unsigned depth) {
    extend(71);
    return;
}
void func_5417000016(unsigned depth) {
    extend(72);
    return;
}
void func_5417000144(unsigned depth) {
    extend(73);
    return;
}
void func_5417002192(unsigned depth) {
    extend(74);
    return;
}
void func_5417002320(unsigned depth) {
    extend(75);
    return;
}
void func_5417002448(unsigned depth) {
    extend(76);
    return;
}
void func_5417002576(unsigned depth) {
    extend(77);
    return;
}
void func_5417002704(unsigned depth) {
    extend(78);
    return;
}
void func_5417002832(unsigned depth) {
    extend(79);
    return;
}
void func_5417002960(unsigned depth) {
    extend(80);
    return;
}
void func_5417003088(unsigned depth) {
    extend(81);
    return;
}
void func_5417003216(unsigned depth) {
    extend(82);
    return;
}
void func_5417003344(unsigned depth) {
    extend(83);
    return;
}
void func_5417003472(unsigned depth) {
    extend(84);
    return;
}
void func_5417003600(unsigned depth) {
    extend(85);
    return;
}
void func_5417003728(unsigned depth) {
    extend(86);
    return;
}
void func_5417003856(unsigned depth) {
    extend(87);
    return;
}
void func_5417003984(unsigned depth) {
    extend(88);
    return;
}
void func_5417004112(unsigned depth) {
    extend(89);
    return;
}
void func_5417004240(unsigned depth) {
    extend(90);
    return;
}
void func_5416996768(unsigned depth) {
    extend(42);
    return;
}
void func_5416996928(unsigned depth) {
    extend(43);
    return;
}
void func_5416997056(unsigned depth) {
    extend(63);
    return;
}
void func_5416997248(unsigned depth) {
    extend(94);
    return;
}
void func_5416997376(unsigned depth) {
    extend(124);
    return;
}
void func_5416997184(unsigned depth) {
    extend(91);
    return;
}
void func_5417004432(unsigned depth) {
    extend(93);
    return;
}
void func_5417004560(unsigned depth) {
    extend(123);
    return;
}
void func_5417004688(unsigned depth) {
    extend(125);
    return;
}
void func_5416996336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5416996464(depth+1);
    func_5416990704(depth+1);
    func_5417004432(depth+1);
    return;
}
void func_5416996464(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5416994160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5416991088(depth+1);
    func_5416996928(depth+1);
    return;
}
void func_5417004816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5416997184(depth+1);
    func_5416990704(depth+1);
    func_5417004432(depth+1);
    return;
}
void func_5417004944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5416990304(depth+1);
    func_5417005072(depth+1);
    func_5416990304(depth+1);
    return;
}
void func_5417005072(unsigned depth) {
    extend(45);
    return;
}
void func_5416994080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5416990560(depth+1);
    func_5416990704(depth+1);
    return;
}
void func_5417005200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5416991088(depth+1);
    func_5416996768(depth+1);
    return;
}
void func_5417005856(unsigned depth) {
    extend(95);
    return;
}
void func_5417006000(unsigned depth) {
    extend(64);
    return;
}
void func_5417006160(unsigned depth) {
    extend(35);
    return;
}
void func_5417006288(unsigned depth) {
    extend(37);
    return;
}
void func_5417006480(unsigned depth) {
    extend(38);
    return;
}
void func_5417006608(unsigned depth) {
    extend(61);
    return;
}
void func_5417006736(unsigned depth) {
    extend(126);
    return;
}
void func_5417006864(unsigned depth) {
    extend(96);
    return;
}
void func_5417006416(unsigned depth) {
    extend(39);
    return;
}
void func_5417007184(unsigned depth) {
    extend(34);
    return;
}
void func_5417005488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5416973376(depth+1);
    func_5416997376(depth+1);
    func_5416992480(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5416992912(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
