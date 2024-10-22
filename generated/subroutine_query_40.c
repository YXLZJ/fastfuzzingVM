#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 40
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

void func_5391800944(unsigned depth);
void func_5391811152(unsigned depth);
void func_5391811456(unsigned depth);
void func_5391811808(unsigned depth);
void func_5391811520(unsigned depth);
void func_5391811072(unsigned depth);
void func_5391810944(unsigned depth);
void func_5391812272(unsigned depth);
void func_5391811312(unsigned depth);
void func_5391811936(unsigned depth);
void func_5391812064(unsigned depth);
void func_5391812192(unsigned depth);
void func_5391812688(unsigned depth);
void func_5391812816(unsigned depth);
void func_5391812976(unsigned depth);
void func_5391813184(unsigned depth);
void func_5391813312(unsigned depth);
void func_5391813696(unsigned depth);
void func_5391812560(unsigned depth);
void func_5391814048(unsigned depth);
void func_5391811376(unsigned depth);
void func_5391814240(unsigned depth);
void func_5391814368(unsigned depth);
void func_5391814496(unsigned depth);
void func_5391814960(unsigned depth);
void func_5391813104(unsigned depth);
void func_5391815152(unsigned depth);
void func_5391815312(unsigned depth);
void func_5391815440(unsigned depth);
void func_5391815632(unsigned depth);
void func_5391815760(unsigned depth);
void func_5391815888(unsigned depth);
void func_5391816016(unsigned depth);
void func_5391815568(unsigned depth);
void func_5391813824(unsigned depth);
void func_5391812448(unsigned depth);
void func_5391816656(unsigned depth);
void func_5391816784(unsigned depth);
void func_5391817168(unsigned depth);
void func_5391817296(unsigned depth);
void func_5391817424(unsigned depth);
void func_5391817584(unsigned depth);
void func_5391817712(unsigned depth);
void func_5391817904(unsigned depth);
void func_5391818032(unsigned depth);
void func_5391818160(unsigned depth);
void func_5391818288(unsigned depth);
void func_5391817840(unsigned depth);
void func_5391817056(unsigned depth);
void func_5391814688(unsigned depth);
void func_5391814816(unsigned depth);
void func_5391816976(unsigned depth);
void func_5391818800(unsigned depth);
void func_5391800944(unsigned depth) {
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
            func_5391812192(depth+1);
        break;
        case 1:
            func_5391812688(depth+1);
        break;
        case 2:
            func_5391812816(depth+1);
        break;
        case 3:
            func_5391812976(depth+1);
        break;
    }
    return;
}
void func_5391811152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(42);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5391813184(depth+1);
        break;
        case 1:
            func_5391813312(depth+1);
        break;
    }
    return;
}
void func_5391811456(unsigned depth) {
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
            func_5391812560(depth+1);
        break;
        case 1:
            func_5391811376(depth+1);
        break;
        case 2:
            func_5391814368(depth+1);
        break;
    }
    return;
}
void func_5391811808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5391814960(depth+1);
        break;
        case 1:
            func_5391813104(depth+1);
        break;
        case 2:
            func_5391815152(depth+1);
        break;
        case 3:
            func_5391815312(depth+1);
        break;
        case 4:
            func_5391815440(depth+1);
        break;
        case 5:
            func_5391815632(depth+1);
        break;
        case 6:
            func_5391815760(depth+1);
        break;
        case 7:
            func_5391815888(depth+1);
        break;
        case 8:
            func_5391816016(depth+1);
        break;
        case 9:
            func_5391815568(depth+1);
        break;
    }
    return;
}
void func_5391811520(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5391811808(depth+1);
        break;
        case 1:
            func_5391813824(depth+1);
        break;
    }
    return;
}
void func_5391811072(unsigned depth) {
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
            func_5391812448(depth+1);
        break;
    }
    return;
}
void func_5391810944(unsigned depth) {
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
            func_5391811072(depth+1);
        break;
    }
    return;
}
void func_5391812272(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_5391817168(depth+1);
        break;
        case 1:
            func_5391817296(depth+1);
        break;
        case 2:
            func_5391817424(depth+1);
        break;
        case 3:
            func_5391817584(depth+1);
        break;
        case 4:
            func_5391817712(depth+1);
        break;
        case 5:
            func_5391817904(depth+1);
        break;
        case 6:
            func_5391818032(depth+1);
        break;
        case 7:
            func_5391818160(depth+1);
        break;
        case 8:
            func_5391818288(depth+1);
        break;
        case 9:
            func_5391817840(depth+1);
        break;
    }
    return;
}
void func_5391811312(unsigned depth) {
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
            func_5391817056(depth+1);
        break;
        case 1:
            func_5391814688(depth+1);
        break;
        case 2:
            func_5391814816(depth+1);
        break;
    }
    return;
}
void func_5391811936(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(106);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_5391811520(depth+1);
        break;
        case 1:
            func_5391812272(depth+1);
        break;
    }
    return;
}
void func_5391812064(unsigned depth) {
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
            func_5391816976(depth+1);
        break;
    }
    return;
}
void func_5391812192(unsigned depth) {
    extend(105);
    extend(100);
    return;
}
void func_5391812688(unsigned depth) {
    extend(110);
    extend(97);
    extend(109);
    extend(101);
    return;
}
void func_5391812816(unsigned depth) {
    extend(97);
    extend(103);
    extend(101);
    return;
}
void func_5391812976(unsigned depth) {
    extend(101);
    extend(109);
    extend(97);
    extend(105);
    extend(108);
    return;
}
void func_5391813184(unsigned depth) {
    extend(42);
    return;
}
void func_5391813312(unsigned depth) {
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
    func_5391800944(depth+1);
    func_5391813696(depth+1);
    func_5391811152(depth+1);
    return;
}
void func_5391813696(unsigned depth) {
    extend(44);
    return;
}
void func_5391812560(unsigned depth) {
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
    func_5391800944(depth+1);
    func_5391814048(depth+1);
    func_5391811936(depth+1);
    return;
}
void func_5391814048(unsigned depth) {
    extend(61);
    return;
}
void func_5391811376(unsigned depth) {
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
    func_5391811456(depth+1);
    func_5391814240(depth+1);
    func_5391811456(depth+1);
    return;
}
void func_5391814240(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_5391814368(unsigned depth) {
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
    func_5391811456(depth+1);
    func_5391814496(depth+1);
    func_5391811456(depth+1);
    return;
}
void func_5391814496(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_5391814960(unsigned depth) {
    extend(48);
    return;
}
void func_5391813104(unsigned depth) {
    extend(49);
    return;
}
void func_5391815152(unsigned depth) {
    extend(50);
    return;
}
void func_5391815312(unsigned depth) {
    extend(51);
    return;
}
void func_5391815440(unsigned depth) {
    extend(52);
    return;
}
void func_5391815632(unsigned depth) {
    extend(53);
    return;
}
void func_5391815760(unsigned depth) {
    extend(54);
    return;
}
void func_5391815888(unsigned depth) {
    extend(55);
    return;
}
void func_5391816016(unsigned depth) {
    extend(56);
    return;
}
void func_5391815568(unsigned depth) {
    extend(57);
    return;
}
void func_5391813824(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_5391811808(depth+1);
    func_5391811520(depth+1);
    return;
}
void func_5391812448(unsigned depth) {
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
    func_5391816656(depth+1);
    func_5391811152(depth+1);
    func_5391816784(depth+1);
    func_5391811312(depth+1);
    func_5391812064(depth+1);
    return;
}
void func_5391816656(unsigned depth) {
    extend(83);
    extend(69);
    extend(76);
    extend(69);
    extend(67);
    extend(84);
    return;
}
void func_5391816784(unsigned depth) {
    extend(70);
    extend(82);
    extend(79);
    extend(77);
    return;
}
void func_5391817168(unsigned depth) {
    extend(97);
    return;
}
void func_5391817296(unsigned depth) {
    extend(98);
    return;
}
void func_5391817424(unsigned depth) {
    extend(99);
    return;
}
void func_5391817584(unsigned depth) {
    extend(100);
    return;
}
void func_5391817712(unsigned depth) {
    extend(101);
    return;
}
void func_5391817904(unsigned depth) {
    extend(102);
    return;
}
void func_5391818032(unsigned depth) {
    extend(103);
    return;
}
void func_5391818160(unsigned depth) {
    extend(104);
    return;
}
void func_5391818288(unsigned depth) {
    extend(105);
    return;
}
void func_5391817840(unsigned depth) {
    extend(106);
    return;
}
void func_5391817056(unsigned depth) {
    extend(117);
    extend(115);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5391814688(unsigned depth) {
    extend(111);
    extend(114);
    extend(100);
    extend(101);
    extend(114);
    extend(115);
    return;
}
void func_5391814816(unsigned depth) {
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
void func_5391816976(unsigned depth) {
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
    func_5391818800(depth+1);
    func_5391811456(depth+1);
    return;
}
void func_5391818800(unsigned depth) {
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
    func_5391810944(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
