#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 60
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

void func_5710570208(unsigned depth);
void func_5710579648(unsigned depth);
void func_5710579568(unsigned depth);
void func_5710579488(unsigned depth);
void func_5710580112(unsigned depth);
void func_5710579216(unsigned depth);
void func_5710580640(unsigned depth);
void func_5710579408(unsigned depth);
void func_5710579936(unsigned depth);
void func_5710580000(unsigned depth);
void func_5710580880(unsigned depth);
void func_5710581008(unsigned depth);
void func_5710581232(unsigned depth);
void func_5710581360(unsigned depth);
void func_5710581488(unsigned depth);
void func_5710581856(unsigned depth);
void func_5710581984(unsigned depth);
void func_5710580304(unsigned depth);
void func_5710582368(unsigned depth);
void func_5710582496(unsigned depth);
void func_5710582624(unsigned depth);
void func_5710582752(unsigned depth);
void func_5710582880(unsigned depth);
void func_5710583040(unsigned depth);
void func_5710583168(unsigned depth);
void func_5710583392(unsigned depth);
void func_5710583520(unsigned depth);
void func_5710583648(unsigned depth);
void func_5710583776(unsigned depth);
void func_5710583904(unsigned depth);
void func_5710584096(unsigned depth);
void func_5710583328(unsigned depth);
void func_5710581136(unsigned depth);
void func_5710582112(unsigned depth);
void func_5710582240(unsigned depth);
void func_5710581680(unsigned depth);
void func_5710585584(unsigned depth);
void func_5710585712(unsigned depth);
void func_5710585520(unsigned depth);
void func_5710584752(unsigned depth);
void func_5710581744(unsigned depth);
void func_5710586160(unsigned depth);
void func_5710586288(unsigned depth);
void func_5710586416(unsigned depth);
void func_5710586608(unsigned depth);
void func_5710586736(unsigned depth);
void func_5710586864(unsigned depth);
void func_5710586992(unsigned depth);
void func_5710586544(unsigned depth);
void func_5710587312(unsigned depth);
void func_5710587440(unsigned depth);
void func_5710584576(unsigned depth);
void func_5710584288(unsigned depth);
void func_5710587712(unsigned depth);
void func_5710587840(unsigned depth);
void func_5710570208(unsigned depth) {
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
            func_5710581232(depth+1);
        break;
    }
    return;
}
void func_5710579648(unsigned depth) {
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
            func_5710581856(depth+1);
        break;
        case 1:
            func_5710580304(depth+1);
        break;
        case 2:
            func_5710582496(depth+1);
        break;
    }
    return;
}
void func_5710579568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5710582752(depth+1);
        break;
        case 1:
            func_5710581008(depth+1);
        break;
        case 2:
            func_5710583040(depth+1);
        break;
    }
    return;
}
void func_5710579488(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710580640(depth+1);
        break;
        case 1:
            func_5710580112(depth+1);
        break;
    }
    return;
}
void func_5710580112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5710583392(depth+1);
        break;
        case 1:
            func_5710583520(depth+1);
        break;
        case 2:
            func_5710583648(depth+1);
        break;
        case 3:
            func_5710583776(depth+1);
        break;
        case 4:
            func_5710583904(depth+1);
        break;
        case 5:
            func_5710584096(depth+1);
        break;
    }
    return;
}
void func_5710579216(unsigned depth) {
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
            func_5710583328(depth+1);
        break;
        case 1:
            func_5710585520(depth+1);
        break;
    }
    return;
}
void func_5710580640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5710584752(depth+1);
        break;
        case 1:
            func_5710581744(depth+1);
        break;
        case 2:
            func_5710586160(depth+1);
        break;
        case 3:
            func_5710586288(depth+1);
        break;
        case 4:
            func_5710586416(depth+1);
        break;
        case 5:
            func_5710586608(depth+1);
        break;
        case 6:
            func_5710586736(depth+1);
        break;
        case 7:
            func_5710586864(depth+1);
        break;
        case 8:
            func_5710586992(depth+1);
        break;
        case 9:
            func_5710586544(depth+1);
        break;
    }
    return;
}
void func_5710579408(unsigned depth) {
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
            func_5710587312(depth+1);
        break;
    }
    return;
}
void func_5710579936(unsigned depth) {
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
            func_5710579216(depth+1);
        break;
    }
    return;
}
void func_5710580000(unsigned depth) {
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
            func_5710579216(depth+1);
        break;
        case 1:
            func_5710570208(depth+1);
        break;
        case 2:
            func_5710579408(depth+1);
        break;
    }
    return;
}
void func_5710580880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710584576(depth+1);
        break;
        case 1:
            func_5710584288(depth+1);
        break;
    }
    return;
}
void func_5710581008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710579488(depth+1);
        break;
        case 1:
            func_5710587712(depth+1);
        break;
    }
    return;
}
void func_5710581232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5710580112(depth+1);
    func_5710581360(depth+1);
    func_5710579568(depth+1);
    func_5710581488(depth+1);
    return;
}
void func_5710581360(unsigned depth) {
    extend(61);
    return;
}
void func_5710581488(unsigned depth) {
    extend(59);
    return;
}
void func_5710581856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5710579568(depth+1);
    func_5710581984(depth+1);
    func_5710579568(depth+1);
    return;
}
void func_5710581984(unsigned depth) {
    extend(62);
    return;
}
void func_5710580304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5710579568(depth+1);
    func_5710582368(depth+1);
    func_5710579568(depth+1);
    return;
}
void func_5710582368(unsigned depth) {
    extend(60);
    return;
}
void func_5710582496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5710579568(depth+1);
    func_5710582624(depth+1);
    func_5710579568(depth+1);
    return;
}
void func_5710582624(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5710582752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5710581008(depth+1);
    func_5710582880(depth+1);
    func_5710579568(depth+1);
    return;
}
void func_5710582880(unsigned depth) {
    extend(43);
    return;
}
void func_5710583040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5710581008(depth+1);
    func_5710583168(depth+1);
    func_5710579568(depth+1);
    return;
}
void func_5710583168(unsigned depth) {
    extend(45);
    return;
}
void func_5710583392(unsigned depth) {
    extend(120);
    return;
}
void func_5710583520(unsigned depth) {
    extend(121);
    return;
}
void func_5710583648(unsigned depth) {
    extend(122);
    return;
}
void func_5710583776(unsigned depth) {
    extend(97);
    return;
}
void func_5710583904(unsigned depth) {
    extend(98);
    return;
}
void func_5710584096(unsigned depth) {
    extend(99);
    return;
}
void func_5710583328(unsigned depth) {
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
    func_5710581136(depth+1);
    func_5710582112(depth+1);
    func_5710579648(depth+1);
    func_5710582240(depth+1);
    func_5710581680(depth+1);
    func_5710580880(depth+1);
    func_5710585584(depth+1);
    func_5710585712(depth+1);
    func_5710581680(depth+1);
    func_5710580880(depth+1);
    func_5710585584(depth+1);
    return;
}
void func_5710581136(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5710582112(unsigned depth) {
    extend(40);
    return;
}
void func_5710582240(unsigned depth) {
    extend(41);
    return;
}
void func_5710581680(unsigned depth) {
    extend(123);
    return;
}
void func_5710585584(unsigned depth) {
    extend(125);
    return;
}
void func_5710585712(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5710585520(unsigned depth) {
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
    func_5710581136(depth+1);
    func_5710582112(depth+1);
    func_5710579648(depth+1);
    func_5710582240(depth+1);
    func_5710581680(depth+1);
    func_5710580880(depth+1);
    func_5710585584(depth+1);
    return;
}
void func_5710584752(unsigned depth) {
    extend(48);
    return;
}
void func_5710581744(unsigned depth) {
    extend(49);
    return;
}
void func_5710586160(unsigned depth) {
    extend(50);
    return;
}
void func_5710586288(unsigned depth) {
    extend(51);
    return;
}
void func_5710586416(unsigned depth) {
    extend(52);
    return;
}
void func_5710586608(unsigned depth) {
    extend(53);
    return;
}
void func_5710586736(unsigned depth) {
    extend(54);
    return;
}
void func_5710586864(unsigned depth) {
    extend(55);
    return;
}
void func_5710586992(unsigned depth) {
    extend(56);
    return;
}
void func_5710586544(unsigned depth) {
    extend(57);
    return;
}
void func_5710587312(unsigned depth) {
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
    func_5710587440(depth+1);
    func_5710582112(depth+1);
    func_5710579568(depth+1);
    func_5710582240(depth+1);
    func_5710581488(depth+1);
    return;
}
void func_5710587440(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5710584576(unsigned depth) {
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
    func_5710580000(depth+1);
    func_5710580880(depth+1);
    return;
}
void func_5710584288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5710587712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5710579488(depth+1);
    func_5710587840(depth+1);
    func_5710581008(depth+1);
    return;
}
void func_5710587840(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5710579936(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
