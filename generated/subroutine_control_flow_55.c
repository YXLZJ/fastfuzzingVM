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

void func_4854945312(unsigned depth);
void func_4854945680(unsigned depth);
void func_4854946096(unsigned depth);
void func_4854946192(unsigned depth);
void func_4854945968(unsigned depth);
void func_4854945888(unsigned depth);
void func_4854946592(unsigned depth);
void func_4854945808(unsigned depth);
void func_4854946320(unsigned depth);
void func_4854946848(unsigned depth);
void func_4854946512(unsigned depth);
void func_4854946784(unsigned depth);
void func_4854947200(unsigned depth);
void func_4854947568(unsigned depth);
void func_4854947408(unsigned depth);
void func_4854947136(unsigned depth);
void func_4854947328(unsigned depth);
void func_4854946384(unsigned depth);
void func_4854948432(unsigned depth);
void func_4854948560(unsigned depth);
void func_4854948688(unsigned depth);
void func_4854948816(unsigned depth);
void func_4854948944(unsigned depth);
void func_4854949072(unsigned depth);
void func_4854949456(unsigned depth);
void func_4854947040(unsigned depth);
void func_4854949648(unsigned depth);
void func_4854949776(unsigned depth);
void func_4854949904(unsigned depth);
void func_4854950096(unsigned depth);
void func_4854950224(unsigned depth);
void func_4854950352(unsigned depth);
void func_4854950480(unsigned depth);
void func_4854950032(unsigned depth);
void func_4854951056(unsigned depth);
void func_4854951184(unsigned depth);
void func_4854948224(unsigned depth);
void func_4854948352(unsigned depth);
void func_4854949360(unsigned depth);
void func_4854951536(unsigned depth);
void func_4854951664(unsigned depth);
void func_4854949200(unsigned depth);
void func_4854952432(unsigned depth);
void func_4854952560(unsigned depth);
void func_4854947696(unsigned depth);
void func_4854952208(unsigned depth);
void func_4854952880(unsigned depth);
void func_4854953008(unsigned depth);
void func_4854953136(unsigned depth);
void func_4854953264(unsigned depth);
void func_4854953456(unsigned depth);
void func_4854953584(unsigned depth);
void func_4854953712(unsigned depth);
void func_4854953840(unsigned depth);
void func_4854953392(unsigned depth);
void func_4854954608(unsigned depth);
void func_4854951856(unsigned depth);
void func_4854954432(unsigned depth);
void func_4854952032(unsigned depth);
void func_4854954096(unsigned depth);
void func_4854954224(unsigned depth);
void func_4854954736(unsigned depth);
void func_4854955584(unsigned depth);
void func_4854955712(unsigned depth);
void func_4854954864(unsigned depth);
void func_4854950544(unsigned depth);
void func_4854955520(unsigned depth);
void func_4854950912(unsigned depth);
void func_4854945312(unsigned depth) {
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
            func_4854947136(depth+1);
        break;
    }
    return;
}
void func_4854945680(unsigned depth) {
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
            func_4854948432(depth+1);
        break;
        case 1:
            func_4854948688(depth+1);
        break;
        case 2:
            func_4854948944(depth+1);
        break;
    }
    return;
}
void func_4854946096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4854949456(depth+1);
        break;
        case 1:
            func_4854947040(depth+1);
        break;
        case 2:
            func_4854949648(depth+1);
        break;
        case 3:
            func_4854949776(depth+1);
        break;
        case 4:
            func_4854949904(depth+1);
        break;
        case 5:
            func_4854950096(depth+1);
        break;
        case 6:
            func_4854950224(depth+1);
        break;
        case 7:
            func_4854950352(depth+1);
        break;
        case 8:
            func_4854950480(depth+1);
        break;
        case 9:
            func_4854950032(depth+1);
        break;
    }
    return;
}
void func_4854946192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4854951056(depth+1);
        break;
        case 1:
            func_4854948224(depth+1);
        break;
        case 2:
            func_4854947568(depth+1);
        break;
    }
    return;
}
void func_4854945968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4854949360(depth+1);
        break;
        case 1:
            func_4854946320(depth+1);
        break;
        case 2:
            func_4854946592(depth+1);
        break;
    }
    return;
}
void func_4854945888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4854949200(depth+1);
        break;
    }
    return;
}
void func_4854946592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4854952208(depth+1);
        break;
        case 1:
            func_4854952880(depth+1);
        break;
        case 2:
            func_4854953008(depth+1);
        break;
        case 3:
            func_4854953136(depth+1);
        break;
        case 4:
            func_4854953264(depth+1);
        break;
        case 5:
            func_4854953456(depth+1);
        break;
        case 6:
            func_4854953584(depth+1);
        break;
        case 7:
            func_4854953712(depth+1);
        break;
        case 8:
            func_4854953840(depth+1);
        break;
    }
    return;
}
void func_4854945808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4854953392(depth+1);
        break;
        case 1:
            func_4854951856(depth+1);
        break;
    }
    return;
}
void func_4854946320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4854946096(depth+1);
        break;
        case 1:
            func_4854952032(depth+1);
        break;
    }
    return;
}
void func_4854946848(unsigned depth) {
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
            func_4854954096(depth+1);
        break;
    }
    return;
}
void func_4854946512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4854954736(depth+1);
        break;
    }
    return;
}
void func_4854946784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4854946512(depth+1);
        break;
    }
    return;
}
void func_4854947200(unsigned depth) {
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
            func_4854945808(depth+1);
        break;
        case 1:
            func_4854947408(depth+1);
        break;
        case 2:
            func_4854945888(depth+1);
        break;
        case 3:
            func_4854945312(depth+1);
        break;
        case 4:
            func_4854946848(depth+1);
        break;
    }
    return;
}
void func_4854947568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4854955584(depth+1);
        break;
        case 1:
            func_4854954864(depth+1);
        break;
        case 2:
            func_4854945968(depth+1);
        break;
    }
    return;
}
void func_4854947408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4854955520(depth+1);
        break;
    }
    return;
}
void func_4854947136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4854946592(depth+1);
    func_4854947328(depth+1);
    func_4854946192(depth+1);
    func_4854946384(depth+1);
    return;
}
void func_4854947328(unsigned depth) {
    extend(61);
    return;
}
void func_4854946384(unsigned depth) {
    extend(59);
    return;
}
void func_4854948432(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4854946192(depth+1);
    func_4854948560(depth+1);
    func_4854946192(depth+1);
    return;
}
void func_4854948560(unsigned depth) {
    extend(62);
    return;
}
void func_4854948688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4854946192(depth+1);
    func_4854948816(depth+1);
    func_4854946192(depth+1);
    return;
}
void func_4854948816(unsigned depth) {
    extend(60);
    return;
}
void func_4854948944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4854946192(depth+1);
    func_4854949072(depth+1);
    func_4854946192(depth+1);
    return;
}
void func_4854949072(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4854949456(unsigned depth) {
    extend(48);
    return;
}
void func_4854947040(unsigned depth) {
    extend(49);
    return;
}
void func_4854949648(unsigned depth) {
    extend(50);
    return;
}
void func_4854949776(unsigned depth) {
    extend(51);
    return;
}
void func_4854949904(unsigned depth) {
    extend(52);
    return;
}
void func_4854950096(unsigned depth) {
    extend(53);
    return;
}
void func_4854950224(unsigned depth) {
    extend(54);
    return;
}
void func_4854950352(unsigned depth) {
    extend(55);
    return;
}
void func_4854950480(unsigned depth) {
    extend(56);
    return;
}
void func_4854950032(unsigned depth) {
    extend(57);
    return;
}
void func_4854951056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4854946192(depth+1);
    func_4854951184(depth+1);
    func_4854947568(depth+1);
    return;
}
void func_4854951184(unsigned depth) {
    extend(43);
    return;
}
void func_4854948224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4854946192(depth+1);
    func_4854948352(depth+1);
    func_4854947568(depth+1);
    return;
}
void func_4854948352(unsigned depth) {
    extend(45);
    return;
}
void func_4854949360(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4854951536(depth+1);
    func_4854946192(depth+1);
    func_4854951664(depth+1);
    return;
}
void func_4854951536(unsigned depth) {
    extend(40);
    return;
}
void func_4854951664(unsigned depth) {
    extend(41);
    return;
}
void func_4854949200(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4854952432(depth+1);
    func_4854951536(depth+1);
    func_4854945312(depth+1);
    func_4854946384(depth+1);
    func_4854945680(depth+1);
    func_4854946384(depth+1);
    func_4854945312(depth+1);
    func_4854951664(depth+1);
    func_4854952560(depth+1);
    func_4854946512(depth+1);
    func_4854947696(depth+1);
    return;
}
void func_4854952432(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4854952560(unsigned depth) {
    extend(123);
    return;
}
void func_4854947696(unsigned depth) {
    extend(125);
    return;
}
void func_4854952208(unsigned depth) {
    extend(105);
    return;
}
void func_4854952880(unsigned depth) {
    extend(106);
    return;
}
void func_4854953008(unsigned depth) {
    extend(107);
    return;
}
void func_4854953136(unsigned depth) {
    extend(120);
    return;
}
void func_4854953264(unsigned depth) {
    extend(121);
    return;
}
void func_4854953456(unsigned depth) {
    extend(122);
    return;
}
void func_4854953584(unsigned depth) {
    extend(97);
    return;
}
void func_4854953712(unsigned depth) {
    extend(98);
    return;
}
void func_4854953840(unsigned depth) {
    extend(99);
    return;
}
void func_4854953392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4854954608(depth+1);
    func_4854951536(depth+1);
    func_4854945680(depth+1);
    func_4854951664(depth+1);
    func_4854952560(depth+1);
    func_4854946512(depth+1);
    func_4854947696(depth+1);
    return;
}
void func_4854954608(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4854951856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4854954608(depth+1);
    func_4854951536(depth+1);
    func_4854945680(depth+1);
    func_4854951664(depth+1);
    func_4854952560(depth+1);
    func_4854946512(depth+1);
    func_4854947696(depth+1);
    func_4854954432(depth+1);
    func_4854952560(depth+1);
    func_4854946512(depth+1);
    func_4854947696(depth+1);
    return;
}
void func_4854954432(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4854952032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4854946096(depth+1);
    func_4854946320(depth+1);
    return;
}
void func_4854954096(unsigned depth) {
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
    func_4854954224(depth+1);
    func_4854951536(depth+1);
    func_4854946192(depth+1);
    func_4854951664(depth+1);
    func_4854946384(depth+1);
    return;
}
void func_4854954224(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4854954736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4854947200(depth+1);
    func_4854946512(depth+1);
    return;
}
void func_4854955584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4854947568(depth+1);
    func_4854955712(depth+1);
    func_4854945968(depth+1);
    return;
}
void func_4854955712(unsigned depth) {
    extend(42);
    return;
}
void func_4854954864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4854947568(depth+1);
    func_4854950544(depth+1);
    func_4854945968(depth+1);
    return;
}
void func_4854950544(unsigned depth) {
    extend(47);
    return;
}
void func_4854955520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4854950912(depth+1);
    func_4854951536(depth+1);
    func_4854945680(depth+1);
    func_4854951664(depth+1);
    func_4854952560(depth+1);
    func_4854946512(depth+1);
    func_4854947696(depth+1);
    return;
}
void func_4854950912(unsigned depth) {
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
    func_4854946784(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
