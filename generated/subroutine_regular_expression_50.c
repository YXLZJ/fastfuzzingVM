#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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

void func_5198869568(unsigned depth);
void func_5198886080(unsigned depth);
void func_5198886288(unsigned depth);
void func_5198886496(unsigned depth);
void func_5198885952(unsigned depth);
void func_5198887152(unsigned depth);
void func_5198887280(unsigned depth);
void func_5198887056(unsigned depth);
void func_5198886832(unsigned depth);
void func_5198888848(unsigned depth);
void func_5198887968(unsigned depth);
void func_5198887408(unsigned depth);
void func_5198887536(unsigned depth);
void func_5198887664(unsigned depth);
void func_5198887792(unsigned depth);
void func_5198888096(unsigned depth);
void func_5198886752(unsigned depth);
void func_5198886896(unsigned depth);
void func_5198888544(unsigned depth);
void func_5198888672(unsigned depth);
void func_5198888976(unsigned depth);
void func_5198889104(unsigned depth);
void func_5198889632(unsigned depth);
void func_5198889312(unsigned depth);
void func_5198889232(unsigned depth);
void func_5198889504(unsigned depth);
void func_5198889824(unsigned depth);
void func_5198889952(unsigned depth);
void func_5198890448(unsigned depth);
void func_5198890576(unsigned depth);
void func_5198890704(unsigned depth);
void func_5198890864(unsigned depth);
void func_5198890992(unsigned depth);
void func_5198888352(unsigned depth);
void func_5198891568(unsigned depth);
void func_5198891696(unsigned depth);
void func_5198891824(unsigned depth);
void func_5198888288(unsigned depth);
void func_5198890144(unsigned depth);
void func_5198892144(unsigned depth);
void func_5198892272(unsigned depth);
void func_5198892400(unsigned depth);
void func_5198893872(unsigned depth);
void func_5198894000(unsigned depth);
void func_5198894128(unsigned depth);
void func_5198894288(unsigned depth);
void func_5198894416(unsigned depth);
void func_5198894608(unsigned depth);
void func_5198894736(unsigned depth);
void func_5198894864(unsigned depth);
void func_5198894992(unsigned depth);
void func_5198894544(unsigned depth);
void func_5198895312(unsigned depth);
void func_5198895440(unsigned depth);
void func_5198895568(unsigned depth);
void func_5198895696(unsigned depth);
void func_5198895824(unsigned depth);
void func_5198895952(unsigned depth);
void func_5198896080(unsigned depth);
void func_5198895120(unsigned depth);
void func_5198896464(unsigned depth);
void func_5198896592(unsigned depth);
void func_5198896720(unsigned depth);
void func_5198896848(unsigned depth);
void func_5198896976(unsigned depth);
void func_5198891120(unsigned depth);
void func_5198891248(unsigned depth);
void func_5198891376(unsigned depth);
void func_5198891504(unsigned depth);
void func_5198897104(unsigned depth);
void func_5198897232(unsigned depth);
void func_5198897360(unsigned depth);
void func_5198897488(unsigned depth);
void func_5198897616(unsigned depth);
void func_5198897744(unsigned depth);
void func_5198896208(unsigned depth);
void func_5198896336(unsigned depth);
void func_5198898384(unsigned depth);
void func_5198898512(unsigned depth);
void func_5198898640(unsigned depth);
void func_5198898768(unsigned depth);
void func_5198898896(unsigned depth);
void func_5198899024(unsigned depth);
void func_5198899152(unsigned depth);
void func_5198899280(unsigned depth);
void func_5198899408(unsigned depth);
void func_5198899536(unsigned depth);
void func_5198899664(unsigned depth);
void func_5198899792(unsigned depth);
void func_5198899920(unsigned depth);
void func_5198900048(unsigned depth);
void func_5198900176(unsigned depth);
void func_5198900304(unsigned depth);
void func_5198900432(unsigned depth);
void func_5198892960(unsigned depth);
void func_5198893120(unsigned depth);
void func_5198893248(unsigned depth);
void func_5198893440(unsigned depth);
void func_5198893568(unsigned depth);
void func_5198893376(unsigned depth);
void func_5198900624(unsigned depth);
void func_5198900752(unsigned depth);
void func_5198900880(unsigned depth);
void func_5198892528(unsigned depth);
void func_5198892656(unsigned depth);
void func_5198890352(unsigned depth);
void func_5198901008(unsigned depth);
void func_5198901136(unsigned depth);
void func_5198901264(unsigned depth);
void func_5198890272(unsigned depth);
void func_5198901392(unsigned depth);
void func_5198902048(unsigned depth);
void func_5198902192(unsigned depth);
void func_5198902352(unsigned depth);
void func_5198902480(unsigned depth);
void func_5198902672(unsigned depth);
void func_5198902800(unsigned depth);
void func_5198902928(unsigned depth);
void func_5198903056(unsigned depth);
void func_5198902608(unsigned depth);
void func_5198903376(unsigned depth);
void func_5198901680(unsigned depth);
void func_5198869568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5198889312(depth+1);
        break;
        case 1:
            func_5198888672(depth+1);
        break;
    }
    return;
}
void func_5198886080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198889232(depth+1);
        break;
    }
    return;
}
void func_5198886288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5198888976(depth+1);
        break;
        case 1:
            func_5198887664(depth+1);
        break;
        case 2:
            func_5198887280(depth+1);
        break;
    }
    return;
}
void func_5198886496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5198887536(depth+1);
        break;
        case 1:
            func_5198889504(depth+1);
        break;
    }
    return;
}
void func_5198885952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198889952(depth+1);
        break;
    }
    return;
}
void func_5198887152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5198890448(depth+1);
        break;
        case 1:
            func_5198890576(depth+1);
        break;
        case 2:
            func_5198890704(depth+1);
        break;
        case 3:
            func_5198890864(depth+1);
        break;
        case 4:
            func_5198890992(depth+1);
        break;
        case 5:
            func_5198888352(depth+1);
        break;
        case 6:
            func_5198891568(depth+1);
        break;
        case 7:
            func_5198891696(depth+1);
        break;
        case 8:
            func_5198891824(depth+1);
        break;
        case 9:
            func_5198888288(depth+1);
        break;
    }
    return;
}
void func_5198887280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5198886832(depth+1);
        break;
        case 1:
            func_5198886080(depth+1);
        break;
        case 2:
            func_5198887056(depth+1);
        break;
        case 3:
            func_5198886496(depth+1);
        break;
        case 4:
            func_5198888544(depth+1);
        break;
    }
    return;
}
void func_5198887056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198890144(depth+1);
        break;
    }
    return;
}
void func_5198886832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198892144(depth+1);
        break;
    }
    return;
}
void func_5198888848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5198893872(depth+1);
        break;
        case 1:
            func_5198894000(depth+1);
        break;
        case 2:
            func_5198894128(depth+1);
        break;
        case 3:
            func_5198894288(depth+1);
        break;
        case 4:
            func_5198894416(depth+1);
        break;
        case 5:
            func_5198894608(depth+1);
        break;
        case 6:
            func_5198894736(depth+1);
        break;
        case 7:
            func_5198894864(depth+1);
        break;
        case 8:
            func_5198894992(depth+1);
        break;
        case 9:
            func_5198894544(depth+1);
        break;
        case 10:
            func_5198895312(depth+1);
        break;
        case 11:
            func_5198895440(depth+1);
        break;
        case 12:
            func_5198895568(depth+1);
        break;
        case 13:
            func_5198895696(depth+1);
        break;
        case 14:
            func_5198895824(depth+1);
        break;
        case 15:
            func_5198895952(depth+1);
        break;
        case 16:
            func_5198896080(depth+1);
        break;
        case 17:
            func_5198895120(depth+1);
        break;
        case 18:
            func_5198896464(depth+1);
        break;
        case 19:
            func_5198896592(depth+1);
        break;
        case 20:
            func_5198896720(depth+1);
        break;
        case 21:
            func_5198896848(depth+1);
        break;
        case 22:
            func_5198896976(depth+1);
        break;
        case 23:
            func_5198891120(depth+1);
        break;
        case 24:
            func_5198891248(depth+1);
        break;
        case 25:
            func_5198891376(depth+1);
        break;
        case 26:
            func_5198891504(depth+1);
        break;
        case 27:
            func_5198897104(depth+1);
        break;
        case 28:
            func_5198897232(depth+1);
        break;
        case 29:
            func_5198897360(depth+1);
        break;
        case 30:
            func_5198897488(depth+1);
        break;
        case 31:
            func_5198897616(depth+1);
        break;
        case 32:
            func_5198897744(depth+1);
        break;
        case 33:
            func_5198896208(depth+1);
        break;
        case 34:
            func_5198896336(depth+1);
        break;
        case 35:
            func_5198898384(depth+1);
        break;
        case 36:
            func_5198898512(depth+1);
        break;
        case 37:
            func_5198898640(depth+1);
        break;
        case 38:
            func_5198898768(depth+1);
        break;
        case 39:
            func_5198898896(depth+1);
        break;
        case 40:
            func_5198899024(depth+1);
        break;
        case 41:
            func_5198899152(depth+1);
        break;
        case 42:
            func_5198899280(depth+1);
        break;
        case 43:
            func_5198899408(depth+1);
        break;
        case 44:
            func_5198899536(depth+1);
        break;
        case 45:
            func_5198899664(depth+1);
        break;
        case 46:
            func_5198899792(depth+1);
        break;
        case 47:
            func_5198899920(depth+1);
        break;
        case 48:
            func_5198900048(depth+1);
        break;
        case 49:
            func_5198900176(depth+1);
        break;
        case 50:
            func_5198900304(depth+1);
        break;
        case 51:
            func_5198900432(depth+1);
        break;
    }
    return;
}
void func_5198887968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5198889824(depth+1);
        break;
        case 1:
            func_5198889232(depth+1);
        break;
        case 2:
            func_5198892960(depth+1);
        break;
        case 3:
            func_5198893120(depth+1);
        break;
        case 4:
            func_5198893248(depth+1);
        break;
        case 5:
            func_5198893440(depth+1);
        break;
        case 6:
            func_5198890144(depth+1);
        break;
        case 7:
            func_5198893568(depth+1);
        break;
        case 8:
            func_5198892272(depth+1);
        break;
        case 9:
            func_5198892400(depth+1);
        break;
        case 10:
            func_5198893376(depth+1);
        break;
        case 11:
            func_5198900624(depth+1);
        break;
        case 12:
            func_5198900752(depth+1);
        break;
        case 13:
            func_5198900880(depth+1);
        break;
    }
    return;
}
void func_5198887408(unsigned depth) {
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
            func_5198892528(depth+1);
        break;
    }
    return;
}
void func_5198887536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5198888848(depth+1);
        break;
        case 1:
            func_5198887152(depth+1);
        break;
        case 2:
            func_5198889632(depth+1);
        break;
    }
    return;
}
void func_5198887664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198890352(depth+1);
        break;
    }
    return;
}
void func_5198887792(unsigned depth) {
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
            func_5198901008(depth+1);
        break;
    }
    return;
}
void func_5198888096(unsigned depth) {
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
            func_5198901136(depth+1);
        break;
    }
    return;
}
void func_5198886752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5198888096(depth+1);
        break;
        case 1:
            func_5198886496(depth+1);
        break;
    }
    return;
}
void func_5198886896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5198886752(depth+1);
        break;
        case 1:
            func_5198890272(depth+1);
        break;
    }
    return;
}
void func_5198888544(unsigned depth) {
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
            func_5198887792(depth+1);
        break;
        case 1:
            func_5198887408(depth+1);
        break;
    }
    return;
}
void func_5198888672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5198885952(depth+1);
        break;
        case 1:
            func_5198886288(depth+1);
        break;
    }
    return;
}
void func_5198888976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198901392(depth+1);
        break;
    }
    return;
}
void func_5198889104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198869568(depth+1);
        break;
    }
    return;
}
void func_5198889632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5198902048(depth+1);
        break;
        case 1:
            func_5198901264(depth+1);
        break;
        case 2:
            func_5198902192(depth+1);
        break;
        case 3:
            func_5198902352(depth+1);
        break;
        case 4:
            func_5198902480(depth+1);
        break;
        case 5:
            func_5198902672(depth+1);
        break;
        case 6:
            func_5198902800(depth+1);
        break;
        case 7:
            func_5198902928(depth+1);
        break;
        case 8:
            func_5198903056(depth+1);
        break;
        case 9:
            func_5198902608(depth+1);
        break;
        case 10:
            func_5198903376(depth+1);
        break;
    }
    return;
}
void func_5198889312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5198901680(depth+1);
        break;
    }
    return;
}
void func_5198889232(unsigned depth) {
    extend(46);
    return;
}
void func_5198889504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5198889824(depth+1);
    func_5198887968(depth+1);
    return;
}
void func_5198889824(unsigned depth) {
    extend(92);
    return;
}
void func_5198889952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5198888672(depth+1);
    func_5198886288(depth+1);
    return;
}
void func_5198890448(unsigned depth) {
    extend(48);
    return;
}
void func_5198890576(unsigned depth) {
    extend(49);
    return;
}
void func_5198890704(unsigned depth) {
    extend(50);
    return;
}
void func_5198890864(unsigned depth) {
    extend(51);
    return;
}
void func_5198890992(unsigned depth) {
    extend(52);
    return;
}
void func_5198888352(unsigned depth) {
    extend(53);
    return;
}
void func_5198891568(unsigned depth) {
    extend(54);
    return;
}
void func_5198891696(unsigned depth) {
    extend(55);
    return;
}
void func_5198891824(unsigned depth) {
    extend(56);
    return;
}
void func_5198888288(unsigned depth) {
    extend(57);
    return;
}
void func_5198890144(unsigned depth) {
    extend(36);
    return;
}
void func_5198892144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5198892272(depth+1);
    func_5198869568(depth+1);
    func_5198892400(depth+1);
    return;
}
void func_5198892272(unsigned depth) {
    extend(40);
    return;
}
void func_5198892400(unsigned depth) {
    extend(41);
    return;
}
void func_5198893872(unsigned depth) {
    extend(97);
    return;
}
void func_5198894000(unsigned depth) {
    extend(98);
    return;
}
void func_5198894128(unsigned depth) {
    extend(99);
    return;
}
void func_5198894288(unsigned depth) {
    extend(100);
    return;
}
void func_5198894416(unsigned depth) {
    extend(101);
    return;
}
void func_5198894608(unsigned depth) {
    extend(102);
    return;
}
void func_5198894736(unsigned depth) {
    extend(103);
    return;
}
void func_5198894864(unsigned depth) {
    extend(104);
    return;
}
void func_5198894992(unsigned depth) {
    extend(105);
    return;
}
void func_5198894544(unsigned depth) {
    extend(106);
    return;
}
void func_5198895312(unsigned depth) {
    extend(107);
    return;
}
void func_5198895440(unsigned depth) {
    extend(108);
    return;
}
void func_5198895568(unsigned depth) {
    extend(109);
    return;
}
void func_5198895696(unsigned depth) {
    extend(110);
    return;
}
void func_5198895824(unsigned depth) {
    extend(111);
    return;
}
void func_5198895952(unsigned depth) {
    extend(112);
    return;
}
void func_5198896080(unsigned depth) {
    extend(113);
    return;
}
void func_5198895120(unsigned depth) {
    extend(114);
    return;
}
void func_5198896464(unsigned depth) {
    extend(115);
    return;
}
void func_5198896592(unsigned depth) {
    extend(116);
    return;
}
void func_5198896720(unsigned depth) {
    extend(117);
    return;
}
void func_5198896848(unsigned depth) {
    extend(118);
    return;
}
void func_5198896976(unsigned depth) {
    extend(119);
    return;
}
void func_5198891120(unsigned depth) {
    extend(120);
    return;
}
void func_5198891248(unsigned depth) {
    extend(121);
    return;
}
void func_5198891376(unsigned depth) {
    extend(122);
    return;
}
void func_5198891504(unsigned depth) {
    extend(65);
    return;
}
void func_5198897104(unsigned depth) {
    extend(66);
    return;
}
void func_5198897232(unsigned depth) {
    extend(67);
    return;
}
void func_5198897360(unsigned depth) {
    extend(68);
    return;
}
void func_5198897488(unsigned depth) {
    extend(69);
    return;
}
void func_5198897616(unsigned depth) {
    extend(70);
    return;
}
void func_5198897744(unsigned depth) {
    extend(71);
    return;
}
void func_5198896208(unsigned depth) {
    extend(72);
    return;
}
void func_5198896336(unsigned depth) {
    extend(73);
    return;
}
void func_5198898384(unsigned depth) {
    extend(74);
    return;
}
void func_5198898512(unsigned depth) {
    extend(75);
    return;
}
void func_5198898640(unsigned depth) {
    extend(76);
    return;
}
void func_5198898768(unsigned depth) {
    extend(77);
    return;
}
void func_5198898896(unsigned depth) {
    extend(78);
    return;
}
void func_5198899024(unsigned depth) {
    extend(79);
    return;
}
void func_5198899152(unsigned depth) {
    extend(80);
    return;
}
void func_5198899280(unsigned depth) {
    extend(81);
    return;
}
void func_5198899408(unsigned depth) {
    extend(82);
    return;
}
void func_5198899536(unsigned depth) {
    extend(83);
    return;
}
void func_5198899664(unsigned depth) {
    extend(84);
    return;
}
void func_5198899792(unsigned depth) {
    extend(85);
    return;
}
void func_5198899920(unsigned depth) {
    extend(86);
    return;
}
void func_5198900048(unsigned depth) {
    extend(87);
    return;
}
void func_5198900176(unsigned depth) {
    extend(88);
    return;
}
void func_5198900304(unsigned depth) {
    extend(89);
    return;
}
void func_5198900432(unsigned depth) {
    extend(90);
    return;
}
void func_5198892960(unsigned depth) {
    extend(42);
    return;
}
void func_5198893120(unsigned depth) {
    extend(43);
    return;
}
void func_5198893248(unsigned depth) {
    extend(63);
    return;
}
void func_5198893440(unsigned depth) {
    extend(94);
    return;
}
void func_5198893568(unsigned depth) {
    extend(124);
    return;
}
void func_5198893376(unsigned depth) {
    extend(91);
    return;
}
void func_5198900624(unsigned depth) {
    extend(93);
    return;
}
void func_5198900752(unsigned depth) {
    extend(123);
    return;
}
void func_5198900880(unsigned depth) {
    extend(125);
    return;
}
void func_5198892528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5198892656(depth+1);
    func_5198886896(depth+1);
    func_5198900624(depth+1);
    return;
}
void func_5198892656(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5198890352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5198887280(depth+1);
    func_5198893120(depth+1);
    return;
}
void func_5198901008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5198893376(depth+1);
    func_5198886896(depth+1);
    func_5198900624(depth+1);
    return;
}
void func_5198901136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5198886496(depth+1);
    func_5198901264(depth+1);
    func_5198886496(depth+1);
    return;
}
void func_5198901264(unsigned depth) {
    extend(45);
    return;
}
void func_5198890272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5198886752(depth+1);
    func_5198886896(depth+1);
    return;
}
void func_5198901392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5198887280(depth+1);
    func_5198892960(depth+1);
    return;
}
void func_5198902048(unsigned depth) {
    extend(95);
    return;
}
void func_5198902192(unsigned depth) {
    extend(64);
    return;
}
void func_5198902352(unsigned depth) {
    extend(35);
    return;
}
void func_5198902480(unsigned depth) {
    extend(37);
    return;
}
void func_5198902672(unsigned depth) {
    extend(38);
    return;
}
void func_5198902800(unsigned depth) {
    extend(61);
    return;
}
void func_5198902928(unsigned depth) {
    extend(126);
    return;
}
void func_5198903056(unsigned depth) {
    extend(96);
    return;
}
void func_5198902608(unsigned depth) {
    extend(39);
    return;
}
void func_5198903376(unsigned depth) {
    extend(34);
    return;
}
void func_5198901680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5198869568(depth+1);
    func_5198893568(depth+1);
    func_5198888672(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5198889104(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
