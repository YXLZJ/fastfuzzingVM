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

void func_5324707360(unsigned depth);
void func_5324707728(unsigned depth);
void func_5324708144(unsigned depth);
void func_5324708240(unsigned depth);
void func_5324708016(unsigned depth);
void func_5324707936(unsigned depth);
void func_5324708640(unsigned depth);
void func_5324707856(unsigned depth);
void func_5324708368(unsigned depth);
void func_5324708896(unsigned depth);
void func_5324708560(unsigned depth);
void func_5324708832(unsigned depth);
void func_5324709248(unsigned depth);
void func_5324709616(unsigned depth);
void func_5324709456(unsigned depth);
void func_5324709184(unsigned depth);
void func_5324709376(unsigned depth);
void func_5324708432(unsigned depth);
void func_5324710480(unsigned depth);
void func_5324710608(unsigned depth);
void func_5324710736(unsigned depth);
void func_5324710864(unsigned depth);
void func_5324710992(unsigned depth);
void func_5324711120(unsigned depth);
void func_5324711504(unsigned depth);
void func_5324709088(unsigned depth);
void func_5324711696(unsigned depth);
void func_5324711824(unsigned depth);
void func_5324711952(unsigned depth);
void func_5324712144(unsigned depth);
void func_5324712272(unsigned depth);
void func_5324712400(unsigned depth);
void func_5324712528(unsigned depth);
void func_5324712080(unsigned depth);
void func_5324713104(unsigned depth);
void func_5324713232(unsigned depth);
void func_5324710272(unsigned depth);
void func_5324710400(unsigned depth);
void func_5324711408(unsigned depth);
void func_5324713584(unsigned depth);
void func_5324713712(unsigned depth);
void func_5324711248(unsigned depth);
void func_5324714480(unsigned depth);
void func_5324714608(unsigned depth);
void func_5324709744(unsigned depth);
void func_5324714256(unsigned depth);
void func_5324714928(unsigned depth);
void func_5324715056(unsigned depth);
void func_5324715184(unsigned depth);
void func_5324715312(unsigned depth);
void func_5324715504(unsigned depth);
void func_5324715632(unsigned depth);
void func_5324715760(unsigned depth);
void func_5324715888(unsigned depth);
void func_5324715440(unsigned depth);
void func_5324716656(unsigned depth);
void func_5324713904(unsigned depth);
void func_5324716480(unsigned depth);
void func_5324714080(unsigned depth);
void func_5324716144(unsigned depth);
void func_5324716272(unsigned depth);
void func_5324716784(unsigned depth);
void func_5324717632(unsigned depth);
void func_5324717760(unsigned depth);
void func_5324716912(unsigned depth);
void func_5324712592(unsigned depth);
void func_5324717568(unsigned depth);
void func_5324712960(unsigned depth);
void func_5324707360(unsigned depth) {
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
            func_5324709184(depth+1);
        break;
    }
    return;
}
void func_5324707728(unsigned depth) {
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
            func_5324710480(depth+1);
        break;
        case 1:
            func_5324710736(depth+1);
        break;
        case 2:
            func_5324710992(depth+1);
        break;
    }
    return;
}
void func_5324708144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5324711504(depth+1);
        break;
        case 1:
            func_5324709088(depth+1);
        break;
        case 2:
            func_5324711696(depth+1);
        break;
        case 3:
            func_5324711824(depth+1);
        break;
        case 4:
            func_5324711952(depth+1);
        break;
        case 5:
            func_5324712144(depth+1);
        break;
        case 6:
            func_5324712272(depth+1);
        break;
        case 7:
            func_5324712400(depth+1);
        break;
        case 8:
            func_5324712528(depth+1);
        break;
        case 9:
            func_5324712080(depth+1);
        break;
    }
    return;
}
void func_5324708240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5324713104(depth+1);
        break;
        case 1:
            func_5324710272(depth+1);
        break;
        case 2:
            func_5324709616(depth+1);
        break;
    }
    return;
}
void func_5324708016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5324711408(depth+1);
        break;
        case 1:
            func_5324708368(depth+1);
        break;
        case 2:
            func_5324708640(depth+1);
        break;
    }
    return;
}
void func_5324707936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5324711248(depth+1);
        break;
    }
    return;
}
void func_5324708640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5324714256(depth+1);
        break;
        case 1:
            func_5324714928(depth+1);
        break;
        case 2:
            func_5324715056(depth+1);
        break;
        case 3:
            func_5324715184(depth+1);
        break;
        case 4:
            func_5324715312(depth+1);
        break;
        case 5:
            func_5324715504(depth+1);
        break;
        case 6:
            func_5324715632(depth+1);
        break;
        case 7:
            func_5324715760(depth+1);
        break;
        case 8:
            func_5324715888(depth+1);
        break;
    }
    return;
}
void func_5324707856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5324715440(depth+1);
        break;
        case 1:
            func_5324713904(depth+1);
        break;
    }
    return;
}
void func_5324708368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5324708144(depth+1);
        break;
        case 1:
            func_5324714080(depth+1);
        break;
    }
    return;
}
void func_5324708896(unsigned depth) {
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
            func_5324716144(depth+1);
        break;
    }
    return;
}
void func_5324708560(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5324716784(depth+1);
        break;
    }
    return;
}
void func_5324708832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5324708560(depth+1);
        break;
    }
    return;
}
void func_5324709248(unsigned depth) {
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
            func_5324707856(depth+1);
        break;
        case 1:
            func_5324709456(depth+1);
        break;
        case 2:
            func_5324707936(depth+1);
        break;
        case 3:
            func_5324707360(depth+1);
        break;
        case 4:
            func_5324708896(depth+1);
        break;
    }
    return;
}
void func_5324709616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5324717632(depth+1);
        break;
        case 1:
            func_5324716912(depth+1);
        break;
        case 2:
            func_5324708016(depth+1);
        break;
    }
    return;
}
void func_5324709456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5324717568(depth+1);
        break;
    }
    return;
}
void func_5324709184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5324708640(depth+1);
    func_5324709376(depth+1);
    func_5324708240(depth+1);
    func_5324708432(depth+1);
    return;
}
void func_5324709376(unsigned depth) {
    extend(61);
    return;
}
void func_5324708432(unsigned depth) {
    extend(59);
    return;
}
void func_5324710480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5324708240(depth+1);
    func_5324710608(depth+1);
    func_5324708240(depth+1);
    return;
}
void func_5324710608(unsigned depth) {
    extend(62);
    return;
}
void func_5324710736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5324708240(depth+1);
    func_5324710864(depth+1);
    func_5324708240(depth+1);
    return;
}
void func_5324710864(unsigned depth) {
    extend(60);
    return;
}
void func_5324710992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5324708240(depth+1);
    func_5324711120(depth+1);
    func_5324708240(depth+1);
    return;
}
void func_5324711120(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5324711504(unsigned depth) {
    extend(48);
    return;
}
void func_5324709088(unsigned depth) {
    extend(49);
    return;
}
void func_5324711696(unsigned depth) {
    extend(50);
    return;
}
void func_5324711824(unsigned depth) {
    extend(51);
    return;
}
void func_5324711952(unsigned depth) {
    extend(52);
    return;
}
void func_5324712144(unsigned depth) {
    extend(53);
    return;
}
void func_5324712272(unsigned depth) {
    extend(54);
    return;
}
void func_5324712400(unsigned depth) {
    extend(55);
    return;
}
void func_5324712528(unsigned depth) {
    extend(56);
    return;
}
void func_5324712080(unsigned depth) {
    extend(57);
    return;
}
void func_5324713104(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5324708240(depth+1);
    func_5324713232(depth+1);
    func_5324709616(depth+1);
    return;
}
void func_5324713232(unsigned depth) {
    extend(43);
    return;
}
void func_5324710272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5324708240(depth+1);
    func_5324710400(depth+1);
    func_5324709616(depth+1);
    return;
}
void func_5324710400(unsigned depth) {
    extend(45);
    return;
}
void func_5324711408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5324713584(depth+1);
    func_5324708240(depth+1);
    func_5324713712(depth+1);
    return;
}
void func_5324713584(unsigned depth) {
    extend(40);
    return;
}
void func_5324713712(unsigned depth) {
    extend(41);
    return;
}
void func_5324711248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5324714480(depth+1);
    func_5324713584(depth+1);
    func_5324707360(depth+1);
    func_5324708432(depth+1);
    func_5324707728(depth+1);
    func_5324708432(depth+1);
    func_5324707360(depth+1);
    func_5324713712(depth+1);
    func_5324714608(depth+1);
    func_5324708560(depth+1);
    func_5324709744(depth+1);
    return;
}
void func_5324714480(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5324714608(unsigned depth) {
    extend(123);
    return;
}
void func_5324709744(unsigned depth) {
    extend(125);
    return;
}
void func_5324714256(unsigned depth) {
    extend(105);
    return;
}
void func_5324714928(unsigned depth) {
    extend(106);
    return;
}
void func_5324715056(unsigned depth) {
    extend(107);
    return;
}
void func_5324715184(unsigned depth) {
    extend(120);
    return;
}
void func_5324715312(unsigned depth) {
    extend(121);
    return;
}
void func_5324715504(unsigned depth) {
    extend(122);
    return;
}
void func_5324715632(unsigned depth) {
    extend(97);
    return;
}
void func_5324715760(unsigned depth) {
    extend(98);
    return;
}
void func_5324715888(unsigned depth) {
    extend(99);
    return;
}
void func_5324715440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5324716656(depth+1);
    func_5324713584(depth+1);
    func_5324707728(depth+1);
    func_5324713712(depth+1);
    func_5324714608(depth+1);
    func_5324708560(depth+1);
    func_5324709744(depth+1);
    return;
}
void func_5324716656(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5324713904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5324716656(depth+1);
    func_5324713584(depth+1);
    func_5324707728(depth+1);
    func_5324713712(depth+1);
    func_5324714608(depth+1);
    func_5324708560(depth+1);
    func_5324709744(depth+1);
    func_5324716480(depth+1);
    func_5324714608(depth+1);
    func_5324708560(depth+1);
    func_5324709744(depth+1);
    return;
}
void func_5324716480(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5324714080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5324708144(depth+1);
    func_5324708368(depth+1);
    return;
}
void func_5324716144(unsigned depth) {
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
    func_5324716272(depth+1);
    func_5324713584(depth+1);
    func_5324708240(depth+1);
    func_5324713712(depth+1);
    func_5324708432(depth+1);
    return;
}
void func_5324716272(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5324716784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5324709248(depth+1);
    func_5324708560(depth+1);
    return;
}
void func_5324717632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5324709616(depth+1);
    func_5324717760(depth+1);
    func_5324708016(depth+1);
    return;
}
void func_5324717760(unsigned depth) {
    extend(42);
    return;
}
void func_5324716912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5324709616(depth+1);
    func_5324712592(depth+1);
    func_5324708016(depth+1);
    return;
}
void func_5324712592(unsigned depth) {
    extend(47);
    return;
}
void func_5324717568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5324712960(depth+1);
    func_5324713584(depth+1);
    func_5324707728(depth+1);
    func_5324713712(depth+1);
    func_5324714608(depth+1);
    func_5324708560(depth+1);
    func_5324709744(depth+1);
    return;
}
void func_5324712960(unsigned depth) {
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
    func_5324708832(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
