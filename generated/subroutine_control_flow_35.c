#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 35
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

void func_5005940256(unsigned depth);
void func_5005940624(unsigned depth);
void func_5005941040(unsigned depth);
void func_5005941136(unsigned depth);
void func_5005940912(unsigned depth);
void func_5005940832(unsigned depth);
void func_5005941536(unsigned depth);
void func_5005940752(unsigned depth);
void func_5005941264(unsigned depth);
void func_5005941792(unsigned depth);
void func_5005941456(unsigned depth);
void func_5005941728(unsigned depth);
void func_5005942144(unsigned depth);
void func_5005942512(unsigned depth);
void func_5005942352(unsigned depth);
void func_5005942080(unsigned depth);
void func_5005942272(unsigned depth);
void func_5005941328(unsigned depth);
void func_5005943376(unsigned depth);
void func_5005943504(unsigned depth);
void func_5005943632(unsigned depth);
void func_5005943760(unsigned depth);
void func_5005943888(unsigned depth);
void func_5005944016(unsigned depth);
void func_5005944400(unsigned depth);
void func_5005941984(unsigned depth);
void func_5005944592(unsigned depth);
void func_5005944720(unsigned depth);
void func_5005944848(unsigned depth);
void func_5005945040(unsigned depth);
void func_5005945168(unsigned depth);
void func_5005945296(unsigned depth);
void func_5005945424(unsigned depth);
void func_5005944976(unsigned depth);
void func_5005946000(unsigned depth);
void func_5005946128(unsigned depth);
void func_5005943168(unsigned depth);
void func_5005943296(unsigned depth);
void func_5005944304(unsigned depth);
void func_5005946480(unsigned depth);
void func_5005946608(unsigned depth);
void func_5005944144(unsigned depth);
void func_5005947376(unsigned depth);
void func_5005947504(unsigned depth);
void func_5005942640(unsigned depth);
void func_5005947152(unsigned depth);
void func_5005947824(unsigned depth);
void func_5005947952(unsigned depth);
void func_5005948080(unsigned depth);
void func_5005948208(unsigned depth);
void func_5005948400(unsigned depth);
void func_5005948528(unsigned depth);
void func_5005948656(unsigned depth);
void func_5005948784(unsigned depth);
void func_5005948336(unsigned depth);
void func_5005949552(unsigned depth);
void func_5005946800(unsigned depth);
void func_5005949376(unsigned depth);
void func_5005946976(unsigned depth);
void func_5005949040(unsigned depth);
void func_5005949168(unsigned depth);
void func_5005949680(unsigned depth);
void func_5005950528(unsigned depth);
void func_5005950656(unsigned depth);
void func_5005949808(unsigned depth);
void func_5005945488(unsigned depth);
void func_5005950464(unsigned depth);
void func_5005945856(unsigned depth);
void func_5005940256(unsigned depth) {
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
            func_5005942080(depth+1);
        break;
    }
    return;
}
void func_5005940624(unsigned depth) {
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
            func_5005943376(depth+1);
        break;
        case 1:
            func_5005943632(depth+1);
        break;
        case 2:
            func_5005943888(depth+1);
        break;
    }
    return;
}
void func_5005941040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5005944400(depth+1);
        break;
        case 1:
            func_5005941984(depth+1);
        break;
        case 2:
            func_5005944592(depth+1);
        break;
        case 3:
            func_5005944720(depth+1);
        break;
        case 4:
            func_5005944848(depth+1);
        break;
        case 5:
            func_5005945040(depth+1);
        break;
        case 6:
            func_5005945168(depth+1);
        break;
        case 7:
            func_5005945296(depth+1);
        break;
        case 8:
            func_5005945424(depth+1);
        break;
        case 9:
            func_5005944976(depth+1);
        break;
    }
    return;
}
void func_5005941136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5005946000(depth+1);
        break;
        case 1:
            func_5005943168(depth+1);
        break;
        case 2:
            func_5005942512(depth+1);
        break;
    }
    return;
}
void func_5005940912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5005944304(depth+1);
        break;
        case 1:
            func_5005941264(depth+1);
        break;
        case 2:
            func_5005941536(depth+1);
        break;
    }
    return;
}
void func_5005940832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5005944144(depth+1);
        break;
    }
    return;
}
void func_5005941536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5005947152(depth+1);
        break;
        case 1:
            func_5005947824(depth+1);
        break;
        case 2:
            func_5005947952(depth+1);
        break;
        case 3:
            func_5005948080(depth+1);
        break;
        case 4:
            func_5005948208(depth+1);
        break;
        case 5:
            func_5005948400(depth+1);
        break;
        case 6:
            func_5005948528(depth+1);
        break;
        case 7:
            func_5005948656(depth+1);
        break;
        case 8:
            func_5005948784(depth+1);
        break;
    }
    return;
}
void func_5005940752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5005948336(depth+1);
        break;
        case 1:
            func_5005946800(depth+1);
        break;
    }
    return;
}
void func_5005941264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5005941040(depth+1);
        break;
        case 1:
            func_5005946976(depth+1);
        break;
    }
    return;
}
void func_5005941792(unsigned depth) {
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
            func_5005949040(depth+1);
        break;
    }
    return;
}
void func_5005941456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5005949680(depth+1);
        break;
    }
    return;
}
void func_5005941728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5005941456(depth+1);
        break;
    }
    return;
}
void func_5005942144(unsigned depth) {
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
            func_5005940752(depth+1);
        break;
        case 1:
            func_5005942352(depth+1);
        break;
        case 2:
            func_5005940832(depth+1);
        break;
        case 3:
            func_5005940256(depth+1);
        break;
        case 4:
            func_5005941792(depth+1);
        break;
    }
    return;
}
void func_5005942512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5005950528(depth+1);
        break;
        case 1:
            func_5005949808(depth+1);
        break;
        case 2:
            func_5005940912(depth+1);
        break;
    }
    return;
}
void func_5005942352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5005950464(depth+1);
        break;
    }
    return;
}
void func_5005942080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5005941536(depth+1);
    func_5005942272(depth+1);
    func_5005941136(depth+1);
    func_5005941328(depth+1);
    return;
}
void func_5005942272(unsigned depth) {
    extend(61);
    return;
}
void func_5005941328(unsigned depth) {
    extend(59);
    return;
}
void func_5005943376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5005941136(depth+1);
    func_5005943504(depth+1);
    func_5005941136(depth+1);
    return;
}
void func_5005943504(unsigned depth) {
    extend(62);
    return;
}
void func_5005943632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5005941136(depth+1);
    func_5005943760(depth+1);
    func_5005941136(depth+1);
    return;
}
void func_5005943760(unsigned depth) {
    extend(60);
    return;
}
void func_5005943888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5005941136(depth+1);
    func_5005944016(depth+1);
    func_5005941136(depth+1);
    return;
}
void func_5005944016(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5005944400(unsigned depth) {
    extend(48);
    return;
}
void func_5005941984(unsigned depth) {
    extend(49);
    return;
}
void func_5005944592(unsigned depth) {
    extend(50);
    return;
}
void func_5005944720(unsigned depth) {
    extend(51);
    return;
}
void func_5005944848(unsigned depth) {
    extend(52);
    return;
}
void func_5005945040(unsigned depth) {
    extend(53);
    return;
}
void func_5005945168(unsigned depth) {
    extend(54);
    return;
}
void func_5005945296(unsigned depth) {
    extend(55);
    return;
}
void func_5005945424(unsigned depth) {
    extend(56);
    return;
}
void func_5005944976(unsigned depth) {
    extend(57);
    return;
}
void func_5005946000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5005941136(depth+1);
    func_5005946128(depth+1);
    func_5005942512(depth+1);
    return;
}
void func_5005946128(unsigned depth) {
    extend(43);
    return;
}
void func_5005943168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5005941136(depth+1);
    func_5005943296(depth+1);
    func_5005942512(depth+1);
    return;
}
void func_5005943296(unsigned depth) {
    extend(45);
    return;
}
void func_5005944304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5005946480(depth+1);
    func_5005941136(depth+1);
    func_5005946608(depth+1);
    return;
}
void func_5005946480(unsigned depth) {
    extend(40);
    return;
}
void func_5005946608(unsigned depth) {
    extend(41);
    return;
}
void func_5005944144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5005947376(depth+1);
    func_5005946480(depth+1);
    func_5005940256(depth+1);
    func_5005941328(depth+1);
    func_5005940624(depth+1);
    func_5005941328(depth+1);
    func_5005940256(depth+1);
    func_5005946608(depth+1);
    func_5005947504(depth+1);
    func_5005941456(depth+1);
    func_5005942640(depth+1);
    return;
}
void func_5005947376(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5005947504(unsigned depth) {
    extend(123);
    return;
}
void func_5005942640(unsigned depth) {
    extend(125);
    return;
}
void func_5005947152(unsigned depth) {
    extend(105);
    return;
}
void func_5005947824(unsigned depth) {
    extend(106);
    return;
}
void func_5005947952(unsigned depth) {
    extend(107);
    return;
}
void func_5005948080(unsigned depth) {
    extend(120);
    return;
}
void func_5005948208(unsigned depth) {
    extend(121);
    return;
}
void func_5005948400(unsigned depth) {
    extend(122);
    return;
}
void func_5005948528(unsigned depth) {
    extend(97);
    return;
}
void func_5005948656(unsigned depth) {
    extend(98);
    return;
}
void func_5005948784(unsigned depth) {
    extend(99);
    return;
}
void func_5005948336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5005949552(depth+1);
    func_5005946480(depth+1);
    func_5005940624(depth+1);
    func_5005946608(depth+1);
    func_5005947504(depth+1);
    func_5005941456(depth+1);
    func_5005942640(depth+1);
    return;
}
void func_5005949552(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5005946800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5005949552(depth+1);
    func_5005946480(depth+1);
    func_5005940624(depth+1);
    func_5005946608(depth+1);
    func_5005947504(depth+1);
    func_5005941456(depth+1);
    func_5005942640(depth+1);
    func_5005949376(depth+1);
    func_5005947504(depth+1);
    func_5005941456(depth+1);
    func_5005942640(depth+1);
    return;
}
void func_5005949376(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5005946976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5005941040(depth+1);
    func_5005941264(depth+1);
    return;
}
void func_5005949040(unsigned depth) {
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
    func_5005949168(depth+1);
    func_5005946480(depth+1);
    func_5005941136(depth+1);
    func_5005946608(depth+1);
    func_5005941328(depth+1);
    return;
}
void func_5005949168(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5005949680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5005942144(depth+1);
    func_5005941456(depth+1);
    return;
}
void func_5005950528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5005942512(depth+1);
    func_5005950656(depth+1);
    func_5005940912(depth+1);
    return;
}
void func_5005950656(unsigned depth) {
    extend(42);
    return;
}
void func_5005949808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5005942512(depth+1);
    func_5005945488(depth+1);
    func_5005940912(depth+1);
    return;
}
void func_5005945488(unsigned depth) {
    extend(47);
    return;
}
void func_5005950464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5005945856(depth+1);
    func_5005946480(depth+1);
    func_5005940624(depth+1);
    func_5005946608(depth+1);
    func_5005947504(depth+1);
    func_5005941456(depth+1);
    func_5005942640(depth+1);
    return;
}
void func_5005945856(unsigned depth) {
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
    func_5005941728(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
