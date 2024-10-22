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

void func_5500859456(unsigned depth);
void func_5500875968(unsigned depth);
void func_5500876176(unsigned depth);
void func_5500876384(unsigned depth);
void func_5500875840(unsigned depth);
void func_5500877040(unsigned depth);
void func_5500877168(unsigned depth);
void func_5500876944(unsigned depth);
void func_5500876720(unsigned depth);
void func_5500878736(unsigned depth);
void func_5500877856(unsigned depth);
void func_5500877296(unsigned depth);
void func_5500877424(unsigned depth);
void func_5500877552(unsigned depth);
void func_5500877680(unsigned depth);
void func_5500877984(unsigned depth);
void func_5500876640(unsigned depth);
void func_5500876784(unsigned depth);
void func_5500878432(unsigned depth);
void func_5500878560(unsigned depth);
void func_5500878864(unsigned depth);
void func_5500878992(unsigned depth);
void func_5500879520(unsigned depth);
void func_5500879200(unsigned depth);
void func_5500879120(unsigned depth);
void func_5500879392(unsigned depth);
void func_5500879712(unsigned depth);
void func_5500879840(unsigned depth);
void func_5500880336(unsigned depth);
void func_5500880464(unsigned depth);
void func_5500880592(unsigned depth);
void func_5500880752(unsigned depth);
void func_5500880880(unsigned depth);
void func_5500878240(unsigned depth);
void func_5500881456(unsigned depth);
void func_5500881584(unsigned depth);
void func_5500881712(unsigned depth);
void func_5500878176(unsigned depth);
void func_5500880032(unsigned depth);
void func_5500882032(unsigned depth);
void func_5500882160(unsigned depth);
void func_5500882288(unsigned depth);
void func_5500883760(unsigned depth);
void func_5500883888(unsigned depth);
void func_5500884016(unsigned depth);
void func_5500884176(unsigned depth);
void func_5500884304(unsigned depth);
void func_5500884496(unsigned depth);
void func_5500884624(unsigned depth);
void func_5500884752(unsigned depth);
void func_5500884880(unsigned depth);
void func_5500884432(unsigned depth);
void func_5500885200(unsigned depth);
void func_5500885328(unsigned depth);
void func_5500885456(unsigned depth);
void func_5500885584(unsigned depth);
void func_5500885712(unsigned depth);
void func_5500885840(unsigned depth);
void func_5500885968(unsigned depth);
void func_5500885008(unsigned depth);
void func_5500886352(unsigned depth);
void func_5500886480(unsigned depth);
void func_5500886608(unsigned depth);
void func_5500886736(unsigned depth);
void func_5500886864(unsigned depth);
void func_5500881008(unsigned depth);
void func_5500881136(unsigned depth);
void func_5500881264(unsigned depth);
void func_5500881392(unsigned depth);
void func_5500886992(unsigned depth);
void func_5500887120(unsigned depth);
void func_5500887248(unsigned depth);
void func_5500887376(unsigned depth);
void func_5500887504(unsigned depth);
void func_5500887632(unsigned depth);
void func_5500886096(unsigned depth);
void func_5500886224(unsigned depth);
void func_5500888272(unsigned depth);
void func_5500888400(unsigned depth);
void func_5500888528(unsigned depth);
void func_5500888656(unsigned depth);
void func_5500888784(unsigned depth);
void func_5500888912(unsigned depth);
void func_5500889040(unsigned depth);
void func_5500889168(unsigned depth);
void func_5500889296(unsigned depth);
void func_5500889424(unsigned depth);
void func_5500889552(unsigned depth);
void func_5500889680(unsigned depth);
void func_5500889808(unsigned depth);
void func_5500889936(unsigned depth);
void func_5500890064(unsigned depth);
void func_5500890192(unsigned depth);
void func_5500890320(unsigned depth);
void func_5500882848(unsigned depth);
void func_5500883008(unsigned depth);
void func_5500883136(unsigned depth);
void func_5500883328(unsigned depth);
void func_5500883456(unsigned depth);
void func_5500883264(unsigned depth);
void func_5500890512(unsigned depth);
void func_5500890640(unsigned depth);
void func_5500890768(unsigned depth);
void func_5500882416(unsigned depth);
void func_5500882544(unsigned depth);
void func_5500880240(unsigned depth);
void func_5500890896(unsigned depth);
void func_5500891024(unsigned depth);
void func_5500891152(unsigned depth);
void func_5500880160(unsigned depth);
void func_5500891280(unsigned depth);
void func_5500891936(unsigned depth);
void func_5500892080(unsigned depth);
void func_5500892240(unsigned depth);
void func_5500892368(unsigned depth);
void func_5500892560(unsigned depth);
void func_5500892688(unsigned depth);
void func_5500892816(unsigned depth);
void func_5500892944(unsigned depth);
void func_5500892496(unsigned depth);
void func_5500893264(unsigned depth);
void func_5500891568(unsigned depth);
void func_5500859456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500879200(depth+1);
        break;
        case 1:
            func_5500878560(depth+1);
        break;
    }
    return;
}
void func_5500875968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500879120(depth+1);
        break;
    }
    return;
}
void func_5500876176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500878864(depth+1);
        break;
        case 1:
            func_5500877552(depth+1);
        break;
        case 2:
            func_5500877168(depth+1);
        break;
    }
    return;
}
void func_5500876384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500877424(depth+1);
        break;
        case 1:
            func_5500879392(depth+1);
        break;
    }
    return;
}
void func_5500875840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500879840(depth+1);
        break;
    }
    return;
}
void func_5500877040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5500880336(depth+1);
        break;
        case 1:
            func_5500880464(depth+1);
        break;
        case 2:
            func_5500880592(depth+1);
        break;
        case 3:
            func_5500880752(depth+1);
        break;
        case 4:
            func_5500880880(depth+1);
        break;
        case 5:
            func_5500878240(depth+1);
        break;
        case 6:
            func_5500881456(depth+1);
        break;
        case 7:
            func_5500881584(depth+1);
        break;
        case 8:
            func_5500881712(depth+1);
        break;
        case 9:
            func_5500878176(depth+1);
        break;
    }
    return;
}
void func_5500877168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5500876720(depth+1);
        break;
        case 1:
            func_5500875968(depth+1);
        break;
        case 2:
            func_5500876944(depth+1);
        break;
        case 3:
            func_5500876384(depth+1);
        break;
        case 4:
            func_5500878432(depth+1);
        break;
    }
    return;
}
void func_5500876944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500880032(depth+1);
        break;
    }
    return;
}
void func_5500876720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500882032(depth+1);
        break;
    }
    return;
}
void func_5500878736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5500883760(depth+1);
        break;
        case 1:
            func_5500883888(depth+1);
        break;
        case 2:
            func_5500884016(depth+1);
        break;
        case 3:
            func_5500884176(depth+1);
        break;
        case 4:
            func_5500884304(depth+1);
        break;
        case 5:
            func_5500884496(depth+1);
        break;
        case 6:
            func_5500884624(depth+1);
        break;
        case 7:
            func_5500884752(depth+1);
        break;
        case 8:
            func_5500884880(depth+1);
        break;
        case 9:
            func_5500884432(depth+1);
        break;
        case 10:
            func_5500885200(depth+1);
        break;
        case 11:
            func_5500885328(depth+1);
        break;
        case 12:
            func_5500885456(depth+1);
        break;
        case 13:
            func_5500885584(depth+1);
        break;
        case 14:
            func_5500885712(depth+1);
        break;
        case 15:
            func_5500885840(depth+1);
        break;
        case 16:
            func_5500885968(depth+1);
        break;
        case 17:
            func_5500885008(depth+1);
        break;
        case 18:
            func_5500886352(depth+1);
        break;
        case 19:
            func_5500886480(depth+1);
        break;
        case 20:
            func_5500886608(depth+1);
        break;
        case 21:
            func_5500886736(depth+1);
        break;
        case 22:
            func_5500886864(depth+1);
        break;
        case 23:
            func_5500881008(depth+1);
        break;
        case 24:
            func_5500881136(depth+1);
        break;
        case 25:
            func_5500881264(depth+1);
        break;
        case 26:
            func_5500881392(depth+1);
        break;
        case 27:
            func_5500886992(depth+1);
        break;
        case 28:
            func_5500887120(depth+1);
        break;
        case 29:
            func_5500887248(depth+1);
        break;
        case 30:
            func_5500887376(depth+1);
        break;
        case 31:
            func_5500887504(depth+1);
        break;
        case 32:
            func_5500887632(depth+1);
        break;
        case 33:
            func_5500886096(depth+1);
        break;
        case 34:
            func_5500886224(depth+1);
        break;
        case 35:
            func_5500888272(depth+1);
        break;
        case 36:
            func_5500888400(depth+1);
        break;
        case 37:
            func_5500888528(depth+1);
        break;
        case 38:
            func_5500888656(depth+1);
        break;
        case 39:
            func_5500888784(depth+1);
        break;
        case 40:
            func_5500888912(depth+1);
        break;
        case 41:
            func_5500889040(depth+1);
        break;
        case 42:
            func_5500889168(depth+1);
        break;
        case 43:
            func_5500889296(depth+1);
        break;
        case 44:
            func_5500889424(depth+1);
        break;
        case 45:
            func_5500889552(depth+1);
        break;
        case 46:
            func_5500889680(depth+1);
        break;
        case 47:
            func_5500889808(depth+1);
        break;
        case 48:
            func_5500889936(depth+1);
        break;
        case 49:
            func_5500890064(depth+1);
        break;
        case 50:
            func_5500890192(depth+1);
        break;
        case 51:
            func_5500890320(depth+1);
        break;
    }
    return;
}
void func_5500877856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5500879712(depth+1);
        break;
        case 1:
            func_5500879120(depth+1);
        break;
        case 2:
            func_5500882848(depth+1);
        break;
        case 3:
            func_5500883008(depth+1);
        break;
        case 4:
            func_5500883136(depth+1);
        break;
        case 5:
            func_5500883328(depth+1);
        break;
        case 6:
            func_5500880032(depth+1);
        break;
        case 7:
            func_5500883456(depth+1);
        break;
        case 8:
            func_5500882160(depth+1);
        break;
        case 9:
            func_5500882288(depth+1);
        break;
        case 10:
            func_5500883264(depth+1);
        break;
        case 11:
            func_5500890512(depth+1);
        break;
        case 12:
            func_5500890640(depth+1);
        break;
        case 13:
            func_5500890768(depth+1);
        break;
    }
    return;
}
void func_5500877296(unsigned depth) {
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
            func_5500882416(depth+1);
        break;
    }
    return;
}
void func_5500877424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5500878736(depth+1);
        break;
        case 1:
            func_5500877040(depth+1);
        break;
        case 2:
            func_5500879520(depth+1);
        break;
    }
    return;
}
void func_5500877552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500880240(depth+1);
        break;
    }
    return;
}
void func_5500877680(unsigned depth) {
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
            func_5500890896(depth+1);
        break;
    }
    return;
}
void func_5500877984(unsigned depth) {
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
            func_5500891024(depth+1);
        break;
    }
    return;
}
void func_5500876640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500877984(depth+1);
        break;
        case 1:
            func_5500876384(depth+1);
        break;
    }
    return;
}
void func_5500876784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500876640(depth+1);
        break;
        case 1:
            func_5500880160(depth+1);
        break;
    }
    return;
}
void func_5500878432(unsigned depth) {
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
            func_5500877680(depth+1);
        break;
        case 1:
            func_5500877296(depth+1);
        break;
    }
    return;
}
void func_5500878560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5500875840(depth+1);
        break;
        case 1:
            func_5500876176(depth+1);
        break;
    }
    return;
}
void func_5500878864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500891280(depth+1);
        break;
    }
    return;
}
void func_5500878992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500859456(depth+1);
        break;
    }
    return;
}
void func_5500879520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5500891936(depth+1);
        break;
        case 1:
            func_5500891152(depth+1);
        break;
        case 2:
            func_5500892080(depth+1);
        break;
        case 3:
            func_5500892240(depth+1);
        break;
        case 4:
            func_5500892368(depth+1);
        break;
        case 5:
            func_5500892560(depth+1);
        break;
        case 6:
            func_5500892688(depth+1);
        break;
        case 7:
            func_5500892816(depth+1);
        break;
        case 8:
            func_5500892944(depth+1);
        break;
        case 9:
            func_5500892496(depth+1);
        break;
        case 10:
            func_5500893264(depth+1);
        break;
    }
    return;
}
void func_5500879200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5500891568(depth+1);
        break;
    }
    return;
}
void func_5500879120(unsigned depth) {
    extend(46);
    return;
}
void func_5500879392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5500879712(depth+1);
    func_5500877856(depth+1);
    return;
}
void func_5500879712(unsigned depth) {
    extend(92);
    return;
}
void func_5500879840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5500878560(depth+1);
    func_5500876176(depth+1);
    return;
}
void func_5500880336(unsigned depth) {
    extend(48);
    return;
}
void func_5500880464(unsigned depth) {
    extend(49);
    return;
}
void func_5500880592(unsigned depth) {
    extend(50);
    return;
}
void func_5500880752(unsigned depth) {
    extend(51);
    return;
}
void func_5500880880(unsigned depth) {
    extend(52);
    return;
}
void func_5500878240(unsigned depth) {
    extend(53);
    return;
}
void func_5500881456(unsigned depth) {
    extend(54);
    return;
}
void func_5500881584(unsigned depth) {
    extend(55);
    return;
}
void func_5500881712(unsigned depth) {
    extend(56);
    return;
}
void func_5500878176(unsigned depth) {
    extend(57);
    return;
}
void func_5500880032(unsigned depth) {
    extend(36);
    return;
}
void func_5500882032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5500882160(depth+1);
    func_5500859456(depth+1);
    func_5500882288(depth+1);
    return;
}
void func_5500882160(unsigned depth) {
    extend(40);
    return;
}
void func_5500882288(unsigned depth) {
    extend(41);
    return;
}
void func_5500883760(unsigned depth) {
    extend(97);
    return;
}
void func_5500883888(unsigned depth) {
    extend(98);
    return;
}
void func_5500884016(unsigned depth) {
    extend(99);
    return;
}
void func_5500884176(unsigned depth) {
    extend(100);
    return;
}
void func_5500884304(unsigned depth) {
    extend(101);
    return;
}
void func_5500884496(unsigned depth) {
    extend(102);
    return;
}
void func_5500884624(unsigned depth) {
    extend(103);
    return;
}
void func_5500884752(unsigned depth) {
    extend(104);
    return;
}
void func_5500884880(unsigned depth) {
    extend(105);
    return;
}
void func_5500884432(unsigned depth) {
    extend(106);
    return;
}
void func_5500885200(unsigned depth) {
    extend(107);
    return;
}
void func_5500885328(unsigned depth) {
    extend(108);
    return;
}
void func_5500885456(unsigned depth) {
    extend(109);
    return;
}
void func_5500885584(unsigned depth) {
    extend(110);
    return;
}
void func_5500885712(unsigned depth) {
    extend(111);
    return;
}
void func_5500885840(unsigned depth) {
    extend(112);
    return;
}
void func_5500885968(unsigned depth) {
    extend(113);
    return;
}
void func_5500885008(unsigned depth) {
    extend(114);
    return;
}
void func_5500886352(unsigned depth) {
    extend(115);
    return;
}
void func_5500886480(unsigned depth) {
    extend(116);
    return;
}
void func_5500886608(unsigned depth) {
    extend(117);
    return;
}
void func_5500886736(unsigned depth) {
    extend(118);
    return;
}
void func_5500886864(unsigned depth) {
    extend(119);
    return;
}
void func_5500881008(unsigned depth) {
    extend(120);
    return;
}
void func_5500881136(unsigned depth) {
    extend(121);
    return;
}
void func_5500881264(unsigned depth) {
    extend(122);
    return;
}
void func_5500881392(unsigned depth) {
    extend(65);
    return;
}
void func_5500886992(unsigned depth) {
    extend(66);
    return;
}
void func_5500887120(unsigned depth) {
    extend(67);
    return;
}
void func_5500887248(unsigned depth) {
    extend(68);
    return;
}
void func_5500887376(unsigned depth) {
    extend(69);
    return;
}
void func_5500887504(unsigned depth) {
    extend(70);
    return;
}
void func_5500887632(unsigned depth) {
    extend(71);
    return;
}
void func_5500886096(unsigned depth) {
    extend(72);
    return;
}
void func_5500886224(unsigned depth) {
    extend(73);
    return;
}
void func_5500888272(unsigned depth) {
    extend(74);
    return;
}
void func_5500888400(unsigned depth) {
    extend(75);
    return;
}
void func_5500888528(unsigned depth) {
    extend(76);
    return;
}
void func_5500888656(unsigned depth) {
    extend(77);
    return;
}
void func_5500888784(unsigned depth) {
    extend(78);
    return;
}
void func_5500888912(unsigned depth) {
    extend(79);
    return;
}
void func_5500889040(unsigned depth) {
    extend(80);
    return;
}
void func_5500889168(unsigned depth) {
    extend(81);
    return;
}
void func_5500889296(unsigned depth) {
    extend(82);
    return;
}
void func_5500889424(unsigned depth) {
    extend(83);
    return;
}
void func_5500889552(unsigned depth) {
    extend(84);
    return;
}
void func_5500889680(unsigned depth) {
    extend(85);
    return;
}
void func_5500889808(unsigned depth) {
    extend(86);
    return;
}
void func_5500889936(unsigned depth) {
    extend(87);
    return;
}
void func_5500890064(unsigned depth) {
    extend(88);
    return;
}
void func_5500890192(unsigned depth) {
    extend(89);
    return;
}
void func_5500890320(unsigned depth) {
    extend(90);
    return;
}
void func_5500882848(unsigned depth) {
    extend(42);
    return;
}
void func_5500883008(unsigned depth) {
    extend(43);
    return;
}
void func_5500883136(unsigned depth) {
    extend(63);
    return;
}
void func_5500883328(unsigned depth) {
    extend(94);
    return;
}
void func_5500883456(unsigned depth) {
    extend(124);
    return;
}
void func_5500883264(unsigned depth) {
    extend(91);
    return;
}
void func_5500890512(unsigned depth) {
    extend(93);
    return;
}
void func_5500890640(unsigned depth) {
    extend(123);
    return;
}
void func_5500890768(unsigned depth) {
    extend(125);
    return;
}
void func_5500882416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5500882544(depth+1);
    func_5500876784(depth+1);
    func_5500890512(depth+1);
    return;
}
void func_5500882544(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5500880240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5500877168(depth+1);
    func_5500883008(depth+1);
    return;
}
void func_5500890896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5500883264(depth+1);
    func_5500876784(depth+1);
    func_5500890512(depth+1);
    return;
}
void func_5500891024(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5500876384(depth+1);
    func_5500891152(depth+1);
    func_5500876384(depth+1);
    return;
}
void func_5500891152(unsigned depth) {
    extend(45);
    return;
}
void func_5500880160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5500876640(depth+1);
    func_5500876784(depth+1);
    return;
}
void func_5500891280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5500877168(depth+1);
    func_5500882848(depth+1);
    return;
}
void func_5500891936(unsigned depth) {
    extend(95);
    return;
}
void func_5500892080(unsigned depth) {
    extend(64);
    return;
}
void func_5500892240(unsigned depth) {
    extend(35);
    return;
}
void func_5500892368(unsigned depth) {
    extend(37);
    return;
}
void func_5500892560(unsigned depth) {
    extend(38);
    return;
}
void func_5500892688(unsigned depth) {
    extend(61);
    return;
}
void func_5500892816(unsigned depth) {
    extend(126);
    return;
}
void func_5500892944(unsigned depth) {
    extend(96);
    return;
}
void func_5500892496(unsigned depth) {
    extend(39);
    return;
}
void func_5500893264(unsigned depth) {
    extend(34);
    return;
}
void func_5500891568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5500859456(depth+1);
    func_5500883456(depth+1);
    func_5500878560(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5500878992(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
