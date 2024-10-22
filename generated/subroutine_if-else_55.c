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

void func_5265973984(unsigned depth);
void func_5265983424(unsigned depth);
void func_5265983344(unsigned depth);
void func_5265983264(unsigned depth);
void func_5265983888(unsigned depth);
void func_5265982992(unsigned depth);
void func_5265984416(unsigned depth);
void func_5265983184(unsigned depth);
void func_5265983712(unsigned depth);
void func_5265983776(unsigned depth);
void func_5265984656(unsigned depth);
void func_5265984784(unsigned depth);
void func_5265985008(unsigned depth);
void func_5265985136(unsigned depth);
void func_5265985264(unsigned depth);
void func_5265985632(unsigned depth);
void func_5265985760(unsigned depth);
void func_5265984080(unsigned depth);
void func_5265986144(unsigned depth);
void func_5265986272(unsigned depth);
void func_5265986400(unsigned depth);
void func_5265986528(unsigned depth);
void func_5265986656(unsigned depth);
void func_5265986816(unsigned depth);
void func_5265986944(unsigned depth);
void func_5265987168(unsigned depth);
void func_5265987296(unsigned depth);
void func_5265987424(unsigned depth);
void func_5265987552(unsigned depth);
void func_5265987680(unsigned depth);
void func_5265987872(unsigned depth);
void func_5265987104(unsigned depth);
void func_5265984912(unsigned depth);
void func_5265985888(unsigned depth);
void func_5265986016(unsigned depth);
void func_5265985456(unsigned depth);
void func_5265989360(unsigned depth);
void func_5265989488(unsigned depth);
void func_5265989296(unsigned depth);
void func_5265988528(unsigned depth);
void func_5265985520(unsigned depth);
void func_5265989936(unsigned depth);
void func_5265990064(unsigned depth);
void func_5265990192(unsigned depth);
void func_5265990384(unsigned depth);
void func_5265990512(unsigned depth);
void func_5265990640(unsigned depth);
void func_5265990768(unsigned depth);
void func_5265990320(unsigned depth);
void func_5265991088(unsigned depth);
void func_5265991216(unsigned depth);
void func_5265988352(unsigned depth);
void func_5265988064(unsigned depth);
void func_5265991488(unsigned depth);
void func_5265991616(unsigned depth);
void func_5265973984(unsigned depth) {
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
            func_5265985008(depth+1);
        break;
    }
    return;
}
void func_5265983424(unsigned depth) {
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
            func_5265985632(depth+1);
        break;
        case 1:
            func_5265984080(depth+1);
        break;
        case 2:
            func_5265986272(depth+1);
        break;
    }
    return;
}
void func_5265983344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5265986528(depth+1);
        break;
        case 1:
            func_5265984784(depth+1);
        break;
        case 2:
            func_5265986816(depth+1);
        break;
    }
    return;
}
void func_5265983264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5265984416(depth+1);
        break;
        case 1:
            func_5265983888(depth+1);
        break;
    }
    return;
}
void func_5265983888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5265987168(depth+1);
        break;
        case 1:
            func_5265987296(depth+1);
        break;
        case 2:
            func_5265987424(depth+1);
        break;
        case 3:
            func_5265987552(depth+1);
        break;
        case 4:
            func_5265987680(depth+1);
        break;
        case 5:
            func_5265987872(depth+1);
        break;
    }
    return;
}
void func_5265982992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5265987104(depth+1);
        break;
        case 1:
            func_5265989296(depth+1);
        break;
    }
    return;
}
void func_5265984416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5265988528(depth+1);
        break;
        case 1:
            func_5265985520(depth+1);
        break;
        case 2:
            func_5265989936(depth+1);
        break;
        case 3:
            func_5265990064(depth+1);
        break;
        case 4:
            func_5265990192(depth+1);
        break;
        case 5:
            func_5265990384(depth+1);
        break;
        case 6:
            func_5265990512(depth+1);
        break;
        case 7:
            func_5265990640(depth+1);
        break;
        case 8:
            func_5265990768(depth+1);
        break;
        case 9:
            func_5265990320(depth+1);
        break;
    }
    return;
}
void func_5265983184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5265991088(depth+1);
        break;
    }
    return;
}
void func_5265983712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5265982992(depth+1);
        break;
    }
    return;
}
void func_5265983776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5265982992(depth+1);
        break;
        case 1:
            func_5265973984(depth+1);
        break;
        case 2:
            func_5265983184(depth+1);
        break;
    }
    return;
}
void func_5265984656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5265988352(depth+1);
        break;
        case 1:
            func_5265988064(depth+1);
        break;
    }
    return;
}
void func_5265984784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5265983264(depth+1);
        break;
        case 1:
            func_5265991488(depth+1);
        break;
    }
    return;
}
void func_5265985008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5265983888(depth+1);
    func_5265985136(depth+1);
    func_5265983344(depth+1);
    func_5265985264(depth+1);
    return;
}
void func_5265985136(unsigned depth) {
    extend(61);
    return;
}
void func_5265985264(unsigned depth) {
    extend(59);
    return;
}
void func_5265985632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5265983344(depth+1);
    func_5265985760(depth+1);
    func_5265983344(depth+1);
    return;
}
void func_5265985760(unsigned depth) {
    extend(62);
    return;
}
void func_5265984080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5265983344(depth+1);
    func_5265986144(depth+1);
    func_5265983344(depth+1);
    return;
}
void func_5265986144(unsigned depth) {
    extend(60);
    return;
}
void func_5265986272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5265983344(depth+1);
    func_5265986400(depth+1);
    func_5265983344(depth+1);
    return;
}
void func_5265986400(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5265986528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5265984784(depth+1);
    func_5265986656(depth+1);
    func_5265983344(depth+1);
    return;
}
void func_5265986656(unsigned depth) {
    extend(43);
    return;
}
void func_5265986816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5265984784(depth+1);
    func_5265986944(depth+1);
    func_5265983344(depth+1);
    return;
}
void func_5265986944(unsigned depth) {
    extend(45);
    return;
}
void func_5265987168(unsigned depth) {
    extend(120);
    return;
}
void func_5265987296(unsigned depth) {
    extend(121);
    return;
}
void func_5265987424(unsigned depth) {
    extend(122);
    return;
}
void func_5265987552(unsigned depth) {
    extend(97);
    return;
}
void func_5265987680(unsigned depth) {
    extend(98);
    return;
}
void func_5265987872(unsigned depth) {
    extend(99);
    return;
}
void func_5265987104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        extend(101);
        extend(108);
        extend(115);
        extend(101);
        extend(123);
        extend(125);
        return;
    }
    func_5265984912(depth+1);
    func_5265985888(depth+1);
    func_5265983424(depth+1);
    func_5265986016(depth+1);
    func_5265985456(depth+1);
    func_5265984656(depth+1);
    func_5265989360(depth+1);
    func_5265989488(depth+1);
    func_5265985456(depth+1);
    func_5265984656(depth+1);
    func_5265989360(depth+1);
    return;
}
void func_5265984912(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5265985888(unsigned depth) {
    extend(40);
    return;
}
void func_5265986016(unsigned depth) {
    extend(41);
    return;
}
void func_5265985456(unsigned depth) {
    extend(123);
    return;
}
void func_5265989360(unsigned depth) {
    extend(125);
    return;
}
void func_5265989488(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5265989296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(102);
        extend(40);
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        extend(41);
        extend(123);
        extend(125);
        return;
    }
    func_5265984912(depth+1);
    func_5265985888(depth+1);
    func_5265983424(depth+1);
    func_5265986016(depth+1);
    func_5265985456(depth+1);
    func_5265984656(depth+1);
    func_5265989360(depth+1);
    return;
}
void func_5265988528(unsigned depth) {
    extend(48);
    return;
}
void func_5265985520(unsigned depth) {
    extend(49);
    return;
}
void func_5265989936(unsigned depth) {
    extend(50);
    return;
}
void func_5265990064(unsigned depth) {
    extend(51);
    return;
}
void func_5265990192(unsigned depth) {
    extend(52);
    return;
}
void func_5265990384(unsigned depth) {
    extend(53);
    return;
}
void func_5265990512(unsigned depth) {
    extend(54);
    return;
}
void func_5265990640(unsigned depth) {
    extend(55);
    return;
}
void func_5265990768(unsigned depth) {
    extend(56);
    return;
}
void func_5265990320(unsigned depth) {
    extend(57);
    return;
}
void func_5265991088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5265991216(depth+1);
    func_5265985888(depth+1);
    func_5265983344(depth+1);
    func_5265986016(depth+1);
    func_5265985264(depth+1);
    return;
}
void func_5265991216(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5265988352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(105);
        extend(110);
        extend(116);
        extend(40);
        extend(99);
        extend(41);
        extend(59);
        return;
    }
    func_5265983776(depth+1);
    func_5265984656(depth+1);
    return;
}
void func_5265988064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5265991488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5265983264(depth+1);
    func_5265991616(depth+1);
    func_5265984784(depth+1);
    return;
}
void func_5265991616(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5265983712(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
