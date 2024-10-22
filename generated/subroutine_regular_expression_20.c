#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 20
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

void func_5224035392(unsigned depth);
void func_5224051904(unsigned depth);
void func_5224052112(unsigned depth);
void func_5224052320(unsigned depth);
void func_5224051776(unsigned depth);
void func_5224052976(unsigned depth);
void func_5224053104(unsigned depth);
void func_5224052880(unsigned depth);
void func_5224052656(unsigned depth);
void func_5224054672(unsigned depth);
void func_5224053792(unsigned depth);
void func_5224053232(unsigned depth);
void func_5224053360(unsigned depth);
void func_5224053488(unsigned depth);
void func_5224053616(unsigned depth);
void func_5224053920(unsigned depth);
void func_5224052576(unsigned depth);
void func_5224052720(unsigned depth);
void func_5224054368(unsigned depth);
void func_5224054496(unsigned depth);
void func_5224054800(unsigned depth);
void func_5224054928(unsigned depth);
void func_5224055456(unsigned depth);
void func_5224055136(unsigned depth);
void func_5224055056(unsigned depth);
void func_5224055328(unsigned depth);
void func_5224055648(unsigned depth);
void func_5224055776(unsigned depth);
void func_5224056272(unsigned depth);
void func_5224056400(unsigned depth);
void func_5224056528(unsigned depth);
void func_5224056688(unsigned depth);
void func_5224056816(unsigned depth);
void func_5224054176(unsigned depth);
void func_5224057392(unsigned depth);
void func_5224057520(unsigned depth);
void func_5224057648(unsigned depth);
void func_5224054112(unsigned depth);
void func_5224055968(unsigned depth);
void func_5224057968(unsigned depth);
void func_5224058096(unsigned depth);
void func_5224058224(unsigned depth);
void func_5224059696(unsigned depth);
void func_5224059824(unsigned depth);
void func_5224059952(unsigned depth);
void func_5224060112(unsigned depth);
void func_5224060240(unsigned depth);
void func_5224060432(unsigned depth);
void func_5224060560(unsigned depth);
void func_5224060688(unsigned depth);
void func_5224060816(unsigned depth);
void func_5224060368(unsigned depth);
void func_5224061136(unsigned depth);
void func_5224061264(unsigned depth);
void func_5224061392(unsigned depth);
void func_5224061520(unsigned depth);
void func_5224061648(unsigned depth);
void func_5224061776(unsigned depth);
void func_5224061904(unsigned depth);
void func_5224060944(unsigned depth);
void func_5224062288(unsigned depth);
void func_5224062416(unsigned depth);
void func_5224062544(unsigned depth);
void func_5224062672(unsigned depth);
void func_5224062800(unsigned depth);
void func_5224056944(unsigned depth);
void func_5224057072(unsigned depth);
void func_5224057200(unsigned depth);
void func_5224057328(unsigned depth);
void func_5224062928(unsigned depth);
void func_5224063056(unsigned depth);
void func_5224063184(unsigned depth);
void func_5224063312(unsigned depth);
void func_5224063440(unsigned depth);
void func_5224063568(unsigned depth);
void func_5224062032(unsigned depth);
void func_5224062160(unsigned depth);
void func_5224064208(unsigned depth);
void func_5224064336(unsigned depth);
void func_5224064464(unsigned depth);
void func_5224064592(unsigned depth);
void func_5224064720(unsigned depth);
void func_5224064848(unsigned depth);
void func_5224064976(unsigned depth);
void func_5224065104(unsigned depth);
void func_5224065232(unsigned depth);
void func_5224065360(unsigned depth);
void func_5224065488(unsigned depth);
void func_5224065616(unsigned depth);
void func_5224065744(unsigned depth);
void func_5224065872(unsigned depth);
void func_5224066000(unsigned depth);
void func_5224066128(unsigned depth);
void func_5224066256(unsigned depth);
void func_5224058784(unsigned depth);
void func_5224058944(unsigned depth);
void func_5224059072(unsigned depth);
void func_5224059264(unsigned depth);
void func_5224059392(unsigned depth);
void func_5224059200(unsigned depth);
void func_5224066448(unsigned depth);
void func_5224066576(unsigned depth);
void func_5224066704(unsigned depth);
void func_5224058352(unsigned depth);
void func_5224058480(unsigned depth);
void func_5224056176(unsigned depth);
void func_5224066832(unsigned depth);
void func_5224066960(unsigned depth);
void func_5224067088(unsigned depth);
void func_5224056096(unsigned depth);
void func_5224067216(unsigned depth);
void func_5224067872(unsigned depth);
void func_5224068016(unsigned depth);
void func_5224068176(unsigned depth);
void func_5224068304(unsigned depth);
void func_5224068496(unsigned depth);
void func_5224068624(unsigned depth);
void func_5224068752(unsigned depth);
void func_5224068880(unsigned depth);
void func_5224068432(unsigned depth);
void func_5224069200(unsigned depth);
void func_5224067504(unsigned depth);
void func_5224035392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224055136(depth+1);
        break;
        case 1:
            func_5224054496(depth+1);
        break;
    }
    return;
}
void func_5224051904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224055056(depth+1);
        break;
    }
    return;
}
void func_5224052112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5224054800(depth+1);
        break;
        case 1:
            func_5224053488(depth+1);
        break;
        case 2:
            func_5224053104(depth+1);
        break;
    }
    return;
}
void func_5224052320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224053360(depth+1);
        break;
        case 1:
            func_5224055328(depth+1);
        break;
    }
    return;
}
void func_5224051776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224055776(depth+1);
        break;
    }
    return;
}
void func_5224052976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5224056272(depth+1);
        break;
        case 1:
            func_5224056400(depth+1);
        break;
        case 2:
            func_5224056528(depth+1);
        break;
        case 3:
            func_5224056688(depth+1);
        break;
        case 4:
            func_5224056816(depth+1);
        break;
        case 5:
            func_5224054176(depth+1);
        break;
        case 6:
            func_5224057392(depth+1);
        break;
        case 7:
            func_5224057520(depth+1);
        break;
        case 8:
            func_5224057648(depth+1);
        break;
        case 9:
            func_5224054112(depth+1);
        break;
    }
    return;
}
void func_5224053104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5224052656(depth+1);
        break;
        case 1:
            func_5224051904(depth+1);
        break;
        case 2:
            func_5224052880(depth+1);
        break;
        case 3:
            func_5224052320(depth+1);
        break;
        case 4:
            func_5224054368(depth+1);
        break;
    }
    return;
}
void func_5224052880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224055968(depth+1);
        break;
    }
    return;
}
void func_5224052656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224057968(depth+1);
        break;
    }
    return;
}
void func_5224054672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_5224059696(depth+1);
        break;
        case 1:
            func_5224059824(depth+1);
        break;
        case 2:
            func_5224059952(depth+1);
        break;
        case 3:
            func_5224060112(depth+1);
        break;
        case 4:
            func_5224060240(depth+1);
        break;
        case 5:
            func_5224060432(depth+1);
        break;
        case 6:
            func_5224060560(depth+1);
        break;
        case 7:
            func_5224060688(depth+1);
        break;
        case 8:
            func_5224060816(depth+1);
        break;
        case 9:
            func_5224060368(depth+1);
        break;
        case 10:
            func_5224061136(depth+1);
        break;
        case 11:
            func_5224061264(depth+1);
        break;
        case 12:
            func_5224061392(depth+1);
        break;
        case 13:
            func_5224061520(depth+1);
        break;
        case 14:
            func_5224061648(depth+1);
        break;
        case 15:
            func_5224061776(depth+1);
        break;
        case 16:
            func_5224061904(depth+1);
        break;
        case 17:
            func_5224060944(depth+1);
        break;
        case 18:
            func_5224062288(depth+1);
        break;
        case 19:
            func_5224062416(depth+1);
        break;
        case 20:
            func_5224062544(depth+1);
        break;
        case 21:
            func_5224062672(depth+1);
        break;
        case 22:
            func_5224062800(depth+1);
        break;
        case 23:
            func_5224056944(depth+1);
        break;
        case 24:
            func_5224057072(depth+1);
        break;
        case 25:
            func_5224057200(depth+1);
        break;
        case 26:
            func_5224057328(depth+1);
        break;
        case 27:
            func_5224062928(depth+1);
        break;
        case 28:
            func_5224063056(depth+1);
        break;
        case 29:
            func_5224063184(depth+1);
        break;
        case 30:
            func_5224063312(depth+1);
        break;
        case 31:
            func_5224063440(depth+1);
        break;
        case 32:
            func_5224063568(depth+1);
        break;
        case 33:
            func_5224062032(depth+1);
        break;
        case 34:
            func_5224062160(depth+1);
        break;
        case 35:
            func_5224064208(depth+1);
        break;
        case 36:
            func_5224064336(depth+1);
        break;
        case 37:
            func_5224064464(depth+1);
        break;
        case 38:
            func_5224064592(depth+1);
        break;
        case 39:
            func_5224064720(depth+1);
        break;
        case 40:
            func_5224064848(depth+1);
        break;
        case 41:
            func_5224064976(depth+1);
        break;
        case 42:
            func_5224065104(depth+1);
        break;
        case 43:
            func_5224065232(depth+1);
        break;
        case 44:
            func_5224065360(depth+1);
        break;
        case 45:
            func_5224065488(depth+1);
        break;
        case 46:
            func_5224065616(depth+1);
        break;
        case 47:
            func_5224065744(depth+1);
        break;
        case 48:
            func_5224065872(depth+1);
        break;
        case 49:
            func_5224066000(depth+1);
        break;
        case 50:
            func_5224066128(depth+1);
        break;
        case 51:
            func_5224066256(depth+1);
        break;
    }
    return;
}
void func_5224053792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_5224055648(depth+1);
        break;
        case 1:
            func_5224055056(depth+1);
        break;
        case 2:
            func_5224058784(depth+1);
        break;
        case 3:
            func_5224058944(depth+1);
        break;
        case 4:
            func_5224059072(depth+1);
        break;
        case 5:
            func_5224059264(depth+1);
        break;
        case 6:
            func_5224055968(depth+1);
        break;
        case 7:
            func_5224059392(depth+1);
        break;
        case 8:
            func_5224058096(depth+1);
        break;
        case 9:
            func_5224058224(depth+1);
        break;
        case 10:
            func_5224059200(depth+1);
        break;
        case 11:
            func_5224066448(depth+1);
        break;
        case 12:
            func_5224066576(depth+1);
        break;
        case 13:
            func_5224066704(depth+1);
        break;
    }
    return;
}
void func_5224053232(unsigned depth) {
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
            func_5224058352(depth+1);
        break;
    }
    return;
}
void func_5224053360(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5224054672(depth+1);
        break;
        case 1:
            func_5224052976(depth+1);
        break;
        case 2:
            func_5224055456(depth+1);
        break;
    }
    return;
}
void func_5224053488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224056176(depth+1);
        break;
    }
    return;
}
void func_5224053616(unsigned depth) {
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
            func_5224066832(depth+1);
        break;
    }
    return;
}
void func_5224053920(unsigned depth) {
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
            func_5224066960(depth+1);
        break;
    }
    return;
}
void func_5224052576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224053920(depth+1);
        break;
        case 1:
            func_5224052320(depth+1);
        break;
    }
    return;
}
void func_5224052720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224052576(depth+1);
        break;
        case 1:
            func_5224056096(depth+1);
        break;
    }
    return;
}
void func_5224054368(unsigned depth) {
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
            func_5224053616(depth+1);
        break;
        case 1:
            func_5224053232(depth+1);
        break;
    }
    return;
}
void func_5224054496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5224051776(depth+1);
        break;
        case 1:
            func_5224052112(depth+1);
        break;
    }
    return;
}
void func_5224054800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224067216(depth+1);
        break;
    }
    return;
}
void func_5224054928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224035392(depth+1);
        break;
    }
    return;
}
void func_5224055456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_5224067872(depth+1);
        break;
        case 1:
            func_5224067088(depth+1);
        break;
        case 2:
            func_5224068016(depth+1);
        break;
        case 3:
            func_5224068176(depth+1);
        break;
        case 4:
            func_5224068304(depth+1);
        break;
        case 5:
            func_5224068496(depth+1);
        break;
        case 6:
            func_5224068624(depth+1);
        break;
        case 7:
            func_5224068752(depth+1);
        break;
        case 8:
            func_5224068880(depth+1);
        break;
        case 9:
            func_5224068432(depth+1);
        break;
        case 10:
            func_5224069200(depth+1);
        break;
    }
    return;
}
void func_5224055136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5224067504(depth+1);
        break;
    }
    return;
}
void func_5224055056(unsigned depth) {
    extend(46);
    return;
}
void func_5224055328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_5224055648(depth+1);
    func_5224053792(depth+1);
    return;
}
void func_5224055648(unsigned depth) {
    extend(92);
    return;
}
void func_5224055776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_5224054496(depth+1);
    func_5224052112(depth+1);
    return;
}
void func_5224056272(unsigned depth) {
    extend(48);
    return;
}
void func_5224056400(unsigned depth) {
    extend(49);
    return;
}
void func_5224056528(unsigned depth) {
    extend(50);
    return;
}
void func_5224056688(unsigned depth) {
    extend(51);
    return;
}
void func_5224056816(unsigned depth) {
    extend(52);
    return;
}
void func_5224054176(unsigned depth) {
    extend(53);
    return;
}
void func_5224057392(unsigned depth) {
    extend(54);
    return;
}
void func_5224057520(unsigned depth) {
    extend(55);
    return;
}
void func_5224057648(unsigned depth) {
    extend(56);
    return;
}
void func_5224054112(unsigned depth) {
    extend(57);
    return;
}
void func_5224055968(unsigned depth) {
    extend(36);
    return;
}
void func_5224057968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_5224058096(depth+1);
    func_5224035392(depth+1);
    func_5224058224(depth+1);
    return;
}
void func_5224058096(unsigned depth) {
    extend(40);
    return;
}
void func_5224058224(unsigned depth) {
    extend(41);
    return;
}
void func_5224059696(unsigned depth) {
    extend(97);
    return;
}
void func_5224059824(unsigned depth) {
    extend(98);
    return;
}
void func_5224059952(unsigned depth) {
    extend(99);
    return;
}
void func_5224060112(unsigned depth) {
    extend(100);
    return;
}
void func_5224060240(unsigned depth) {
    extend(101);
    return;
}
void func_5224060432(unsigned depth) {
    extend(102);
    return;
}
void func_5224060560(unsigned depth) {
    extend(103);
    return;
}
void func_5224060688(unsigned depth) {
    extend(104);
    return;
}
void func_5224060816(unsigned depth) {
    extend(105);
    return;
}
void func_5224060368(unsigned depth) {
    extend(106);
    return;
}
void func_5224061136(unsigned depth) {
    extend(107);
    return;
}
void func_5224061264(unsigned depth) {
    extend(108);
    return;
}
void func_5224061392(unsigned depth) {
    extend(109);
    return;
}
void func_5224061520(unsigned depth) {
    extend(110);
    return;
}
void func_5224061648(unsigned depth) {
    extend(111);
    return;
}
void func_5224061776(unsigned depth) {
    extend(112);
    return;
}
void func_5224061904(unsigned depth) {
    extend(113);
    return;
}
void func_5224060944(unsigned depth) {
    extend(114);
    return;
}
void func_5224062288(unsigned depth) {
    extend(115);
    return;
}
void func_5224062416(unsigned depth) {
    extend(116);
    return;
}
void func_5224062544(unsigned depth) {
    extend(117);
    return;
}
void func_5224062672(unsigned depth) {
    extend(118);
    return;
}
void func_5224062800(unsigned depth) {
    extend(119);
    return;
}
void func_5224056944(unsigned depth) {
    extend(120);
    return;
}
void func_5224057072(unsigned depth) {
    extend(121);
    return;
}
void func_5224057200(unsigned depth) {
    extend(122);
    return;
}
void func_5224057328(unsigned depth) {
    extend(65);
    return;
}
void func_5224062928(unsigned depth) {
    extend(66);
    return;
}
void func_5224063056(unsigned depth) {
    extend(67);
    return;
}
void func_5224063184(unsigned depth) {
    extend(68);
    return;
}
void func_5224063312(unsigned depth) {
    extend(69);
    return;
}
void func_5224063440(unsigned depth) {
    extend(70);
    return;
}
void func_5224063568(unsigned depth) {
    extend(71);
    return;
}
void func_5224062032(unsigned depth) {
    extend(72);
    return;
}
void func_5224062160(unsigned depth) {
    extend(73);
    return;
}
void func_5224064208(unsigned depth) {
    extend(74);
    return;
}
void func_5224064336(unsigned depth) {
    extend(75);
    return;
}
void func_5224064464(unsigned depth) {
    extend(76);
    return;
}
void func_5224064592(unsigned depth) {
    extend(77);
    return;
}
void func_5224064720(unsigned depth) {
    extend(78);
    return;
}
void func_5224064848(unsigned depth) {
    extend(79);
    return;
}
void func_5224064976(unsigned depth) {
    extend(80);
    return;
}
void func_5224065104(unsigned depth) {
    extend(81);
    return;
}
void func_5224065232(unsigned depth) {
    extend(82);
    return;
}
void func_5224065360(unsigned depth) {
    extend(83);
    return;
}
void func_5224065488(unsigned depth) {
    extend(84);
    return;
}
void func_5224065616(unsigned depth) {
    extend(85);
    return;
}
void func_5224065744(unsigned depth) {
    extend(86);
    return;
}
void func_5224065872(unsigned depth) {
    extend(87);
    return;
}
void func_5224066000(unsigned depth) {
    extend(88);
    return;
}
void func_5224066128(unsigned depth) {
    extend(89);
    return;
}
void func_5224066256(unsigned depth) {
    extend(90);
    return;
}
void func_5224058784(unsigned depth) {
    extend(42);
    return;
}
void func_5224058944(unsigned depth) {
    extend(43);
    return;
}
void func_5224059072(unsigned depth) {
    extend(63);
    return;
}
void func_5224059264(unsigned depth) {
    extend(94);
    return;
}
void func_5224059392(unsigned depth) {
    extend(124);
    return;
}
void func_5224059200(unsigned depth) {
    extend(91);
    return;
}
void func_5224066448(unsigned depth) {
    extend(93);
    return;
}
void func_5224066576(unsigned depth) {
    extend(123);
    return;
}
void func_5224066704(unsigned depth) {
    extend(125);
    return;
}
void func_5224058352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5224058480(depth+1);
    func_5224052720(depth+1);
    func_5224066448(depth+1);
    return;
}
void func_5224058480(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_5224056176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_5224053104(depth+1);
    func_5224058944(depth+1);
    return;
}
void func_5224066832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_5224059200(depth+1);
    func_5224052720(depth+1);
    func_5224066448(depth+1);
    return;
}
void func_5224066960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_5224052320(depth+1);
    func_5224067088(depth+1);
    func_5224052320(depth+1);
    return;
}
void func_5224067088(unsigned depth) {
    extend(45);
    return;
}
void func_5224056096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_5224052576(depth+1);
    func_5224052720(depth+1);
    return;
}
void func_5224067216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_5224053104(depth+1);
    func_5224058784(depth+1);
    return;
}
void func_5224067872(unsigned depth) {
    extend(95);
    return;
}
void func_5224068016(unsigned depth) {
    extend(64);
    return;
}
void func_5224068176(unsigned depth) {
    extend(35);
    return;
}
void func_5224068304(unsigned depth) {
    extend(37);
    return;
}
void func_5224068496(unsigned depth) {
    extend(38);
    return;
}
void func_5224068624(unsigned depth) {
    extend(61);
    return;
}
void func_5224068752(unsigned depth) {
    extend(126);
    return;
}
void func_5224068880(unsigned depth) {
    extend(96);
    return;
}
void func_5224068432(unsigned depth) {
    extend(39);
    return;
}
void func_5224069200(unsigned depth) {
    extend(34);
    return;
}
void func_5224067504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_5224035392(depth+1);
    func_5224059392(depth+1);
    func_5224054496(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_5224054928(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
