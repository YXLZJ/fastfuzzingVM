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

void func_5257583216(unsigned depth);
void func_5257593424(unsigned depth);
void func_5257593728(unsigned depth);
void func_5257594080(unsigned depth);
void func_5257593792(unsigned depth);
void func_5257593344(unsigned depth);
void func_5257593216(unsigned depth);
void func_5257594544(unsigned depth);
void func_5257593584(unsigned depth);
void func_5257594208(unsigned depth);
void func_5257594336(unsigned depth);
void func_5257594464(unsigned depth);
void func_5257594960(unsigned depth);
void func_5257595088(unsigned depth);
void func_5257595248(unsigned depth);
void func_5257595456(unsigned depth);
void func_5257595584(unsigned depth);
void func_5257595968(unsigned depth);
void func_5257594832(unsigned depth);
void func_5257596320(unsigned depth);
void func_5257593648(unsigned depth);
void func_5257596512(unsigned depth);
void func_5257596640(unsigned depth);
void func_5257596768(unsigned depth);
void func_5257597232(unsigned depth);
void func_5257595376(unsigned depth);
void func_5257597424(unsigned depth);
void func_5257597584(unsigned depth);
void func_5257597712(unsigned depth);
void func_5257597904(unsigned depth);
void func_5257598032(unsigned depth);
void func_5257598160(unsigned depth);
void func_5257598288(unsigned depth);
void func_5257597840(unsigned depth);
void func_5257596096(unsigned depth);
void func_5257594720(unsigned depth);
void func_5257598928(unsigned depth);
void func_5257599056(unsigned depth);
void func_5257599440(unsigned depth);
void func_5257599568(unsigned depth);
void func_5257599696(unsigned depth);
void func_5257599856(unsigned depth);
void func_5257599984(unsigned depth);
void func_5257600176(unsigned depth);
void func_5257600304(unsigned depth);
void func_5257600432(unsigned depth);
void func_5257600560(unsigned depth);
void func_5257600112(unsigned depth);
void func_5257599328(unsigned depth);
void func_5257596960(unsigned depth);
void func_5257597088(unsigned depth);
void func_5257599248(unsigned depth);
void func_5257601072(unsigned depth);
void func_5257583216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        return;
    }
    xor(4);
    switch (branch) {
        case 0:
            func_5257594464(depth+1);
        break;
        case 1:
            func_5257594960(depth+1);
        break;
        case 2:
            func_5257595088(depth+1);
        break;
        case 3:
            func_5257595248(depth+1);
        break;
    }
    return;
}
void func_5257593424(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5257595456(depth+1);
        break;
        case 1:
            func_5257595584(depth+1);
        break;
    }
    return;
}
void func_5257593728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5257594832(depth+1);
        break;
        case 1:
            func_5257593648(depth+1);
        break;
        case 2:
            func_5257596640(depth+1);
        break;
    }
    return;
}
void func_5257594080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5257597232(depth+1);
        break;
        case 1:
            func_5257595376(depth+1);
        break;
        case 2:
            func_5257597424(depth+1);
        break;
        case 3:
            func_5257597584(depth+1);
        break;
        case 4:
            func_5257597712(depth+1);
        break;
        case 5:
            func_5257597904(depth+1);
        break;
        case 6:
            func_5257598032(depth+1);
        break;
        case 7:
            func_5257598160(depth+1);
        break;
        case 8:
            func_5257598288(depth+1);
        break;
        case 9:
            func_5257597840(depth+1);
        break;
    }
    return;
}
void func_5257593792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5257594080(depth+1);
        break;
        case 1:
            func_5257596096(depth+1);
        break;
    }
    return;
}
void func_5257593344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5257594720(depth+1);
        break;
    }
    return;
}
void func_5257593216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5257593344(depth+1);
        break;
    }
    return;
}
void func_5257594544(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5257599440(depth+1);
        break;
        case 1:
            func_5257599568(depth+1);
        break;
        case 2:
            func_5257599696(depth+1);
        break;
        case 3:
            func_5257599856(depth+1);
        break;
        case 4:
            func_5257599984(depth+1);
        break;
        case 5:
            func_5257600176(depth+1);
        break;
        case 6:
            func_5257600304(depth+1);
        break;
        case 7:
            func_5257600432(depth+1);
        break;
        case 8:
            func_5257600560(depth+1);
        break;
        case 9:
            func_5257600112(depth+1);
        break;
    }
    return;
}
void func_5257593584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_5257599328(depth+1);
        break;
        case 1:
            func_5257596960(depth+1);
        break;
        case 2:
            func_5257597088(depth+1);
        break;
    }
    return;
}
void func_5257594208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5257593792(depth+1);
        break;
        case 1:
            func_5257594544(depth+1);
        break;
    }
    return;
}
void func_5257594336(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_5257599248(depth+1);
        break;
    }
    return;
}
void func_5257594464(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5257594960(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5257595088(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5257595248(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5257595456(unsigned depth) {
    extend(42);
    return;
}
void func_5257595584(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(44);
        extend(42);
        return;
    }
    func_5257583216(depth+1);
    func_5257595968(depth+1);
    func_5257593424(depth+1);
    return;
}
void func_5257595968(unsigned depth) {
    extend(44);
    return;
}
void func_5257594832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5257583216(depth+1);
    func_5257596320(depth+1);
    func_5257594208(depth+1);
    return;
}
void func_5257596320(unsigned depth) {
    extend(61);
    return;
}
void func_5257593648(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(65);
        extend(78);
        extend(68);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5257593728(depth+1);
    func_5257596512(depth+1);
    func_5257593728(depth+1);
    return;
}
void func_5257596512(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5257596640(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        extend(79);
        extend(82);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5257593728(depth+1);
    func_5257596768(depth+1);
    func_5257593728(depth+1);
    return;
}
void func_5257596768(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5257597232(unsigned depth) {
    extend(48);
    return;
}
void func_5257595376(unsigned depth) {
    extend(49);
    return;
}
void func_5257597424(unsigned depth) {
    extend(50);
    return;
}
void func_5257597584(unsigned depth) {
    extend(51);
    return;
}
void func_5257597712(unsigned depth) {
    extend(52);
    return;
}
void func_5257597904(unsigned depth) {
    extend(53);
    return;
}
void func_5257598032(unsigned depth) {
    extend(54);
    return;
}
void func_5257598160(unsigned depth) {
    extend(55);
    return;
}
void func_5257598288(unsigned depth) {
    extend(56);
    return;
}
void func_5257597840(unsigned depth) {
    extend(57);
    return;
}
void func_5257596096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5257594080(depth+1);
    func_5257593792(depth+1);
    return;
}
void func_5257594720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(83);
        extend(69);
        extend(76);
        extend(69);
        extend(67);
        extend(84);
        extend(42);
        extend(70);
        extend(82);
        extend(79);
        extend(77);
        extend(112);
        extend(114);
        extend(111);
        extend(100);
        extend(117);
        extend(99);
        extend(116);
        extend(115);
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5257598928(depth+1);
    func_5257593424(depth+1);
    func_5257599056(depth+1);
    func_5257593584(depth+1);
    func_5257594336(depth+1);
    return;
}
void func_5257598928(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5257599056(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5257599440(unsigned depth) {
    extend(97);
    return;
}
void func_5257599568(unsigned depth) {
    extend(98);
    return;
}
void func_5257599696(unsigned depth) {
    extend(99);
    return;
}
void func_5257599856(unsigned depth) {
    extend(100);
    return;
}
void func_5257599984(unsigned depth) {
    extend(101);
    return;
}
void func_5257600176(unsigned depth) {
    extend(102);
    return;
}
void func_5257600304(unsigned depth) {
    extend(103);
    return;
}
void func_5257600432(unsigned depth) {
    extend(104);
    return;
}
void func_5257600560(unsigned depth) {
    extend(105);
    return;
}
void func_5257600112(unsigned depth) {
    extend(106);
    return;
}
void func_5257599328(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5257596960(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5257597088(unsigned depth) {
    extend(112);
    extend(114);
    extend(111);
    extend(100);
    extend(117);
    extend(99);
    extend(116);
    extend(115);
    return;
}
void func_5257599248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(87);
        extend(72);
        extend(69);
        extend(82);
        extend(69);
        extend(101);
        extend(109);
        extend(97);
        extend(105);
        extend(108);
        extend(61);
        extend(106);
        return;
    }
    func_5257601072(depth+1);
    func_5257593728(depth+1);
    return;
}
void func_5257601072(unsigned depth) {
    extend(87);
    extend(72);
    extend(69);
    extend(82);
    extend(69);
    return;
}
int main(void) {
    static unsigned count = 7;
    seed = time(NULL);
    func_5257593216(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
