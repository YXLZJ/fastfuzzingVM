#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 30
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

void func_5601524960(unsigned depth);
void func_5601525520(unsigned depth);
void func_5601525328(unsigned depth);
void func_5601525088(unsigned depth);
void func_5601525264(unsigned depth);
void func_5601525744(unsigned depth);
void func_5601525872(unsigned depth);
void func_5601525664(unsigned depth);
void func_5601526224(unsigned depth);
void func_5601526656(unsigned depth);
void func_5601526592(unsigned depth);
void func_5601526848(unsigned depth);
void func_5601526416(unsigned depth);
void func_5601526976(unsigned depth);
void func_5601527440(unsigned depth);
void func_5601527568(unsigned depth);
void func_5601527696(unsigned depth);
void func_5601526288(unsigned depth);
void func_5601528080(unsigned depth);
void func_5601528272(unsigned depth);
void func_5601528400(unsigned depth);
void func_5601528528(unsigned depth);
void func_5601528656(unsigned depth);
void func_5601528208(unsigned depth);
void func_5601526144(unsigned depth);
void func_5601529040(unsigned depth);
void func_5601527184(unsigned depth);
void func_5601527312(unsigned depth);
void func_5601529248(unsigned depth);
void func_5601529376(unsigned depth);
void func_5601529504(unsigned depth);
void func_5601529680(unsigned depth);
void func_5601529824(unsigned depth);
void func_5601527824(unsigned depth);
void func_5601529168(unsigned depth);
void func_5601530592(unsigned depth);
void func_5601530720(unsigned depth);
void func_5601530880(unsigned depth);
void func_5601531008(unsigned depth);
void func_5601530432(unsigned depth);
void func_5601531536(unsigned depth);
void func_5601531664(unsigned depth);
void func_5601524960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5601526592(depth+1);
        break;
        case 1:
            func_5601526976(depth+1);
        break;
    }
    return;
}
void func_5601525520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5601527440(depth+1);
        break;
        case 1:
            func_5601527568(depth+1);
        break;
        case 2:
            func_5601527696(depth+1);
        break;
        case 3:
            func_5601526288(depth+1);
        break;
        case 4:
            func_5601528080(depth+1);
        break;
        case 5:
            func_5601528272(depth+1);
        break;
        case 6:
            func_5601528400(depth+1);
        break;
        case 7:
            func_5601528528(depth+1);
        break;
        case 8:
            func_5601528656(depth+1);
        break;
        case 9:
            func_5601528208(depth+1);
        break;
    }
    return;
}
void func_5601525328(unsigned depth) {
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
            func_5601526144(depth+1);
        break;
        case 1:
            func_5601526656(depth+1);
        break;
    }
    return;
}
void func_5601525088(unsigned depth) {
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
            func_5601527184(depth+1);
        break;
        case 1:
            func_5601525872(depth+1);
        break;
    }
    return;
}
void func_5601525264(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5601525520(depth+1);
        break;
        case 1:
            func_5601527312(depth+1);
        break;
    }
    return;
}
void func_5601525744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5601529248(depth+1);
        break;
        case 1:
            func_5601529680(depth+1);
        break;
    }
    return;
}
void func_5601525872(unsigned depth) {
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
            func_5601529824(depth+1);
        break;
    }
    return;
}
void func_5601525664(unsigned depth) {
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
            func_5601526656(depth+1);
        break;
    }
    return;
}
void func_5601526224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5601529168(depth+1);
        break;
        case 1:
            func_5601530592(depth+1);
        break;
        case 2:
            func_5601530720(depth+1);
        break;
        case 3:
            func_5601530880(depth+1);
        break;
        case 4:
            func_5601531008(depth+1);
        break;
    }
    return;
}
void func_5601526656(unsigned depth) {
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
            func_5601525744(depth+1);
        break;
        case 1:
            func_5601524960(depth+1);
        break;
        case 2:
            func_5601526224(depth+1);
        break;
        case 3:
            func_5601525264(depth+1);
        break;
        case 4:
            func_5601530432(depth+1);
        break;
        case 5:
            func_5601531536(depth+1);
        break;
        case 6:
            func_5601531664(depth+1);
        break;
    }
    return;
}
void func_5601526592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5601526848(depth+1);
    func_5601525328(depth+1);
    func_5601526416(depth+1);
    return;
}
void func_5601526848(unsigned depth) {
    extend(91);
    return;
}
void func_5601526416(unsigned depth) {
    extend(93);
    return;
}
void func_5601526976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5601526848(depth+1);
    func_5601526416(depth+1);
    return;
}
void func_5601527440(unsigned depth) {
    extend(48);
    return;
}
void func_5601527568(unsigned depth) {
    extend(49);
    return;
}
void func_5601527696(unsigned depth) {
    extend(50);
    return;
}
void func_5601526288(unsigned depth) {
    extend(51);
    return;
}
void func_5601528080(unsigned depth) {
    extend(52);
    return;
}
void func_5601528272(unsigned depth) {
    extend(53);
    return;
}
void func_5601528400(unsigned depth) {
    extend(54);
    return;
}
void func_5601528528(unsigned depth) {
    extend(55);
    return;
}
void func_5601528656(unsigned depth) {
    extend(56);
    return;
}
void func_5601528208(unsigned depth) {
    extend(57);
    return;
}
void func_5601526144(unsigned depth) {
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
    func_5601526656(depth+1);
    func_5601529040(depth+1);
    func_5601525328(depth+1);
    return;
}
void func_5601529040(unsigned depth) {
    extend(44);
    return;
}
void func_5601527184(unsigned depth) {
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
    func_5601525872(depth+1);
    func_5601529040(depth+1);
    func_5601525088(depth+1);
    return;
}
void func_5601527312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5601525520(depth+1);
    func_5601525264(depth+1);
    return;
}
void func_5601529248(unsigned depth) {
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
    func_5601529376(depth+1);
    func_5601525088(depth+1);
    func_5601529504(depth+1);
    return;
}
void func_5601529376(unsigned depth) {
    extend(123);
    return;
}
void func_5601529504(unsigned depth) {
    extend(125);
    return;
}
void func_5601529680(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5601529376(depth+1);
    func_5601529504(depth+1);
    return;
}
void func_5601529824(unsigned depth) {
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
    func_5601526224(depth+1);
    func_5601527824(depth+1);
    func_5601526656(depth+1);
    return;
}
void func_5601527824(unsigned depth) {
    extend(58);
    return;
}
void func_5601529168(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5601530592(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5601530720(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5601530880(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5601531008(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5601530432(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5601531536(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5601531664(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5601525664(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
