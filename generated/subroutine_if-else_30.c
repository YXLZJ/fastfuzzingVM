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

void func_5039481568(unsigned depth);
void func_5039491008(unsigned depth);
void func_5039490928(unsigned depth);
void func_5039490848(unsigned depth);
void func_5039491472(unsigned depth);
void func_5039490576(unsigned depth);
void func_5039492000(unsigned depth);
void func_5039490768(unsigned depth);
void func_5039491296(unsigned depth);
void func_5039491360(unsigned depth);
void func_5039492240(unsigned depth);
void func_5039492368(unsigned depth);
void func_5039492592(unsigned depth);
void func_5039492720(unsigned depth);
void func_5039492848(unsigned depth);
void func_5039493216(unsigned depth);
void func_5039493344(unsigned depth);
void func_5039491664(unsigned depth);
void func_5039493728(unsigned depth);
void func_5039493856(unsigned depth);
void func_5039493984(unsigned depth);
void func_5039494112(unsigned depth);
void func_5039494240(unsigned depth);
void func_5039494400(unsigned depth);
void func_5039494528(unsigned depth);
void func_5039494752(unsigned depth);
void func_5039494880(unsigned depth);
void func_5039495008(unsigned depth);
void func_5039495136(unsigned depth);
void func_5039495264(unsigned depth);
void func_5039495456(unsigned depth);
void func_5039494688(unsigned depth);
void func_5039492496(unsigned depth);
void func_5039493472(unsigned depth);
void func_5039493600(unsigned depth);
void func_5039493040(unsigned depth);
void func_5039496944(unsigned depth);
void func_5039497072(unsigned depth);
void func_5039496880(unsigned depth);
void func_5039496112(unsigned depth);
void func_5039493104(unsigned depth);
void func_5039497520(unsigned depth);
void func_5039497648(unsigned depth);
void func_5039497776(unsigned depth);
void func_5039497968(unsigned depth);
void func_5039498096(unsigned depth);
void func_5039498224(unsigned depth);
void func_5039498352(unsigned depth);
void func_5039497904(unsigned depth);
void func_5039498672(unsigned depth);
void func_5039498800(unsigned depth);
void func_5039495936(unsigned depth);
void func_5039495648(unsigned depth);
void func_5039499072(unsigned depth);
void func_5039499200(unsigned depth);
void func_5039481568(unsigned depth) {
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
            func_5039492592(depth+1);
        break;
    }
    return;
}
void func_5039491008(unsigned depth) {
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
            func_5039493216(depth+1);
        break;
        case 1:
            func_5039491664(depth+1);
        break;
        case 2:
            func_5039493856(depth+1);
        break;
    }
    return;
}
void func_5039490928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5039494112(depth+1);
        break;
        case 1:
            func_5039492368(depth+1);
        break;
        case 2:
            func_5039494400(depth+1);
        break;
    }
    return;
}
void func_5039490848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5039492000(depth+1);
        break;
        case 1:
            func_5039491472(depth+1);
        break;
    }
    return;
}
void func_5039491472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_5039494752(depth+1);
        break;
        case 1:
            func_5039494880(depth+1);
        break;
        case 2:
            func_5039495008(depth+1);
        break;
        case 3:
            func_5039495136(depth+1);
        break;
        case 4:
            func_5039495264(depth+1);
        break;
        case 5:
            func_5039495456(depth+1);
        break;
    }
    return;
}
void func_5039490576(unsigned depth) {
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
            func_5039494688(depth+1);
        break;
        case 1:
            func_5039496880(depth+1);
        break;
    }
    return;
}
void func_5039492000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5039496112(depth+1);
        break;
        case 1:
            func_5039493104(depth+1);
        break;
        case 2:
            func_5039497520(depth+1);
        break;
        case 3:
            func_5039497648(depth+1);
        break;
        case 4:
            func_5039497776(depth+1);
        break;
        case 5:
            func_5039497968(depth+1);
        break;
        case 6:
            func_5039498096(depth+1);
        break;
        case 7:
            func_5039498224(depth+1);
        break;
        case 8:
            func_5039498352(depth+1);
        break;
        case 9:
            func_5039497904(depth+1);
        break;
    }
    return;
}
void func_5039490768(unsigned depth) {
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
            func_5039498672(depth+1);
        break;
    }
    return;
}
void func_5039491296(unsigned depth) {
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
            func_5039490576(depth+1);
        break;
    }
    return;
}
void func_5039491360(unsigned depth) {
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
            func_5039490576(depth+1);
        break;
        case 1:
            func_5039481568(depth+1);
        break;
        case 2:
            func_5039490768(depth+1);
        break;
    }
    return;
}
void func_5039492240(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5039495936(depth+1);
        break;
        case 1:
            func_5039495648(depth+1);
        break;
    }
    return;
}
void func_5039492368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5039490848(depth+1);
        break;
        case 1:
            func_5039499072(depth+1);
        break;
    }
    return;
}
void func_5039492592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5039491472(depth+1);
    func_5039492720(depth+1);
    func_5039490928(depth+1);
    func_5039492848(depth+1);
    return;
}
void func_5039492720(unsigned depth) {
    extend(61);
    return;
}
void func_5039492848(unsigned depth) {
    extend(59);
    return;
}
void func_5039493216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5039490928(depth+1);
    func_5039493344(depth+1);
    func_5039490928(depth+1);
    return;
}
void func_5039493344(unsigned depth) {
    extend(62);
    return;
}
void func_5039491664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5039490928(depth+1);
    func_5039493728(depth+1);
    func_5039490928(depth+1);
    return;
}
void func_5039493728(unsigned depth) {
    extend(60);
    return;
}
void func_5039493856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5039490928(depth+1);
    func_5039493984(depth+1);
    func_5039490928(depth+1);
    return;
}
void func_5039493984(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5039494112(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5039492368(depth+1);
    func_5039494240(depth+1);
    func_5039490928(depth+1);
    return;
}
void func_5039494240(unsigned depth) {
    extend(43);
    return;
}
void func_5039494400(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5039492368(depth+1);
    func_5039494528(depth+1);
    func_5039490928(depth+1);
    return;
}
void func_5039494528(unsigned depth) {
    extend(45);
    return;
}
void func_5039494752(unsigned depth) {
    extend(120);
    return;
}
void func_5039494880(unsigned depth) {
    extend(121);
    return;
}
void func_5039495008(unsigned depth) {
    extend(122);
    return;
}
void func_5039495136(unsigned depth) {
    extend(97);
    return;
}
void func_5039495264(unsigned depth) {
    extend(98);
    return;
}
void func_5039495456(unsigned depth) {
    extend(99);
    return;
}
void func_5039494688(unsigned depth) {
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
    func_5039492496(depth+1);
    func_5039493472(depth+1);
    func_5039491008(depth+1);
    func_5039493600(depth+1);
    func_5039493040(depth+1);
    func_5039492240(depth+1);
    func_5039496944(depth+1);
    func_5039497072(depth+1);
    func_5039493040(depth+1);
    func_5039492240(depth+1);
    func_5039496944(depth+1);
    return;
}
void func_5039492496(unsigned depth) {
    extend(105);
    extend(102);
    return;
}
void func_5039493472(unsigned depth) {
    extend(40);
    return;
}
void func_5039493600(unsigned depth) {
    extend(41);
    return;
}
void func_5039493040(unsigned depth) {
    extend(123);
    return;
}
void func_5039496944(unsigned depth) {
    extend(125);
    return;
}
void func_5039497072(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5039496880(unsigned depth) {
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
    func_5039492496(depth+1);
    func_5039493472(depth+1);
    func_5039491008(depth+1);
    func_5039493600(depth+1);
    func_5039493040(depth+1);
    func_5039492240(depth+1);
    func_5039496944(depth+1);
    return;
}
void func_5039496112(unsigned depth) {
    extend(48);
    return;
}
void func_5039493104(unsigned depth) {
    extend(49);
    return;
}
void func_5039497520(unsigned depth) {
    extend(50);
    return;
}
void func_5039497648(unsigned depth) {
    extend(51);
    return;
}
void func_5039497776(unsigned depth) {
    extend(52);
    return;
}
void func_5039497968(unsigned depth) {
    extend(53);
    return;
}
void func_5039498096(unsigned depth) {
    extend(54);
    return;
}
void func_5039498224(unsigned depth) {
    extend(55);
    return;
}
void func_5039498352(unsigned depth) {
    extend(56);
    return;
}
void func_5039497904(unsigned depth) {
    extend(57);
    return;
}
void func_5039498672(unsigned depth) {
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
    func_5039498800(depth+1);
    func_5039493472(depth+1);
    func_5039490928(depth+1);
    func_5039493600(depth+1);
    func_5039492848(depth+1);
    return;
}
void func_5039498800(unsigned depth) {
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    return;
}
void func_5039495936(unsigned depth) {
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
    func_5039491360(depth+1);
    func_5039492240(depth+1);
    return;
}
void func_5039495648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    return;
}
void func_5039499072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5039490848(depth+1);
    func_5039499200(depth+1);
    func_5039492368(depth+1);
    return;
}
void func_5039499200(unsigned depth) {
    extend(42);
    return;
}
int main(void) {
    static unsigned count = 12;
    seed = time(NULL);
    func_5039491296(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
