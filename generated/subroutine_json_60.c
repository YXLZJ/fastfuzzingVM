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

void func_5517638880(unsigned depth);
void func_5517639440(unsigned depth);
void func_5517639248(unsigned depth);
void func_5517639008(unsigned depth);
void func_5517639184(unsigned depth);
void func_5517639664(unsigned depth);
void func_5517639792(unsigned depth);
void func_5517639584(unsigned depth);
void func_5517640144(unsigned depth);
void func_5517640576(unsigned depth);
void func_5517640512(unsigned depth);
void func_5517640768(unsigned depth);
void func_5517640336(unsigned depth);
void func_5517640896(unsigned depth);
void func_5517641360(unsigned depth);
void func_5517641488(unsigned depth);
void func_5517641616(unsigned depth);
void func_5517640208(unsigned depth);
void func_5517642000(unsigned depth);
void func_5517642192(unsigned depth);
void func_5517642320(unsigned depth);
void func_5517642448(unsigned depth);
void func_5517642576(unsigned depth);
void func_5517642128(unsigned depth);
void func_5517640064(unsigned depth);
void func_5517642960(unsigned depth);
void func_5517641104(unsigned depth);
void func_5517641232(unsigned depth);
void func_5517643168(unsigned depth);
void func_5517643296(unsigned depth);
void func_5517643424(unsigned depth);
void func_5517643600(unsigned depth);
void func_5517643744(unsigned depth);
void func_5517641744(unsigned depth);
void func_5517643088(unsigned depth);
void func_5517644512(unsigned depth);
void func_5517644640(unsigned depth);
void func_5517644800(unsigned depth);
void func_5517644928(unsigned depth);
void func_5517644352(unsigned depth);
void func_5517645456(unsigned depth);
void func_5517645584(unsigned depth);
void func_5517638880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5517640512(depth+1);
        break;
        case 1:
            func_5517640896(depth+1);
        break;
    }
    return;
}
void func_5517639440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5517641360(depth+1);
        break;
        case 1:
            func_5517641488(depth+1);
        break;
        case 2:
            func_5517641616(depth+1);
        break;
        case 3:
            func_5517640208(depth+1);
        break;
        case 4:
            func_5517642000(depth+1);
        break;
        case 5:
            func_5517642192(depth+1);
        break;
        case 6:
            func_5517642320(depth+1);
        break;
        case 7:
            func_5517642448(depth+1);
        break;
        case 8:
            func_5517642576(depth+1);
        break;
        case 9:
            func_5517642128(depth+1);
        break;
    }
    return;
}
void func_5517639248(unsigned depth) {
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
            func_5517640064(depth+1);
        break;
        case 1:
            func_5517640576(depth+1);
        break;
    }
    return;
}
void func_5517639008(unsigned depth) {
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
            func_5517641104(depth+1);
        break;
        case 1:
            func_5517639792(depth+1);
        break;
    }
    return;
}
void func_5517639184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5517639440(depth+1);
        break;
        case 1:
            func_5517641232(depth+1);
        break;
    }
    return;
}
void func_5517639664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5517643168(depth+1);
        break;
        case 1:
            func_5517643600(depth+1);
        break;
    }
    return;
}
void func_5517639792(unsigned depth) {
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
            func_5517643744(depth+1);
        break;
    }
    return;
}
void func_5517639584(unsigned depth) {
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
            func_5517640576(depth+1);
        break;
    }
    return;
}
void func_5517640144(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        extend(101);
        extend(34);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_5517643088(depth+1);
        break;
        case 1:
            func_5517644512(depth+1);
        break;
        case 2:
            func_5517644640(depth+1);
        break;
        case 3:
            func_5517644800(depth+1);
        break;
        case 4:
            func_5517644928(depth+1);
        break;
    }
    return;
}
void func_5517640576(unsigned depth) {
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
            func_5517639664(depth+1);
        break;
        case 1:
            func_5517638880(depth+1);
        break;
        case 2:
            func_5517640144(depth+1);
        break;
        case 3:
            func_5517639184(depth+1);
        break;
        case 4:
            func_5517644352(depth+1);
        break;
        case 5:
            func_5517645456(depth+1);
        break;
        case 6:
            func_5517645584(depth+1);
        break;
    }
    return;
}
void func_5517640512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(110);
        extend(117);
        extend(108);
        extend(108);
        extend(93);
        return;
    }
    func_5517640768(depth+1);
    func_5517639248(depth+1);
    func_5517640336(depth+1);
    return;
}
void func_5517640768(unsigned depth) {
    extend(91);
    return;
}
void func_5517640336(unsigned depth) {
    extend(93);
    return;
}
void func_5517640896(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(93);
        return;
    }
    func_5517640768(depth+1);
    func_5517640336(depth+1);
    return;
}
void func_5517641360(unsigned depth) {
    extend(48);
    return;
}
void func_5517641488(unsigned depth) {
    extend(49);
    return;
}
void func_5517641616(unsigned depth) {
    extend(50);
    return;
}
void func_5517640208(unsigned depth) {
    extend(51);
    return;
}
void func_5517642000(unsigned depth) {
    extend(52);
    return;
}
void func_5517642192(unsigned depth) {
    extend(53);
    return;
}
void func_5517642320(unsigned depth) {
    extend(54);
    return;
}
void func_5517642448(unsigned depth) {
    extend(55);
    return;
}
void func_5517642576(unsigned depth) {
    extend(56);
    return;
}
void func_5517642128(unsigned depth) {
    extend(57);
    return;
}
void func_5517640064(unsigned depth) {
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
    func_5517640576(depth+1);
    func_5517642960(depth+1);
    func_5517639248(depth+1);
    return;
}
void func_5517642960(unsigned depth) {
    extend(44);
    return;
}
void func_5517641104(unsigned depth) {
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
    func_5517639792(depth+1);
    func_5517642960(depth+1);
    func_5517639008(depth+1);
    return;
}
void func_5517641232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5517639440(depth+1);
    func_5517639184(depth+1);
    return;
}
void func_5517643168(unsigned depth) {
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
    func_5517643296(depth+1);
    func_5517639008(depth+1);
    func_5517643424(depth+1);
    return;
}
void func_5517643296(unsigned depth) {
    extend(123);
    return;
}
void func_5517643424(unsigned depth) {
    extend(125);
    return;
}
void func_5517643600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(123);
        extend(125);
        return;
    }
    func_5517643296(depth+1);
    func_5517643424(depth+1);
    return;
}
void func_5517643744(unsigned depth) {
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
    func_5517640144(depth+1);
    func_5517641744(depth+1);
    func_5517640576(depth+1);
    return;
}
void func_5517641744(unsigned depth) {
    extend(58);
    return;
}
void func_5517643088(unsigned depth) {
    extend(34);
    extend(97);
    extend(34);
    return;
}
void func_5517644512(unsigned depth) {
    extend(34);
    extend(98);
    extend(34);
    return;
}
void func_5517644640(unsigned depth) {
    extend(34);
    extend(99);
    extend(34);
    return;
}
void func_5517644800(unsigned depth) {
    extend(34);
    extend(100);
    extend(34);
    return;
}
void func_5517644928(unsigned depth) {
    extend(34);
    extend(101);
    extend(34);
    return;
}
void func_5517644352(unsigned depth) {
    extend(116);
    extend(114);
    extend(117);
    extend(101);
    return;
}
void func_5517645456(unsigned depth) {
    extend(102);
    extend(97);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_5517645584(unsigned depth) {
    extend(110);
    extend(117);
    extend(108);
    extend(108);
    return;
}
int main(void) {
    static unsigned count = 8;
    seed = time(NULL);
    func_5517639584(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
