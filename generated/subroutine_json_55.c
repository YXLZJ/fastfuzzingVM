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

void func_5073042656(unsigned depth);
void func_5073043216(unsigned depth);
void func_5073043024(unsigned depth);
void func_5073042784(unsigned depth);
void func_5073042960(unsigned depth);
void func_5073043440(unsigned depth);
void func_5073043568(unsigned depth);
void func_5073043360(unsigned depth);
void func_5073043920(unsigned depth);
void func_5073044352(unsigned depth);
void func_5073044288(unsigned depth);
void func_5073044544(unsigned depth);
void func_5073044112(unsigned depth);
void func_5073044672(unsigned depth);
void func_5073045136(unsigned depth);
void func_5073045264(unsigned depth);
void func_5073045392(unsigned depth);
void func_5073043984(unsigned depth);
void func_5073045776(unsigned depth);
void func_5073045968(unsigned depth);
void func_5073046096(unsigned depth);
void func_5073046224(unsigned depth);
void func_5073046352(unsigned depth);
void func_5073045904(unsigned depth);
void func_5073043840(unsigned depth);
void func_5073046736(unsigned depth);
void func_5073044880(unsigned depth);
void func_5073045008(unsigned depth);
void func_5073046944(unsigned depth);
void func_5073047072(unsigned depth);
void func_5073047200(unsigned depth);
void func_5073047376(unsigned depth);
void func_5073047520(unsigned depth);
void func_5073045520(unsigned depth);
void func_5073046864(unsigned depth);
void func_5073048288(unsigned depth);
void func_5073048416(unsigned depth);
void func_5073048576(unsigned depth);
void func_5073048704(unsigned depth);
void func_5073048128(unsigned depth);
void func_5073049232(unsigned depth);
void func_5073049360(unsigned depth);
void func_5073042656(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5073044288(depth+1);
        break;
        case 1:
            func_5073044672(depth+1);
        break;
    }
    return;
}
void func_5073043216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5073045136(depth+1);
        break;
        case 1:
            func_5073045264(depth+1);
        break;
        case 2:
            func_5073045392(depth+1);
        break;
        case 3:
            func_5073043984(depth+1);
        break;
        case 4:
            func_5073045776(depth+1);
        break;
        case 5:
            func_5073045968(depth+1);
        break;
        case 6:
            func_5073046096(depth+1);
        break;
        case 7:
            func_5073046224(depth+1);
        break;
        case 8:
            func_5073046352(depth+1);
        break;
        case 9:
            func_5073045904(depth+1);
        break;
    }
    return;
}
void func_5073043024(unsigned depth) {
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
            func_5073043840(depth+1);
        break;
        case 1:
            func_5073044352(depth+1);
        break;
    }
    return;
}
void func_5073042784(unsigned depth) {
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
            func_5073044880(depth+1);
        break;
        case 1:
            func_5073043568(depth+1);
        break;
    }
    return;
}
void func_5073042960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5073043216(depth+1);
        break;
        case 1:
            func_5073045008(depth+1);
        break;
    }
    return;
}
void func_5073043440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5073046944(depth+1);
        break;
        case 1:
            func_5073047376(depth+1);
        break;
    }
    return;
}
void func_5073043568(unsigned depth) {
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
            func_5073047520(depth+1);
        break;
    }
    return;
}
void func_5073043360(unsigned depth) {
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
            func_5073044352(depth+1);
        break;
    }
    return;
}
void func_5073043920(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5073046864(depth+1);
        break;
        case 1:
            func_5073048288(depth+1);
        break;
        case 2:
            func_5073048416(depth+1);
        break;
        case 3:
            func_5073048576(depth+1);
        break;
        case 4:
            func_5073048704(depth+1);
        break;
    }
    return;
}
void func_5073044352(unsigned depth) {
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
            func_5073043440(depth+1);
        break;
        case 1:
            func_5073042656(depth+1);
        break;
        case 2:
            func_5073043920(depth+1);
        break;
        case 3:
            func_5073042960(depth+1);
        break;
        case 4:
            func_5073048128(depth+1);
        break;
        case 5:
            func_5073049232(depth+1);
        break;
        case 6:
            func_5073049360(depth+1);
        break;
    }
    return;
}
void func_5073044288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5073044544(depth+1);
    func_5073043024(depth+1);
    func_5073044112(depth+1);
    return;
}
void func_5073044544(unsigned depth) {
    extend(91);
    return;
}
void func_5073044112(unsigned depth) {
    extend(93);
    return;
}
void func_5073044672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5073044544(depth+1);
    func_5073044112(depth+1);
    return;
}
void func_5073045136(unsigned depth) {
    extend(48);
    return;
}
void func_5073045264(unsigned depth) {
    extend(49);
    return;
}
void func_5073045392(unsigned depth) {
    extend(50);
    return;
}
void func_5073043984(unsigned depth) {
    extend(51);
    return;
}
void func_5073045776(unsigned depth) {
    extend(52);
    return;
}
void func_5073045968(unsigned depth) {
    extend(53);
    return;
}
void func_5073046096(unsigned depth) {
    extend(54);
    return;
}
void func_5073046224(unsigned depth) {
    extend(55);
    return;
}
void func_5073046352(unsigned depth) {
    extend(56);
    return;
}
void func_5073045904(unsigned depth) {
    extend(57);
    return;
}
void func_5073043840(unsigned depth) {
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
    func_5073044352(depth+1);
    func_5073046736(depth+1);
    func_5073043024(depth+1);
    return;
}
void func_5073046736(unsigned depth) {
    extend(44);
    return;
}
void func_5073044880(unsigned depth) {
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
    func_5073043568(depth+1);
    func_5073046736(depth+1);
    func_5073042784(depth+1);
    return;
}
void func_5073045008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5073043216(depth+1);
    func_5073042960(depth+1);
    return;
}
void func_5073046944(unsigned depth) {
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
    func_5073047072(depth+1);
    func_5073042784(depth+1);
    func_5073047200(depth+1);
    return;
}
void func_5073047072(unsigned depth) {
    extend(123);
    return;
}
void func_5073047200(unsigned depth) {
    extend(125);
    return;
}
void func_5073047376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5073047072(depth+1);
    func_5073047200(depth+1);
    return;
}
void func_5073047520(unsigned depth) {
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
    func_5073043920(depth+1);
    func_5073045520(depth+1);
    func_5073044352(depth+1);
    return;
}
void func_5073045520(unsigned depth) {
    extend(58);
    return;
}
void func_5073046864(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5073048288(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5073048416(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5073048576(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5073048704(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5073048128(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5073049232(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5073049360(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5073043360(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
