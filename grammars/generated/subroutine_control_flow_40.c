#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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

void func_4863333920(unsigned depth);
void func_4863334288(unsigned depth);
void func_4863334704(unsigned depth);
void func_4863334800(unsigned depth);
void func_4863334576(unsigned depth);
void func_4863334496(unsigned depth);
void func_4863335200(unsigned depth);
void func_4863334416(unsigned depth);
void func_4863334928(unsigned depth);
void func_4863335456(unsigned depth);
void func_4863335120(unsigned depth);
void func_4863335392(unsigned depth);
void func_4863335808(unsigned depth);
void func_4863336176(unsigned depth);
void func_4863336016(unsigned depth);
void func_4863335744(unsigned depth);
void func_4863335936(unsigned depth);
void func_4863334992(unsigned depth);
void func_4863337040(unsigned depth);
void func_4863337168(unsigned depth);
void func_4863337296(unsigned depth);
void func_4863337424(unsigned depth);
void func_4863337552(unsigned depth);
void func_4863337680(unsigned depth);
void func_4863338064(unsigned depth);
void func_4863335648(unsigned depth);
void func_4863338256(unsigned depth);
void func_4863338384(unsigned depth);
void func_4863338512(unsigned depth);
void func_4863338704(unsigned depth);
void func_4863338832(unsigned depth);
void func_4863338960(unsigned depth);
void func_4863339088(unsigned depth);
void func_4863338640(unsigned depth);
void func_4863339664(unsigned depth);
void func_4863339792(unsigned depth);
void func_4863336832(unsigned depth);
void func_4863336960(unsigned depth);
void func_4863337968(unsigned depth);
void func_4863340144(unsigned depth);
void func_4863340272(unsigned depth);
void func_4863337808(unsigned depth);
void func_4863341040(unsigned depth);
void func_4863341168(unsigned depth);
void func_4863336304(unsigned depth);
void func_4863340816(unsigned depth);
void func_4863341488(unsigned depth);
void func_4863341616(unsigned depth);
void func_4863341744(unsigned depth);
void func_4863341872(unsigned depth);
void func_4863342064(unsigned depth);
void func_4863342192(unsigned depth);
void func_4863342320(unsigned depth);
void func_4863342448(unsigned depth);
void func_4863342000(unsigned depth);
void func_4863343216(unsigned depth);
void func_4863340464(unsigned depth);
void func_4863343040(unsigned depth);
void func_4863340640(unsigned depth);
void func_4863342704(unsigned depth);
void func_4863342832(unsigned depth);
void func_4863343344(unsigned depth);
void func_4863344192(unsigned depth);
void func_4863344320(unsigned depth);
void func_4863343472(unsigned depth);
void func_4863339152(unsigned depth);
void func_4863344128(unsigned depth);
void func_4863339520(unsigned depth);
void func_4863333920(unsigned depth) {
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
            func_4863335744(depth+1);
        break;
    }
    return;
}
void func_4863334288(unsigned depth) {
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
            func_4863337040(depth+1);
        break;
        case 1:
            func_4863337296(depth+1);
        break;
        case 2:
            func_4863337552(depth+1);
        break;
    }
    return;
}
void func_4863334704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4863338064(depth+1);
        break;
        case 1:
            func_4863335648(depth+1);
        break;
        case 2:
            func_4863338256(depth+1);
        break;
        case 3:
            func_4863338384(depth+1);
        break;
        case 4:
            func_4863338512(depth+1);
        break;
        case 5:
            func_4863338704(depth+1);
        break;
        case 6:
            func_4863338832(depth+1);
        break;
        case 7:
            func_4863338960(depth+1);
        break;
        case 8:
            func_4863339088(depth+1);
        break;
        case 9:
            func_4863338640(depth+1);
        break;
    }
    return;
}
void func_4863334800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4863339664(depth+1);
        break;
        case 1:
            func_4863336832(depth+1);
        break;
        case 2:
            func_4863336176(depth+1);
        break;
    }
    return;
}
void func_4863334576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4863337968(depth+1);
        break;
        case 1:
            func_4863334928(depth+1);
        break;
        case 2:
            func_4863335200(depth+1);
        break;
    }
    return;
}
void func_4863334496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863337808(depth+1);
        break;
    }
    return;
}
void func_4863335200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4863340816(depth+1);
        break;
        case 1:
            func_4863341488(depth+1);
        break;
        case 2:
            func_4863341616(depth+1);
        break;
        case 3:
            func_4863341744(depth+1);
        break;
        case 4:
            func_4863341872(depth+1);
        break;
        case 5:
            func_4863342064(depth+1);
        break;
        case 6:
            func_4863342192(depth+1);
        break;
        case 7:
            func_4863342320(depth+1);
        break;
        case 8:
            func_4863342448(depth+1);
        break;
    }
    return;
}
void func_4863334416(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863342000(depth+1);
        break;
        case 1:
            func_4863340464(depth+1);
        break;
    }
    return;
}
void func_4863334928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4863334704(depth+1);
        break;
        case 1:
            func_4863340640(depth+1);
        break;
    }
    return;
}
void func_4863335456(unsigned depth) {
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
            func_4863342704(depth+1);
        break;
    }
    return;
}
void func_4863335120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863343344(depth+1);
        break;
    }
    return;
}
void func_4863335392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863335120(depth+1);
        break;
    }
    return;
}
void func_4863335808(unsigned depth) {
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
            func_4863334416(depth+1);
        break;
        case 1:
            func_4863336016(depth+1);
        break;
        case 2:
            func_4863334496(depth+1);
        break;
        case 3:
            func_4863333920(depth+1);
        break;
        case 4:
            func_4863335456(depth+1);
        break;
    }
    return;
}
void func_4863336176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4863344192(depth+1);
        break;
        case 1:
            func_4863343472(depth+1);
        break;
        case 2:
            func_4863334576(depth+1);
        break;
    }
    return;
}
void func_4863336016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4863344128(depth+1);
        break;
    }
    return;
}
void func_4863335744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4863335200(depth+1);
    func_4863335936(depth+1);
    func_4863334800(depth+1);
    func_4863334992(depth+1);
    return;
}
void func_4863335936(unsigned depth) {
    extend(61);
    return;
}
void func_4863334992(unsigned depth) {
    extend(59);
    return;
}
void func_4863337040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4863334800(depth+1);
    func_4863337168(depth+1);
    func_4863334800(depth+1);
    return;
}
void func_4863337168(unsigned depth) {
    extend(62);
    return;
}
void func_4863337296(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4863334800(depth+1);
    func_4863337424(depth+1);
    func_4863334800(depth+1);
    return;
}
void func_4863337424(unsigned depth) {
    extend(60);
    return;
}
void func_4863337552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4863334800(depth+1);
    func_4863337680(depth+1);
    func_4863334800(depth+1);
    return;
}
void func_4863337680(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4863338064(unsigned depth) {
    extend(48);
    return;
}
void func_4863335648(unsigned depth) {
    extend(49);
    return;
}
void func_4863338256(unsigned depth) {
    extend(50);
    return;
}
void func_4863338384(unsigned depth) {
    extend(51);
    return;
}
void func_4863338512(unsigned depth) {
    extend(52);
    return;
}
void func_4863338704(unsigned depth) {
    extend(53);
    return;
}
void func_4863338832(unsigned depth) {
    extend(54);
    return;
}
void func_4863338960(unsigned depth) {
    extend(55);
    return;
}
void func_4863339088(unsigned depth) {
    extend(56);
    return;
}
void func_4863338640(unsigned depth) {
    extend(57);
    return;
}
void func_4863339664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4863334800(depth+1);
    func_4863339792(depth+1);
    func_4863336176(depth+1);
    return;
}
void func_4863339792(unsigned depth) {
    extend(43);
    return;
}
void func_4863336832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4863334800(depth+1);
    func_4863336960(depth+1);
    func_4863336176(depth+1);
    return;
}
void func_4863336960(unsigned depth) {
    extend(45);
    return;
}
void func_4863337968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4863340144(depth+1);
    func_4863334800(depth+1);
    func_4863340272(depth+1);
    return;
}
void func_4863340144(unsigned depth) {
    extend(40);
    return;
}
void func_4863340272(unsigned depth) {
    extend(41);
    return;
}
void func_4863337808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4863341040(depth+1);
    func_4863340144(depth+1);
    func_4863333920(depth+1);
    func_4863334992(depth+1);
    func_4863334288(depth+1);
    func_4863334992(depth+1);
    func_4863333920(depth+1);
    func_4863340272(depth+1);
    func_4863341168(depth+1);
    func_4863335120(depth+1);
    func_4863336304(depth+1);
    return;
}
void func_4863341040(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4863341168(unsigned depth) {
    extend(123);
    return;
}
void func_4863336304(unsigned depth) {
    extend(125);
    return;
}
void func_4863340816(unsigned depth) {
    extend(105);
    return;
}
void func_4863341488(unsigned depth) {
    extend(106);
    return;
}
void func_4863341616(unsigned depth) {
    extend(107);
    return;
}
void func_4863341744(unsigned depth) {
    extend(120);
    return;
}
void func_4863341872(unsigned depth) {
    extend(121);
    return;
}
void func_4863342064(unsigned depth) {
    extend(122);
    return;
}
void func_4863342192(unsigned depth) {
    extend(97);
    return;
}
void func_4863342320(unsigned depth) {
    extend(98);
    return;
}
void func_4863342448(unsigned depth) {
    extend(99);
    return;
}
void func_4863342000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4863343216(depth+1);
    func_4863340144(depth+1);
    func_4863334288(depth+1);
    func_4863340272(depth+1);
    func_4863341168(depth+1);
    func_4863335120(depth+1);
    func_4863336304(depth+1);
    return;
}
void func_4863343216(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4863340464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4863343216(depth+1);
    func_4863340144(depth+1);
    func_4863334288(depth+1);
    func_4863340272(depth+1);
    func_4863341168(depth+1);
    func_4863335120(depth+1);
    func_4863336304(depth+1);
    func_4863343040(depth+1);
    func_4863341168(depth+1);
    func_4863335120(depth+1);
    func_4863336304(depth+1);
    return;
}
void func_4863343040(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4863340640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4863334704(depth+1);
    func_4863334928(depth+1);
    return;
}
void func_4863342704(unsigned depth) {
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
    func_4863342832(depth+1);
    func_4863340144(depth+1);
    func_4863334800(depth+1);
    func_4863340272(depth+1);
    func_4863334992(depth+1);
    return;
}
void func_4863342832(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4863343344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4863335808(depth+1);
    func_4863335120(depth+1);
    return;
}
void func_4863344192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4863336176(depth+1);
    func_4863344320(depth+1);
    func_4863334576(depth+1);
    return;
}
void func_4863344320(unsigned depth) {
    extend(42);
    return;
}
void func_4863343472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4863336176(depth+1);
    func_4863339152(depth+1);
    func_4863334576(depth+1);
    return;
}
void func_4863339152(unsigned depth) {
    extend(47);
    return;
}
void func_4863344128(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4863339520(depth+1);
    func_4863340144(depth+1);
    func_4863334288(depth+1);
    func_4863340272(depth+1);
    func_4863341168(depth+1);
    func_4863335120(depth+1);
    func_4863336304(depth+1);
    return;
}
void func_4863339520(unsigned depth) {
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
    func_4863335392(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
