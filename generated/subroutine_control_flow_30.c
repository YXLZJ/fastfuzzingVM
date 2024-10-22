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

void func_5710583328(unsigned depth);
void func_5710583696(unsigned depth);
void func_5710584112(unsigned depth);
void func_5710584208(unsigned depth);
void func_5710583984(unsigned depth);
void func_5710583904(unsigned depth);
void func_5710584608(unsigned depth);
void func_5710583824(unsigned depth);
void func_5710584336(unsigned depth);
void func_5710584864(unsigned depth);
void func_5710584528(unsigned depth);
void func_5710584800(unsigned depth);
void func_5710585216(unsigned depth);
void func_5710585584(unsigned depth);
void func_5710585424(unsigned depth);
void func_5710585152(unsigned depth);
void func_5710585344(unsigned depth);
void func_5710584400(unsigned depth);
void func_5710586448(unsigned depth);
void func_5710586576(unsigned depth);
void func_5710586704(unsigned depth);
void func_5710586832(unsigned depth);
void func_5710586960(unsigned depth);
void func_5710587088(unsigned depth);
void func_5710587472(unsigned depth);
void func_5710585056(unsigned depth);
void func_5710587664(unsigned depth);
void func_5710587792(unsigned depth);
void func_5710587920(unsigned depth);
void func_5710588112(unsigned depth);
void func_5710588240(unsigned depth);
void func_5710588368(unsigned depth);
void func_5710588496(unsigned depth);
void func_5710588048(unsigned depth);
void func_5710589072(unsigned depth);
void func_5710589200(unsigned depth);
void func_5710586240(unsigned depth);
void func_5710586368(unsigned depth);
void func_5710587376(unsigned depth);
void func_5710589552(unsigned depth);
void func_5710589680(unsigned depth);
void func_5710587216(unsigned depth);
void func_5710590448(unsigned depth);
void func_5710590576(unsigned depth);
void func_5710585712(unsigned depth);
void func_5710590224(unsigned depth);
void func_5710590896(unsigned depth);
void func_5710591024(unsigned depth);
void func_5710591152(unsigned depth);
void func_5710591280(unsigned depth);
void func_5710591472(unsigned depth);
void func_5710591600(unsigned depth);
void func_5710591728(unsigned depth);
void func_5710591856(unsigned depth);
void func_5710591408(unsigned depth);
void func_5710592624(unsigned depth);
void func_5710589872(unsigned depth);
void func_5710592448(unsigned depth);
void func_5710590048(unsigned depth);
void func_5710592112(unsigned depth);
void func_5710592240(unsigned depth);
void func_5710592752(unsigned depth);
void func_5710593600(unsigned depth);
void func_5710593728(unsigned depth);
void func_5710592880(unsigned depth);
void func_5710588560(unsigned depth);
void func_5710593536(unsigned depth);
void func_5710588928(unsigned depth);
void func_5710583328(unsigned depth) {
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
            func_5710585152(depth+1);
        break;
    }
    return;
}
void func_5710583696(unsigned depth) {
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
            func_5710586448(depth+1);
        break;
        case 1:
            func_5710586704(depth+1);
        break;
        case 2:
            func_5710586960(depth+1);
        break;
    }
    return;
}
void func_5710584112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5710587472(depth+1);
        break;
        case 1:
            func_5710585056(depth+1);
        break;
        case 2:
            func_5710587664(depth+1);
        break;
        case 3:
            func_5710587792(depth+1);
        break;
        case 4:
            func_5710587920(depth+1);
        break;
        case 5:
            func_5710588112(depth+1);
        break;
        case 6:
            func_5710588240(depth+1);
        break;
        case 7:
            func_5710588368(depth+1);
        break;
        case 8:
            func_5710588496(depth+1);
        break;
        case 9:
            func_5710588048(depth+1);
        break;
    }
    return;
}
void func_5710584208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5710589072(depth+1);
        break;
        case 1:
            func_5710586240(depth+1);
        break;
        case 2:
            func_5710585584(depth+1);
        break;
    }
    return;
}
void func_5710583984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5710587376(depth+1);
        break;
        case 1:
            func_5710584336(depth+1);
        break;
        case 2:
            func_5710584608(depth+1);
        break;
    }
    return;
}
void func_5710583904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5710587216(depth+1);
        break;
    }
    return;
}
void func_5710584608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5710590224(depth+1);
        break;
        case 1:
            func_5710590896(depth+1);
        break;
        case 2:
            func_5710591024(depth+1);
        break;
        case 3:
            func_5710591152(depth+1);
        break;
        case 4:
            func_5710591280(depth+1);
        break;
        case 5:
            func_5710591472(depth+1);
        break;
        case 6:
            func_5710591600(depth+1);
        break;
        case 7:
            func_5710591728(depth+1);
        break;
        case 8:
            func_5710591856(depth+1);
        break;
    }
    return;
}
void func_5710583824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710591408(depth+1);
        break;
        case 1:
            func_5710589872(depth+1);
        break;
    }
    return;
}
void func_5710584336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5710584112(depth+1);
        break;
        case 1:
            func_5710590048(depth+1);
        break;
    }
    return;
}
void func_5710584864(unsigned depth) {
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
            func_5710592112(depth+1);
        break;
    }
    return;
}
void func_5710584528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5710592752(depth+1);
        break;
    }
    return;
}
void func_5710584800(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5710584528(depth+1);
        break;
    }
    return;
}
void func_5710585216(unsigned depth) {
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
            func_5710583824(depth+1);
        break;
        case 1:
            func_5710585424(depth+1);
        break;
        case 2:
            func_5710583904(depth+1);
        break;
        case 3:
            func_5710583328(depth+1);
        break;
        case 4:
            func_5710584864(depth+1);
        break;
    }
    return;
}
void func_5710585584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5710593600(depth+1);
        break;
        case 1:
            func_5710592880(depth+1);
        break;
        case 2:
            func_5710583984(depth+1);
        break;
    }
    return;
}
void func_5710585424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5710593536(depth+1);
        break;
    }
    return;
}
void func_5710585152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5710584608(depth+1);
    func_5710585344(depth+1);
    func_5710584208(depth+1);
    func_5710584400(depth+1);
    return;
}
void func_5710585344(unsigned depth) {
    extend(61);
    return;
}
void func_5710584400(unsigned depth) {
    extend(59);
    return;
}
void func_5710586448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5710584208(depth+1);
    func_5710586576(depth+1);
    func_5710584208(depth+1);
    return;
}
void func_5710586576(unsigned depth) {
    extend(62);
    return;
}
void func_5710586704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5710584208(depth+1);
    func_5710586832(depth+1);
    func_5710584208(depth+1);
    return;
}
void func_5710586832(unsigned depth) {
    extend(60);
    return;
}
void func_5710586960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5710584208(depth+1);
    func_5710587088(depth+1);
    func_5710584208(depth+1);
    return;
}
void func_5710587088(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5710587472(unsigned depth) {
    extend(48);
    return;
}
void func_5710585056(unsigned depth) {
    extend(49);
    return;
}
void func_5710587664(unsigned depth) {
    extend(50);
    return;
}
void func_5710587792(unsigned depth) {
    extend(51);
    return;
}
void func_5710587920(unsigned depth) {
    extend(52);
    return;
}
void func_5710588112(unsigned depth) {
    extend(53);
    return;
}
void func_5710588240(unsigned depth) {
    extend(54);
    return;
}
void func_5710588368(unsigned depth) {
    extend(55);
    return;
}
void func_5710588496(unsigned depth) {
    extend(56);
    return;
}
void func_5710588048(unsigned depth) {
    extend(57);
    return;
}
void func_5710589072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5710584208(depth+1);
    func_5710589200(depth+1);
    func_5710585584(depth+1);
    return;
}
void func_5710589200(unsigned depth) {
    extend(43);
    return;
}
void func_5710586240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5710584208(depth+1);
    func_5710586368(depth+1);
    func_5710585584(depth+1);
    return;
}
void func_5710586368(unsigned depth) {
    extend(45);
    return;
}
void func_5710587376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5710589552(depth+1);
    func_5710584208(depth+1);
    func_5710589680(depth+1);
    return;
}
void func_5710589552(unsigned depth) {
    extend(40);
    return;
}
void func_5710589680(unsigned depth) {
    extend(41);
    return;
}
void func_5710587216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5710590448(depth+1);
    func_5710589552(depth+1);
    func_5710583328(depth+1);
    func_5710584400(depth+1);
    func_5710583696(depth+1);
    func_5710584400(depth+1);
    func_5710583328(depth+1);
    func_5710589680(depth+1);
    func_5710590576(depth+1);
    func_5710584528(depth+1);
    func_5710585712(depth+1);
    return;
}
void func_5710590448(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5710590576(unsigned depth) {
    extend(123);
    return;
}
void func_5710585712(unsigned depth) {
    extend(125);
    return;
}
void func_5710590224(unsigned depth) {
    extend(105);
    return;
}
void func_5710590896(unsigned depth) {
    extend(106);
    return;
}
void func_5710591024(unsigned depth) {
    extend(107);
    return;
}
void func_5710591152(unsigned depth) {
    extend(120);
    return;
}
void func_5710591280(unsigned depth) {
    extend(121);
    return;
}
void func_5710591472(unsigned depth) {
    extend(122);
    return;
}
void func_5710591600(unsigned depth) {
    extend(97);
    return;
}
void func_5710591728(unsigned depth) {
    extend(98);
    return;
}
void func_5710591856(unsigned depth) {
    extend(99);
    return;
}
void func_5710591408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5710592624(depth+1);
    func_5710589552(depth+1);
    func_5710583696(depth+1);
    func_5710589680(depth+1);
    func_5710590576(depth+1);
    func_5710584528(depth+1);
    func_5710585712(depth+1);
    return;
}
void func_5710592624(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5710589872(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5710592624(depth+1);
    func_5710589552(depth+1);
    func_5710583696(depth+1);
    func_5710589680(depth+1);
    func_5710590576(depth+1);
    func_5710584528(depth+1);
    func_5710585712(depth+1);
    func_5710592448(depth+1);
    func_5710590576(depth+1);
    func_5710584528(depth+1);
    func_5710585712(depth+1);
    return;
}
void func_5710592448(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5710590048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5710584112(depth+1);
    func_5710584336(depth+1);
    return;
}
void func_5710592112(unsigned depth) {
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
    func_5710592240(depth+1);
    func_5710589552(depth+1);
    func_5710584208(depth+1);
    func_5710589680(depth+1);
    func_5710584400(depth+1);
    return;
}
void func_5710592240(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5710592752(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5710585216(depth+1);
    func_5710584528(depth+1);
    return;
}
void func_5710593600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5710585584(depth+1);
    func_5710593728(depth+1);
    func_5710583984(depth+1);
    return;
}
void func_5710593728(unsigned depth) {
    extend(42);
    return;
}
void func_5710592880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5710585584(depth+1);
    func_5710588560(depth+1);
    func_5710583984(depth+1);
    return;
}
void func_5710588560(unsigned depth) {
    extend(47);
    return;
}
void func_5710593536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5710588928(depth+1);
    func_5710589552(depth+1);
    func_5710583696(depth+1);
    func_5710589680(depth+1);
    func_5710590576(depth+1);
    func_5710584528(depth+1);
    func_5710585712(depth+1);
    return;
}
void func_5710588928(unsigned depth) {
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
    func_5710584800(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
