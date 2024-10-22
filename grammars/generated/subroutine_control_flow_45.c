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

void func_5651863072(unsigned depth);
void func_5651863440(unsigned depth);
void func_5651863856(unsigned depth);
void func_5651863952(unsigned depth);
void func_5651863728(unsigned depth);
void func_5651863648(unsigned depth);
void func_5651864352(unsigned depth);
void func_5651863568(unsigned depth);
void func_5651864080(unsigned depth);
void func_5651864608(unsigned depth);
void func_5651864272(unsigned depth);
void func_5651864544(unsigned depth);
void func_5651864960(unsigned depth);
void func_5651865328(unsigned depth);
void func_5651865168(unsigned depth);
void func_5651864896(unsigned depth);
void func_5651865088(unsigned depth);
void func_5651864144(unsigned depth);
void func_5651866192(unsigned depth);
void func_5651866320(unsigned depth);
void func_5651866448(unsigned depth);
void func_5651866576(unsigned depth);
void func_5651866704(unsigned depth);
void func_5651866832(unsigned depth);
void func_5651867216(unsigned depth);
void func_5651864800(unsigned depth);
void func_5651867408(unsigned depth);
void func_5651867536(unsigned depth);
void func_5651867664(unsigned depth);
void func_5651867856(unsigned depth);
void func_5651867984(unsigned depth);
void func_5651868112(unsigned depth);
void func_5651868240(unsigned depth);
void func_5651867792(unsigned depth);
void func_5651868816(unsigned depth);
void func_5651868944(unsigned depth);
void func_5651865984(unsigned depth);
void func_5651866112(unsigned depth);
void func_5651867120(unsigned depth);
void func_5651869296(unsigned depth);
void func_5651869424(unsigned depth);
void func_5651866960(unsigned depth);
void func_5651870192(unsigned depth);
void func_5651870320(unsigned depth);
void func_5651865456(unsigned depth);
void func_5651869968(unsigned depth);
void func_5651870640(unsigned depth);
void func_5651870768(unsigned depth);
void func_5651870896(unsigned depth);
void func_5651871024(unsigned depth);
void func_5651871216(unsigned depth);
void func_5651871344(unsigned depth);
void func_5651871472(unsigned depth);
void func_5651871600(unsigned depth);
void func_5651871152(unsigned depth);
void func_5651872368(unsigned depth);
void func_5651869616(unsigned depth);
void func_5651872192(unsigned depth);
void func_5651869792(unsigned depth);
void func_5651871856(unsigned depth);
void func_5651871984(unsigned depth);
void func_5651872496(unsigned depth);
void func_5651873344(unsigned depth);
void func_5651873472(unsigned depth);
void func_5651872624(unsigned depth);
void func_5651868304(unsigned depth);
void func_5651873280(unsigned depth);
void func_5651868672(unsigned depth);
void func_5651863072(unsigned depth) {
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
            func_5651864896(depth+1);
        break;
    }
    return;
}
void func_5651863440(unsigned depth) {
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
            func_5651866192(depth+1);
        break;
        case 1:
            func_5651866448(depth+1);
        break;
        case 2:
            func_5651866704(depth+1);
        break;
    }
    return;
}
void func_5651863856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5651867216(depth+1);
        break;
        case 1:
            func_5651864800(depth+1);
        break;
        case 2:
            func_5651867408(depth+1);
        break;
        case 3:
            func_5651867536(depth+1);
        break;
        case 4:
            func_5651867664(depth+1);
        break;
        case 5:
            func_5651867856(depth+1);
        break;
        case 6:
            func_5651867984(depth+1);
        break;
        case 7:
            func_5651868112(depth+1);
        break;
        case 8:
            func_5651868240(depth+1);
        break;
        case 9:
            func_5651867792(depth+1);
        break;
    }
    return;
}
void func_5651863952(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5651868816(depth+1);
        break;
        case 1:
            func_5651865984(depth+1);
        break;
        case 2:
            func_5651865328(depth+1);
        break;
    }
    return;
}
void func_5651863728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5651867120(depth+1);
        break;
        case 1:
            func_5651864080(depth+1);
        break;
        case 2:
            func_5651864352(depth+1);
        break;
    }
    return;
}
void func_5651863648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5651866960(depth+1);
        break;
    }
    return;
}
void func_5651864352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5651869968(depth+1);
        break;
        case 1:
            func_5651870640(depth+1);
        break;
        case 2:
            func_5651870768(depth+1);
        break;
        case 3:
            func_5651870896(depth+1);
        break;
        case 4:
            func_5651871024(depth+1);
        break;
        case 5:
            func_5651871216(depth+1);
        break;
        case 6:
            func_5651871344(depth+1);
        break;
        case 7:
            func_5651871472(depth+1);
        break;
        case 8:
            func_5651871600(depth+1);
        break;
    }
    return;
}
void func_5651863568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5651871152(depth+1);
        break;
        case 1:
            func_5651869616(depth+1);
        break;
    }
    return;
}
void func_5651864080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5651863856(depth+1);
        break;
        case 1:
            func_5651869792(depth+1);
        break;
    }
    return;
}
void func_5651864608(unsigned depth) {
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
            func_5651871856(depth+1);
        break;
    }
    return;
}
void func_5651864272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5651872496(depth+1);
        break;
    }
    return;
}
void func_5651864544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5651864272(depth+1);
        break;
    }
    return;
}
void func_5651864960(unsigned depth) {
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
            func_5651863568(depth+1);
        break;
        case 1:
            func_5651865168(depth+1);
        break;
        case 2:
            func_5651863648(depth+1);
        break;
        case 3:
            func_5651863072(depth+1);
        break;
        case 4:
            func_5651864608(depth+1);
        break;
    }
    return;
}
void func_5651865328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5651873344(depth+1);
        break;
        case 1:
            func_5651872624(depth+1);
        break;
        case 2:
            func_5651863728(depth+1);
        break;
    }
    return;
}
void func_5651865168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5651873280(depth+1);
        break;
    }
    return;
}
void func_5651864896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5651864352(depth+1);
    func_5651865088(depth+1);
    func_5651863952(depth+1);
    func_5651864144(depth+1);
    return;
}
void func_5651865088(unsigned depth) {
    extend(61);
    return;
}
void func_5651864144(unsigned depth) {
    extend(59);
    return;
}
void func_5651866192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5651863952(depth+1);
    func_5651866320(depth+1);
    func_5651863952(depth+1);
    return;
}
void func_5651866320(unsigned depth) {
    extend(62);
    return;
}
void func_5651866448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5651863952(depth+1);
    func_5651866576(depth+1);
    func_5651863952(depth+1);
    return;
}
void func_5651866576(unsigned depth) {
    extend(60);
    return;
}
void func_5651866704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5651863952(depth+1);
    func_5651866832(depth+1);
    func_5651863952(depth+1);
    return;
}
void func_5651866832(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5651867216(unsigned depth) {
    extend(48);
    return;
}
void func_5651864800(unsigned depth) {
    extend(49);
    return;
}
void func_5651867408(unsigned depth) {
    extend(50);
    return;
}
void func_5651867536(unsigned depth) {
    extend(51);
    return;
}
void func_5651867664(unsigned depth) {
    extend(52);
    return;
}
void func_5651867856(unsigned depth) {
    extend(53);
    return;
}
void func_5651867984(unsigned depth) {
    extend(54);
    return;
}
void func_5651868112(unsigned depth) {
    extend(55);
    return;
}
void func_5651868240(unsigned depth) {
    extend(56);
    return;
}
void func_5651867792(unsigned depth) {
    extend(57);
    return;
}
void func_5651868816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5651863952(depth+1);
    func_5651868944(depth+1);
    func_5651865328(depth+1);
    return;
}
void func_5651868944(unsigned depth) {
    extend(43);
    return;
}
void func_5651865984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5651863952(depth+1);
    func_5651866112(depth+1);
    func_5651865328(depth+1);
    return;
}
void func_5651866112(unsigned depth) {
    extend(45);
    return;
}
void func_5651867120(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5651869296(depth+1);
    func_5651863952(depth+1);
    func_5651869424(depth+1);
    return;
}
void func_5651869296(unsigned depth) {
    extend(40);
    return;
}
void func_5651869424(unsigned depth) {
    extend(41);
    return;
}
void func_5651866960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5651870192(depth+1);
    func_5651869296(depth+1);
    func_5651863072(depth+1);
    func_5651864144(depth+1);
    func_5651863440(depth+1);
    func_5651864144(depth+1);
    func_5651863072(depth+1);
    func_5651869424(depth+1);
    func_5651870320(depth+1);
    func_5651864272(depth+1);
    func_5651865456(depth+1);
    return;
}
void func_5651870192(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5651870320(unsigned depth) {
    extend(123);
    return;
}
void func_5651865456(unsigned depth) {
    extend(125);
    return;
}
void func_5651869968(unsigned depth) {
    extend(105);
    return;
}
void func_5651870640(unsigned depth) {
    extend(106);
    return;
}
void func_5651870768(unsigned depth) {
    extend(107);
    return;
}
void func_5651870896(unsigned depth) {
    extend(120);
    return;
}
void func_5651871024(unsigned depth) {
    extend(121);
    return;
}
void func_5651871216(unsigned depth) {
    extend(122);
    return;
}
void func_5651871344(unsigned depth) {
    extend(97);
    return;
}
void func_5651871472(unsigned depth) {
    extend(98);
    return;
}
void func_5651871600(unsigned depth) {
    extend(99);
    return;
}
void func_5651871152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5651872368(depth+1);
    func_5651869296(depth+1);
    func_5651863440(depth+1);
    func_5651869424(depth+1);
    func_5651870320(depth+1);
    func_5651864272(depth+1);
    func_5651865456(depth+1);
    return;
}
void func_5651872368(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5651869616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5651872368(depth+1);
    func_5651869296(depth+1);
    func_5651863440(depth+1);
    func_5651869424(depth+1);
    func_5651870320(depth+1);
    func_5651864272(depth+1);
    func_5651865456(depth+1);
    func_5651872192(depth+1);
    func_5651870320(depth+1);
    func_5651864272(depth+1);
    func_5651865456(depth+1);
    return;
}
void func_5651872192(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5651869792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5651863856(depth+1);
    func_5651864080(depth+1);
    return;
}
void func_5651871856(unsigned depth) {
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
    func_5651871984(depth+1);
    func_5651869296(depth+1);
    func_5651863952(depth+1);
    func_5651869424(depth+1);
    func_5651864144(depth+1);
    return;
}
void func_5651871984(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5651872496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5651864960(depth+1);
    func_5651864272(depth+1);
    return;
}
void func_5651873344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5651865328(depth+1);
    func_5651873472(depth+1);
    func_5651863728(depth+1);
    return;
}
void func_5651873472(unsigned depth) {
    extend(42);
    return;
}
void func_5651872624(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5651865328(depth+1);
    func_5651868304(depth+1);
    func_5651863728(depth+1);
    return;
}
void func_5651868304(unsigned depth) {
    extend(47);
    return;
}
void func_5651873280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5651868672(depth+1);
    func_5651869296(depth+1);
    func_5651863440(depth+1);
    func_5651869424(depth+1);
    func_5651870320(depth+1);
    func_5651864272(depth+1);
    func_5651865456(depth+1);
    return;
}
void func_5651868672(unsigned depth) {
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
    func_5651864544(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
