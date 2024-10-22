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

void func_4838174096(unsigned depth);
void func_4838174848(unsigned depth);
void func_4838175008(unsigned depth);
void func_4838174720(unsigned depth);
void func_4838174368(unsigned depth);
void func_4838173968(unsigned depth);
void func_4838174608(unsigned depth);
void func_4838175136(unsigned depth);
void func_4838176768(unsigned depth);
void func_4838174288(unsigned depth);
void func_4838175328(unsigned depth);
void func_4838175536(unsigned depth);
void func_4838175456(unsigned depth);
void func_4838175968(unsigned depth);
void func_4838176256(unsigned depth);
void func_4838175808(unsigned depth);
void func_4838175728(unsigned depth);
void func_4838176192(unsigned depth);
void func_4838176512(unsigned depth);
void func_4838176640(unsigned depth);
void func_4838177792(unsigned depth);
void func_4838177920(unsigned depth);
void func_4838178048(unsigned depth);
void func_4838178176(unsigned depth);
void func_4838178304(unsigned depth);
void func_4838178432(unsigned depth);
void func_4838178592(unsigned depth);
void func_4838178720(unsigned depth);
void func_4838178880(unsigned depth);
void func_4838179008(unsigned depth);
void func_4838179232(unsigned depth);
void func_4838179360(unsigned depth);
void func_4838179536(unsigned depth);
void func_4838177024(unsigned depth);
void func_4838177664(unsigned depth);
void func_4838177216(unsigned depth);
void func_4838180112(unsigned depth);
void func_4838180240(unsigned depth);
void func_4838180368(unsigned depth);
void func_4838180560(unsigned depth);
void func_4838180688(unsigned depth);
void func_4838180816(unsigned depth);
void func_4838180944(unsigned depth);
void func_4838180496(unsigned depth);
void func_4838177152(unsigned depth);
void func_4838181488(unsigned depth);
void func_4838177344(unsigned depth);
void func_4838177472(unsigned depth);
void func_4838181344(unsigned depth);
void func_4838181712(unsigned depth);
void func_4838181840(unsigned depth);
void func_4838176096(unsigned depth);
void func_4838182448(unsigned depth);
void func_4838176832(unsigned depth);
void func_4838182704(unsigned depth);
void func_4838182048(unsigned depth);
void func_4838183008(unsigned depth);
void func_4838183136(unsigned depth);
void func_4838184480(unsigned depth);
void func_4838184608(unsigned depth);
void func_4838184736(unsigned depth);
void func_4838184896(unsigned depth);
void func_4838185024(unsigned depth);
void func_4838185216(unsigned depth);
void func_4838185344(unsigned depth);
void func_4838179664(unsigned depth);
void func_4838179792(unsigned depth);
void func_4838185152(unsigned depth);
void func_4838185408(unsigned depth);
void func_4838185536(unsigned depth);
void func_4838185664(unsigned depth);
void func_4838185792(unsigned depth);
void func_4838185920(unsigned depth);
void func_4838186048(unsigned depth);
void func_4838186176(unsigned depth);
void func_4838179920(unsigned depth);
void func_4838186560(unsigned depth);
void func_4838186688(unsigned depth);
void func_4838186816(unsigned depth);
void func_4838186944(unsigned depth);
void func_4838187072(unsigned depth);
void func_4838187200(unsigned depth);
void func_4838187328(unsigned depth);
void func_4838187456(unsigned depth);
void func_4838187584(unsigned depth);
void func_4838187712(unsigned depth);
void func_4838187840(unsigned depth);
void func_4838187968(unsigned depth);
void func_4838188096(unsigned depth);
void func_4838188224(unsigned depth);
void func_4838188352(unsigned depth);
void func_4838186304(unsigned depth);
void func_4838186432(unsigned depth);
void func_4838188992(unsigned depth);
void func_4838189120(unsigned depth);
void func_4838189248(unsigned depth);
void func_4838189376(unsigned depth);
void func_4838189504(unsigned depth);
void func_4838189632(unsigned depth);
void func_4838189760(unsigned depth);
void func_4838189888(unsigned depth);
void func_4838190016(unsigned depth);
void func_4838190144(unsigned depth);
void func_4838190272(unsigned depth);
void func_4838190400(unsigned depth);
void func_4838190528(unsigned depth);
void func_4838190656(unsigned depth);
void func_4838190784(unsigned depth);
void func_4838190912(unsigned depth);
void func_4838191040(unsigned depth);
void func_4838182832(unsigned depth);
void func_4838182176(unsigned depth);
void func_4838183408(unsigned depth);
void func_4838183536(unsigned depth);
void func_4838184032(unsigned depth);
void func_4838184160(unsigned depth);
void func_4838183664(unsigned depth);
void func_4838184288(unsigned depth);
void func_4838191248(unsigned depth);
void func_4838191376(unsigned depth);
void func_4838191504(unsigned depth);
void func_4838191632(unsigned depth);
void func_4838191760(unsigned depth);
void func_4838191888(unsigned depth);
void func_4838192016(unsigned depth);
void func_4838191168(unsigned depth);
void func_4838183936(unsigned depth);
void func_4838174096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838176192(depth+1);
        break;
    }
    return;
}
void func_4838174848(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    xor(7);
    switch (branch) {
        case 0:
            func_4838177792(depth+1);
        break;
        case 1:
            func_4838178048(depth+1);
        break;
        case 2:
            func_4838178304(depth+1);
        break;
        case 3:
            func_4838178592(depth+1);
        break;
        case 4:
            func_4838178880(depth+1);
        break;
        case 5:
            func_4838179232(depth+1);
        break;
        case 6:
            func_4838179536(depth+1);
        break;
    }
    return;
}
void func_4838175008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4838177664(depth+1);
        break;
        case 1:
            func_4838177216(depth+1);
        break;
        case 2:
            func_4838180112(depth+1);
        break;
        case 3:
            func_4838180240(depth+1);
        break;
        case 4:
            func_4838180368(depth+1);
        break;
        case 5:
            func_4838180560(depth+1);
        break;
        case 6:
            func_4838180688(depth+1);
        break;
        case 7:
            func_4838180816(depth+1);
        break;
        case 8:
            func_4838180944(depth+1);
        break;
        case 9:
            func_4838180496(depth+1);
        break;
    }
    return;
}
void func_4838174720(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4838177152(depth+1);
        break;
        case 1:
            func_4838177344(depth+1);
        break;
        case 2:
            func_4838176256(depth+1);
        break;
    }
    return;
}
void func_4838174368(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4838181344(depth+1);
        break;
        case 1:
            func_4838174288(depth+1);
        break;
        case 2:
            func_4838174608(depth+1);
        break;
    }
    return;
}
void func_4838173968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838176096(depth+1);
        break;
    }
    return;
}
void func_4838174608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4838182048(depth+1);
        break;
        case 1:
            func_4838176768(depth+1);
        break;
    }
    return;
}
void func_4838175136(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838183008(depth+1);
        break;
    }
    return;
}
void func_4838176768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4838184480(depth+1);
        break;
        case 1:
            func_4838184608(depth+1);
        break;
        case 2:
            func_4838184736(depth+1);
        break;
        case 3:
            func_4838184896(depth+1);
        break;
        case 4:
            func_4838185024(depth+1);
        break;
        case 5:
            func_4838185216(depth+1);
        break;
        case 6:
            func_4838185344(depth+1);
        break;
        case 7:
            func_4838179664(depth+1);
        break;
        case 8:
            func_4838179792(depth+1);
        break;
        case 9:
            func_4838185152(depth+1);
        break;
        case 10:
            func_4838185408(depth+1);
        break;
        case 11:
            func_4838185536(depth+1);
        break;
        case 12:
            func_4838185664(depth+1);
        break;
        case 13:
            func_4838185792(depth+1);
        break;
        case 14:
            func_4838185920(depth+1);
        break;
        case 15:
            func_4838186048(depth+1);
        break;
        case 16:
            func_4838186176(depth+1);
        break;
        case 17:
            func_4838179920(depth+1);
        break;
        case 18:
            func_4838186560(depth+1);
        break;
        case 19:
            func_4838186688(depth+1);
        break;
        case 20:
            func_4838186816(depth+1);
        break;
        case 21:
            func_4838186944(depth+1);
        break;
        case 22:
            func_4838187072(depth+1);
        break;
        case 23:
            func_4838187200(depth+1);
        break;
        case 24:
            func_4838187328(depth+1);
        break;
        case 25:
            func_4838187456(depth+1);
        break;
        case 26:
            func_4838187584(depth+1);
        break;
        case 27:
            func_4838187712(depth+1);
        break;
        case 28:
            func_4838187840(depth+1);
        break;
        case 29:
            func_4838187968(depth+1);
        break;
        case 30:
            func_4838188096(depth+1);
        break;
        case 31:
            func_4838188224(depth+1);
        break;
        case 32:
            func_4838188352(depth+1);
        break;
        case 33:
            func_4838186304(depth+1);
        break;
        case 34:
            func_4838186432(depth+1);
        break;
        case 35:
            func_4838188992(depth+1);
        break;
        case 36:
            func_4838189120(depth+1);
        break;
        case 37:
            func_4838189248(depth+1);
        break;
        case 38:
            func_4838189376(depth+1);
        break;
        case 39:
            func_4838189504(depth+1);
        break;
        case 40:
            func_4838189632(depth+1);
        break;
        case 41:
            func_4838189760(depth+1);
        break;
        case 42:
            func_4838189888(depth+1);
        break;
        case 43:
            func_4838190016(depth+1);
        break;
        case 44:
            func_4838190144(depth+1);
        break;
        case 45:
            func_4838190272(depth+1);
        break;
        case 46:
            func_4838190400(depth+1);
        break;
        case 47:
            func_4838190528(depth+1);
        break;
        case 48:
            func_4838190656(depth+1);
        break;
        case 49:
            func_4838190784(depth+1);
        break;
        case 50:
            func_4838190912(depth+1);
        break;
        case 51:
            func_4838191040(depth+1);
        break;
    }
    return;
}
void func_4838174288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4838182832(depth+1);
        break;
        case 1:
            func_4838175008(depth+1);
        break;
    }
    return;
}
void func_4838175328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4838182176(depth+1);
        break;
        case 1:
            func_4838175968(depth+1);
        break;
    }
    return;
}
void func_4838175536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838183408(depth+1);
        break;
    }
    return;
}
void func_4838175456(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838175328(depth+1);
        break;
    }
    return;
}
void func_4838175968(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    xor(6);
    switch (branch) {
        case 0:
            func_4838175808(depth+1);
        break;
        case 1:
            func_4838174096(depth+1);
        break;
        case 2:
            func_4838175136(depth+1);
        break;
        case 3:
            func_4838175728(depth+1);
        break;
        case 4:
            func_4838173968(depth+1);
        break;
        case 5:
            func_4838175536(depth+1);
        break;
    }
    return;
}
void func_4838176256(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4838184032(depth+1);
        break;
        case 1:
            func_4838183664(depth+1);
        break;
        case 2:
            func_4838174368(depth+1);
        break;
    }
    return;
}
void func_4838175808(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4838191248(depth+1);
        break;
        case 1:
            func_4838191632(depth+1);
        break;
        case 2:
            func_4838191888(depth+1);
        break;
    }
    return;
}
void func_4838175728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4838191168(depth+1);
        break;
    }
    return;
}
void func_4838176192(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(61);
        extend(57);
        extend(59);
        return;
    }
    func_4838174608(depth+1);
    func_4838176512(depth+1);
    func_4838174720(depth+1);
    func_4838176640(depth+1);
    return;
}
void func_4838176512(unsigned depth) {
    extend(61);
    return;
}
void func_4838176640(unsigned depth) {
    extend(59);
    return;
}
void func_4838177792(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(61);
        extend(61);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838177920(depth+1);
    func_4838174720(depth+1);
    return;
}
void func_4838177920(unsigned depth) {
    extend(61);
    extend(61);
    return;
}
void func_4838178048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(33);
        extend(61);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838178176(depth+1);
    func_4838174720(depth+1);
    return;
}
void func_4838178176(unsigned depth) {
    extend(33);
    extend(61);
    return;
}
void func_4838178304(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(62);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838178432(depth+1);
    func_4838174720(depth+1);
    return;
}
void func_4838178432(unsigned depth) {
    extend(62);
    return;
}
void func_4838178592(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838178720(depth+1);
    func_4838174720(depth+1);
    return;
}
void func_4838178720(unsigned depth) {
    extend(60);
    return;
}
void func_4838178880(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(65);
        extend(78);
        extend(68);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4838174848(depth+1);
    func_4838179008(depth+1);
    func_4838174848(depth+1);
    return;
}
void func_4838179008(unsigned depth) {
    extend(65);
    extend(78);
    extend(68);
    return;
}
void func_4838179232(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(60);
        extend(57);
        extend(79);
        extend(82);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4838174848(depth+1);
    func_4838179360(depth+1);
    func_4838174848(depth+1);
    return;
}
void func_4838179360(unsigned depth) {
    extend(79);
    extend(82);
    return;
}
void func_4838179536(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(78);
        extend(79);
        extend(84);
        extend(57);
        extend(60);
        extend(57);
        return;
    }
    func_4838177024(depth+1);
    func_4838174848(depth+1);
    return;
}
void func_4838177024(unsigned depth) {
    extend(78);
    extend(79);
    extend(84);
    return;
}
void func_4838177664(unsigned depth) {
    extend(48);
    return;
}
void func_4838177216(unsigned depth) {
    extend(49);
    return;
}
void func_4838180112(unsigned depth) {
    extend(50);
    return;
}
void func_4838180240(unsigned depth) {
    extend(51);
    return;
}
void func_4838180368(unsigned depth) {
    extend(52);
    return;
}
void func_4838180560(unsigned depth) {
    extend(53);
    return;
}
void func_4838180688(unsigned depth) {
    extend(54);
    return;
}
void func_4838180816(unsigned depth) {
    extend(55);
    return;
}
void func_4838180944(unsigned depth) {
    extend(56);
    return;
}
void func_4838180496(unsigned depth) {
    extend(57);
    return;
}
void func_4838177152(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(43);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838181488(depth+1);
    func_4838176256(depth+1);
    return;
}
void func_4838181488(unsigned depth) {
    extend(43);
    return;
}
void func_4838177344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(45);
        extend(57);
        return;
    }
    func_4838174720(depth+1);
    func_4838177472(depth+1);
    func_4838176256(depth+1);
    return;
}
void func_4838177472(unsigned depth) {
    extend(45);
    return;
}
void func_4838181344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(57);
        extend(41);
        return;
    }
    func_4838181712(depth+1);
    func_4838174720(depth+1);
    func_4838181840(depth+1);
    return;
}
void func_4838181712(unsigned depth) {
    extend(40);
    return;
}
void func_4838181840(unsigned depth) {
    extend(41);
    return;
}
void func_4838176096(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(117);
        extend(110);
        extend(99);
        extend(116);
        extend(105);
        extend(111);
        extend(110);
        extend(90);
        extend(40);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_4838182448(depth+1);
    func_4838174608(depth+1);
    func_4838181712(depth+1);
    func_4838181840(depth+1);
    func_4838176832(depth+1);
    func_4838175328(depth+1);
    func_4838182704(depth+1);
    return;
}
void func_4838182448(unsigned depth) {
    extend(102);
    extend(117);
    extend(110);
    extend(99);
    extend(116);
    extend(105);
    extend(111);
    extend(110);
    return;
}
void func_4838176832(unsigned depth) {
    extend(123);
    return;
}
void func_4838182704(unsigned depth) {
    extend(125);
    return;
}
void func_4838182048(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        extend(90);
        return;
    }
    func_4838176768(depth+1);
    func_4838174608(depth+1);
    return;
}
void func_4838183008(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(105);
        extend(102);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_4838183136(depth+1);
    func_4838181712(depth+1);
    func_4838174848(depth+1);
    func_4838181840(depth+1);
    func_4838176832(depth+1);
    func_4838175328(depth+1);
    func_4838182704(depth+1);
    return;
}
void func_4838183136(unsigned depth) {
    extend(32);
    extend(105);
    extend(102);
    extend(32);
    return;
}
void func_4838184480(unsigned depth) {
    extend(97);
    return;
}
void func_4838184608(unsigned depth) {
    extend(98);
    return;
}
void func_4838184736(unsigned depth) {
    extend(99);
    return;
}
void func_4838184896(unsigned depth) {
    extend(100);
    return;
}
void func_4838185024(unsigned depth) {
    extend(101);
    return;
}
void func_4838185216(unsigned depth) {
    extend(102);
    return;
}
void func_4838185344(unsigned depth) {
    extend(103);
    return;
}
void func_4838179664(unsigned depth) {
    extend(104);
    return;
}
void func_4838179792(unsigned depth) {
    extend(105);
    return;
}
void func_4838185152(unsigned depth) {
    extend(106);
    return;
}
void func_4838185408(unsigned depth) {
    extend(107);
    return;
}
void func_4838185536(unsigned depth) {
    extend(108);
    return;
}
void func_4838185664(unsigned depth) {
    extend(109);
    return;
}
void func_4838185792(unsigned depth) {
    extend(110);
    return;
}
void func_4838185920(unsigned depth) {
    extend(111);
    return;
}
void func_4838186048(unsigned depth) {
    extend(112);
    return;
}
void func_4838186176(unsigned depth) {
    extend(113);
    return;
}
void func_4838179920(unsigned depth) {
    extend(114);
    return;
}
void func_4838186560(unsigned depth) {
    extend(115);
    return;
}
void func_4838186688(unsigned depth) {
    extend(116);
    return;
}
void func_4838186816(unsigned depth) {
    extend(117);
    return;
}
void func_4838186944(unsigned depth) {
    extend(118);
    return;
}
void func_4838187072(unsigned depth) {
    extend(119);
    return;
}
void func_4838187200(unsigned depth) {
    extend(120);
    return;
}
void func_4838187328(unsigned depth) {
    extend(121);
    return;
}
void func_4838187456(unsigned depth) {
    extend(122);
    return;
}
void func_4838187584(unsigned depth) {
    extend(65);
    return;
}
void func_4838187712(unsigned depth) {
    extend(66);
    return;
}
void func_4838187840(unsigned depth) {
    extend(67);
    return;
}
void func_4838187968(unsigned depth) {
    extend(68);
    return;
}
void func_4838188096(unsigned depth) {
    extend(69);
    return;
}
void func_4838188224(unsigned depth) {
    extend(70);
    return;
}
void func_4838188352(unsigned depth) {
    extend(71);
    return;
}
void func_4838186304(unsigned depth) {
    extend(72);
    return;
}
void func_4838186432(unsigned depth) {
    extend(73);
    return;
}
void func_4838188992(unsigned depth) {
    extend(74);
    return;
}
void func_4838189120(unsigned depth) {
    extend(75);
    return;
}
void func_4838189248(unsigned depth) {
    extend(76);
    return;
}
void func_4838189376(unsigned depth) {
    extend(77);
    return;
}
void func_4838189504(unsigned depth) {
    extend(78);
    return;
}
void func_4838189632(unsigned depth) {
    extend(79);
    return;
}
void func_4838189760(unsigned depth) {
    extend(80);
    return;
}
void func_4838189888(unsigned depth) {
    extend(81);
    return;
}
void func_4838190016(unsigned depth) {
    extend(82);
    return;
}
void func_4838190144(unsigned depth) {
    extend(83);
    return;
}
void func_4838190272(unsigned depth) {
    extend(84);
    return;
}
void func_4838190400(unsigned depth) {
    extend(85);
    return;
}
void func_4838190528(unsigned depth) {
    extend(86);
    return;
}
void func_4838190656(unsigned depth) {
    extend(87);
    return;
}
void func_4838190784(unsigned depth) {
    extend(88);
    return;
}
void func_4838190912(unsigned depth) {
    extend(89);
    return;
}
void func_4838191040(unsigned depth) {
    extend(90);
    return;
}
void func_4838182832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(57);
        return;
    }
    func_4838175008(depth+1);
    func_4838174288(depth+1);
    return;
}
void func_4838182176(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    func_4838175328(depth+1);
    func_4838175968(depth+1);
    return;
}
void func_4838183408(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        return;
    }
    func_4838183536(depth+1);
    func_4838174720(depth+1);
    func_4838176640(depth+1);
    return;
}
void func_4838183536(unsigned depth) {
    extend(32);
    extend(114);
    extend(101);
    extend(116);
    extend(117);
    extend(114);
    extend(110);
    extend(32);
    return;
}
void func_4838184032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(42);
        extend(57);
        return;
    }
    func_4838176256(depth+1);
    func_4838184160(depth+1);
    func_4838174368(depth+1);
    return;
}
void func_4838184160(unsigned depth) {
    extend(42);
    return;
}
void func_4838183664(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        extend(47);
        extend(57);
        return;
    }
    func_4838176256(depth+1);
    func_4838184288(depth+1);
    func_4838174368(depth+1);
    return;
}
void func_4838184288(unsigned depth) {
    extend(47);
    return;
}
void func_4838191248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(105);
        extend(110);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_4838191376(depth+1);
    func_4838174608(depth+1);
    func_4838191504(depth+1);
    return;
}
void func_4838191376(unsigned depth) {
    extend(105);
    extend(110);
    extend(116);
    extend(32);
    return;
}
void func_4838191504(unsigned depth) {
    extend(32);
    extend(59);
    extend(32);
    return;
}
void func_4838191632(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(102);
        extend(108);
        extend(111);
        extend(97);
        extend(116);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_4838191760(depth+1);
    func_4838174608(depth+1);
    func_4838191504(depth+1);
    return;
}
void func_4838191760(unsigned depth) {
    extend(102);
    extend(108);
    extend(111);
    extend(97);
    extend(116);
    extend(32);
    return;
}
void func_4838191888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(115);
        extend(116);
        extend(114);
        extend(105);
        extend(110);
        extend(103);
        extend(32);
        extend(90);
        extend(32);
        extend(59);
        extend(32);
        return;
    }
    func_4838192016(depth+1);
    func_4838174608(depth+1);
    func_4838191504(depth+1);
    return;
}
void func_4838192016(unsigned depth) {
    extend(115);
    extend(116);
    extend(114);
    extend(105);
    extend(110);
    extend(103);
    extend(32);
    return;
}
void func_4838191168(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(32);
        extend(119);
        extend(104);
        extend(105);
        extend(108);
        extend(101);
        extend(32);
        extend(40);
        extend(57);
        extend(60);
        extend(57);
        extend(41);
        extend(123);
        extend(32);
        extend(114);
        extend(101);
        extend(116);
        extend(117);
        extend(114);
        extend(110);
        extend(32);
        extend(57);
        extend(59);
        extend(125);
        return;
    }
    func_4838183936(depth+1);
    func_4838181712(depth+1);
    func_4838174848(depth+1);
    func_4838181840(depth+1);
    func_4838176832(depth+1);
    func_4838175328(depth+1);
    func_4838182704(depth+1);
    return;
}
void func_4838183936(unsigned depth) {
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
    static unsigned count = 23;
    seed = time(NULL);
    func_4838175456(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
