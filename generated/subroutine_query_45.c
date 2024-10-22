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

void func_5366635120(unsigned depth);
void func_5366645328(unsigned depth);
void func_5366645632(unsigned depth);
void func_5366645984(unsigned depth);
void func_5366645696(unsigned depth);
void func_5366645248(unsigned depth);
void func_5366645120(unsigned depth);
void func_5366646448(unsigned depth);
void func_5366645488(unsigned depth);
void func_5366646112(unsigned depth);
void func_5366646240(unsigned depth);
void func_5366646368(unsigned depth);
void func_5366646864(unsigned depth);
void func_5366646992(unsigned depth);
void func_5366647152(unsigned depth);
void func_5366647360(unsigned depth);
void func_5366647488(unsigned depth);
void func_5366647872(unsigned depth);
void func_5366646736(unsigned depth);
void func_5366648224(unsigned depth);
void func_5366645552(unsigned depth);
void func_5366648416(unsigned depth);
void func_5366648544(unsigned depth);
void func_5366648672(unsigned depth);
void func_5366649136(unsigned depth);
void func_5366647280(unsigned depth);
void func_5366649328(unsigned depth);
void func_5366649488(unsigned depth);
void func_5366649616(unsigned depth);
void func_5366649808(unsigned depth);
void func_5366649936(unsigned depth);
void func_5366650064(unsigned depth);
void func_5366650192(unsigned depth);
void func_5366649744(unsigned depth);
void func_5366648000(unsigned depth);
void func_5366646624(unsigned depth);
void func_5366650832(unsigned depth);
void func_5366650960(unsigned depth);
void func_5366651344(unsigned depth);
void func_5366651472(unsigned depth);
void func_5366651600(unsigned depth);
void func_5366651760(unsigned depth);
void func_5366651888(unsigned depth);
void func_5366652080(unsigned depth);
void func_5366652208(unsigned depth);
void func_5366652336(unsigned depth);
void func_5366652464(unsigned depth);
void func_5366652016(unsigned depth);
void func_5366651232(unsigned depth);
void func_5366648864(unsigned depth);
void func_5366648992(unsigned depth);
void func_5366651152(unsigned depth);
void func_5366652976(unsigned depth);
void func_5366635120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        return;
    }
    xor(4);
    switch (branch) {
        case 0:
            func_5366646368(depth+1);
        break;
        case 1:
            func_5366646864(depth+1);
        break;
        case 2:
            func_5366646992(depth+1);
        break;
        case 3:
            func_5366647152(depth+1);
        break;
    }
    return;
}
void func_5366645328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5366647360(depth+1);
        break;
        case 1:
            func_5366647488(depth+1);
        break;
    }
    return;
}
void func_5366645632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5366646736(depth+1);
        break;
        case 1:
            func_5366645552(depth+1);
        break;
        case 2:
            func_5366648544(depth+1);
        break;
    }
    return;
}
void func_5366645984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5366649136(depth+1);
        break;
        case 1:
            func_5366647280(depth+1);
        break;
        case 2:
            func_5366649328(depth+1);
        break;
        case 3:
            func_5366649488(depth+1);
        break;
        case 4:
            func_5366649616(depth+1);
        break;
        case 5:
            func_5366649808(depth+1);
        break;
        case 6:
            func_5366649936(depth+1);
        break;
        case 7:
            func_5366650064(depth+1);
        break;
        case 8:
            func_5366650192(depth+1);
        break;
        case 9:
            func_5366649744(depth+1);
        break;
    }
    return;
}
void func_5366645696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5366645984(depth+1);
        break;
        case 1:
            func_5366648000(depth+1);
        break;
    }
    return;
}
void func_5366645248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5366646624(depth+1);
        break;
    }
    return;
}
void func_5366645120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5366645248(depth+1);
        break;
    }
    return;
}
void func_5366646448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5366651344(depth+1);
        break;
        case 1:
            func_5366651472(depth+1);
        break;
        case 2:
            func_5366651600(depth+1);
        break;
        case 3:
            func_5366651760(depth+1);
        break;
        case 4:
            func_5366651888(depth+1);
        break;
        case 5:
            func_5366652080(depth+1);
        break;
        case 6:
            func_5366652208(depth+1);
        break;
        case 7:
            func_5366652336(depth+1);
        break;
        case 8:
            func_5366652464(depth+1);
        break;
        case 9:
            func_5366652016(depth+1);
        break;
    }
    return;
}
void func_5366645488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5366651232(depth+1);
        break;
        case 1:
            func_5366648864(depth+1);
        break;
        case 2:
            func_5366648992(depth+1);
        break;
    }
    return;
}
void func_5366646112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5366645696(depth+1);
        break;
        case 1:
            func_5366646448(depth+1);
        break;
    }
    return;
}
void func_5366646240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5366651152(depth+1);
        break;
    }
    return;
}
void func_5366646368(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5366646864(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5366646992(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5366647152(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5366647360(unsigned depth) {
    extend(42);
    return;
}
void func_5366647488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        return;
    }
    func_5366635120(depth+1);
    func_5366647872(depth+1);
    func_5366645328(depth+1);
    return;
}
void func_5366647872(unsigned depth) {
    extend(44);
    return;
}
void func_5366646736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5366635120(depth+1);
    func_5366648224(depth+1);
    func_5366646112(depth+1);
    return;
}
void func_5366648224(unsigned depth) {
    extend(61);
    return;
}
void func_5366645552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5366645632(depth+1);
    func_5366648416(depth+1);
    func_5366645632(depth+1);
    return;
}
void func_5366648416(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5366648544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5366645632(depth+1);
    func_5366648672(depth+1);
    func_5366645632(depth+1);
    return;
}
void func_5366648672(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5366649136(unsigned depth) {
    extend(48);
    return;
}
void func_5366647280(unsigned depth) {
    extend(49);
    return;
}
void func_5366649328(unsigned depth) {
    extend(50);
    return;
}
void func_5366649488(unsigned depth) {
    extend(51);
    return;
}
void func_5366649616(unsigned depth) {
    extend(52);
    return;
}
void func_5366649808(unsigned depth) {
    extend(53);
    return;
}
void func_5366649936(unsigned depth) {
    extend(54);
    return;
}
void func_5366650064(unsigned depth) {
    extend(55);
    return;
}
void func_5366650192(unsigned depth) {
    extend(56);
    return;
}
void func_5366649744(unsigned depth) {
    extend(57);
    return;
}
void func_5366648000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5366645984(depth+1);
    func_5366645696(depth+1);
    return;
}
void func_5366646624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5366650832(depth+1);
    func_5366645328(depth+1);
    func_5366650960(depth+1);
    func_5366645488(depth+1);
    func_5366646240(depth+1);
    return;
}
void func_5366650832(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5366650960(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5366651344(unsigned depth) {
    extend(97);
    return;
}
void func_5366651472(unsigned depth) {
    extend(98);
    return;
}
void func_5366651600(unsigned depth) {
    extend(99);
    return;
}
void func_5366651760(unsigned depth) {
    extend(100);
    return;
}
void func_5366651888(unsigned depth) {
    extend(101);
    return;
}
void func_5366652080(unsigned depth) {
    extend(102);
    return;
}
void func_5366652208(unsigned depth) {
    extend(103);
    return;
}
void func_5366652336(unsigned depth) {
    extend(104);
    return;
}
void func_5366652464(unsigned depth) {
    extend(105);
    return;
}
void func_5366652016(unsigned depth) {
    extend(106);
    return;
}
void func_5366651232(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5366648864(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5366648992(unsigned depth) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    return;
}
void func_5366651152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5366652976(depth+1);
    func_5366645632(depth+1);
    return;
}
void func_5366652976(unsigned depth) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    return;
}
int main(void) {
    static unsigned count = 7;
    seed = time(NULL);
    func_5366645120(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
