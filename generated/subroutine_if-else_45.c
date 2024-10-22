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

void func_4829766368(unsigned depth);
void func_4829775808(unsigned depth);
void func_4829775728(unsigned depth);
void func_4829775648(unsigned depth);
void func_4829776272(unsigned depth);
void func_4829775376(unsigned depth);
void func_4829776800(unsigned depth);
void func_4829775568(unsigned depth);
void func_4829776096(unsigned depth);
void func_4829776160(unsigned depth);
void func_4829777040(unsigned depth);
void func_4829777168(unsigned depth);
void func_4829777392(unsigned depth);
void func_4829777520(unsigned depth);
void func_4829777648(unsigned depth);
void func_4829778016(unsigned depth);
void func_4829778144(unsigned depth);
void func_4829776464(unsigned depth);
void func_4829778528(unsigned depth);
void func_4829778656(unsigned depth);
void func_4829778784(unsigned depth);
void func_4829778912(unsigned depth);
void func_4829779040(unsigned depth);
void func_4829779200(unsigned depth);
void func_4829779328(unsigned depth);
void func_4829779552(unsigned depth);
void func_4829779680(unsigned depth);
void func_4829779808(unsigned depth);
void func_4829779936(unsigned depth);
void func_4829780064(unsigned depth);
void func_4829780256(unsigned depth);
void func_4829779488(unsigned depth);
void func_4829777296(unsigned depth);
void func_4829778272(unsigned depth);
void func_4829778400(unsigned depth);
void func_4829777840(unsigned depth);
void func_4829781744(unsigned depth);
void func_4829781872(unsigned depth);
void func_4829781680(unsigned depth);
void func_4829780912(unsigned depth);
void func_4829777904(unsigned depth);
void func_4829782320(unsigned depth);
void func_4829782448(unsigned depth);
void func_4829782576(unsigned depth);
void func_4829782768(unsigned depth);
void func_4829782896(unsigned depth);
void func_4829783024(unsigned depth);
void func_4829783152(unsigned depth);
void func_4829782704(unsigned depth);
void func_4829783472(unsigned depth);
void func_4829783600(unsigned depth);
void func_4829780736(unsigned depth);
void func_4829780448(unsigned depth);
void func_4829783872(unsigned depth);
void func_4829784000(unsigned depth);
void func_4829766368(unsigned depth) {
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
            func_4829777392(depth+1);
        break;
    }
    return;
}
void func_4829775808(unsigned depth) {
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
            func_4829778016(depth+1);
        break;
        case 1:
            func_4829776464(depth+1);
        break;
        case 2:
            func_4829778656(depth+1);
        break;
    }
    return;
}
void func_4829775728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4829778912(depth+1);
        break;
        case 1:
            func_4829777168(depth+1);
        break;
        case 2:
            func_4829779200(depth+1);
        break;
    }
    return;
}
void func_4829775648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4829776800(depth+1);
        break;
        case 1:
            func_4829776272(depth+1);
        break;
    }
    return;
}
void func_4829776272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_4829779552(depth+1);
        break;
        case 1:
            func_4829779680(depth+1);
        break;
        case 2:
            func_4829779808(depth+1);
        break;
        case 3:
            func_4829779936(depth+1);
        break;
        case 4:
            func_4829780064(depth+1);
        break;
        case 5:
            func_4829780256(depth+1);
        break;
    }
    return;
}
void func_4829775376(unsigned depth) {
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
            func_4829779488(depth+1);
        break;
        case 1:
            func_4829781680(depth+1);
        break;
    }
    return;
}
void func_4829776800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4829780912(depth+1);
        break;
        case 1:
            func_4829777904(depth+1);
        break;
        case 2:
            func_4829782320(depth+1);
        break;
        case 3:
            func_4829782448(depth+1);
        break;
        case 4:
            func_4829782576(depth+1);
        break;
        case 5:
            func_4829782768(depth+1);
        break;
        case 6:
            func_4829782896(depth+1);
        break;
        case 7:
            func_4829783024(depth+1);
        break;
        case 8:
            func_4829783152(depth+1);
        break;
        case 9:
            func_4829782704(depth+1);
        break;
    }
    return;
}
void func_4829775568(unsigned depth) {
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
            func_4829783472(depth+1);
        break;
    }
    return;
}
void func_4829776096(unsigned depth) {
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
            func_4829775376(depth+1);
        break;
    }
    return;
}
void func_4829776160(unsigned depth) {
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
            func_4829775376(depth+1);
        break;
        case 1:
            func_4829766368(depth+1);
        break;
        case 2:
            func_4829775568(depth+1);
        break;
    }
    return;
}
void func_4829777040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4829780736(depth+1);
        break;
        case 1:
            func_4829780448(depth+1);
        break;
    }
    return;
}
void func_4829777168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4829775648(depth+1);
        break;
        case 1:
            func_4829783872(depth+1);
        break;
    }
    return;
}
void func_4829777392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4829776272(depth+1);
    func_4829777520(depth+1);
    func_4829775728(depth+1);
    func_4829777648(depth+1);
    return;
}
void func_4829777520(unsigned depth) {
    extend(61);
    return;
}
void func_4829777648(unsigned depth) {
    extend(59);
    return;
}
void func_4829778016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4829775728(depth+1);
    func_4829778144(depth+1);
    func_4829775728(depth+1);
    return;
}
void func_4829778144(unsigned depth) {
    extend(62);
    return;
}
void func_4829776464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4829775728(depth+1);
    func_4829778528(depth+1);
    func_4829775728(depth+1);
    return;
}
void func_4829778528(unsigned depth) {
    extend(60);
    return;
}
void func_4829778656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4829775728(depth+1);
    func_4829778784(depth+1);
    func_4829775728(depth+1);
    return;
}
void func_4829778784(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4829778912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4829777168(depth+1);
    func_4829779040(depth+1);
    func_4829775728(depth+1);
    return;
}
void func_4829779040(unsigned depth) {
    extend(43);
    return;
}
void func_4829779200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4829777168(depth+1);
    func_4829779328(depth+1);
    func_4829775728(depth+1);
    return;
}
void func_4829779328(unsigned depth) {
    extend(45);
    return;
}
void func_4829779552(unsigned depth) {
    extend(120);
    return;
}
void func_4829779680(unsigned depth) {
    extend(121);
    return;
}
void func_4829779808(unsigned depth) {
    extend(122);
    return;
}
void func_4829779936(unsigned depth) {
    extend(97);
    return;
}
void func_4829780064(unsigned depth) {
    extend(98);
    return;
}
void func_4829780256(unsigned depth) {
    extend(99);
    return;
}
void func_4829779488(unsigned depth) {
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
    func_4829777296(depth+1);
    func_4829778272(depth+1);
    func_4829775808(depth+1);
    func_4829778400(depth+1);
    func_4829777840(depth+1);
    func_4829777040(depth+1);
    func_4829781744(depth+1);
    func_4829781872(depth+1);
    func_4829777840(depth+1);
    func_4829777040(depth+1);
    func_4829781744(depth+1);
    return;
}
void func_4829777296(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_4829778272(unsigned depth) {
    extend(40);
    return;
}
void func_4829778400(unsigned depth) {
    extend(41);
    return;
}
void func_4829777840(unsigned depth) {
    extend(123);
    return;
}
void func_4829781744(unsigned depth) {
    extend(125);
    return;
}
void func_4829781872(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4829781680(unsigned depth) {
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
    func_4829777296(depth+1);
    func_4829778272(depth+1);
    func_4829775808(depth+1);
    func_4829778400(depth+1);
    func_4829777840(depth+1);
    func_4829777040(depth+1);
    func_4829781744(depth+1);
    return;
}
void func_4829780912(unsigned depth) {
    extend(48);
    return;
}
void func_4829777904(unsigned depth) {
    extend(49);
    return;
}
void func_4829782320(unsigned depth) {
    extend(50);
    return;
}
void func_4829782448(unsigned depth) {
    extend(51);
    return;
}
void func_4829782576(unsigned depth) {
    extend(52);
    return;
}
void func_4829782768(unsigned depth) {
    extend(53);
    return;
}
void func_4829782896(unsigned depth) {
    extend(54);
    return;
}
void func_4829783024(unsigned depth) {
    extend(55);
    return;
}
void func_4829783152(unsigned depth) {
    extend(56);
    return;
}
void func_4829782704(unsigned depth) {
    extend(57);
    return;
}
void func_4829783472(unsigned depth) {
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
    func_4829783600(depth+1);
    func_4829778272(depth+1);
    func_4829775728(depth+1);
    func_4829778400(depth+1);
    func_4829777648(depth+1);
    return;
}
void func_4829783600(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_4829780736(unsigned depth) {
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
    func_4829776160(depth+1);
    func_4829777040(depth+1);
    return;
}
void func_4829780448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_4829783872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4829775648(depth+1);
    func_4829784000(depth+1);
    func_4829777168(depth+1);
    return;
}
void func_4829784000(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_4829776096(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
