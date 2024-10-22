#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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

void func_5677034896(unsigned depth);
void func_5677035648(unsigned depth);
void func_5677035808(unsigned depth);
void func_5677035520(unsigned depth);
void func_5677035168(unsigned depth);
void func_5677034768(unsigned depth);
void func_5677035408(unsigned depth);
void func_5677035936(unsigned depth);
void func_5677037568(unsigned depth);
void func_5677035088(unsigned depth);
void func_5677036128(unsigned depth);
void func_5677036336(unsigned depth);
void func_5677036256(unsigned depth);
void func_5677036768(unsigned depth);
void func_5677037056(unsigned depth);
void func_5677036608(unsigned depth);
void func_5677036528(unsigned depth);
void func_5677036992(unsigned depth);
void func_5677037312(unsigned depth);
void func_5677037440(unsigned depth);
void func_5677038592(unsigned depth);
void func_5677038720(unsigned depth);
void func_5677038848(unsigned depth);
void func_5677038976(unsigned depth);
void func_5677039104(unsigned depth);
void func_5677039232(unsigned depth);
void func_5677039392(unsigned depth);
void func_5677039520(unsigned depth);
void func_5677039680(unsigned depth);
void func_5677039808(unsigned depth);
void func_5677040032(unsigned depth);
void func_5677040160(unsigned depth);
void func_5677040336(unsigned depth);
void func_5677037824(unsigned depth);
void func_5677038464(unsigned depth);
void func_5677038016(unsigned depth);
void func_5677040912(unsigned depth);
void func_5677041040(unsigned depth);
void func_5677041168(unsigned depth);
void func_5677041360(unsigned depth);
void func_5677041488(unsigned depth);
void func_5677041616(unsigned depth);
void func_5677041744(unsigned depth);
void func_5677041296(unsigned depth);
void func_5677037952(unsigned depth);
void func_5677042288(unsigned depth);
void func_5677038144(unsigned depth);
void func_5677038272(unsigned depth);
void func_5677042144(unsigned depth);
void func_5677042512(unsigned depth);
void func_5677042640(unsigned depth);
void func_5677036896(unsigned depth);
void func_5677043248(unsigned depth);
void func_5677037632(unsigned depth);
void func_5677043504(unsigned depth);
void func_5677042848(unsigned depth);
void func_5677043808(unsigned depth);
void func_5677043936(unsigned depth);
void func_5677045280(unsigned depth);
void func_5677045408(unsigned depth);
void func_5677045536(unsigned depth);
void func_5677045696(unsigned depth);
void func_5677045824(unsigned depth);
void func_5677046016(unsigned depth);
void func_5677046144(unsigned depth);
void func_5677040464(unsigned depth);
void func_5677040592(unsigned depth);
void func_5677045952(unsigned depth);
void func_5677046208(unsigned depth);
void func_5677046336(unsigned depth);
void func_5677046464(unsigned depth);
void func_5677046592(unsigned depth);
void func_5677046720(unsigned depth);
void func_5677046848(unsigned depth);
void func_5677046976(unsigned depth);
void func_5677040720(unsigned depth);
void func_5677047360(unsigned depth);
void func_5677047488(unsigned depth);
void func_5677047616(unsigned depth);
void func_5677047744(unsigned depth);
void func_5677047872(unsigned depth);
void func_5678055648(unsigned depth);
void func_5678055776(unsigned depth);
void func_5678055904(unsigned depth);
void func_5677048000(unsigned depth);
void func_5677048128(unsigned depth);
void func_5677048256(unsigned depth);
void func_5677048384(unsigned depth);
void func_5678055968(unsigned depth);
void func_5678056096(unsigned depth);
void func_5678056224(unsigned depth);
void func_5678056864(unsigned depth);
void func_5678056992(unsigned depth);
void func_5678057120(unsigned depth);
void func_5678057248(unsigned depth);
void func_5678057376(unsigned depth);
void func_5678057504(unsigned depth);
void func_5678057632(unsigned depth);
void func_5678057760(unsigned depth);
void func_5678057888(unsigned depth);
void func_5678058016(unsigned depth);
void func_5678058144(unsigned depth);
void func_5678058272(unsigned depth);
void func_5678058400(unsigned depth);
void func_5678058528(unsigned depth);
void func_5678058656(unsigned depth);
void func_5678058784(unsigned depth);
void func_5678058912(unsigned depth);
void func_5678059040(unsigned depth);
void func_5678059168(unsigned depth);
void func_5678059440(unsigned depth);
void func_5678059648(unsigned depth);
void func_5678059888(unsigned depth);
void func_5678060016(unsigned depth);
void func_5678059808(unsigned depth);
void func_5678060608(unsigned depth);
void func_5678059328(unsigned depth);
void func_5678060816(unsigned depth);
void func_5678061088(unsigned depth);
void func_5678061216(unsigned depth);
void func_5678061344(unsigned depth);
void func_5678061472(unsigned depth);
void func_5678061600(unsigned depth);
void func_5678061728(unsigned depth);
void func_5678061856(unsigned depth);
void func_5678060224(unsigned depth);
void func_5678060448(unsigned depth);
void func_5677034896(unsigned depth) {
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
            func_5677036992(depth+1);
        break;
    }
    return;
}
void func_5677035648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5677038592(depth+1);
        break;
        case 1:
            func_5677038848(depth+1);
        break;
        case 2:
            func_5677039104(depth+1);
        break;
        case 3:
            func_5677039392(depth+1);
        break;
        case 4:
            func_5677039680(depth+1);
        break;
        case 5:
            func_5677040032(depth+1);
        break;
        case 6:
            func_5677040336(depth+1);
        break;
    }
    return;
}
void func_5677035808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5677038464(depth+1);
        break;
        case 1:
            func_5677038016(depth+1);
        break;
        case 2:
            func_5677040912(depth+1);
        break;
        case 3:
            func_5677041040(depth+1);
        break;
        case 4:
            func_5677041168(depth+1);
        break;
        case 5:
            func_5677041360(depth+1);
        break;
        case 6:
            func_5677041488(depth+1);
        break;
        case 7:
            func_5677041616(depth+1);
        break;
        case 8:
            func_5677041744(depth+1);
        break;
        case 9:
            func_5677041296(depth+1);
        break;
    }
    return;
}
void func_5677035520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5677037952(depth+1);
        break;
        case 1:
            func_5677038144(depth+1);
        break;
        case 2:
            func_5677037056(depth+1);
        break;
    }
    return;
}
void func_5677035168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5677042144(depth+1);
        break;
        case 1:
            func_5677035088(depth+1);
        break;
        case 2:
            func_5677035408(depth+1);
        break;
    }
    return;
}
void func_5677034768(unsigned depth) {
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
            func_5677036896(depth+1);
        break;
    }
    return;
}
void func_5677035408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5677042848(depth+1);
        break;
        case 1:
            func_5677037568(depth+1);
        break;
    }
    return;
}
void func_5677035936(unsigned depth) {
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
            func_5677043808(depth+1);
        break;
    }
    return;
}
void func_5677037568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5677045280(depth+1);
        break;
        case 1:
            func_5677045408(depth+1);
        break;
        case 2:
            func_5677045536(depth+1);
        break;
        case 3:
            func_5677045696(depth+1);
        break;
        case 4:
            func_5677045824(depth+1);
        break;
        case 5:
            func_5677046016(depth+1);
        break;
        case 6:
            func_5677046144(depth+1);
        break;
        case 7:
            func_5677040464(depth+1);
        break;
        case 8:
            func_5677040592(depth+1);
        break;
        case 9:
            func_5677045952(depth+1);
        break;
        case 10:
            func_5677046208(depth+1);
        break;
        case 11:
            func_5677046336(depth+1);
        break;
        case 12:
            func_5677046464(depth+1);
        break;
        case 13:
            func_5677046592(depth+1);
        break;
        case 14:
            func_5677046720(depth+1);
        break;
        case 15:
            func_5677046848(depth+1);
        break;
        case 16:
            func_5677046976(depth+1);
        break;
        case 17:
            func_5677040720(depth+1);
        break;
        case 18:
            func_5677047360(depth+1);
        break;
        case 19:
            func_5677047488(depth+1);
        break;
        case 20:
            func_5677047616(depth+1);
        break;
        case 21:
            func_5677047744(depth+1);
        break;
        case 22:
            func_5677047872(depth+1);
        break;
        case 23:
            func_5678055648(depth+1);
        break;
        case 24:
            func_5678055776(depth+1);
        break;
        case 25:
            func_5678055904(depth+1);
        break;
        case 26:
            func_5677048000(depth+1);
        break;
        case 27:
            func_5677048128(depth+1);
        break;
        case 28:
            func_5677048256(depth+1);
        break;
        case 29:
            func_5677048384(depth+1);
        break;
        case 30:
            func_5678055968(depth+1);
        break;
        case 31:
            func_5678056096(depth+1);
        break;
        case 32:
            func_5678056224(depth+1);
        break;
        case 33:
            func_5678056864(depth+1);
        break;
        case 34:
            func_5678056992(depth+1);
        break;
        case 35:
            func_5678057120(depth+1);
        break;
        case 36:
            func_5678057248(depth+1);
        break;
        case 37:
            func_5678057376(depth+1);
        break;
        case 38:
            func_5678057504(depth+1);
        break;
        case 39:
            func_5678057632(depth+1);
        break;
        case 40:
            func_5678057760(depth+1);
        break;
        case 41:
            func_5678057888(depth+1);
        break;
        case 42:
            func_5678058016(depth+1);
        break;
        case 43:
            func_5678058144(depth+1);
        break;
        case 44:
            func_5678058272(depth+1);
        break;
        case 45:
            func_5678058400(depth+1);
        break;
        case 46:
            func_5678058528(depth+1);
        break;
        case 47:
            func_5678058656(depth+1);
        break;
        case 48:
            func_5678058784(depth+1);
        break;
        case 49:
            func_5678058912(depth+1);
        break;
        case 50:
            func_5678059040(depth+1);
        break;
        case 51:
            func_5678059168(depth+1);
        break;
    }
    return;
}
void func_5677035088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5678059440(depth+1);
        break;
        case 1:
            func_5677035808(depth+1);
        break;
    }
    return;
}
void func_5677036128(unsigned depth) {
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
            func_5678059648(depth+1);
        break;
        case 1:
            func_5677036768(depth+1);
        break;
    }
    return;
}
void func_5677036336(unsigned depth) {
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
            func_5678059888(depth+1);
        break;
    }
    return;
}
void func_5677036256(unsigned depth) {
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
            func_5677036128(depth+1);
        break;
    }
    return;
}
void func_5677036768(unsigned depth) {
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
            func_5677036608(depth+1);
        break;
        case 1:
            func_5677034896(depth+1);
        break;
        case 2:
            func_5677035936(depth+1);
        break;
        case 3:
            func_5677036528(depth+1);
        break;
        case 4:
            func_5677034768(depth+1);
        break;
        case 5:
            func_5677036336(depth+1);
        break;
    }
    return;
}
void func_5677037056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5678059808(depth+1);
        break;
        case 1:
            func_5678059328(depth+1);
        break;
        case 2:
            func_5677035168(depth+1);
        break;
    }
    return;
}
void func_5677036608(unsigned depth) {
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
            func_5678061088(depth+1);
        break;
        case 1:
            func_5678061472(depth+1);
        break;
        case 2:
            func_5678061728(depth+1);
        break;
    }
    return;
}
void func_5677036528(unsigned depth) {
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
            func_5678060224(depth+1);
        break;
    }
    return;
}
void func_5677036992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_5677035408(depth+1);
    func_5677037312(depth+1);
    func_5677035520(depth+1);
    func_5677037440(depth+1);
    return;
}
void func_5677037312(unsigned depth) {
    extend(61);
    return;
}
void func_5677037440(unsigned depth) {
    extend(59);
    return;
}
void func_5677038592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677038720(depth+1);
    func_5677035520(depth+1);
    return;
}
void func_5677038720(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5677038848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677038976(depth+1);
    func_5677035520(depth+1);
    return;
}
void func_5677038976(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_5677039104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677039232(depth+1);
    func_5677035520(depth+1);
    return;
}
void func_5677039232(unsigned depth) {
    extend(62);
    return;
}
void func_5677039392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677039520(depth+1);
    func_5677035520(depth+1);
    return;
}
void func_5677039520(unsigned depth) {
    extend(60);
    return;
}
void func_5677039680(unsigned depth) {
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
    func_5677035648(depth+1);
    func_5677039808(depth+1);
    func_5677035648(depth+1);
    return;
}
void func_5677039808(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5677040032(unsigned depth) {
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
    func_5677035648(depth+1);
    func_5677040160(depth+1);
    func_5677035648(depth+1);
    return;
}
void func_5677040160(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5677040336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5677037824(depth+1);
    func_5677035648(depth+1);
    return;
}
void func_5677037824(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_5677038464(unsigned depth) {
    extend(48);
    return;
}
void func_5677038016(unsigned depth) {
    extend(49);
    return;
}
void func_5677040912(unsigned depth) {
    extend(50);
    return;
}
void func_5677041040(unsigned depth) {
    extend(51);
    return;
}
void func_5677041168(unsigned depth) {
    extend(52);
    return;
}
void func_5677041360(unsigned depth) {
    extend(53);
    return;
}
void func_5677041488(unsigned depth) {
    extend(54);
    return;
}
void func_5677041616(unsigned depth) {
    extend(55);
    return;
}
void func_5677041744(unsigned depth) {
    extend(56);
    return;
}
void func_5677041296(unsigned depth) {
    extend(57);
    return;
}
void func_5677037952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677042288(depth+1);
    func_5677037056(depth+1);
    return;
}
void func_5677042288(unsigned depth) {
    extend(43);
    return;
}
void func_5677038144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5677035520(depth+1);
    func_5677038272(depth+1);
    func_5677037056(depth+1);
    return;
}
void func_5677038272(unsigned depth) {
    extend(45);
    return;
}
void func_5677042144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5677042512(depth+1);
    func_5677035520(depth+1);
    func_5677042640(depth+1);
    return;
}
void func_5677042512(unsigned depth) {
    extend(40);
    return;
}
void func_5677042640(unsigned depth) {
    extend(41);
    return;
}
void func_5677036896(unsigned depth) {
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
    func_5677043248(depth+1);
    func_5677035408(depth+1);
    func_5677042512(depth+1);
    func_5677042640(depth+1);
    func_5677037632(depth+1);
    func_5677036128(depth+1);
    func_5677043504(depth+1);
    return;
}
void func_5677043248(unsigned depth) {
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
void func_5677037632(unsigned depth) {
    extend(123);
    return;
}
void func_5677043504(unsigned depth) {
    extend(125);
    return;
}
void func_5677042848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_5677037568(depth+1);
    func_5677035408(depth+1);
    return;
}
void func_5677043808(unsigned depth) {
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
    func_5677043936(depth+1);
    func_5677042512(depth+1);
    func_5677035648(depth+1);
    func_5677042640(depth+1);
    func_5677037632(depth+1);
    func_5677036128(depth+1);
    func_5677043504(depth+1);
    return;
}
void func_5677043936(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5677045280(unsigned depth) {
    extend(97);
    return;
}
void func_5677045408(unsigned depth) {
    extend(98);
    return;
}
void func_5677045536(unsigned depth) {
    extend(99);
    return;
}
void func_5677045696(unsigned depth) {
    extend(100);
    return;
}
void func_5677045824(unsigned depth) {
    extend(101);
    return;
}
void func_5677046016(unsigned depth) {
    extend(102);
    return;
}
void func_5677046144(unsigned depth) {
    extend(103);
    return;
}
void func_5677040464(unsigned depth) {
    extend(104);
    return;
}
void func_5677040592(unsigned depth) {
    extend(105);
    return;
}
void func_5677045952(unsigned depth) {
    extend(106);
    return;
}
void func_5677046208(unsigned depth) {
    extend(107);
    return;
}
void func_5677046336(unsigned depth) {
    extend(108);
    return;
}
void func_5677046464(unsigned depth) {
    extend(109);
    return;
}
void func_5677046592(unsigned depth) {
    extend(110);
    return;
}
void func_5677046720(unsigned depth) {
    extend(111);
    return;
}
void func_5677046848(unsigned depth) {
    extend(112);
    return;
}
void func_5677046976(unsigned depth) {
    extend(113);
    return;
}
void func_5677040720(unsigned depth) {
    extend(114);
    return;
}
void func_5677047360(unsigned depth) {
    extend(115);
    return;
}
void func_5677047488(unsigned depth) {
    extend(116);
    return;
}
void func_5677047616(unsigned depth) {
    extend(117);
    return;
}
void func_5677047744(unsigned depth) {
    extend(118);
    return;
}
void func_5677047872(unsigned depth) {
    extend(119);
    return;
}
void func_5678055648(unsigned depth) {
    extend(120);
    return;
}
void func_5678055776(unsigned depth) {
    extend(121);
    return;
}
void func_5678055904(unsigned depth) {
    extend(122);
    return;
}
void func_5677048000(unsigned depth) {
    extend(65);
    return;
}
void func_5677048128(unsigned depth) {
    extend(66);
    return;
}
void func_5677048256(unsigned depth) {
    extend(67);
    return;
}
void func_5677048384(unsigned depth) {
    extend(68);
    return;
}
void func_5678055968(unsigned depth) {
    extend(69);
    return;
}
void func_5678056096(unsigned depth) {
    extend(70);
    return;
}
void func_5678056224(unsigned depth) {
    extend(71);
    return;
}
void func_5678056864(unsigned depth) {
    extend(72);
    return;
}
void func_5678056992(unsigned depth) {
    extend(73);
    return;
}
void func_5678057120(unsigned depth) {
    extend(74);
    return;
}
void func_5678057248(unsigned depth) {
    extend(75);
    return;
}
void func_5678057376(unsigned depth) {
    extend(76);
    return;
}
void func_5678057504(unsigned depth) {
    extend(77);
    return;
}
void func_5678057632(unsigned depth) {
    extend(78);
    return;
}
void func_5678057760(unsigned depth) {
    extend(79);
    return;
}
void func_5678057888(unsigned depth) {
    extend(80);
    return;
}
void func_5678058016(unsigned depth) {
    extend(81);
    return;
}
void func_5678058144(unsigned depth) {
    extend(82);
    return;
}
void func_5678058272(unsigned depth) {
    extend(83);
    return;
}
void func_5678058400(unsigned depth) {
    extend(84);
    return;
}
void func_5678058528(unsigned depth) {
    extend(85);
    return;
}
void func_5678058656(unsigned depth) {
    extend(86);
    return;
}
void func_5678058784(unsigned depth) {
    extend(87);
    return;
}
void func_5678058912(unsigned depth) {
    extend(88);
    return;
}
void func_5678059040(unsigned depth) {
    extend(89);
    return;
}
void func_5678059168(unsigned depth) {
    extend(90);
    return;
}
void func_5678059440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5677035808(depth+1);
    func_5677035088(depth+1);
    return;
}
void func_5678059648(unsigned depth) {
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
    func_5677036128(depth+1);
    func_5677036768(depth+1);
    return;
}
void func_5678059888(unsigned depth) {
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
    func_5678060016(depth+1);
    func_5677035520(depth+1);
    func_5677037440(depth+1);
    return;
}
void func_5678060016(unsigned depth) {
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
void func_5678059808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5677037056(depth+1);
    func_5678060608(depth+1);
    func_5677035168(depth+1);
    return;
}
void func_5678060608(unsigned depth) {
    extend(42);
    return;
}
void func_5678059328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5677037056(depth+1);
    func_5678060816(depth+1);
    func_5677035168(depth+1);
    return;
}
void func_5678060816(unsigned depth) {
    extend(47);
    return;
}
void func_5678061088(unsigned depth) {
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
    func_5678061216(depth+1);
    func_5677035408(depth+1);
    func_5678061344(depth+1);
    return;
}
void func_5678061216(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5678061344(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_5678061472(unsigned depth) {
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
    func_5678061600(depth+1);
    func_5677035408(depth+1);
    func_5678061344(depth+1);
    return;
}
void func_5678061600(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_5678061728(unsigned depth) {
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
    func_5678061856(depth+1);
    func_5677035408(depth+1);
    func_5678061344(depth+1);
    return;
}
void func_5678061856(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_5678060224(unsigned depth) {
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
    func_5678060448(depth+1);
    func_5677042512(depth+1);
    func_5677035648(depth+1);
    func_5677042640(depth+1);
    func_5677037632(depth+1);
    func_5677036128(depth+1);
    func_5677043504(depth+1);
    return;
}
void func_5678060448(unsigned depth) {
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
    func_5677036256(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
