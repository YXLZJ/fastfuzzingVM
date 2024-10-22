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

void func_4797252096(unsigned depth);
void func_4797261648(unsigned depth);
void func_4797261952(unsigned depth);
void func_4797262304(unsigned depth);
void func_4797262016(unsigned depth);
void func_4797261568(unsigned depth);
void func_4797261440(unsigned depth);
void func_4797262768(unsigned depth);
void func_4797261808(unsigned depth);
void func_4797262432(unsigned depth);
void func_4797262560(unsigned depth);
void func_4797262688(unsigned depth);
void func_4797263184(unsigned depth);
void func_4797263312(unsigned depth);
void func_4797263472(unsigned depth);
void func_4797263680(unsigned depth);
void func_4797263808(unsigned depth);
void func_4797264192(unsigned depth);
void func_4797263056(unsigned depth);
void func_4797264544(unsigned depth);
void func_4797261872(unsigned depth);
void func_4797264736(unsigned depth);
void func_4797264864(unsigned depth);
void func_4797264992(unsigned depth);
void func_4797265456(unsigned depth);
void func_4797263600(unsigned depth);
void func_4797265648(unsigned depth);
void func_4797265808(unsigned depth);
void func_4797265936(unsigned depth);
void func_4797266128(unsigned depth);
void func_4797266256(unsigned depth);
void func_4797266384(unsigned depth);
void func_4797266512(unsigned depth);
void func_4797266064(unsigned depth);
void func_4797264320(unsigned depth);
void func_4797262944(unsigned depth);
void func_4797267152(unsigned depth);
void func_4797267280(unsigned depth);
void func_4797267664(unsigned depth);
void func_4797267792(unsigned depth);
void func_4797267920(unsigned depth);
void func_4797268080(unsigned depth);
void func_4797268208(unsigned depth);
void func_4797268400(unsigned depth);
void func_4797268528(unsigned depth);
void func_4797268656(unsigned depth);
void func_4797268784(unsigned depth);
void func_4797268336(unsigned depth);
void func_4797267552(unsigned depth);
void func_4797265184(unsigned depth);
void func_4797265312(unsigned depth);
void func_4797267472(unsigned depth);
void func_4797269296(unsigned depth);
void func_4797252096(unsigned depth) {
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
            func_4797262688(depth+1);
        break;
        case 1:
            func_4797263184(depth+1);
        break;
        case 2:
            func_4797263312(depth+1);
        break;
        case 3:
            func_4797263472(depth+1);
        break;
    }
    return;
}
void func_4797261648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4797263680(depth+1);
        break;
        case 1:
            func_4797263808(depth+1);
        break;
    }
    return;
}
void func_4797261952(unsigned depth) {
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
            func_4797263056(depth+1);
        break;
        case 1:
            func_4797261872(depth+1);
        break;
        case 2:
            func_4797264864(depth+1);
        break;
    }
    return;
}
void func_4797262304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4797265456(depth+1);
        break;
        case 1:
            func_4797263600(depth+1);
        break;
        case 2:
            func_4797265648(depth+1);
        break;
        case 3:
            func_4797265808(depth+1);
        break;
        case 4:
            func_4797265936(depth+1);
        break;
        case 5:
            func_4797266128(depth+1);
        break;
        case 6:
            func_4797266256(depth+1);
        break;
        case 7:
            func_4797266384(depth+1);
        break;
        case 8:
            func_4797266512(depth+1);
        break;
        case 9:
            func_4797266064(depth+1);
        break;
    }
    return;
}
void func_4797262016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4797262304(depth+1);
        break;
        case 1:
            func_4797264320(depth+1);
        break;
    }
    return;
}
void func_4797261568(unsigned depth) {
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
            func_4797262944(depth+1);
        break;
    }
    return;
}
void func_4797261440(unsigned depth) {
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
            func_4797261568(depth+1);
        break;
    }
    return;
}
void func_4797262768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4797267664(depth+1);
        break;
        case 1:
            func_4797267792(depth+1);
        break;
        case 2:
            func_4797267920(depth+1);
        break;
        case 3:
            func_4797268080(depth+1);
        break;
        case 4:
            func_4797268208(depth+1);
        break;
        case 5:
            func_4797268400(depth+1);
        break;
        case 6:
            func_4797268528(depth+1);
        break;
        case 7:
            func_4797268656(depth+1);
        break;
        case 8:
            func_4797268784(depth+1);
        break;
        case 9:
            func_4797268336(depth+1);
        break;
    }
    return;
}
void func_4797261808(unsigned depth) {
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
            func_4797267552(depth+1);
        break;
        case 1:
            func_4797265184(depth+1);
        break;
        case 2:
            func_4797265312(depth+1);
        break;
    }
    return;
}
void func_4797262432(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4797262016(depth+1);
        break;
        case 1:
            func_4797262768(depth+1);
        break;
    }
    return;
}
void func_4797262560(unsigned depth) {
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
            func_4797267472(depth+1);
        break;
    }
    return;
}
void func_4797262688(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_4797263184(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_4797263312(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_4797263472(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_4797263680(unsigned depth) {
    extend(42);
    return;
}
void func_4797263808(unsigned depth) {
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
    func_4797252096(depth+1);
    func_4797264192(depth+1);
    func_4797261648(depth+1);
    return;
}
void func_4797264192(unsigned depth) {
    extend(44);
    return;
}
void func_4797263056(unsigned depth) {
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
    func_4797252096(depth+1);
    func_4797264544(depth+1);
    func_4797262432(depth+1);
    return;
}
void func_4797264544(unsigned depth) {
    extend(61);
    return;
}
void func_4797261872(unsigned depth) {
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
    func_4797261952(depth+1);
    func_4797264736(depth+1);
    func_4797261952(depth+1);
    return;
}
void func_4797264736(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4797264864(unsigned depth) {
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
    func_4797261952(depth+1);
    func_4797264992(depth+1);
    func_4797261952(depth+1);
    return;
}
void func_4797264992(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4797265456(unsigned depth) {
    extend(48);
    return;
}
void func_4797263600(unsigned depth) {
    extend(49);
    return;
}
void func_4797265648(unsigned depth) {
    extend(50);
    return;
}
void func_4797265808(unsigned depth) {
    extend(51);
    return;
}
void func_4797265936(unsigned depth) {
    extend(52);
    return;
}
void func_4797266128(unsigned depth) {
    extend(53);
    return;
}
void func_4797266256(unsigned depth) {
    extend(54);
    return;
}
void func_4797266384(unsigned depth) {
    extend(55);
    return;
}
void func_4797266512(unsigned depth) {
    extend(56);
    return;
}
void func_4797266064(unsigned depth) {
    extend(57);
    return;
}
void func_4797264320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4797262304(depth+1);
    func_4797262016(depth+1);
    return;
}
void func_4797262944(unsigned depth) {
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
    func_4797267152(depth+1);
    func_4797261648(depth+1);
    func_4797267280(depth+1);
    func_4797261808(depth+1);
    func_4797262560(depth+1);
    return;
}
void func_4797267152(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_4797267280(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_4797267664(unsigned depth) {
    extend(97);
    return;
}
void func_4797267792(unsigned depth) {
    extend(98);
    return;
}
void func_4797267920(unsigned depth) {
    extend(99);
    return;
}
void func_4797268080(unsigned depth) {
    extend(100);
    return;
}
void func_4797268208(unsigned depth) {
    extend(101);
    return;
}
void func_4797268400(unsigned depth) {
    extend(102);
    return;
}
void func_4797268528(unsigned depth) {
    extend(103);
    return;
}
void func_4797268656(unsigned depth) {
    extend(104);
    return;
}
void func_4797268784(unsigned depth) {
    extend(105);
    return;
}
void func_4797268336(unsigned depth) {
    extend(106);
    return;
}
void func_4797267552(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_4797265184(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_4797265312(unsigned depth) {
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
void func_4797267472(unsigned depth) {
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
    func_4797269296(depth+1);
    func_4797261952(depth+1);
    return;
}
void func_4797269296(unsigned depth) {
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
    func_4797261440(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
