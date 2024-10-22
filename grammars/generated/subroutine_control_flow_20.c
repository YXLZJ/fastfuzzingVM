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

void func_4980774432(unsigned depth);
void func_4980774800(unsigned depth);
void func_4980775216(unsigned depth);
void func_4980775312(unsigned depth);
void func_4980775088(unsigned depth);
void func_4980775008(unsigned depth);
void func_4980775712(unsigned depth);
void func_4980774928(unsigned depth);
void func_4980775440(unsigned depth);
void func_4980775968(unsigned depth);
void func_4980775632(unsigned depth);
void func_4980775904(unsigned depth);
void func_4980776320(unsigned depth);
void func_4980776688(unsigned depth);
void func_4980776528(unsigned depth);
void func_4980776256(unsigned depth);
void func_4980776448(unsigned depth);
void func_4980775504(unsigned depth);
void func_4980777552(unsigned depth);
void func_4980777680(unsigned depth);
void func_4980777808(unsigned depth);
void func_4980777936(unsigned depth);
void func_4980778064(unsigned depth);
void func_4980778192(unsigned depth);
void func_4980778576(unsigned depth);
void func_4980776160(unsigned depth);
void func_4980778768(unsigned depth);
void func_4980778896(unsigned depth);
void func_4980779024(unsigned depth);
void func_4980779216(unsigned depth);
void func_4980779344(unsigned depth);
void func_4980779472(unsigned depth);
void func_4980779600(unsigned depth);
void func_4980779152(unsigned depth);
void func_4980780176(unsigned depth);
void func_4980780304(unsigned depth);
void func_4980777344(unsigned depth);
void func_4980777472(unsigned depth);
void func_4980778480(unsigned depth);
void func_4980780656(unsigned depth);
void func_4980780784(unsigned depth);
void func_4980778320(unsigned depth);
void func_4980781552(unsigned depth);
void func_4980781680(unsigned depth);
void func_4980776816(unsigned depth);
void func_4980781328(unsigned depth);
void func_4980782000(unsigned depth);
void func_4980782128(unsigned depth);
void func_4980782256(unsigned depth);
void func_4980782384(unsigned depth);
void func_4980782576(unsigned depth);
void func_4980782704(unsigned depth);
void func_4980782832(unsigned depth);
void func_4980782960(unsigned depth);
void func_4980782512(unsigned depth);
void func_4980783728(unsigned depth);
void func_4980780976(unsigned depth);
void func_4980783552(unsigned depth);
void func_4980781152(unsigned depth);
void func_4980783216(unsigned depth);
void func_4980783344(unsigned depth);
void func_4980783856(unsigned depth);
void func_4980784704(unsigned depth);
void func_4980784832(unsigned depth);
void func_4980783984(unsigned depth);
void func_4980779664(unsigned depth);
void func_4980784640(unsigned depth);
void func_4980780032(unsigned depth);
void func_4980774432(unsigned depth) {
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
            func_4980776256(depth+1);
        break;
    }
    return;
}
void func_4980774800(unsigned depth) {
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
            func_4980777552(depth+1);
        break;
        case 1:
            func_4980777808(depth+1);
        break;
        case 2:
            func_4980778064(depth+1);
        break;
    }
    return;
}
void func_4980775216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4980778576(depth+1);
        break;
        case 1:
            func_4980776160(depth+1);
        break;
        case 2:
            func_4980778768(depth+1);
        break;
        case 3:
            func_4980778896(depth+1);
        break;
        case 4:
            func_4980779024(depth+1);
        break;
        case 5:
            func_4980779216(depth+1);
        break;
        case 6:
            func_4980779344(depth+1);
        break;
        case 7:
            func_4980779472(depth+1);
        break;
        case 8:
            func_4980779600(depth+1);
        break;
        case 9:
            func_4980779152(depth+1);
        break;
    }
    return;
}
void func_4980775312(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4980780176(depth+1);
        break;
        case 1:
            func_4980777344(depth+1);
        break;
        case 2:
            func_4980776688(depth+1);
        break;
    }
    return;
}
void func_4980775088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4980778480(depth+1);
        break;
        case 1:
            func_4980775440(depth+1);
        break;
        case 2:
            func_4980775712(depth+1);
        break;
    }
    return;
}
void func_4980775008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980778320(depth+1);
        break;
    }
    return;
}
void func_4980775712(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4980781328(depth+1);
        break;
        case 1:
            func_4980782000(depth+1);
        break;
        case 2:
            func_4980782128(depth+1);
        break;
        case 3:
            func_4980782256(depth+1);
        break;
        case 4:
            func_4980782384(depth+1);
        break;
        case 5:
            func_4980782576(depth+1);
        break;
        case 6:
            func_4980782704(depth+1);
        break;
        case 7:
            func_4980782832(depth+1);
        break;
        case 8:
            func_4980782960(depth+1);
        break;
    }
    return;
}
void func_4980774928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980782512(depth+1);
        break;
        case 1:
            func_4980780976(depth+1);
        break;
    }
    return;
}
void func_4980775440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4980775216(depth+1);
        break;
        case 1:
            func_4980781152(depth+1);
        break;
    }
    return;
}
void func_4980775968(unsigned depth) {
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
            func_4980783216(depth+1);
        break;
    }
    return;
}
void func_4980775632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980783856(depth+1);
        break;
    }
    return;
}
void func_4980775904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980775632(depth+1);
        break;
    }
    return;
}
void func_4980776320(unsigned depth) {
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
            func_4980774928(depth+1);
        break;
        case 1:
            func_4980776528(depth+1);
        break;
        case 2:
            func_4980775008(depth+1);
        break;
        case 3:
            func_4980774432(depth+1);
        break;
        case 4:
            func_4980775968(depth+1);
        break;
    }
    return;
}
void func_4980776688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4980784704(depth+1);
        break;
        case 1:
            func_4980783984(depth+1);
        break;
        case 2:
            func_4980775088(depth+1);
        break;
    }
    return;
}
void func_4980776528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4980784640(depth+1);
        break;
    }
    return;
}
void func_4980776256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4980775712(depth+1);
    func_4980776448(depth+1);
    func_4980775312(depth+1);
    func_4980775504(depth+1);
    return;
}
void func_4980776448(unsigned depth) {
    extend(61);
    return;
}
void func_4980775504(unsigned depth) {
    extend(59);
    return;
}
void func_4980777552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4980775312(depth+1);
    func_4980777680(depth+1);
    func_4980775312(depth+1);
    return;
}
void func_4980777680(unsigned depth) {
    extend(62);
    return;
}
void func_4980777808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4980775312(depth+1);
    func_4980777936(depth+1);
    func_4980775312(depth+1);
    return;
}
void func_4980777936(unsigned depth) {
    extend(60);
    return;
}
void func_4980778064(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4980775312(depth+1);
    func_4980778192(depth+1);
    func_4980775312(depth+1);
    return;
}
void func_4980778192(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4980778576(unsigned depth) {
    extend(48);
    return;
}
void func_4980776160(unsigned depth) {
    extend(49);
    return;
}
void func_4980778768(unsigned depth) {
    extend(50);
    return;
}
void func_4980778896(unsigned depth) {
    extend(51);
    return;
}
void func_4980779024(unsigned depth) {
    extend(52);
    return;
}
void func_4980779216(unsigned depth) {
    extend(53);
    return;
}
void func_4980779344(unsigned depth) {
    extend(54);
    return;
}
void func_4980779472(unsigned depth) {
    extend(55);
    return;
}
void func_4980779600(unsigned depth) {
    extend(56);
    return;
}
void func_4980779152(unsigned depth) {
    extend(57);
    return;
}
void func_4980780176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4980775312(depth+1);
    func_4980780304(depth+1);
    func_4980776688(depth+1);
    return;
}
void func_4980780304(unsigned depth) {
    extend(43);
    return;
}
void func_4980777344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4980775312(depth+1);
    func_4980777472(depth+1);
    func_4980776688(depth+1);
    return;
}
void func_4980777472(unsigned depth) {
    extend(45);
    return;
}
void func_4980778480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4980780656(depth+1);
    func_4980775312(depth+1);
    func_4980780784(depth+1);
    return;
}
void func_4980780656(unsigned depth) {
    extend(40);
    return;
}
void func_4980780784(unsigned depth) {
    extend(41);
    return;
}
void func_4980778320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4980781552(depth+1);
    func_4980780656(depth+1);
    func_4980774432(depth+1);
    func_4980775504(depth+1);
    func_4980774800(depth+1);
    func_4980775504(depth+1);
    func_4980774432(depth+1);
    func_4980780784(depth+1);
    func_4980781680(depth+1);
    func_4980775632(depth+1);
    func_4980776816(depth+1);
    return;
}
void func_4980781552(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4980781680(unsigned depth) {
    extend(123);
    return;
}
void func_4980776816(unsigned depth) {
    extend(125);
    return;
}
void func_4980781328(unsigned depth) {
    extend(105);
    return;
}
void func_4980782000(unsigned depth) {
    extend(106);
    return;
}
void func_4980782128(unsigned depth) {
    extend(107);
    return;
}
void func_4980782256(unsigned depth) {
    extend(120);
    return;
}
void func_4980782384(unsigned depth) {
    extend(121);
    return;
}
void func_4980782576(unsigned depth) {
    extend(122);
    return;
}
void func_4980782704(unsigned depth) {
    extend(97);
    return;
}
void func_4980782832(unsigned depth) {
    extend(98);
    return;
}
void func_4980782960(unsigned depth) {
    extend(99);
    return;
}
void func_4980782512(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4980783728(depth+1);
    func_4980780656(depth+1);
    func_4980774800(depth+1);
    func_4980780784(depth+1);
    func_4980781680(depth+1);
    func_4980775632(depth+1);
    func_4980776816(depth+1);
    return;
}
void func_4980783728(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4980780976(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4980783728(depth+1);
    func_4980780656(depth+1);
    func_4980774800(depth+1);
    func_4980780784(depth+1);
    func_4980781680(depth+1);
    func_4980775632(depth+1);
    func_4980776816(depth+1);
    func_4980783552(depth+1);
    func_4980781680(depth+1);
    func_4980775632(depth+1);
    func_4980776816(depth+1);
    return;
}
void func_4980783552(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4980781152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4980775216(depth+1);
    func_4980775440(depth+1);
    return;
}
void func_4980783216(unsigned depth) {
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
    func_4980783344(depth+1);
    func_4980780656(depth+1);
    func_4980775312(depth+1);
    func_4980780784(depth+1);
    func_4980775504(depth+1);
    return;
}
void func_4980783344(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4980783856(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4980776320(depth+1);
    func_4980775632(depth+1);
    return;
}
void func_4980784704(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4980776688(depth+1);
    func_4980784832(depth+1);
    func_4980775088(depth+1);
    return;
}
void func_4980784832(unsigned depth) {
    extend(42);
    return;
}
void func_4980783984(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4980776688(depth+1);
    func_4980779664(depth+1);
    func_4980775088(depth+1);
    return;
}
void func_4980779664(unsigned depth) {
    extend(47);
    return;
}
void func_4980784640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4980780032(depth+1);
    func_4980780656(depth+1);
    func_4980774800(depth+1);
    func_4980780784(depth+1);
    func_4980781680(depth+1);
    func_4980775632(depth+1);
    func_4980776816(depth+1);
    return;
}
void func_4980780032(unsigned depth) {
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
    func_4980775904(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
