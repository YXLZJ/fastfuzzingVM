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

void func_4938831392(unsigned depth);
void func_4938831760(unsigned depth);
void func_4938832176(unsigned depth);
void func_4938832272(unsigned depth);
void func_4938832048(unsigned depth);
void func_4938831968(unsigned depth);
void func_4938832672(unsigned depth);
void func_4938831888(unsigned depth);
void func_4938832400(unsigned depth);
void func_4938832928(unsigned depth);
void func_4938832592(unsigned depth);
void func_4938832864(unsigned depth);
void func_4938833280(unsigned depth);
void func_4938833648(unsigned depth);
void func_4938833488(unsigned depth);
void func_4938833216(unsigned depth);
void func_4938833408(unsigned depth);
void func_4938832464(unsigned depth);
void func_4938834512(unsigned depth);
void func_4938834640(unsigned depth);
void func_4938834768(unsigned depth);
void func_4938834896(unsigned depth);
void func_4938835024(unsigned depth);
void func_4938835152(unsigned depth);
void func_4938835536(unsigned depth);
void func_4938833120(unsigned depth);
void func_4938835728(unsigned depth);
void func_4938835856(unsigned depth);
void func_4938835984(unsigned depth);
void func_4938836176(unsigned depth);
void func_4938836304(unsigned depth);
void func_4938836432(unsigned depth);
void func_4938836560(unsigned depth);
void func_4938836112(unsigned depth);
void func_4938837136(unsigned depth);
void func_4938837264(unsigned depth);
void func_4938834304(unsigned depth);
void func_4938834432(unsigned depth);
void func_4938835440(unsigned depth);
void func_4938837616(unsigned depth);
void func_4938837744(unsigned depth);
void func_4938835280(unsigned depth);
void func_4938838512(unsigned depth);
void func_4938838640(unsigned depth);
void func_4938833776(unsigned depth);
void func_4938838288(unsigned depth);
void func_4938838960(unsigned depth);
void func_4938839088(unsigned depth);
void func_4938839216(unsigned depth);
void func_4938839344(unsigned depth);
void func_4938839536(unsigned depth);
void func_4938839664(unsigned depth);
void func_4938839792(unsigned depth);
void func_4938839920(unsigned depth);
void func_4938839472(unsigned depth);
void func_4938840688(unsigned depth);
void func_4938837936(unsigned depth);
void func_4938840512(unsigned depth);
void func_4938838112(unsigned depth);
void func_4938840176(unsigned depth);
void func_4938840304(unsigned depth);
void func_4938840816(unsigned depth);
void func_4938841664(unsigned depth);
void func_4938841792(unsigned depth);
void func_4938840944(unsigned depth);
void func_4938836624(unsigned depth);
void func_4938841600(unsigned depth);
void func_4938836992(unsigned depth);
void func_4938831392(unsigned depth) {
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
            func_4938833216(depth+1);
        break;
    }
    return;
}
void func_4938831760(unsigned depth) {
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
            func_4938834512(depth+1);
        break;
        case 1:
            func_4938834768(depth+1);
        break;
        case 2:
            func_4938835024(depth+1);
        break;
    }
    return;
}
void func_4938832176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4938835536(depth+1);
        break;
        case 1:
            func_4938833120(depth+1);
        break;
        case 2:
            func_4938835728(depth+1);
        break;
        case 3:
            func_4938835856(depth+1);
        break;
        case 4:
            func_4938835984(depth+1);
        break;
        case 5:
            func_4938836176(depth+1);
        break;
        case 6:
            func_4938836304(depth+1);
        break;
        case 7:
            func_4938836432(depth+1);
        break;
        case 8:
            func_4938836560(depth+1);
        break;
        case 9:
            func_4938836112(depth+1);
        break;
    }
    return;
}
void func_4938832272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4938837136(depth+1);
        break;
        case 1:
            func_4938834304(depth+1);
        break;
        case 2:
            func_4938833648(depth+1);
        break;
    }
    return;
}
void func_4938832048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4938835440(depth+1);
        break;
        case 1:
            func_4938832400(depth+1);
        break;
        case 2:
            func_4938832672(depth+1);
        break;
    }
    return;
}
void func_4938831968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4938835280(depth+1);
        break;
    }
    return;
}
void func_4938832672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4938838288(depth+1);
        break;
        case 1:
            func_4938838960(depth+1);
        break;
        case 2:
            func_4938839088(depth+1);
        break;
        case 3:
            func_4938839216(depth+1);
        break;
        case 4:
            func_4938839344(depth+1);
        break;
        case 5:
            func_4938839536(depth+1);
        break;
        case 6:
            func_4938839664(depth+1);
        break;
        case 7:
            func_4938839792(depth+1);
        break;
        case 8:
            func_4938839920(depth+1);
        break;
    }
    return;
}
void func_4938831888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4938839472(depth+1);
        break;
        case 1:
            func_4938837936(depth+1);
        break;
    }
    return;
}
void func_4938832400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4938832176(depth+1);
        break;
        case 1:
            func_4938838112(depth+1);
        break;
    }
    return;
}
void func_4938832928(unsigned depth) {
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
            func_4938840176(depth+1);
        break;
    }
    return;
}
void func_4938832592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4938840816(depth+1);
        break;
    }
    return;
}
void func_4938832864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4938832592(depth+1);
        break;
    }
    return;
}
void func_4938833280(unsigned depth) {
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
            func_4938831888(depth+1);
        break;
        case 1:
            func_4938833488(depth+1);
        break;
        case 2:
            func_4938831968(depth+1);
        break;
        case 3:
            func_4938831392(depth+1);
        break;
        case 4:
            func_4938832928(depth+1);
        break;
    }
    return;
}
void func_4938833648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4938841664(depth+1);
        break;
        case 1:
            func_4938840944(depth+1);
        break;
        case 2:
            func_4938832048(depth+1);
        break;
    }
    return;
}
void func_4938833488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4938841600(depth+1);
        break;
    }
    return;
}
void func_4938833216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4938832672(depth+1);
    func_4938833408(depth+1);
    func_4938832272(depth+1);
    func_4938832464(depth+1);
    return;
}
void func_4938833408(unsigned depth) {
    extend(61);
    return;
}
void func_4938832464(unsigned depth) {
    extend(59);
    return;
}
void func_4938834512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4938832272(depth+1);
    func_4938834640(depth+1);
    func_4938832272(depth+1);
    return;
}
void func_4938834640(unsigned depth) {
    extend(62);
    return;
}
void func_4938834768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4938832272(depth+1);
    func_4938834896(depth+1);
    func_4938832272(depth+1);
    return;
}
void func_4938834896(unsigned depth) {
    extend(60);
    return;
}
void func_4938835024(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4938832272(depth+1);
    func_4938835152(depth+1);
    func_4938832272(depth+1);
    return;
}
void func_4938835152(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4938835536(unsigned depth) {
    extend(48);
    return;
}
void func_4938833120(unsigned depth) {
    extend(49);
    return;
}
void func_4938835728(unsigned depth) {
    extend(50);
    return;
}
void func_4938835856(unsigned depth) {
    extend(51);
    return;
}
void func_4938835984(unsigned depth) {
    extend(52);
    return;
}
void func_4938836176(unsigned depth) {
    extend(53);
    return;
}
void func_4938836304(unsigned depth) {
    extend(54);
    return;
}
void func_4938836432(unsigned depth) {
    extend(55);
    return;
}
void func_4938836560(unsigned depth) {
    extend(56);
    return;
}
void func_4938836112(unsigned depth) {
    extend(57);
    return;
}
void func_4938837136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4938832272(depth+1);
    func_4938837264(depth+1);
    func_4938833648(depth+1);
    return;
}
void func_4938837264(unsigned depth) {
    extend(43);
    return;
}
void func_4938834304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4938832272(depth+1);
    func_4938834432(depth+1);
    func_4938833648(depth+1);
    return;
}
void func_4938834432(unsigned depth) {
    extend(45);
    return;
}
void func_4938835440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4938837616(depth+1);
    func_4938832272(depth+1);
    func_4938837744(depth+1);
    return;
}
void func_4938837616(unsigned depth) {
    extend(40);
    return;
}
void func_4938837744(unsigned depth) {
    extend(41);
    return;
}
void func_4938835280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4938838512(depth+1);
    func_4938837616(depth+1);
    func_4938831392(depth+1);
    func_4938832464(depth+1);
    func_4938831760(depth+1);
    func_4938832464(depth+1);
    func_4938831392(depth+1);
    func_4938837744(depth+1);
    func_4938838640(depth+1);
    func_4938832592(depth+1);
    func_4938833776(depth+1);
    return;
}
void func_4938838512(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4938838640(unsigned depth) {
    extend(123);
    return;
}
void func_4938833776(unsigned depth) {
    extend(125);
    return;
}
void func_4938838288(unsigned depth) {
    extend(105);
    return;
}
void func_4938838960(unsigned depth) {
    extend(106);
    return;
}
void func_4938839088(unsigned depth) {
    extend(107);
    return;
}
void func_4938839216(unsigned depth) {
    extend(120);
    return;
}
void func_4938839344(unsigned depth) {
    extend(121);
    return;
}
void func_4938839536(unsigned depth) {
    extend(122);
    return;
}
void func_4938839664(unsigned depth) {
    extend(97);
    return;
}
void func_4938839792(unsigned depth) {
    extend(98);
    return;
}
void func_4938839920(unsigned depth) {
    extend(99);
    return;
}
void func_4938839472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4938840688(depth+1);
    func_4938837616(depth+1);
    func_4938831760(depth+1);
    func_4938837744(depth+1);
    func_4938838640(depth+1);
    func_4938832592(depth+1);
    func_4938833776(depth+1);
    return;
}
void func_4938840688(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4938837936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4938840688(depth+1);
    func_4938837616(depth+1);
    func_4938831760(depth+1);
    func_4938837744(depth+1);
    func_4938838640(depth+1);
    func_4938832592(depth+1);
    func_4938833776(depth+1);
    func_4938840512(depth+1);
    func_4938838640(depth+1);
    func_4938832592(depth+1);
    func_4938833776(depth+1);
    return;
}
void func_4938840512(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4938838112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4938832176(depth+1);
    func_4938832400(depth+1);
    return;
}
void func_4938840176(unsigned depth) {
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
    func_4938840304(depth+1);
    func_4938837616(depth+1);
    func_4938832272(depth+1);
    func_4938837744(depth+1);
    func_4938832464(depth+1);
    return;
}
void func_4938840304(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4938840816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4938833280(depth+1);
    func_4938832592(depth+1);
    return;
}
void func_4938841664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4938833648(depth+1);
    func_4938841792(depth+1);
    func_4938832048(depth+1);
    return;
}
void func_4938841792(unsigned depth) {
    extend(42);
    return;
}
void func_4938840944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4938833648(depth+1);
    func_4938836624(depth+1);
    func_4938832048(depth+1);
    return;
}
void func_4938836624(unsigned depth) {
    extend(47);
    return;
}
void func_4938841600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4938836992(depth+1);
    func_4938837616(depth+1);
    func_4938831760(depth+1);
    func_4938837744(depth+1);
    func_4938838640(depth+1);
    func_4938832592(depth+1);
    func_4938833776(depth+1);
    return;
}
void func_4938836992(unsigned depth) {
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
    func_4938832864(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
