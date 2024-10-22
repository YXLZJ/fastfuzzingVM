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

void func_5468349936(unsigned depth);
void func_5468350320(unsigned depth);
void func_5468350736(unsigned depth);
void func_5468350832(unsigned depth);
void func_5468350608(unsigned depth);
void func_5468350528(unsigned depth);
void func_5468351232(unsigned depth);
void func_5468350448(unsigned depth);
void func_5468350960(unsigned depth);
void func_5468351488(unsigned depth);
void func_5468351152(unsigned depth);
void func_5468351424(unsigned depth);
void func_5468351840(unsigned depth);
void func_5468352208(unsigned depth);
void func_5468352048(unsigned depth);
void func_5468351776(unsigned depth);
void func_5468351968(unsigned depth);
void func_5468351024(unsigned depth);
void func_5468353072(unsigned depth);
void func_5468353200(unsigned depth);
void func_5468353328(unsigned depth);
void func_5468353456(unsigned depth);
void func_5468353584(unsigned depth);
void func_5468353712(unsigned depth);
void func_5468354096(unsigned depth);
void func_5468351680(unsigned depth);
void func_5468354288(unsigned depth);
void func_5468354416(unsigned depth);
void func_5468354544(unsigned depth);
void func_5468354736(unsigned depth);
void func_5468354864(unsigned depth);
void func_5468354992(unsigned depth);
void func_5468355120(unsigned depth);
void func_5468354672(unsigned depth);
void func_5468355696(unsigned depth);
void func_5468355824(unsigned depth);
void func_5468352864(unsigned depth);
void func_5468352992(unsigned depth);
void func_5468354000(unsigned depth);
void func_5468356176(unsigned depth);
void func_5468356304(unsigned depth);
void func_5468353840(unsigned depth);
void func_5468357072(unsigned depth);
void func_5468357200(unsigned depth);
void func_5468352336(unsigned depth);
void func_5468356848(unsigned depth);
void func_5468357520(unsigned depth);
void func_5468357648(unsigned depth);
void func_5468357776(unsigned depth);
void func_5468357904(unsigned depth);
void func_5468358096(unsigned depth);
void func_5468358224(unsigned depth);
void func_5468358352(unsigned depth);
void func_5468358480(unsigned depth);
void func_5468358032(unsigned depth);
void func_5468359248(unsigned depth);
void func_5468356496(unsigned depth);
void func_5468359072(unsigned depth);
void func_5468356672(unsigned depth);
void func_5468358736(unsigned depth);
void func_5468358864(unsigned depth);
void func_5468359376(unsigned depth);
void func_5468360224(unsigned depth);
void func_5468360352(unsigned depth);
void func_5468359504(unsigned depth);
void func_5468355184(unsigned depth);
void func_5468360160(unsigned depth);
void func_5468355552(unsigned depth);
void func_5468349936(unsigned depth) {
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
            func_5468351776(depth+1);
        break;
    }
    return;
}
void func_5468350320(unsigned depth) {
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
            func_5468353072(depth+1);
        break;
        case 1:
            func_5468353328(depth+1);
        break;
        case 2:
            func_5468353584(depth+1);
        break;
    }
    return;
}
void func_5468350736(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5468354096(depth+1);
        break;
        case 1:
            func_5468351680(depth+1);
        break;
        case 2:
            func_5468354288(depth+1);
        break;
        case 3:
            func_5468354416(depth+1);
        break;
        case 4:
            func_5468354544(depth+1);
        break;
        case 5:
            func_5468354736(depth+1);
        break;
        case 6:
            func_5468354864(depth+1);
        break;
        case 7:
            func_5468354992(depth+1);
        break;
        case 8:
            func_5468355120(depth+1);
        break;
        case 9:
            func_5468354672(depth+1);
        break;
    }
    return;
}
void func_5468350832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5468355696(depth+1);
        break;
        case 1:
            func_5468352864(depth+1);
        break;
        case 2:
            func_5468352208(depth+1);
        break;
    }
    return;
}
void func_5468350608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5468354000(depth+1);
        break;
        case 1:
            func_5468350960(depth+1);
        break;
        case 2:
            func_5468351232(depth+1);
        break;
    }
    return;
}
void func_5468350528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5468353840(depth+1);
        break;
    }
    return;
}
void func_5468351232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_5468356848(depth+1);
        break;
        case 1:
            func_5468357520(depth+1);
        break;
        case 2:
            func_5468357648(depth+1);
        break;
        case 3:
            func_5468357776(depth+1);
        break;
        case 4:
            func_5468357904(depth+1);
        break;
        case 5:
            func_5468358096(depth+1);
        break;
        case 6:
            func_5468358224(depth+1);
        break;
        case 7:
            func_5468358352(depth+1);
        break;
        case 8:
            func_5468358480(depth+1);
        break;
    }
    return;
}
void func_5468350448(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5468358032(depth+1);
        break;
        case 1:
            func_5468356496(depth+1);
        break;
    }
    return;
}
void func_5468350960(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5468350736(depth+1);
        break;
        case 1:
            func_5468356672(depth+1);
        break;
    }
    return;
}
void func_5468351488(unsigned depth) {
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
            func_5468358736(depth+1);
        break;
    }
    return;
}
void func_5468351152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5468359376(depth+1);
        break;
    }
    return;
}
void func_5468351424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5468351152(depth+1);
        break;
    }
    return;
}
void func_5468351840(unsigned depth) {
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
            func_5468350448(depth+1);
        break;
        case 1:
            func_5468352048(depth+1);
        break;
        case 2:
            func_5468350528(depth+1);
        break;
        case 3:
            func_5468349936(depth+1);
        break;
        case 4:
            func_5468351488(depth+1);
        break;
    }
    return;
}
void func_5468352208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5468360224(depth+1);
        break;
        case 1:
            func_5468359504(depth+1);
        break;
        case 2:
            func_5468350608(depth+1);
        break;
    }
    return;
}
void func_5468352048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5468360160(depth+1);
        break;
    }
    return;
}
void func_5468351776(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_5468351232(depth+1);
    func_5468351968(depth+1);
    func_5468350832(depth+1);
    func_5468351024(depth+1);
    return;
}
void func_5468351968(unsigned depth) {
    extend(61);
    return;
}
void func_5468351024(unsigned depth) {
    extend(59);
    return;
}
void func_5468353072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_5468350832(depth+1);
    func_5468353200(depth+1);
    func_5468350832(depth+1);
    return;
}
void func_5468353200(unsigned depth) {
    extend(62);
    return;
}
void func_5468353328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_5468350832(depth+1);
    func_5468353456(depth+1);
    func_5468350832(depth+1);
    return;
}
void func_5468353456(unsigned depth) {
    extend(60);
    return;
}
void func_5468353584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_5468350832(depth+1);
    func_5468353712(depth+1);
    func_5468350832(depth+1);
    return;
}
void func_5468353712(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_5468354096(unsigned depth) {
    extend(48);
    return;
}
void func_5468351680(unsigned depth) {
    extend(49);
    return;
}
void func_5468354288(unsigned depth) {
    extend(50);
    return;
}
void func_5468354416(unsigned depth) {
    extend(51);
    return;
}
void func_5468354544(unsigned depth) {
    extend(52);
    return;
}
void func_5468354736(unsigned depth) {
    extend(53);
    return;
}
void func_5468354864(unsigned depth) {
    extend(54);
    return;
}
void func_5468354992(unsigned depth) {
    extend(55);
    return;
}
void func_5468355120(unsigned depth) {
    extend(56);
    return;
}
void func_5468354672(unsigned depth) {
    extend(57);
    return;
}
void func_5468355696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_5468350832(depth+1);
    func_5468355824(depth+1);
    func_5468352208(depth+1);
    return;
}
void func_5468355824(unsigned depth) {
    extend(43);
    return;
}
void func_5468352864(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_5468350832(depth+1);
    func_5468352992(depth+1);
    func_5468352208(depth+1);
    return;
}
void func_5468352992(unsigned depth) {
    extend(45);
    return;
}
void func_5468354000(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_5468356176(depth+1);
    func_5468350832(depth+1);
    func_5468356304(depth+1);
    return;
}
void func_5468356176(unsigned depth) {
    extend(40);
    return;
}
void func_5468356304(unsigned depth) {
    extend(41);
    return;
}
void func_5468353840(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5468357072(depth+1);
    func_5468356176(depth+1);
    func_5468349936(depth+1);
    func_5468351024(depth+1);
    func_5468350320(depth+1);
    func_5468351024(depth+1);
    func_5468349936(depth+1);
    func_5468356304(depth+1);
    func_5468357200(depth+1);
    func_5468351152(depth+1);
    func_5468352336(depth+1);
    return;
}
void func_5468357072(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_5468357200(unsigned depth) {
    extend(123);
    return;
}
void func_5468352336(unsigned depth) {
    extend(125);
    return;
}
void func_5468356848(unsigned depth) {
    extend(105);
    return;
}
void func_5468357520(unsigned depth) {
    extend(106);
    return;
}
void func_5468357648(unsigned depth) {
    extend(107);
    return;
}
void func_5468357776(unsigned depth) {
    extend(120);
    return;
}
void func_5468357904(unsigned depth) {
    extend(121);
    return;
}
void func_5468358096(unsigned depth) {
    extend(122);
    return;
}
void func_5468358224(unsigned depth) {
    extend(97);
    return;
}
void func_5468358352(unsigned depth) {
    extend(98);
    return;
}
void func_5468358480(unsigned depth) {
    extend(99);
    return;
}
void func_5468358032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5468359248(depth+1);
    func_5468356176(depth+1);
    func_5468350320(depth+1);
    func_5468356304(depth+1);
    func_5468357200(depth+1);
    func_5468351152(depth+1);
    func_5468352336(depth+1);
    return;
}
void func_5468359248(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_5468356496(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5468359248(depth+1);
    func_5468356176(depth+1);
    func_5468350320(depth+1);
    func_5468356304(depth+1);
    func_5468357200(depth+1);
    func_5468351152(depth+1);
    func_5468352336(depth+1);
    func_5468359072(depth+1);
    func_5468357200(depth+1);
    func_5468351152(depth+1);
    func_5468352336(depth+1);
    return;
}
void func_5468359072(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5468356672(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5468350736(depth+1);
    func_5468350960(depth+1);
    return;
}
void func_5468358736(unsigned depth) {
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
    func_5468358864(depth+1);
    func_5468356176(depth+1);
    func_5468350832(depth+1);
    func_5468356304(depth+1);
    func_5468351024(depth+1);
    return;
}
void func_5468358864(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_5468359376(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5468351840(depth+1);
    func_5468351152(depth+1);
    return;
}
void func_5468360224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_5468352208(depth+1);
    func_5468360352(depth+1);
    func_5468350608(depth+1);
    return;
}
void func_5468360352(unsigned depth) {
    extend(42);
    return;
}
void func_5468359504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_5468352208(depth+1);
    func_5468355184(depth+1);
    func_5468350608(depth+1);
    return;
}
void func_5468355184(unsigned depth) {
    extend(47);
    return;
}
void func_5468360160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_5468355552(depth+1);
    func_5468356176(depth+1);
    func_5468350320(depth+1);
    func_5468356304(depth+1);
    func_5468357200(depth+1);
    func_5468351152(depth+1);
    func_5468352336(depth+1);
    return;
}
void func_5468355552(unsigned depth) {
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
    func_5468351424(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
