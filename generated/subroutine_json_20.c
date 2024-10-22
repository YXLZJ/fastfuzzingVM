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

void func_4863327456(unsigned depth);
void func_4863328016(unsigned depth);
void func_4863327824(unsigned depth);
void func_4863327584(unsigned depth);
void func_4863327760(unsigned depth);
void func_4863328240(unsigned depth);
void func_4863328368(unsigned depth);
void func_4863328160(unsigned depth);
void func_4863328720(unsigned depth);
void func_4863329152(unsigned depth);
void func_4863329088(unsigned depth);
void func_4863329344(unsigned depth);
void func_4863328912(unsigned depth);
void func_4863329472(unsigned depth);
void func_4863329936(unsigned depth);
void func_4863330064(unsigned depth);
void func_4863330192(unsigned depth);
void func_4863328784(unsigned depth);
void func_4863330576(unsigned depth);
void func_4863330768(unsigned depth);
void func_4863330896(unsigned depth);
void func_4863331024(unsigned depth);
void func_4863331152(unsigned depth);
void func_4863330704(unsigned depth);
void func_4863328640(unsigned depth);
void func_4863331536(unsigned depth);
void func_4863329680(unsigned depth);
void func_4863329808(unsigned depth);
void func_4863331744(unsigned depth);
void func_4863331872(unsigned depth);
void func_4863332000(unsigned depth);
void func_4863332176(unsigned depth);
void func_4863332320(unsigned depth);
void func_4863330320(unsigned depth);
void func_4863331664(unsigned depth);
void func_4863333088(unsigned depth);
void func_4863333216(unsigned depth);
void func_4863333376(unsigned depth);
void func_4863333504(unsigned depth);
void func_4863332928(unsigned depth);
void func_4863334032(unsigned depth);
void func_4863334160(unsigned depth);
void func_4863327456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863329088(depth+1);
        break;
        case 1:
            func_4863329472(depth+1);
        break;
    }
    return;
}
void func_4863328016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4863329936(depth+1);
        break;
        case 1:
            func_4863330064(depth+1);
        break;
        case 2:
            func_4863330192(depth+1);
        break;
        case 3:
            func_4863328784(depth+1);
        break;
        case 4:
            func_4863330576(depth+1);
        break;
        case 5:
            func_4863330768(depth+1);
        break;
        case 6:
            func_4863330896(depth+1);
        break;
        case 7:
            func_4863331024(depth+1);
        break;
        case 8:
            func_4863331152(depth+1);
        break;
        case 9:
            func_4863330704(depth+1);
        break;
    }
    return;
}
void func_4863327824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863328640(depth+1);
        break;
        case 1:
            func_4863329152(depth+1);
        break;
    }
    return;
}
void func_4863327584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863329680(depth+1);
        break;
        case 1:
            func_4863328368(depth+1);
        break;
    }
    return;
}
void func_4863327760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863328016(depth+1);
        break;
        case 1:
            func_4863329808(depth+1);
        break;
    }
    return;
}
void func_4863328240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863331744(depth+1);
        break;
        case 1:
            func_4863332176(depth+1);
        break;
    }
    return;
}
void func_4863328368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863332320(depth+1);
        break;
    }
    return;
}
void func_4863328160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863329152(depth+1);
        break;
    }
    return;
}
void func_4863328720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4863331664(depth+1);
        break;
        case 1:
            func_4863333088(depth+1);
        break;
        case 2:
            func_4863333216(depth+1);
        break;
        case 3:
            func_4863333376(depth+1);
        break;
        case 4:
            func_4863333504(depth+1);
        break;
    }
    return;
}
void func_4863329152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4863328240(depth+1);
        break;
        case 1:
            func_4863327456(depth+1);
        break;
        case 2:
            func_4863328720(depth+1);
        break;
        case 3:
            func_4863327760(depth+1);
        break;
        case 4:
            func_4863332928(depth+1);
        break;
        case 5:
            func_4863334032(depth+1);
        break;
        case 6:
            func_4863334160(depth+1);
        break;
    }
    return;
}
void func_4863329088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_4863329344(depth+1);
    func_4863327824(depth+1);
    func_4863328912(depth+1);
    return;
}
void func_4863329344(unsigned depth) {
    extend(91);
    return;
}
void func_4863328912(unsigned depth) {
    extend(93);
    return;
}
void func_4863329472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_4863329344(depth+1);
    func_4863328912(depth+1);
    return;
}
void func_4863329936(unsigned depth) {
    extend(48);
    return;
}
void func_4863330064(unsigned depth) {
    extend(49);
    return;
}
void func_4863330192(unsigned depth) {
    extend(50);
    return;
}
void func_4863328784(unsigned depth) {
    extend(51);
    return;
}
void func_4863330576(unsigned depth) {
    extend(52);
    return;
}
void func_4863330768(unsigned depth) {
    extend(53);
    return;
}
void func_4863330896(unsigned depth) {
    extend(54);
    return;
}
void func_4863331024(unsigned depth) {
    extend(55);
    return;
}
void func_4863331152(unsigned depth) {
    extend(56);
    return;
}
void func_4863330704(unsigned depth) {
    extend(57);
    return;
}
void func_4863328640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_4863329152(depth+1);
    func_4863331536(depth+1);
    func_4863327824(depth+1);
    return;
}
void func_4863331536(unsigned depth) {
    extend(44);
    return;
}
void func_4863329680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(44);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_4863328368(depth+1);
    func_4863331536(depth+1);
    func_4863327584(depth+1);
    return;
}
void func_4863329808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4863328016(depth+1);
    func_4863327760(depth+1);
    return;
}
void func_4863331744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(125);
        return;
    }
    func_4863331872(depth+1);
    func_4863327584(depth+1);
    func_4863332000(depth+1);
    return;
}
void func_4863331872(unsigned depth) {
    extend(123);
    return;
}
void func_4863332000(unsigned depth) {
    extend(125);
    return;
}
void func_4863332176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_4863331872(depth+1);
    func_4863332000(depth+1);
    return;
}
void func_4863332320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        extend(58);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        return;
    }
    func_4863328720(depth+1);
    func_4863330320(depth+1);
    func_4863329152(depth+1);
    return;
}
void func_4863330320(unsigned depth) {
    extend(58);
    return;
}
void func_4863331664(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_4863333088(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_4863333216(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_4863333376(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_4863333504(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_4863332928(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_4863334032(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4863334160(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_4863328160(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
