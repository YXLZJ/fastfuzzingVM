#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 50
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

void func_4813002272(unsigned depth);
void func_4813002640(unsigned depth);
void func_4813003056(unsigned depth);
void func_4813003152(unsigned depth);
void func_4813002928(unsigned depth);
void func_4813002848(unsigned depth);
void func_4813003552(unsigned depth);
void func_4813002768(unsigned depth);
void func_4813003280(unsigned depth);
void func_4813003808(unsigned depth);
void func_4813003472(unsigned depth);
void func_4813003744(unsigned depth);
void func_4813004160(unsigned depth);
void func_4813004528(unsigned depth);
void func_4813004368(unsigned depth);
void func_4813004096(unsigned depth);
void func_4813004288(unsigned depth);
void func_4813003344(unsigned depth);
void func_4813005392(unsigned depth);
void func_4813005520(unsigned depth);
void func_4813005648(unsigned depth);
void func_4813005776(unsigned depth);
void func_4813005904(unsigned depth);
void func_4813006032(unsigned depth);
void func_4813006416(unsigned depth);
void func_4813004000(unsigned depth);
void func_4813006608(unsigned depth);
void func_4813006736(unsigned depth);
void func_4813006864(unsigned depth);
void func_4813007056(unsigned depth);
void func_4813007184(unsigned depth);
void func_4813007312(unsigned depth);
void func_4813007440(unsigned depth);
void func_4813006992(unsigned depth);
void func_4813008016(unsigned depth);
void func_4813008144(unsigned depth);
void func_4813005184(unsigned depth);
void func_4813005312(unsigned depth);
void func_4813006320(unsigned depth);
void func_4813008496(unsigned depth);
void func_4813008624(unsigned depth);
void func_4813006160(unsigned depth);
void func_4813009392(unsigned depth);
void func_4813009520(unsigned depth);
void func_4813004656(unsigned depth);
void func_4813009168(unsigned depth);
void func_4813009840(unsigned depth);
void func_4813009968(unsigned depth);
void func_4813010096(unsigned depth);
void func_4813010224(unsigned depth);
void func_4813010416(unsigned depth);
void func_4813010544(unsigned depth);
void func_4813010672(unsigned depth);
void func_4813010800(unsigned depth);
void func_4813010352(unsigned depth);
void func_4813011568(unsigned depth);
void func_4813008816(unsigned depth);
void func_4813011392(unsigned depth);
void func_4813008992(unsigned depth);
void func_4813011056(unsigned depth);
void func_4813011184(unsigned depth);
void func_4813011696(unsigned depth);
void func_4813012544(unsigned depth);
void func_4813012672(unsigned depth);
void func_4813011824(unsigned depth);
void func_4813007504(unsigned depth);
void func_4813012480(unsigned depth);
void func_4813007872(unsigned depth);
void func_4813002272(unsigned depth) {
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
            func_4813004096(depth+1);
        break;
    }
    return;
}
void func_4813002640(unsigned depth) {
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
            func_4813005392(depth+1);
        break;
        case 1:
            func_4813005648(depth+1);
        break;
        case 2:
            func_4813005904(depth+1);
        break;
    }
    return;
}
void func_4813003056(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4813006416(depth+1);
        break;
        case 1:
            func_4813004000(depth+1);
        break;
        case 2:
            func_4813006608(depth+1);
        break;
        case 3:
            func_4813006736(depth+1);
        break;
        case 4:
            func_4813006864(depth+1);
        break;
        case 5:
            func_4813007056(depth+1);
        break;
        case 6:
            func_4813007184(depth+1);
        break;
        case 7:
            func_4813007312(depth+1);
        break;
        case 8:
            func_4813007440(depth+1);
        break;
        case 9:
            func_4813006992(depth+1);
        break;
    }
    return;
}
void func_4813003152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4813008016(depth+1);
        break;
        case 1:
            func_4813005184(depth+1);
        break;
        case 2:
            func_4813004528(depth+1);
        break;
    }
    return;
}
void func_4813002928(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4813006320(depth+1);
        break;
        case 1:
            func_4813003280(depth+1);
        break;
        case 2:
            func_4813003552(depth+1);
        break;
    }
    return;
}
void func_4813002848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4813006160(depth+1);
        break;
    }
    return;
}
void func_4813003552(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(9);
    switch (branch) {
        case 0:
            func_4813009168(depth+1);
        break;
        case 1:
            func_4813009840(depth+1);
        break;
        case 2:
            func_4813009968(depth+1);
        break;
        case 3:
            func_4813010096(depth+1);
        break;
        case 4:
            func_4813010224(depth+1);
        break;
        case 5:
            func_4813010416(depth+1);
        break;
        case 6:
            func_4813010544(depth+1);
        break;
        case 7:
            func_4813010672(depth+1);
        break;
        case 8:
            func_4813010800(depth+1);
        break;
    }
    return;
}
void func_4813002768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4813010352(depth+1);
        break;
        case 1:
            func_4813008816(depth+1);
        break;
    }
    return;
}
void func_4813003280(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4813003056(depth+1);
        break;
        case 1:
            func_4813008992(depth+1);
        break;
    }
    return;
}
void func_4813003808(unsigned depth) {
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
            func_4813011056(depth+1);
        break;
    }
    return;
}
void func_4813003472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4813011696(depth+1);
        break;
    }
    return;
}
void func_4813003744(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4813003472(depth+1);
        break;
    }
    return;
}
void func_4813004160(unsigned depth) {
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
            func_4813002768(depth+1);
        break;
        case 1:
            func_4813004368(depth+1);
        break;
        case 2:
            func_4813002848(depth+1);
        break;
        case 3:
            func_4813002272(depth+1);
        break;
        case 4:
            func_4813003808(depth+1);
        break;
    }
    return;
}
void func_4813004528(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4813012544(depth+1);
        break;
        case 1:
            func_4813011824(depth+1);
        break;
        case 2:
            func_4813002928(depth+1);
        break;
    }
    return;
}
void func_4813004368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4813012480(depth+1);
        break;
    }
    return;
}
void func_4813004096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(99);
        extend(59);
        return;
    }
    func_4813003552(depth+1);
    func_4813004288(depth+1);
    func_4813003152(depth+1);
    func_4813003344(depth+1);
    return;
}
void func_4813004288(unsigned depth) {
    extend(61);
    return;
}
void func_4813003344(unsigned depth) {
    extend(59);
    return;
}
void func_4813005392(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(62);
        extend(99);
        return;
    }
    func_4813003152(depth+1);
    func_4813005520(depth+1);
    func_4813003152(depth+1);
    return;
}
void func_4813005520(unsigned depth) {
    extend(62);
    return;
}
void func_4813005648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(60);
        extend(99);
        return;
    }
    func_4813003152(depth+1);
    func_4813005776(depth+1);
    func_4813003152(depth+1);
    return;
}
void func_4813005776(unsigned depth) {
    extend(60);
    return;
}
void func_4813005904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(61);
        extend(61);
        extend(99);
        return;
    }
    func_4813003152(depth+1);
    func_4813006032(depth+1);
    func_4813003152(depth+1);
    return;
}
void func_4813006032(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4813006416(unsigned depth) {
    extend(48);
    return;
}
void func_4813004000(unsigned depth) {
    extend(49);
    return;
}
void func_4813006608(unsigned depth) {
    extend(50);
    return;
}
void func_4813006736(unsigned depth) {
    extend(51);
    return;
}
void func_4813006864(unsigned depth) {
    extend(52);
    return;
}
void func_4813007056(unsigned depth) {
    extend(53);
    return;
}
void func_4813007184(unsigned depth) {
    extend(54);
    return;
}
void func_4813007312(unsigned depth) {
    extend(55);
    return;
}
void func_4813007440(unsigned depth) {
    extend(56);
    return;
}
void func_4813006992(unsigned depth) {
    extend(57);
    return;
}
void func_4813008016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(43);
        extend(99);
        return;
    }
    func_4813003152(depth+1);
    func_4813008144(depth+1);
    func_4813004528(depth+1);
    return;
}
void func_4813008144(unsigned depth) {
    extend(43);
    return;
}
void func_4813005184(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(45);
        extend(99);
        return;
    }
    func_4813003152(depth+1);
    func_4813005312(depth+1);
    func_4813004528(depth+1);
    return;
}
void func_4813005312(unsigned depth) {
    extend(45);
    return;
}
void func_4813006320(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(99);
        extend(41);
        return;
    }
    func_4813008496(depth+1);
    func_4813003152(depth+1);
    func_4813008624(depth+1);
    return;
}
void func_4813008496(unsigned depth) {
    extend(40);
    return;
}
void func_4813008624(unsigned depth) {
    extend(41);
    return;
}
void func_4813006160(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4813009392(depth+1);
    func_4813008496(depth+1);
    func_4813002272(depth+1);
    func_4813003344(depth+1);
    func_4813002640(depth+1);
    func_4813003344(depth+1);
    func_4813002272(depth+1);
    func_4813008624(depth+1);
    func_4813009520(depth+1);
    func_4813003472(depth+1);
    func_4813004656(depth+1);
    return;
}
void func_4813009392(unsigned depth) {
    extend(32);
    extend(102);
    extend(111);
    extend(114);
    extend(32);
    return;
}
void func_4813009520(unsigned depth) {
    extend(123);
    return;
}
void func_4813004656(unsigned depth) {
    extend(125);
    return;
}
void func_4813009168(unsigned depth) {
    extend(105);
    return;
}
void func_4813009840(unsigned depth) {
    extend(106);
    return;
}
void func_4813009968(unsigned depth) {
    extend(107);
    return;
}
void func_4813010096(unsigned depth) {
    extend(120);
    return;
}
void func_4813010224(unsigned depth) {
    extend(121);
    return;
}
void func_4813010416(unsigned depth) {
    extend(122);
    return;
}
void func_4813010544(unsigned depth) {
    extend(97);
    return;
}
void func_4813010672(unsigned depth) {
    extend(98);
    return;
}
void func_4813010800(unsigned depth) {
    extend(99);
    return;
}
void func_4813010352(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4813011568(depth+1);
    func_4813008496(depth+1);
    func_4813002640(depth+1);
    func_4813008624(depth+1);
    func_4813009520(depth+1);
    func_4813003472(depth+1);
    func_4813004656(depth+1);
    return;
}
void func_4813011568(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4813008816(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4813011568(depth+1);
    func_4813008496(depth+1);
    func_4813002640(depth+1);
    func_4813008624(depth+1);
    func_4813009520(depth+1);
    func_4813003472(depth+1);
    func_4813004656(depth+1);
    func_4813011392(depth+1);
    func_4813009520(depth+1);
    func_4813003472(depth+1);
    func_4813004656(depth+1);
    return;
}
void func_4813011392(unsigned depth) {
    extend(101);
    extend(108);
    extend(115);
    extend(101);
    return;
}
void func_4813008992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4813003056(depth+1);
    func_4813003280(depth+1);
    return;
}
void func_4813011056(unsigned depth) {
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
    func_4813011184(depth+1);
    func_4813008496(depth+1);
    func_4813003152(depth+1);
    func_4813008624(depth+1);
    func_4813003344(depth+1);
    return;
}
void func_4813011184(unsigned depth) {
    extend(32);
    extend(112);
    extend(114);
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4813011696(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4813004160(depth+1);
    func_4813003472(depth+1);
    return;
}
void func_4813012544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(42);
        extend(99);
        return;
    }
    func_4813004528(depth+1);
    func_4813012672(depth+1);
    func_4813002928(depth+1);
    return;
}
void func_4813012672(unsigned depth) {
    extend(42);
    return;
}
void func_4813011824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(99);
        extend(47);
        extend(99);
        return;
    }
    func_4813004528(depth+1);
    func_4813007504(depth+1);
    func_4813002928(depth+1);
    return;
}
void func_4813007504(unsigned depth) {
    extend(47);
    return;
}
void func_4813012480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        return;
    }
    func_4813007872(depth+1);
    func_4813008496(depth+1);
    func_4813002640(depth+1);
    func_4813008624(depth+1);
    func_4813009520(depth+1);
    func_4813003472(depth+1);
    func_4813004656(depth+1);
    return;
}
void func_4813007872(unsigned depth) {
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
    func_4813003744(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
