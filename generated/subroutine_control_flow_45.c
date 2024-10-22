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

void func_4947220000(unsigned depth);
void func_4947220368(unsigned depth);
void func_4947220784(unsigned depth);
void func_4947220880(unsigned depth);
void func_4947220656(unsigned depth);
void func_4947220576(unsigned depth);
void func_4947221280(unsigned depth);
void func_4947220496(unsigned depth);
void func_4947221008(unsigned depth);
void func_4947221536(unsigned depth);
void func_4947221200(unsigned depth);
void func_4947221472(unsigned depth);
void func_4947221888(unsigned depth);
void func_4947222256(unsigned depth);
void func_4947222096(unsigned depth);
void func_4947221824(unsigned depth);
void func_4947222016(unsigned depth);
void func_4947221072(unsigned depth);
void func_4947223120(unsigned depth);
void func_4947223248(unsigned depth);
void func_4947223376(unsigned depth);
void func_4947223504(unsigned depth);
void func_4947223632(unsigned depth);
void func_4947223760(unsigned depth);
void func_4947224144(unsigned depth);
void func_4947221728(unsigned depth);
void func_4947224336(unsigned depth);
void func_4947224464(unsigned depth);
void func_4947224592(unsigned depth);
void func_4947224784(unsigned depth);
void func_4947224912(unsigned depth);
void func_4947225040(unsigned depth);
void func_4947225168(unsigned depth);
void func_4947224720(unsigned depth);
void func_4947225744(unsigned depth);
void func_4947225872(unsigned depth);
void func_4947222912(unsigned depth);
void func_4947223040(unsigned depth);
void func_4947224048(unsigned depth);
void func_4947226224(unsigned depth);
void func_4947226352(unsigned depth);
void func_4947223888(unsigned depth);
void func_4947227120(unsigned depth);
void func_4947227248(unsigned depth);
void func_4947222384(unsigned depth);
void func_4947226896(unsigned depth);
void func_4947227568(unsigned depth);
void func_4947227696(unsigned depth);
void func_4947227824(unsigned depth);
void func_4947227952(unsigned depth);
void func_4947228144(unsigned depth);
void func_4947228272(unsigned depth);
void func_4947228400(unsigned depth);
void func_4947228528(unsigned depth);
void func_4947228080(unsigned depth);
void func_4947229296(unsigned depth);
void func_4947226544(unsigned depth);
void func_4947229120(unsigned depth);
void func_4947226720(unsigned depth);
void func_4947228784(unsigned depth);
void func_4947228912(unsigned depth);
void func_4947229424(unsigned depth);
void func_4947230272(unsigned depth);
void func_4947230400(unsigned depth);
void func_4947229552(unsigned depth);
void func_4947225232(unsigned depth);
void func_4947230208(unsigned depth);
void func_4947225600(unsigned depth);
void func_4947220000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947221824(depth+1);
        break;
    }
    return;
}
void func_4947220368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4947223120(depth+1);
        break;
        case 1:
            func_4947223376(depth+1);
        break;
        case 2:
            func_4947223632(depth+1);
        break;
    }
    return;
}
void func_4947220784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4947224144(depth+1);
        break;
        case 1:
            func_4947221728(depth+1);
        break;
        case 2:
            func_4947224336(depth+1);
        break;
        case 3:
            func_4947224464(depth+1);
        break;
        case 4:
            func_4947224592(depth+1);
        break;
        case 5:
            func_4947224784(depth+1);
        break;
        case 6:
            func_4947224912(depth+1);
        break;
        case 7:
            func_4947225040(depth+1);
        break;
        case 8:
            func_4947225168(depth+1);
        break;
        case 9:
            func_4947224720(depth+1);
        break;
    }
    return;
}
void func_4947220880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4947225744(depth+1);
        break;
        case 1:
            func_4947222912(depth+1);
        break;
        case 2:
            func_4947222256(depth+1);
        break;
    }
    return;
}
void func_4947220656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4947224048(depth+1);
        break;
        case 1:
            func_4947221008(depth+1);
        break;
        case 2:
            func_4947221280(depth+1);
        break;
    }
    return;
}
void func_4947220576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947223888(depth+1);
        break;
    }
    return;
}
void func_4947221280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4947226896(depth+1);
        break;
        case 1:
            func_4947227568(depth+1);
        break;
        case 2:
            func_4947227696(depth+1);
        break;
        case 3:
            func_4947227824(depth+1);
        break;
        case 4:
            func_4947227952(depth+1);
        break;
        case 5:
            func_4947228144(depth+1);
        break;
        case 6:
            func_4947228272(depth+1);
        break;
        case 7:
            func_4947228400(depth+1);
        break;
        case 8:
            func_4947228528(depth+1);
        break;
    }
    return;
}
void func_4947220496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4947228080(depth+1);
        break;
        case 1:
            func_4947226544(depth+1);
        break;
    }
    return;
}
void func_4947221008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4947220784(depth+1);
        break;
        case 1:
            func_4947226720(depth+1);
        break;
    }
    return;
}
void func_4947221536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947228784(depth+1);
        break;
    }
    return;
}
void func_4947221200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947229424(depth+1);
        break;
    }
    return;
}
void func_4947221472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947221200(depth+1);
        break;
    }
    return;
}
void func_4947221888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4947220496(depth+1);
        break;
        case 1:
            func_4947222096(depth+1);
        break;
        case 2:
            func_4947220576(depth+1);
        break;
        case 3:
            func_4947220000(depth+1);
        break;
        case 4:
            func_4947221536(depth+1);
        break;
    }
    return;
}
void func_4947222256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4947230272(depth+1);
        break;
        case 1:
            func_4947229552(depth+1);
        break;
        case 2:
            func_4947220656(depth+1);
        break;
    }
    return;
}
void func_4947222096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4947230208(depth+1);
        break;
    }
    return;
}
void func_4947221824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4947221280(depth+1);
    func_4947222016(depth+1);
    func_4947220880(depth+1);
    func_4947221072(depth+1);
    return;
}
void func_4947222016(unsigned depth) {
    extend(61);
    return;
}
void func_4947221072(unsigned depth) {
    extend(59);
    return;
}
void func_4947223120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4947220880(depth+1);
    func_4947223248(depth+1);
    func_4947220880(depth+1);
    return;
}
void func_4947223248(unsigned depth) {
    extend(62);
    return;
}
void func_4947223376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4947220880(depth+1);
    func_4947223504(depth+1);
    func_4947220880(depth+1);
    return;
}
void func_4947223504(unsigned depth) {
    extend(60);
    return;
}
void func_4947223632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4947220880(depth+1);
    func_4947223760(depth+1);
    func_4947220880(depth+1);
    return;
}
void func_4947223760(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4947224144(unsigned depth) {
    extend(48);
    return;
}
void func_4947221728(unsigned depth) {
    extend(49);
    return;
}
void func_4947224336(unsigned depth) {
    extend(50);
    return;
}
void func_4947224464(unsigned depth) {
    extend(51);
    return;
}
void func_4947224592(unsigned depth) {
    extend(52);
    return;
}
void func_4947224784(unsigned depth) {
    extend(53);
    return;
}
void func_4947224912(unsigned depth) {
    extend(54);
    return;
}
void func_4947225040(unsigned depth) {
    extend(55);
    return;
}
void func_4947225168(unsigned depth) {
    extend(56);
    return;
}
void func_4947224720(unsigned depth) {
    extend(57);
    return;
}
void func_4947225744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4947220880(depth+1);
    func_4947225872(depth+1);
    func_4947222256(depth+1);
    return;
}
void func_4947225872(unsigned depth) {
    extend(43);
    return;
}
void func_4947222912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4947220880(depth+1);
    func_4947223040(depth+1);
    func_4947222256(depth+1);
    return;
}
void func_4947223040(unsigned depth) {
    extend(45);
    return;
}
void func_4947224048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4947226224(depth+1);
    func_4947220880(depth+1);
    func_4947226352(depth+1);
    return;
}
void func_4947226224(unsigned depth) {
    extend(40);
    return;
}
void func_4947226352(unsigned depth) {
    extend(41);
    return;
}
void func_4947223888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4947227120(depth+1);
    func_4947226224(depth+1);
    func_4947220000(depth+1);
    func_4947221072(depth+1);
    func_4947220368(depth+1);
    func_4947221072(depth+1);
    func_4947220000(depth+1);
    func_4947226352(depth+1);
    func_4947227248(depth+1);
    func_4947221200(depth+1);
    func_4947222384(depth+1);
    return;
}
void func_4947227120(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4947227248(unsigned depth) {
    extend(123);
    return;
}
void func_4947222384(unsigned depth) {
    extend(125);
    return;
}
void func_4947226896(unsigned depth) {
    extend(105);
    return;
}
void func_4947227568(unsigned depth) {
    extend(106);
    return;
}
void func_4947227696(unsigned depth) {
    extend(107);
    return;
}
void func_4947227824(unsigned depth) {
    extend(120);
    return;
}
void func_4947227952(unsigned depth) {
    extend(121);
    return;
}
void func_4947228144(unsigned depth) {
    extend(122);
    return;
}
void func_4947228272(unsigned depth) {
    extend(97);
    return;
}
void func_4947228400(unsigned depth) {
    extend(98);
    return;
}
void func_4947228528(unsigned depth) {
    extend(99);
    return;
}
void func_4947228080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4947229296(depth+1);
    func_4947226224(depth+1);
    func_4947220368(depth+1);
    func_4947226352(depth+1);
    func_4947227248(depth+1);
    func_4947221200(depth+1);
    func_4947222384(depth+1);
    return;
}
void func_4947229296(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4947226544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4947229296(depth+1);
    func_4947226224(depth+1);
    func_4947220368(depth+1);
    func_4947226352(depth+1);
    func_4947227248(depth+1);
    func_4947221200(depth+1);
    func_4947222384(depth+1);
    func_4947229120(depth+1);
    func_4947227248(depth+1);
    func_4947221200(depth+1);
    func_4947222384(depth+1);
    return;
}
void func_4947229120(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4947226720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4947220784(depth+1);
    func_4947221008(depth+1);
    return;
}
void func_4947228784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_4947228912(depth+1);
    func_4947226224(depth+1);
    func_4947220880(depth+1);
    func_4947226352(depth+1);
    func_4947221072(depth+1);
    return;
}
void func_4947228912(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4947229424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4947221888(depth+1);
    func_4947221200(depth+1);
    return;
}
void func_4947230272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4947222256(depth+1);
    func_4947230400(depth+1);
    func_4947220656(depth+1);
    return;
}
void func_4947230400(unsigned depth) {
    extend(42);
    return;
}
void func_4947229552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4947222256(depth+1);
    func_4947225232(depth+1);
    func_4947220656(depth+1);
    return;
}
void func_4947225232(unsigned depth) {
    extend(47);
    return;
}
void func_4947230208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4947225600(depth+1);
    func_4947226224(depth+1);
    func_4947220368(depth+1);
    func_4947226352(depth+1);
    func_4947227248(depth+1);
    func_4947221200(depth+1);
    func_4947222384(depth+1);
    return;
}
void func_4947225600(unsigned depth) {
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
    static unsigned count = 16;
    seed = time(NULL);
    func_4947221472(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
