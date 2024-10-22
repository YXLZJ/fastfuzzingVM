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

void func_4930434112(unsigned depth);
void func_4930450624(unsigned depth);
void func_4930450832(unsigned depth);
void func_4930451040(unsigned depth);
void func_4930450496(unsigned depth);
void func_4930451696(unsigned depth);
void func_4930451824(unsigned depth);
void func_4930451600(unsigned depth);
void func_4930451376(unsigned depth);
void func_4930453392(unsigned depth);
void func_4930452512(unsigned depth);
void func_4930451952(unsigned depth);
void func_4930452080(unsigned depth);
void func_4930452208(unsigned depth);
void func_4930452336(unsigned depth);
void func_4930452640(unsigned depth);
void func_4930451296(unsigned depth);
void func_4930451440(unsigned depth);
void func_4930453088(unsigned depth);
void func_4930453216(unsigned depth);
void func_4930453520(unsigned depth);
void func_4930453648(unsigned depth);
void func_4930454176(unsigned depth);
void func_4930453856(unsigned depth);
void func_4930453776(unsigned depth);
void func_4930454048(unsigned depth);
void func_4930454368(unsigned depth);
void func_4930454496(unsigned depth);
void func_4930454992(unsigned depth);
void func_4930455120(unsigned depth);
void func_4930455248(unsigned depth);
void func_4930455408(unsigned depth);
void func_4930455536(unsigned depth);
void func_4930452896(unsigned depth);
void func_4930456112(unsigned depth);
void func_4930456240(unsigned depth);
void func_4930456368(unsigned depth);
void func_4930452832(unsigned depth);
void func_4930454688(unsigned depth);
void func_4930456688(unsigned depth);
void func_4930456816(unsigned depth);
void func_4930456944(unsigned depth);
void func_4930458416(unsigned depth);
void func_4930458544(unsigned depth);
void func_4930458672(unsigned depth);
void func_4930458832(unsigned depth);
void func_4930458960(unsigned depth);
void func_4930459152(unsigned depth);
void func_4930459280(unsigned depth);
void func_4930459408(unsigned depth);
void func_4930459536(unsigned depth);
void func_4930459088(unsigned depth);
void func_4930459856(unsigned depth);
void func_4930459984(unsigned depth);
void func_4930460112(unsigned depth);
void func_4930460240(unsigned depth);
void func_4930460368(unsigned depth);
void func_4930460496(unsigned depth);
void func_4930460624(unsigned depth);
void func_4930459664(unsigned depth);
void func_4930461008(unsigned depth);
void func_4930461136(unsigned depth);
void func_4930461264(unsigned depth);
void func_4930461392(unsigned depth);
void func_4930461520(unsigned depth);
void func_4930455664(unsigned depth);
void func_4930455792(unsigned depth);
void func_4930455920(unsigned depth);
void func_4930456048(unsigned depth);
void func_4930461648(unsigned depth);
void func_4930461776(unsigned depth);
void func_4930461904(unsigned depth);
void func_4930462032(unsigned depth);
void func_4930462160(unsigned depth);
void func_4930462288(unsigned depth);
void func_4930460752(unsigned depth);
void func_4930460880(unsigned depth);
void func_4930462928(unsigned depth);
void func_4930463056(unsigned depth);
void func_4930463184(unsigned depth);
void func_4930463312(unsigned depth);
void func_4930463440(unsigned depth);
void func_4930463568(unsigned depth);
void func_4930463696(unsigned depth);
void func_4930463824(unsigned depth);
void func_4930463952(unsigned depth);
void func_4930464080(unsigned depth);
void func_4930464208(unsigned depth);
void func_4930464336(unsigned depth);
void func_4930464464(unsigned depth);
void func_4930464592(unsigned depth);
void func_4930464720(unsigned depth);
void func_4930464848(unsigned depth);
void func_4930464976(unsigned depth);
void func_4930457504(unsigned depth);
void func_4930457664(unsigned depth);
void func_4930457792(unsigned depth);
void func_4930457984(unsigned depth);
void func_4930458112(unsigned depth);
void func_4930457920(unsigned depth);
void func_4930465168(unsigned depth);
void func_4930465296(unsigned depth);
void func_4930465424(unsigned depth);
void func_4930457072(unsigned depth);
void func_4930457200(unsigned depth);
void func_4930454896(unsigned depth);
void func_4930465552(unsigned depth);
void func_4930465680(unsigned depth);
void func_4930465808(unsigned depth);
void func_4930454816(unsigned depth);
void func_4930465936(unsigned depth);
void func_4930466592(unsigned depth);
void func_4930466736(unsigned depth);
void func_4930466896(unsigned depth);
void func_4930467024(unsigned depth);
void func_4930467216(unsigned depth);
void func_4930467344(unsigned depth);
void func_4930467472(unsigned depth);
void func_4930467600(unsigned depth);
void func_4930467152(unsigned depth);
void func_4930467920(unsigned depth);
void func_4930466224(unsigned depth);
void func_4930434112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4930453856(depth+1);
        break;
        case 1:
            func_4930453216(depth+1);
        break;
    }
    return;
}
void func_4930450624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930453776(depth+1);
        break;
    }
    return;
}
void func_4930450832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4930453520(depth+1);
        break;
        case 1:
            func_4930452208(depth+1);
        break;
        case 2:
            func_4930451824(depth+1);
        break;
    }
    return;
}
void func_4930451040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4930452080(depth+1);
        break;
        case 1:
            func_4930454048(depth+1);
        break;
    }
    return;
}
void func_4930450496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930454496(depth+1);
        break;
    }
    return;
}
void func_4930451696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4930454992(depth+1);
        break;
        case 1:
            func_4930455120(depth+1);
        break;
        case 2:
            func_4930455248(depth+1);
        break;
        case 3:
            func_4930455408(depth+1);
        break;
        case 4:
            func_4930455536(depth+1);
        break;
        case 5:
            func_4930452896(depth+1);
        break;
        case 6:
            func_4930456112(depth+1);
        break;
        case 7:
            func_4930456240(depth+1);
        break;
        case 8:
            func_4930456368(depth+1);
        break;
        case 9:
            func_4930452832(depth+1);
        break;
    }
    return;
}
void func_4930451824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4930451376(depth+1);
        break;
        case 1:
            func_4930450624(depth+1);
        break;
        case 2:
            func_4930451600(depth+1);
        break;
        case 3:
            func_4930451040(depth+1);
        break;
        case 4:
            func_4930453088(depth+1);
        break;
    }
    return;
}
void func_4930451600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930454688(depth+1);
        break;
    }
    return;
}
void func_4930451376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930456688(depth+1);
        break;
    }
    return;
}
void func_4930453392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4930458416(depth+1);
        break;
        case 1:
            func_4930458544(depth+1);
        break;
        case 2:
            func_4930458672(depth+1);
        break;
        case 3:
            func_4930458832(depth+1);
        break;
        case 4:
            func_4930458960(depth+1);
        break;
        case 5:
            func_4930459152(depth+1);
        break;
        case 6:
            func_4930459280(depth+1);
        break;
        case 7:
            func_4930459408(depth+1);
        break;
        case 8:
            func_4930459536(depth+1);
        break;
        case 9:
            func_4930459088(depth+1);
        break;
        case 10:
            func_4930459856(depth+1);
        break;
        case 11:
            func_4930459984(depth+1);
        break;
        case 12:
            func_4930460112(depth+1);
        break;
        case 13:
            func_4930460240(depth+1);
        break;
        case 14:
            func_4930460368(depth+1);
        break;
        case 15:
            func_4930460496(depth+1);
        break;
        case 16:
            func_4930460624(depth+1);
        break;
        case 17:
            func_4930459664(depth+1);
        break;
        case 18:
            func_4930461008(depth+1);
        break;
        case 19:
            func_4930461136(depth+1);
        break;
        case 20:
            func_4930461264(depth+1);
        break;
        case 21:
            func_4930461392(depth+1);
        break;
        case 22:
            func_4930461520(depth+1);
        break;
        case 23:
            func_4930455664(depth+1);
        break;
        case 24:
            func_4930455792(depth+1);
        break;
        case 25:
            func_4930455920(depth+1);
        break;
        case 26:
            func_4930456048(depth+1);
        break;
        case 27:
            func_4930461648(depth+1);
        break;
        case 28:
            func_4930461776(depth+1);
        break;
        case 29:
            func_4930461904(depth+1);
        break;
        case 30:
            func_4930462032(depth+1);
        break;
        case 31:
            func_4930462160(depth+1);
        break;
        case 32:
            func_4930462288(depth+1);
        break;
        case 33:
            func_4930460752(depth+1);
        break;
        case 34:
            func_4930460880(depth+1);
        break;
        case 35:
            func_4930462928(depth+1);
        break;
        case 36:
            func_4930463056(depth+1);
        break;
        case 37:
            func_4930463184(depth+1);
        break;
        case 38:
            func_4930463312(depth+1);
        break;
        case 39:
            func_4930463440(depth+1);
        break;
        case 40:
            func_4930463568(depth+1);
        break;
        case 41:
            func_4930463696(depth+1);
        break;
        case 42:
            func_4930463824(depth+1);
        break;
        case 43:
            func_4930463952(depth+1);
        break;
        case 44:
            func_4930464080(depth+1);
        break;
        case 45:
            func_4930464208(depth+1);
        break;
        case 46:
            func_4930464336(depth+1);
        break;
        case 47:
            func_4930464464(depth+1);
        break;
        case 48:
            func_4930464592(depth+1);
        break;
        case 49:
            func_4930464720(depth+1);
        break;
        case 50:
            func_4930464848(depth+1);
        break;
        case 51:
            func_4930464976(depth+1);
        break;
    }
    return;
}
void func_4930452512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_4930454368(depth+1);
        break;
        case 1:
            func_4930453776(depth+1);
        break;
        case 2:
            func_4930457504(depth+1);
        break;
        case 3:
            func_4930457664(depth+1);
        break;
        case 4:
            func_4930457792(depth+1);
        break;
        case 5:
            func_4930457984(depth+1);
        break;
        case 6:
            func_4930454688(depth+1);
        break;
        case 7:
            func_4930458112(depth+1);
        break;
        case 8:
            func_4930456816(depth+1);
        break;
        case 9:
            func_4930456944(depth+1);
        break;
        case 10:
            func_4930457920(depth+1);
        break;
        case 11:
            func_4930465168(depth+1);
        break;
        case 12:
            func_4930465296(depth+1);
        break;
        case 13:
            func_4930465424(depth+1);
        break;
    }
    return;
}
void func_4930451952(unsigned depth) {
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
            func_4930457072(depth+1);
        break;
    }
    return;
}
void func_4930452080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4930453392(depth+1);
        break;
        case 1:
            func_4930451696(depth+1);
        break;
        case 2:
            func_4930454176(depth+1);
        break;
    }
    return;
}
void func_4930452208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930454896(depth+1);
        break;
    }
    return;
}
void func_4930452336(unsigned depth) {
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
            func_4930465552(depth+1);
        break;
    }
    return;
}
void func_4930452640(unsigned depth) {
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
            func_4930465680(depth+1);
        break;
    }
    return;
}
void func_4930451296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4930452640(depth+1);
        break;
        case 1:
            func_4930451040(depth+1);
        break;
    }
    return;
}
void func_4930451440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4930451296(depth+1);
        break;
        case 1:
            func_4930454816(depth+1);
        break;
    }
    return;
}
void func_4930453088(unsigned depth) {
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
            func_4930452336(depth+1);
        break;
        case 1:
            func_4930451952(depth+1);
        break;
    }
    return;
}
void func_4930453216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4930450496(depth+1);
        break;
        case 1:
            func_4930450832(depth+1);
        break;
    }
    return;
}
void func_4930453520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930465936(depth+1);
        break;
    }
    return;
}
void func_4930453648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930434112(depth+1);
        break;
    }
    return;
}
void func_4930454176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_4930466592(depth+1);
        break;
        case 1:
            func_4930465808(depth+1);
        break;
        case 2:
            func_4930466736(depth+1);
        break;
        case 3:
            func_4930466896(depth+1);
        break;
        case 4:
            func_4930467024(depth+1);
        break;
        case 5:
            func_4930467216(depth+1);
        break;
        case 6:
            func_4930467344(depth+1);
        break;
        case 7:
            func_4930467472(depth+1);
        break;
        case 8:
            func_4930467600(depth+1);
        break;
        case 9:
            func_4930467152(depth+1);
        break;
        case 10:
            func_4930467920(depth+1);
        break;
    }
    return;
}
void func_4930453856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4930466224(depth+1);
        break;
    }
    return;
}
void func_4930453776(unsigned depth) {
    extend(46);
    return;
}
void func_4930454048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_4930454368(depth+1);
    func_4930452512(depth+1);
    return;
}
void func_4930454368(unsigned depth) {
    extend(92);
    return;
}
void func_4930454496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_4930453216(depth+1);
    func_4930450832(depth+1);
    return;
}
void func_4930454992(unsigned depth) {
    extend(48);
    return;
}
void func_4930455120(unsigned depth) {
    extend(49);
    return;
}
void func_4930455248(unsigned depth) {
    extend(50);
    return;
}
void func_4930455408(unsigned depth) {
    extend(51);
    return;
}
void func_4930455536(unsigned depth) {
    extend(52);
    return;
}
void func_4930452896(unsigned depth) {
    extend(53);
    return;
}
void func_4930456112(unsigned depth) {
    extend(54);
    return;
}
void func_4930456240(unsigned depth) {
    extend(55);
    return;
}
void func_4930456368(unsigned depth) {
    extend(56);
    return;
}
void func_4930452832(unsigned depth) {
    extend(57);
    return;
}
void func_4930454688(unsigned depth) {
    extend(36);
    return;
}
void func_4930456688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_4930456816(depth+1);
    func_4930434112(depth+1);
    func_4930456944(depth+1);
    return;
}
void func_4930456816(unsigned depth) {
    extend(40);
    return;
}
void func_4930456944(unsigned depth) {
    extend(41);
    return;
}
void func_4930458416(unsigned depth) {
    extend(97);
    return;
}
void func_4930458544(unsigned depth) {
    extend(98);
    return;
}
void func_4930458672(unsigned depth) {
    extend(99);
    return;
}
void func_4930458832(unsigned depth) {
    extend(100);
    return;
}
void func_4930458960(unsigned depth) {
    extend(101);
    return;
}
void func_4930459152(unsigned depth) {
    extend(102);
    return;
}
void func_4930459280(unsigned depth) {
    extend(103);
    return;
}
void func_4930459408(unsigned depth) {
    extend(104);
    return;
}
void func_4930459536(unsigned depth) {
    extend(105);
    return;
}
void func_4930459088(unsigned depth) {
    extend(106);
    return;
}
void func_4930459856(unsigned depth) {
    extend(107);
    return;
}
void func_4930459984(unsigned depth) {
    extend(108);
    return;
}
void func_4930460112(unsigned depth) {
    extend(109);
    return;
}
void func_4930460240(unsigned depth) {
    extend(110);
    return;
}
void func_4930460368(unsigned depth) {
    extend(111);
    return;
}
void func_4930460496(unsigned depth) {
    extend(112);
    return;
}
void func_4930460624(unsigned depth) {
    extend(113);
    return;
}
void func_4930459664(unsigned depth) {
    extend(114);
    return;
}
void func_4930461008(unsigned depth) {
    extend(115);
    return;
}
void func_4930461136(unsigned depth) {
    extend(116);
    return;
}
void func_4930461264(unsigned depth) {
    extend(117);
    return;
}
void func_4930461392(unsigned depth) {
    extend(118);
    return;
}
void func_4930461520(unsigned depth) {
    extend(119);
    return;
}
void func_4930455664(unsigned depth) {
    extend(120);
    return;
}
void func_4930455792(unsigned depth) {
    extend(121);
    return;
}
void func_4930455920(unsigned depth) {
    extend(122);
    return;
}
void func_4930456048(unsigned depth) {
    extend(65);
    return;
}
void func_4930461648(unsigned depth) {
    extend(66);
    return;
}
void func_4930461776(unsigned depth) {
    extend(67);
    return;
}
void func_4930461904(unsigned depth) {
    extend(68);
    return;
}
void func_4930462032(unsigned depth) {
    extend(69);
    return;
}
void func_4930462160(unsigned depth) {
    extend(70);
    return;
}
void func_4930462288(unsigned depth) {
    extend(71);
    return;
}
void func_4930460752(unsigned depth) {
    extend(72);
    return;
}
void func_4930460880(unsigned depth) {
    extend(73);
    return;
}
void func_4930462928(unsigned depth) {
    extend(74);
    return;
}
void func_4930463056(unsigned depth) {
    extend(75);
    return;
}
void func_4930463184(unsigned depth) {
    extend(76);
    return;
}
void func_4930463312(unsigned depth) {
    extend(77);
    return;
}
void func_4930463440(unsigned depth) {
    extend(78);
    return;
}
void func_4930463568(unsigned depth) {
    extend(79);
    return;
}
void func_4930463696(unsigned depth) {
    extend(80);
    return;
}
void func_4930463824(unsigned depth) {
    extend(81);
    return;
}
void func_4930463952(unsigned depth) {
    extend(82);
    return;
}
void func_4930464080(unsigned depth) {
    extend(83);
    return;
}
void func_4930464208(unsigned depth) {
    extend(84);
    return;
}
void func_4930464336(unsigned depth) {
    extend(85);
    return;
}
void func_4930464464(unsigned depth) {
    extend(86);
    return;
}
void func_4930464592(unsigned depth) {
    extend(87);
    return;
}
void func_4930464720(unsigned depth) {
    extend(88);
    return;
}
void func_4930464848(unsigned depth) {
    extend(89);
    return;
}
void func_4930464976(unsigned depth) {
    extend(90);
    return;
}
void func_4930457504(unsigned depth) {
    extend(42);
    return;
}
void func_4930457664(unsigned depth) {
    extend(43);
    return;
}
void func_4930457792(unsigned depth) {
    extend(63);
    return;
}
void func_4930457984(unsigned depth) {
    extend(94);
    return;
}
void func_4930458112(unsigned depth) {
    extend(124);
    return;
}
void func_4930457920(unsigned depth) {
    extend(91);
    return;
}
void func_4930465168(unsigned depth) {
    extend(93);
    return;
}
void func_4930465296(unsigned depth) {
    extend(123);
    return;
}
void func_4930465424(unsigned depth) {
    extend(125);
    return;
}
void func_4930457072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4930457200(depth+1);
    func_4930451440(depth+1);
    func_4930465168(depth+1);
    return;
}
void func_4930457200(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_4930454896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_4930451824(depth+1);
    func_4930457664(depth+1);
    return;
}
void func_4930465552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4930457920(depth+1);
    func_4930451440(depth+1);
    func_4930465168(depth+1);
    return;
}
void func_4930465680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_4930451040(depth+1);
    func_4930465808(depth+1);
    func_4930451040(depth+1);
    return;
}
void func_4930465808(unsigned depth) {
    extend(45);
    return;
}
void func_4930454816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_4930451296(depth+1);
    func_4930451440(depth+1);
    return;
}
void func_4930465936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_4930451824(depth+1);
    func_4930457504(depth+1);
    return;
}
void func_4930466592(unsigned depth) {
    extend(95);
    return;
}
void func_4930466736(unsigned depth) {
    extend(64);
    return;
}
void func_4930466896(unsigned depth) {
    extend(35);
    return;
}
void func_4930467024(unsigned depth) {
    extend(37);
    return;
}
void func_4930467216(unsigned depth) {
    extend(38);
    return;
}
void func_4930467344(unsigned depth) {
    extend(61);
    return;
}
void func_4930467472(unsigned depth) {
    extend(126);
    return;
}
void func_4930467600(unsigned depth) {
    extend(96);
    return;
}
void func_4930467152(unsigned depth) {
    extend(39);
    return;
}
void func_4930467920(unsigned depth) {
    extend(34);
    return;
}
void func_4930466224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_4930434112(depth+1);
    func_4930458112(depth+1);
    func_4930453216(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_4930453648(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
