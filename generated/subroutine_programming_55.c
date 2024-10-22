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

void func_5299547536(unsigned depth);
void func_5299548288(unsigned depth);
void func_5299548448(unsigned depth);
void func_5299548160(unsigned depth);
void func_5299547808(unsigned depth);
void func_5299547408(unsigned depth);
void func_5299548048(unsigned depth);
void func_5299548576(unsigned depth);
void func_5299550208(unsigned depth);
void func_5299547728(unsigned depth);
void func_5299548768(unsigned depth);
void func_5299548976(unsigned depth);
void func_5299548896(unsigned depth);
void func_5299549408(unsigned depth);
void func_5299549696(unsigned depth);
void func_5299549248(unsigned depth);
void func_5299549168(unsigned depth);
void func_5299549632(unsigned depth);
void func_5299549952(unsigned depth);
void func_5299550080(unsigned depth);
void func_5299551232(unsigned depth);
void func_5299551360(unsigned depth);
void func_5299551488(unsigned depth);
void func_5299551616(unsigned depth);
void func_5299551744(unsigned depth);
void func_5299551872(unsigned depth);
void func_5299552032(unsigned depth);
void func_5299552160(unsigned depth);
void func_5299552320(unsigned depth);
void func_5299552448(unsigned depth);
void func_5299552672(unsigned depth);
void func_5299552800(unsigned depth);
void func_5299552976(unsigned depth);
void func_5299550464(unsigned depth);
void func_5299551104(unsigned depth);
void func_5299550656(unsigned depth);
void func_5299553552(unsigned depth);
void func_5299553680(unsigned depth);
void func_5299553808(unsigned depth);
void func_5299554000(unsigned depth);
void func_5299554128(unsigned depth);
void func_5299554256(unsigned depth);
void func_5299554384(unsigned depth);
void func_5299553936(unsigned depth);
void func_5299550592(unsigned depth);
void func_5299554928(unsigned depth);
void func_5299550784(unsigned depth);
void func_5299550912(unsigned depth);
void func_5299554784(unsigned depth);
void func_5299555152(unsigned depth);
void func_5299555280(unsigned depth);
void func_5299549536(unsigned depth);
void func_5299555888(unsigned depth);
void func_5299550272(unsigned depth);
void func_5299556144(unsigned depth);
void func_5299555488(unsigned depth);
void func_5299556448(unsigned depth);
void func_5299556576(unsigned depth);
void func_5299557920(unsigned depth);
void func_5299558048(unsigned depth);
void func_5299558176(unsigned depth);
void func_5299558336(unsigned depth);
void func_5299558464(unsigned depth);
void func_5299558656(unsigned depth);
void func_5299558784(unsigned depth);
void func_5299553104(unsigned depth);
void func_5299553232(unsigned depth);
void func_5299558592(unsigned depth);
void func_5299558848(unsigned depth);
void func_5299558976(unsigned depth);
void func_5299559104(unsigned depth);
void func_5299559232(unsigned depth);
void func_5299559360(unsigned depth);
void func_5299559488(unsigned depth);
void func_5299559616(unsigned depth);
void func_5299553360(unsigned depth);
void func_5299560000(unsigned depth);
void func_5299560128(unsigned depth);
void func_5299560256(unsigned depth);
void func_5299560384(unsigned depth);
void func_5299560512(unsigned depth);
void func_5299560640(unsigned depth);
void func_5299560768(unsigned depth);
void func_5299560896(unsigned depth);
void func_5299561024(unsigned depth);
void func_5299561152(unsigned depth);
void func_5299561280(unsigned depth);
void func_5299561408(unsigned depth);
void func_5299561536(unsigned depth);
void func_5299561664(unsigned depth);
void func_5299561792(unsigned depth);
void func_5299559744(unsigned depth);
void func_5299559872(unsigned depth);
void func_5299562432(unsigned depth);
void func_5299562560(unsigned depth);
void func_5299562688(unsigned depth);
void func_5299562816(unsigned depth);
void func_5299562944(unsigned depth);
void func_5299563072(unsigned depth);
void func_5299563200(unsigned depth);
void func_5299563328(unsigned depth);
void func_5299563456(unsigned depth);
void func_5299563584(unsigned depth);
void func_5299563712(unsigned depth);
void func_5299563840(unsigned depth);
void func_5299563968(unsigned depth);
void func_5299564096(unsigned depth);
void func_5299564224(unsigned depth);
void func_5299564352(unsigned depth);
void func_5299564480(unsigned depth);
void func_5299556272(unsigned depth);
void func_5299555616(unsigned depth);
void func_5299556848(unsigned depth);
void func_5299556976(unsigned depth);
void func_5299557472(unsigned depth);
void func_5299557600(unsigned depth);
void func_5299557104(unsigned depth);
void func_5299557728(unsigned depth);
void func_5299564688(unsigned depth);
void func_5299564816(unsigned depth);
void func_5299564944(unsigned depth);
void func_5299565072(unsigned depth);
void func_5299565200(unsigned depth);
void func_5299565328(unsigned depth);
void func_5299565456(unsigned depth);
void func_5299564608(unsigned depth);
void func_5299557376(unsigned depth);
void func_5299547536(unsigned depth) {
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
            func_5299549632(depth+1);
        break;
    }
    return;
}
void func_5299548288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_5299551232(depth+1);
        break;
        case 1:
            func_5299551488(depth+1);
        break;
        case 2:
            func_5299551744(depth+1);
        break;
        case 3:
            func_5299552032(depth+1);
        break;
        case 4:
            func_5299552320(depth+1);
        break;
        case 5:
            func_5299552672(depth+1);
        break;
        case 6:
            func_5299552976(depth+1);
        break;
    }
    return;
}
void func_5299548448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5299551104(depth+1);
        break;
        case 1:
            func_5299550656(depth+1);
        break;
        case 2:
            func_5299553552(depth+1);
        break;
        case 3:
            func_5299553680(depth+1);
        break;
        case 4:
            func_5299553808(depth+1);
        break;
        case 5:
            func_5299554000(depth+1);
        break;
        case 6:
            func_5299554128(depth+1);
        break;
        case 7:
            func_5299554256(depth+1);
        break;
        case 8:
            func_5299554384(depth+1);
        break;
        case 9:
            func_5299553936(depth+1);
        break;
    }
    return;
}
void func_5299548160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5299550592(depth+1);
        break;
        case 1:
            func_5299550784(depth+1);
        break;
        case 2:
            func_5299549696(depth+1);
        break;
    }
    return;
}
void func_5299547808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5299554784(depth+1);
        break;
        case 1:
            func_5299547728(depth+1);
        break;
        case 2:
            func_5299548048(depth+1);
        break;
    }
    return;
}
void func_5299547408(unsigned depth) {
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
            func_5299549536(depth+1);
        break;
    }
    return;
}
void func_5299548048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5299555488(depth+1);
        break;
        case 1:
            func_5299550208(depth+1);
        break;
    }
    return;
}
void func_5299548576(unsigned depth) {
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
            func_5299556448(depth+1);
        break;
    }
    return;
}
void func_5299550208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5299557920(depth+1);
        break;
        case 1:
            func_5299558048(depth+1);
        break;
        case 2:
            func_5299558176(depth+1);
        break;
        case 3:
            func_5299558336(depth+1);
        break;
        case 4:
            func_5299558464(depth+1);
        break;
        case 5:
            func_5299558656(depth+1);
        break;
        case 6:
            func_5299558784(depth+1);
        break;
        case 7:
            func_5299553104(depth+1);
        break;
        case 8:
            func_5299553232(depth+1);
        break;
        case 9:
            func_5299558592(depth+1);
        break;
        case 10:
            func_5299558848(depth+1);
        break;
        case 11:
            func_5299558976(depth+1);
        break;
        case 12:
            func_5299559104(depth+1);
        break;
        case 13:
            func_5299559232(depth+1);
        break;
        case 14:
            func_5299559360(depth+1);
        break;
        case 15:
            func_5299559488(depth+1);
        break;
        case 16:
            func_5299559616(depth+1);
        break;
        case 17:
            func_5299553360(depth+1);
        break;
        case 18:
            func_5299560000(depth+1);
        break;
        case 19:
            func_5299560128(depth+1);
        break;
        case 20:
            func_5299560256(depth+1);
        break;
        case 21:
            func_5299560384(depth+1);
        break;
        case 22:
            func_5299560512(depth+1);
        break;
        case 23:
            func_5299560640(depth+1);
        break;
        case 24:
            func_5299560768(depth+1);
        break;
        case 25:
            func_5299560896(depth+1);
        break;
        case 26:
            func_5299561024(depth+1);
        break;
        case 27:
            func_5299561152(depth+1);
        break;
        case 28:
            func_5299561280(depth+1);
        break;
        case 29:
            func_5299561408(depth+1);
        break;
        case 30:
            func_5299561536(depth+1);
        break;
        case 31:
            func_5299561664(depth+1);
        break;
        case 32:
            func_5299561792(depth+1);
        break;
        case 33:
            func_5299559744(depth+1);
        break;
        case 34:
            func_5299559872(depth+1);
        break;
        case 35:
            func_5299562432(depth+1);
        break;
        case 36:
            func_5299562560(depth+1);
        break;
        case 37:
            func_5299562688(depth+1);
        break;
        case 38:
            func_5299562816(depth+1);
        break;
        case 39:
            func_5299562944(depth+1);
        break;
        case 40:
            func_5299563072(depth+1);
        break;
        case 41:
            func_5299563200(depth+1);
        break;
        case 42:
            func_5299563328(depth+1);
        break;
        case 43:
            func_5299563456(depth+1);
        break;
        case 44:
            func_5299563584(depth+1);
        break;
        case 45:
            func_5299563712(depth+1);
        break;
        case 46:
            func_5299563840(depth+1);
        break;
        case 47:
            func_5299563968(depth+1);
        break;
        case 48:
            func_5299564096(depth+1);
        break;
        case 49:
            func_5299564224(depth+1);
        break;
        case 50:
            func_5299564352(depth+1);
        break;
        case 51:
            func_5299564480(depth+1);
        break;
    }
    return;
}
void func_5299547728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5299556272(depth+1);
        break;
        case 1:
            func_5299548448(depth+1);
        break;
    }
    return;
}
void func_5299548768(unsigned depth) {
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
            func_5299555616(depth+1);
        break;
        case 1:
            func_5299549408(depth+1);
        break;
    }
    return;
}
void func_5299548976(unsigned depth) {
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
            func_5299556848(depth+1);
        break;
    }
    return;
}
void func_5299548896(unsigned depth) {
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
            func_5299548768(depth+1);
        break;
    }
    return;
}
void func_5299549408(unsigned depth) {
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
            func_5299549248(depth+1);
        break;
        case 1:
            func_5299547536(depth+1);
        break;
        case 2:
            func_5299548576(depth+1);
        break;
        case 3:
            func_5299549168(depth+1);
        break;
        case 4:
            func_5299547408(depth+1);
        break;
        case 5:
            func_5299548976(depth+1);
        break;
    }
    return;
}
void func_5299549696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5299557472(depth+1);
        break;
        case 1:
            func_5299557104(depth+1);
        break;
        case 2:
            func_5299547808(depth+1);
        break;
    }
    return;
}
void func_5299549248(unsigned depth) {
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
            func_5299564688(depth+1);
        break;
        case 1:
            func_5299565072(depth+1);
        break;
        case 2:
            func_5299565328(depth+1);
        break;
    }
    return;
}
void func_5299549168(unsigned depth) {
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
            func_5299564608(depth+1);
        break;
    }
    return;
}
void func_5299549632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_5299548048(depth+1);
    func_5299549952(depth+1);
    func_5299548160(depth+1);
    func_5299550080(depth+1);
    return;
}
void func_5299549952(unsigned depth) {
    extend(61);
    return;
}
void func_5299550080(unsigned depth) {
    extend(59);
    return;
}
void func_5299551232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299551360(depth+1);
    func_5299548160(depth+1);
    return;
}
void func_5299551360(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5299551488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299551616(depth+1);
    func_5299548160(depth+1);
    return;
}
void func_5299551616(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_5299551744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299551872(depth+1);
    func_5299548160(depth+1);
    return;
}
void func_5299551872(unsigned depth) {
    extend(62);
    return;
}
void func_5299552032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299552160(depth+1);
    func_5299548160(depth+1);
    return;
}
void func_5299552160(unsigned depth) {
    extend(60);
    return;
}
void func_5299552320(unsigned depth) {
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
    func_5299548288(depth+1);
    func_5299552448(depth+1);
    func_5299548288(depth+1);
    return;
}
void func_5299552448(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5299552672(unsigned depth) {
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
    func_5299548288(depth+1);
    func_5299552800(depth+1);
    func_5299548288(depth+1);
    return;
}
void func_5299552800(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5299552976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_5299550464(depth+1);
    func_5299548288(depth+1);
    return;
}
void func_5299550464(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_5299551104(unsigned depth) {
    extend(48);
    return;
}
void func_5299550656(unsigned depth) {
    extend(49);
    return;
}
void func_5299553552(unsigned depth) {
    extend(50);
    return;
}
void func_5299553680(unsigned depth) {
    extend(51);
    return;
}
void func_5299553808(unsigned depth) {
    extend(52);
    return;
}
void func_5299554000(unsigned depth) {
    extend(53);
    return;
}
void func_5299554128(unsigned depth) {
    extend(54);
    return;
}
void func_5299554256(unsigned depth) {
    extend(55);
    return;
}
void func_5299554384(unsigned depth) {
    extend(56);
    return;
}
void func_5299553936(unsigned depth) {
    extend(57);
    return;
}
void func_5299550592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299554928(depth+1);
    func_5299549696(depth+1);
    return;
}
void func_5299554928(unsigned depth) {
    extend(43);
    return;
}
void func_5299550784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_5299548160(depth+1);
    func_5299550912(depth+1);
    func_5299549696(depth+1);
    return;
}
void func_5299550912(unsigned depth) {
    extend(45);
    return;
}
void func_5299554784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_5299555152(depth+1);
    func_5299548160(depth+1);
    func_5299555280(depth+1);
    return;
}
void func_5299555152(unsigned depth) {
    extend(40);
    return;
}
void func_5299555280(unsigned depth) {
    extend(41);
    return;
}
void func_5299549536(unsigned depth) {
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
    func_5299555888(depth+1);
    func_5299548048(depth+1);
    func_5299555152(depth+1);
    func_5299555280(depth+1);
    func_5299550272(depth+1);
    func_5299548768(depth+1);
    func_5299556144(depth+1);
    return;
}
void func_5299555888(unsigned depth) {
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
void func_5299550272(unsigned depth) {
    extend(123);
    return;
}
void func_5299556144(unsigned depth) {
    extend(125);
    return;
}
void func_5299555488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_5299550208(depth+1);
    func_5299548048(depth+1);
    return;
}
void func_5299556448(unsigned depth) {
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
    func_5299556576(depth+1);
    func_5299555152(depth+1);
    func_5299548288(depth+1);
    func_5299555280(depth+1);
    func_5299550272(depth+1);
    func_5299548768(depth+1);
    func_5299556144(depth+1);
    return;
}
void func_5299556576(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5299557920(unsigned depth) {
    extend(97);
    return;
}
void func_5299558048(unsigned depth) {
    extend(98);
    return;
}
void func_5299558176(unsigned depth) {
    extend(99);
    return;
}
void func_5299558336(unsigned depth) {
    extend(100);
    return;
}
void func_5299558464(unsigned depth) {
    extend(101);
    return;
}
void func_5299558656(unsigned depth) {
    extend(102);
    return;
}
void func_5299558784(unsigned depth) {
    extend(103);
    return;
}
void func_5299553104(unsigned depth) {
    extend(104);
    return;
}
void func_5299553232(unsigned depth) {
    extend(105);
    return;
}
void func_5299558592(unsigned depth) {
    extend(106);
    return;
}
void func_5299558848(unsigned depth) {
    extend(107);
    return;
}
void func_5299558976(unsigned depth) {
    extend(108);
    return;
}
void func_5299559104(unsigned depth) {
    extend(109);
    return;
}
void func_5299559232(unsigned depth) {
    extend(110);
    return;
}
void func_5299559360(unsigned depth) {
    extend(111);
    return;
}
void func_5299559488(unsigned depth) {
    extend(112);
    return;
}
void func_5299559616(unsigned depth) {
    extend(113);
    return;
}
void func_5299553360(unsigned depth) {
    extend(114);
    return;
}
void func_5299560000(unsigned depth) {
    extend(115);
    return;
}
void func_5299560128(unsigned depth) {
    extend(116);
    return;
}
void func_5299560256(unsigned depth) {
    extend(117);
    return;
}
void func_5299560384(unsigned depth) {
    extend(118);
    return;
}
void func_5299560512(unsigned depth) {
    extend(119);
    return;
}
void func_5299560640(unsigned depth) {
    extend(120);
    return;
}
void func_5299560768(unsigned depth) {
    extend(121);
    return;
}
void func_5299560896(unsigned depth) {
    extend(122);
    return;
}
void func_5299561024(unsigned depth) {
    extend(65);
    return;
}
void func_5299561152(unsigned depth) {
    extend(66);
    return;
}
void func_5299561280(unsigned depth) {
    extend(67);
    return;
}
void func_5299561408(unsigned depth) {
    extend(68);
    return;
}
void func_5299561536(unsigned depth) {
    extend(69);
    return;
}
void func_5299561664(unsigned depth) {
    extend(70);
    return;
}
void func_5299561792(unsigned depth) {
    extend(71);
    return;
}
void func_5299559744(unsigned depth) {
    extend(72);
    return;
}
void func_5299559872(unsigned depth) {
    extend(73);
    return;
}
void func_5299562432(unsigned depth) {
    extend(74);
    return;
}
void func_5299562560(unsigned depth) {
    extend(75);
    return;
}
void func_5299562688(unsigned depth) {
    extend(76);
    return;
}
void func_5299562816(unsigned depth) {
    extend(77);
    return;
}
void func_5299562944(unsigned depth) {
    extend(78);
    return;
}
void func_5299563072(unsigned depth) {
    extend(79);
    return;
}
void func_5299563200(unsigned depth) {
    extend(80);
    return;
}
void func_5299563328(unsigned depth) {
    extend(81);
    return;
}
void func_5299563456(unsigned depth) {
    extend(82);
    return;
}
void func_5299563584(unsigned depth) {
    extend(83);
    return;
}
void func_5299563712(unsigned depth) {
    extend(84);
    return;
}
void func_5299563840(unsigned depth) {
    extend(85);
    return;
}
void func_5299563968(unsigned depth) {
    extend(86);
    return;
}
void func_5299564096(unsigned depth) {
    extend(87);
    return;
}
void func_5299564224(unsigned depth) {
    extend(88);
    return;
}
void func_5299564352(unsigned depth) {
    extend(89);
    return;
}
void func_5299564480(unsigned depth) {
    extend(90);
    return;
}
void func_5299556272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5299548448(depth+1);
    func_5299547728(depth+1);
    return;
}
void func_5299555616(unsigned depth) {
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
    func_5299548768(depth+1);
    func_5299549408(depth+1);
    return;
}
void func_5299556848(unsigned depth) {
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
    func_5299556976(depth+1);
    func_5299548160(depth+1);
    func_5299550080(depth+1);
    return;
}
void func_5299556976(unsigned depth) {
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
void func_5299557472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_5299549696(depth+1);
    func_5299557600(depth+1);
    func_5299547808(depth+1);
    return;
}
void func_5299557600(unsigned depth) {
    extend(42);
    return;
}
void func_5299557104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_5299549696(depth+1);
    func_5299557728(depth+1);
    func_5299547808(depth+1);
    return;
}
void func_5299557728(unsigned depth) {
    extend(47);
    return;
}
void func_5299564688(unsigned depth) {
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
    func_5299564816(depth+1);
    func_5299548048(depth+1);
    func_5299564944(depth+1);
    return;
}
void func_5299564816(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5299564944(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_5299565072(unsigned depth) {
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
    func_5299565200(depth+1);
    func_5299548048(depth+1);
    func_5299564944(depth+1);
    return;
}
void func_5299565200(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_5299565328(unsigned depth) {
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
    func_5299565456(depth+1);
    func_5299548048(depth+1);
    func_5299564944(depth+1);
    return;
}
void func_5299565456(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_5299564608(unsigned depth) {
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
    func_5299557376(depth+1);
    func_5299555152(depth+1);
    func_5299548288(depth+1);
    func_5299555280(depth+1);
    func_5299550272(depth+1);
    func_5299548768(depth+1);
    func_5299556144(depth+1);
    return;
}
void func_5299557376(unsigned depth) {
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
    func_5299548896(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
