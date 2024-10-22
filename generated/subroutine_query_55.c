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

void func_5710568048(unsigned depth);
void func_5710578256(unsigned depth);
void func_5710578560(unsigned depth);
void func_5710578912(unsigned depth);
void func_5710578624(unsigned depth);
void func_5710578176(unsigned depth);
void func_5710578048(unsigned depth);
void func_5710579376(unsigned depth);
void func_5710578416(unsigned depth);
void func_5710579040(unsigned depth);
void func_5710579168(unsigned depth);
void func_5710579296(unsigned depth);
void func_5710579792(unsigned depth);
void func_5710579920(unsigned depth);
void func_5710580080(unsigned depth);
void func_5710580288(unsigned depth);
void func_5710580416(unsigned depth);
void func_5710580800(unsigned depth);
void func_5710579664(unsigned depth);
void func_5710581152(unsigned depth);
void func_5710578480(unsigned depth);
void func_5710581344(unsigned depth);
void func_5710581472(unsigned depth);
void func_5710581600(unsigned depth);
void func_5710582064(unsigned depth);
void func_5710580208(unsigned depth);
void func_5710582256(unsigned depth);
void func_5710582416(unsigned depth);
void func_5710582544(unsigned depth);
void func_5710582736(unsigned depth);
void func_5710582864(unsigned depth);
void func_5710582992(unsigned depth);
void func_5710583120(unsigned depth);
void func_5710582672(unsigned depth);
void func_5710580928(unsigned depth);
void func_5710579552(unsigned depth);
void func_5710583760(unsigned depth);
void func_5710583888(unsigned depth);
void func_5710584272(unsigned depth);
void func_5710584400(unsigned depth);
void func_5710584528(unsigned depth);
void func_5710584688(unsigned depth);
void func_5710584816(unsigned depth);
void func_5710585008(unsigned depth);
void func_5710585136(unsigned depth);
void func_5710585264(unsigned depth);
void func_5710585392(unsigned depth);
void func_5710584944(unsigned depth);
void func_5710584160(unsigned depth);
void func_5710581792(unsigned depth);
void func_5710581920(unsigned depth);
void func_5710584080(unsigned depth);
void func_5710585904(unsigned depth);
void func_5710568048(unsigned depth) {
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
            func_5710579296(depth+1);
        break;
        case 1:
            func_5710579792(depth+1);
        break;
        case 2:
            func_5710579920(depth+1);
        break;
        case 3:
            func_5710580080(depth+1);
        break;
    }
    return;
}
void func_5710578256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710580288(depth+1);
        break;
        case 1:
            func_5710580416(depth+1);
        break;
    }
    return;
}
void func_5710578560(unsigned depth) {
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
            func_5710579664(depth+1);
        break;
        case 1:
            func_5710578480(depth+1);
        break;
        case 2:
            func_5710581472(depth+1);
        break;
    }
    return;
}
void func_5710578912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5710582064(depth+1);
        break;
        case 1:
            func_5710580208(depth+1);
        break;
        case 2:
            func_5710582256(depth+1);
        break;
        case 3:
            func_5710582416(depth+1);
        break;
        case 4:
            func_5710582544(depth+1);
        break;
        case 5:
            func_5710582736(depth+1);
        break;
        case 6:
            func_5710582864(depth+1);
        break;
        case 7:
            func_5710582992(depth+1);
        break;
        case 8:
            func_5710583120(depth+1);
        break;
        case 9:
            func_5710582672(depth+1);
        break;
    }
    return;
}
void func_5710578624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710578912(depth+1);
        break;
        case 1:
            func_5710580928(depth+1);
        break;
    }
    return;
}
void func_5710578176(unsigned depth) {
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
            func_5710579552(depth+1);
        break;
    }
    return;
}
void func_5710578048(unsigned depth) {
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
            func_5710578176(depth+1);
        break;
    }
    return;
}
void func_5710579376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5710584272(depth+1);
        break;
        case 1:
            func_5710584400(depth+1);
        break;
        case 2:
            func_5710584528(depth+1);
        break;
        case 3:
            func_5710584688(depth+1);
        break;
        case 4:
            func_5710584816(depth+1);
        break;
        case 5:
            func_5710585008(depth+1);
        break;
        case 6:
            func_5710585136(depth+1);
        break;
        case 7:
            func_5710585264(depth+1);
        break;
        case 8:
            func_5710585392(depth+1);
        break;
        case 9:
            func_5710584944(depth+1);
        break;
    }
    return;
}
void func_5710578416(unsigned depth) {
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
            func_5710584160(depth+1);
        break;
        case 1:
            func_5710581792(depth+1);
        break;
        case 2:
            func_5710581920(depth+1);
        break;
    }
    return;
}
void func_5710579040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710578624(depth+1);
        break;
        case 1:
            func_5710579376(depth+1);
        break;
    }
    return;
}
void func_5710579168(unsigned depth) {
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
            func_5710584080(depth+1);
        break;
    }
    return;
}
void func_5710579296(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5710579792(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5710579920(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5710580080(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5710580288(unsigned depth) {
    extend(42);
    return;
}
void func_5710580416(unsigned depth) {
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
    func_5710568048(depth+1);
    func_5710580800(depth+1);
    func_5710578256(depth+1);
    return;
}
void func_5710580800(unsigned depth) {
    extend(44);
    return;
}
void func_5710579664(unsigned depth) {
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
    func_5710568048(depth+1);
    func_5710581152(depth+1);
    func_5710579040(depth+1);
    return;
}
void func_5710581152(unsigned depth) {
    extend(61);
    return;
}
void func_5710578480(unsigned depth) {
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
    func_5710578560(depth+1);
    func_5710581344(depth+1);
    func_5710578560(depth+1);
    return;
}
void func_5710581344(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5710581472(unsigned depth) {
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
    func_5710578560(depth+1);
    func_5710581600(depth+1);
    func_5710578560(depth+1);
    return;
}
void func_5710581600(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5710582064(unsigned depth) {
    extend(48);
    return;
}
void func_5710580208(unsigned depth) {
    extend(49);
    return;
}
void func_5710582256(unsigned depth) {
    extend(50);
    return;
}
void func_5710582416(unsigned depth) {
    extend(51);
    return;
}
void func_5710582544(unsigned depth) {
    extend(52);
    return;
}
void func_5710582736(unsigned depth) {
    extend(53);
    return;
}
void func_5710582864(unsigned depth) {
    extend(54);
    return;
}
void func_5710582992(unsigned depth) {
    extend(55);
    return;
}
void func_5710583120(unsigned depth) {
    extend(56);
    return;
}
void func_5710582672(unsigned depth) {
    extend(57);
    return;
}
void func_5710580928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5710578912(depth+1);
    func_5710578624(depth+1);
    return;
}
void func_5710579552(unsigned depth) {
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
    func_5710583760(depth+1);
    func_5710578256(depth+1);
    func_5710583888(depth+1);
    func_5710578416(depth+1);
    func_5710579168(depth+1);
    return;
}
void func_5710583760(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5710583888(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5710584272(unsigned depth) {
    extend(97);
    return;
}
void func_5710584400(unsigned depth) {
    extend(98);
    return;
}
void func_5710584528(unsigned depth) {
    extend(99);
    return;
}
void func_5710584688(unsigned depth) {
    extend(100);
    return;
}
void func_5710584816(unsigned depth) {
    extend(101);
    return;
}
void func_5710585008(unsigned depth) {
    extend(102);
    return;
}
void func_5710585136(unsigned depth) {
    extend(103);
    return;
}
void func_5710585264(unsigned depth) {
    extend(104);
    return;
}
void func_5710585392(unsigned depth) {
    extend(105);
    return;
}
void func_5710584944(unsigned depth) {
    extend(106);
    return;
}
void func_5710584160(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5710581792(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5710581920(unsigned depth) {
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
void func_5710584080(unsigned depth) {
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
    func_5710585904(depth+1);
    func_5710578560(depth+1);
    return;
}
void func_5710585904(unsigned depth) {
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
    func_5710578048(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
