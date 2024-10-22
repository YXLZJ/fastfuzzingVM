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

void func_5031092960(unsigned depth);
void func_5031102400(unsigned depth);
void func_5031102320(unsigned depth);
void func_5031102240(unsigned depth);
void func_5031102864(unsigned depth);
void func_5031101968(unsigned depth);
void func_5031103392(unsigned depth);
void func_5031102160(unsigned depth);
void func_5031102688(unsigned depth);
void func_5031102752(unsigned depth);
void func_5031103632(unsigned depth);
void func_5031103760(unsigned depth);
void func_5031103984(unsigned depth);
void func_5031104112(unsigned depth);
void func_5031104240(unsigned depth);
void func_5031104608(unsigned depth);
void func_5031104736(unsigned depth);
void func_5031103056(unsigned depth);
void func_5031105120(unsigned depth);
void func_5031105248(unsigned depth);
void func_5031105376(unsigned depth);
void func_5031105504(unsigned depth);
void func_5031105632(unsigned depth);
void func_5031105792(unsigned depth);
void func_5031105920(unsigned depth);
void func_5031106144(unsigned depth);
void func_5031106272(unsigned depth);
void func_5031106400(unsigned depth);
void func_5031106528(unsigned depth);
void func_5031106656(unsigned depth);
void func_5031106848(unsigned depth);
void func_5031106080(unsigned depth);
void func_5031103888(unsigned depth);
void func_5031104864(unsigned depth);
void func_5031104992(unsigned depth);
void func_5031104432(unsigned depth);
void func_5031108336(unsigned depth);
void func_5031108464(unsigned depth);
void func_5031108272(unsigned depth);
void func_5031107504(unsigned depth);
void func_5031104496(unsigned depth);
void func_5031108912(unsigned depth);
void func_5031109040(unsigned depth);
void func_5031109168(unsigned depth);
void func_5031109360(unsigned depth);
void func_5031109488(unsigned depth);
void func_5031109616(unsigned depth);
void func_5031109744(unsigned depth);
void func_5031109296(unsigned depth);
void func_5031110064(unsigned depth);
void func_5031110192(unsigned depth);
void func_5031107328(unsigned depth);
void func_5031107040(unsigned depth);
void func_5031110464(unsigned depth);
void func_5031110592(unsigned depth);
void func_5031092960(unsigned depth) {
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
            func_5031103984(depth+1);
        break;
    }
    return;
}
void func_5031102400(unsigned depth) {
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
            func_5031104608(depth+1);
        break;
        case 1:
            func_5031103056(depth+1);
        break;
        case 2:
            func_5031105248(depth+1);
        break;
    }
    return;
}
void func_5031102320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5031105504(depth+1);
        break;
        case 1:
            func_5031103760(depth+1);
        break;
        case 2:
            func_5031105792(depth+1);
        break;
    }
    return;
}
void func_5031102240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5031103392(depth+1);
        break;
        case 1:
            func_5031102864(depth+1);
        break;
    }
    return;
}
void func_5031102864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5031106144(depth+1);
        break;
        case 1:
            func_5031106272(depth+1);
        break;
        case 2:
            func_5031106400(depth+1);
        break;
        case 3:
            func_5031106528(depth+1);
        break;
        case 4:
            func_5031106656(depth+1);
        break;
        case 5:
            func_5031106848(depth+1);
        break;
    }
    return;
}
void func_5031101968(unsigned depth) {
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
            func_5031106080(depth+1);
        break;
        case 1:
            func_5031108272(depth+1);
        break;
    }
    return;
}
void func_5031103392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5031107504(depth+1);
        break;
        case 1:
            func_5031104496(depth+1);
        break;
        case 2:
            func_5031108912(depth+1);
        break;
        case 3:
            func_5031109040(depth+1);
        break;
        case 4:
            func_5031109168(depth+1);
        break;
        case 5:
            func_5031109360(depth+1);
        break;
        case 6:
            func_5031109488(depth+1);
        break;
        case 7:
            func_5031109616(depth+1);
        break;
        case 8:
            func_5031109744(depth+1);
        break;
        case 9:
            func_5031109296(depth+1);
        break;
    }
    return;
}
void func_5031102160(unsigned depth) {
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
            func_5031110064(depth+1);
        break;
    }
    return;
}
void func_5031102688(unsigned depth) {
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
            func_5031101968(depth+1);
        break;
    }
    return;
}
void func_5031102752(unsigned depth) {
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
            func_5031101968(depth+1);
        break;
        case 1:
            func_5031092960(depth+1);
        break;
        case 2:
            func_5031102160(depth+1);
        break;
    }
    return;
}
void func_5031103632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5031107328(depth+1);
        break;
        case 1:
            func_5031107040(depth+1);
        break;
    }
    return;
}
void func_5031103760(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5031102240(depth+1);
        break;
        case 1:
            func_5031110464(depth+1);
        break;
    }
    return;
}
void func_5031103984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5031102864(depth+1);
    func_5031104112(depth+1);
    func_5031102320(depth+1);
    func_5031104240(depth+1);
    return;
}
void func_5031104112(unsigned depth) {
    extend(61);
    return;
}
void func_5031104240(unsigned depth) {
    extend(59);
    return;
}
void func_5031104608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5031102320(depth+1);
    func_5031104736(depth+1);
    func_5031102320(depth+1);
    return;
}
void func_5031104736(unsigned depth) {
    extend(62);
    return;
}
void func_5031103056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5031102320(depth+1);
    func_5031105120(depth+1);
    func_5031102320(depth+1);
    return;
}
void func_5031105120(unsigned depth) {
    extend(60);
    return;
}
void func_5031105248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5031102320(depth+1);
    func_5031105376(depth+1);
    func_5031102320(depth+1);
    return;
}
void func_5031105376(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5031105504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5031103760(depth+1);
    func_5031105632(depth+1);
    func_5031102320(depth+1);
    return;
}
void func_5031105632(unsigned depth) {
    extend(43);
    return;
}
void func_5031105792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5031103760(depth+1);
    func_5031105920(depth+1);
    func_5031102320(depth+1);
    return;
}
void func_5031105920(unsigned depth) {
    extend(45);
    return;
}
void func_5031106144(unsigned depth) {
    extend(120);
    return;
}
void func_5031106272(unsigned depth) {
    extend(121);
    return;
}
void func_5031106400(unsigned depth) {
    extend(122);
    return;
}
void func_5031106528(unsigned depth) {
    extend(97);
    return;
}
void func_5031106656(unsigned depth) {
    extend(98);
    return;
}
void func_5031106848(unsigned depth) {
    extend(99);
    return;
}
void func_5031106080(unsigned depth) {
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
    func_5031103888(depth+1);
    func_5031104864(depth+1);
    func_5031102400(depth+1);
    func_5031104992(depth+1);
    func_5031104432(depth+1);
    func_5031103632(depth+1);
    func_5031108336(depth+1);
    func_5031108464(depth+1);
    func_5031104432(depth+1);
    func_5031103632(depth+1);
    func_5031108336(depth+1);
    return;
}
void func_5031103888(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5031104864(unsigned depth) {
    extend(40);
    return;
}
void func_5031104992(unsigned depth) {
    extend(41);
    return;
}
void func_5031104432(unsigned depth) {
    extend(123);
    return;
}
void func_5031108336(unsigned depth) {
    extend(125);
    return;
}
void func_5031108464(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5031108272(unsigned depth) {
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
    func_5031103888(depth+1);
    func_5031104864(depth+1);
    func_5031102400(depth+1);
    func_5031104992(depth+1);
    func_5031104432(depth+1);
    func_5031103632(depth+1);
    func_5031108336(depth+1);
    return;
}
void func_5031107504(unsigned depth) {
    extend(48);
    return;
}
void func_5031104496(unsigned depth) {
    extend(49);
    return;
}
void func_5031108912(unsigned depth) {
    extend(50);
    return;
}
void func_5031109040(unsigned depth) {
    extend(51);
    return;
}
void func_5031109168(unsigned depth) {
    extend(52);
    return;
}
void func_5031109360(unsigned depth) {
    extend(53);
    return;
}
void func_5031109488(unsigned depth) {
    extend(54);
    return;
}
void func_5031109616(unsigned depth) {
    extend(55);
    return;
}
void func_5031109744(unsigned depth) {
    extend(56);
    return;
}
void func_5031109296(unsigned depth) {
    extend(57);
    return;
}
void func_5031110064(unsigned depth) {
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
    func_5031110192(depth+1);
    func_5031104864(depth+1);
    func_5031102320(depth+1);
    func_5031104992(depth+1);
    func_5031104240(depth+1);
    return;
}
void func_5031110192(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5031107328(unsigned depth) {
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
    func_5031102752(depth+1);
    func_5031103632(depth+1);
    return;
}
void func_5031107040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5031110464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5031102240(depth+1);
    func_5031110592(depth+1);
    func_5031103760(depth+1);
    return;
}
void func_5031110592(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5031102688(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
