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

void func_5232419552(unsigned depth);
void func_5232428992(unsigned depth);
void func_5232428912(unsigned depth);
void func_5232428832(unsigned depth);
void func_5232429456(unsigned depth);
void func_5232428560(unsigned depth);
void func_5232429984(unsigned depth);
void func_5232428752(unsigned depth);
void func_5232429280(unsigned depth);
void func_5232429344(unsigned depth);
void func_5232430224(unsigned depth);
void func_5232430352(unsigned depth);
void func_5232430576(unsigned depth);
void func_5232430704(unsigned depth);
void func_5232430832(unsigned depth);
void func_5232431200(unsigned depth);
void func_5232431328(unsigned depth);
void func_5232429648(unsigned depth);
void func_5232431712(unsigned depth);
void func_5232431840(unsigned depth);
void func_5232431968(unsigned depth);
void func_5232432096(unsigned depth);
void func_5232432224(unsigned depth);
void func_5232432384(unsigned depth);
void func_5232432512(unsigned depth);
void func_5232432736(unsigned depth);
void func_5232432864(unsigned depth);
void func_5232432992(unsigned depth);
void func_5232433120(unsigned depth);
void func_5232433248(unsigned depth);
void func_5232433440(unsigned depth);
void func_5232432672(unsigned depth);
void func_5232430480(unsigned depth);
void func_5232431456(unsigned depth);
void func_5232431584(unsigned depth);
void func_5232431024(unsigned depth);
void func_5232434928(unsigned depth);
void func_5232435056(unsigned depth);
void func_5232434864(unsigned depth);
void func_5232434096(unsigned depth);
void func_5232431088(unsigned depth);
void func_5232435504(unsigned depth);
void func_5232435632(unsigned depth);
void func_5232435760(unsigned depth);
void func_5232435952(unsigned depth);
void func_5232436080(unsigned depth);
void func_5232436208(unsigned depth);
void func_5232436336(unsigned depth);
void func_5232435888(unsigned depth);
void func_5232436656(unsigned depth);
void func_5232436784(unsigned depth);
void func_5232433920(unsigned depth);
void func_5232433632(unsigned depth);
void func_5232437056(unsigned depth);
void func_5232437184(unsigned depth);
void func_5232419552(unsigned depth) {
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
            func_5232430576(depth+1);
        break;
    }
    return;
}
void func_5232428992(unsigned depth) {
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
            func_5232431200(depth+1);
        break;
        case 1:
            func_5232429648(depth+1);
        break;
        case 2:
            func_5232431840(depth+1);
        break;
    }
    return;
}
void func_5232428912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5232432096(depth+1);
        break;
        case 1:
            func_5232430352(depth+1);
        break;
        case 2:
            func_5232432384(depth+1);
        break;
    }
    return;
}
void func_5232428832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5232429984(depth+1);
        break;
        case 1:
            func_5232429456(depth+1);
        break;
    }
    return;
}
void func_5232429456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5232432736(depth+1);
        break;
        case 1:
            func_5232432864(depth+1);
        break;
        case 2:
            func_5232432992(depth+1);
        break;
        case 3:
            func_5232433120(depth+1);
        break;
        case 4:
            func_5232433248(depth+1);
        break;
        case 5:
            func_5232433440(depth+1);
        break;
    }
    return;
}
void func_5232428560(unsigned depth) {
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
            func_5232432672(depth+1);
        break;
        case 1:
            func_5232434864(depth+1);
        break;
    }
    return;
}
void func_5232429984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5232434096(depth+1);
        break;
        case 1:
            func_5232431088(depth+1);
        break;
        case 2:
            func_5232435504(depth+1);
        break;
        case 3:
            func_5232435632(depth+1);
        break;
        case 4:
            func_5232435760(depth+1);
        break;
        case 5:
            func_5232435952(depth+1);
        break;
        case 6:
            func_5232436080(depth+1);
        break;
        case 7:
            func_5232436208(depth+1);
        break;
        case 8:
            func_5232436336(depth+1);
        break;
        case 9:
            func_5232435888(depth+1);
        break;
    }
    return;
}
void func_5232428752(unsigned depth) {
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
            func_5232436656(depth+1);
        break;
    }
    return;
}
void func_5232429280(unsigned depth) {
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
            func_5232428560(depth+1);
        break;
    }
    return;
}
void func_5232429344(unsigned depth) {
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
            func_5232428560(depth+1);
        break;
        case 1:
            func_5232419552(depth+1);
        break;
        case 2:
            func_5232428752(depth+1);
        break;
    }
    return;
}
void func_5232430224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5232433920(depth+1);
        break;
        case 1:
            func_5232433632(depth+1);
        break;
    }
    return;
}
void func_5232430352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5232428832(depth+1);
        break;
        case 1:
            func_5232437056(depth+1);
        break;
    }
    return;
}
void func_5232430576(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5232429456(depth+1);
    func_5232430704(depth+1);
    func_5232428912(depth+1);
    func_5232430832(depth+1);
    return;
}
void func_5232430704(unsigned depth) {
    extend(61);
    return;
}
void func_5232430832(unsigned depth) {
    extend(59);
    return;
}
void func_5232431200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5232428912(depth+1);
    func_5232431328(depth+1);
    func_5232428912(depth+1);
    return;
}
void func_5232431328(unsigned depth) {
    extend(62);
    return;
}
void func_5232429648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5232428912(depth+1);
    func_5232431712(depth+1);
    func_5232428912(depth+1);
    return;
}
void func_5232431712(unsigned depth) {
    extend(60);
    return;
}
void func_5232431840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5232428912(depth+1);
    func_5232431968(depth+1);
    func_5232428912(depth+1);
    return;
}
void func_5232431968(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5232432096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5232430352(depth+1);
    func_5232432224(depth+1);
    func_5232428912(depth+1);
    return;
}
void func_5232432224(unsigned depth) {
    extend(43);
    return;
}
void func_5232432384(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5232430352(depth+1);
    func_5232432512(depth+1);
    func_5232428912(depth+1);
    return;
}
void func_5232432512(unsigned depth) {
    extend(45);
    return;
}
void func_5232432736(unsigned depth) {
    extend(120);
    return;
}
void func_5232432864(unsigned depth) {
    extend(121);
    return;
}
void func_5232432992(unsigned depth) {
    extend(122);
    return;
}
void func_5232433120(unsigned depth) {
    extend(97);
    return;
}
void func_5232433248(unsigned depth) {
    extend(98);
    return;
}
void func_5232433440(unsigned depth) {
    extend(99);
    return;
}
void func_5232432672(unsigned depth) {
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
    func_5232430480(depth+1);
    func_5232431456(depth+1);
    func_5232428992(depth+1);
    func_5232431584(depth+1);
    func_5232431024(depth+1);
    func_5232430224(depth+1);
    func_5232434928(depth+1);
    func_5232435056(depth+1);
    func_5232431024(depth+1);
    func_5232430224(depth+1);
    func_5232434928(depth+1);
    return;
}
void func_5232430480(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5232431456(unsigned depth) {
    extend(40);
    return;
}
void func_5232431584(unsigned depth) {
    extend(41);
    return;
}
void func_5232431024(unsigned depth) {
    extend(123);
    return;
}
void func_5232434928(unsigned depth) {
    extend(125);
    return;
}
void func_5232435056(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5232434864(unsigned depth) {
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
    func_5232430480(depth+1);
    func_5232431456(depth+1);
    func_5232428992(depth+1);
    func_5232431584(depth+1);
    func_5232431024(depth+1);
    func_5232430224(depth+1);
    func_5232434928(depth+1);
    return;
}
void func_5232434096(unsigned depth) {
    extend(48);
    return;
}
void func_5232431088(unsigned depth) {
    extend(49);
    return;
}
void func_5232435504(unsigned depth) {
    extend(50);
    return;
}
void func_5232435632(unsigned depth) {
    extend(51);
    return;
}
void func_5232435760(unsigned depth) {
    extend(52);
    return;
}
void func_5232435952(unsigned depth) {
    extend(53);
    return;
}
void func_5232436080(unsigned depth) {
    extend(54);
    return;
}
void func_5232436208(unsigned depth) {
    extend(55);
    return;
}
void func_5232436336(unsigned depth) {
    extend(56);
    return;
}
void func_5232435888(unsigned depth) {
    extend(57);
    return;
}
void func_5232436656(unsigned depth) {
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
    func_5232436784(depth+1);
    func_5232431456(depth+1);
    func_5232428912(depth+1);
    func_5232431584(depth+1);
    func_5232430832(depth+1);
    return;
}
void func_5232436784(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5232433920(unsigned depth) {
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
    func_5232429344(depth+1);
    func_5232430224(depth+1);
    return;
}
void func_5232433632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5232437056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5232428832(depth+1);
    func_5232437184(depth+1);
    func_5232430352(depth+1);
    return;
}
void func_5232437184(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5232429280(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
