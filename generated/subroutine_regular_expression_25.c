#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define BUFFER_SIZE 512*1024*1024   // buffer for storing text
#define MAX_DEPTH 25
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

void func_4922045504(unsigned depth);
void func_4922062016(unsigned depth);
void func_4922062224(unsigned depth);
void func_4922062432(unsigned depth);
void func_4922061888(unsigned depth);
void func_4922063088(unsigned depth);
void func_4922063216(unsigned depth);
void func_4922062992(unsigned depth);
void func_4922062768(unsigned depth);
void func_4922064784(unsigned depth);
void func_4922063904(unsigned depth);
void func_4922063344(unsigned depth);
void func_4922063472(unsigned depth);
void func_4922063600(unsigned depth);
void func_4922063728(unsigned depth);
void func_4922064032(unsigned depth);
void func_4922062688(unsigned depth);
void func_4922062832(unsigned depth);
void func_4922064480(unsigned depth);
void func_4922064608(unsigned depth);
void func_4922064912(unsigned depth);
void func_4922065040(unsigned depth);
void func_4922065568(unsigned depth);
void func_4922065248(unsigned depth);
void func_4922065168(unsigned depth);
void func_4922065440(unsigned depth);
void func_4922065760(unsigned depth);
void func_4922065888(unsigned depth);
void func_4922066384(unsigned depth);
void func_4922066512(unsigned depth);
void func_4922066640(unsigned depth);
void func_4922066800(unsigned depth);
void func_4922066928(unsigned depth);
void func_4922064288(unsigned depth);
void func_4922067504(unsigned depth);
void func_4922067632(unsigned depth);
void func_4922067760(unsigned depth);
void func_4922064224(unsigned depth);
void func_4922066080(unsigned depth);
void func_4922068080(unsigned depth);
void func_4922068208(unsigned depth);
void func_4922068336(unsigned depth);
void func_4922069808(unsigned depth);
void func_4922069936(unsigned depth);
void func_4922070064(unsigned depth);
void func_4922070224(unsigned depth);
void func_4922070352(unsigned depth);
void func_4922070544(unsigned depth);
void func_4922070672(unsigned depth);
void func_4922070800(unsigned depth);
void func_4922070928(unsigned depth);
void func_4922070480(unsigned depth);
void func_4922071248(unsigned depth);
void func_4922071376(unsigned depth);
void func_4922071504(unsigned depth);
void func_4922071632(unsigned depth);
void func_4922071760(unsigned depth);
void func_4922071888(unsigned depth);
void func_4922072016(unsigned depth);
void func_4922071056(unsigned depth);
void func_4922072400(unsigned depth);
void func_4922072528(unsigned depth);
void func_4922072656(unsigned depth);
void func_4922072784(unsigned depth);
void func_4922072912(unsigned depth);
void func_4922067056(unsigned depth);
void func_4922067184(unsigned depth);
void func_4922067312(unsigned depth);
void func_4922067440(unsigned depth);
void func_4922073040(unsigned depth);
void func_4922073168(unsigned depth);
void func_4922073296(unsigned depth);
void func_4922073424(unsigned depth);
void func_4922073552(unsigned depth);
void func_4922073680(unsigned depth);
void func_4922072144(unsigned depth);
void func_4922072272(unsigned depth);
void func_4922074320(unsigned depth);
void func_4922074448(unsigned depth);
void func_4922074576(unsigned depth);
void func_4922074704(unsigned depth);
void func_4922074832(unsigned depth);
void func_4922074960(unsigned depth);
void func_4922075088(unsigned depth);
void func_4922075216(unsigned depth);
void func_4922075344(unsigned depth);
void func_4922075472(unsigned depth);
void func_4922075600(unsigned depth);
void func_4922075728(unsigned depth);
void func_4922075856(unsigned depth);
void func_4922075984(unsigned depth);
void func_4922076112(unsigned depth);
void func_4922076240(unsigned depth);
void func_4922076368(unsigned depth);
void func_4922068896(unsigned depth);
void func_4922069056(unsigned depth);
void func_4922069184(unsigned depth);
void func_4922069376(unsigned depth);
void func_4922069504(unsigned depth);
void func_4922069312(unsigned depth);
void func_4922076560(unsigned depth);
void func_4922076688(unsigned depth);
void func_4922076816(unsigned depth);
void func_4922068464(unsigned depth);
void func_4922068592(unsigned depth);
void func_4922066288(unsigned depth);
void func_4922076944(unsigned depth);
void func_4922077072(unsigned depth);
void func_4922077200(unsigned depth);
void func_4922066208(unsigned depth);
void func_4922077328(unsigned depth);
void func_4922077984(unsigned depth);
void func_4922078128(unsigned depth);
void func_4922078288(unsigned depth);
void func_4922078416(unsigned depth);
void func_4922078608(unsigned depth);
void func_4922078736(unsigned depth);
void func_4922078864(unsigned depth);
void func_4922078992(unsigned depth);
void func_4922078544(unsigned depth);
void func_4922079312(unsigned depth);
void func_4922077616(unsigned depth);
void func_4922045504(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922065248(depth+1);
        break;
        case 1:
            func_4922064608(depth+1);
        break;
    }
    return;
}
void func_4922062016(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922065168(depth+1);
        break;
    }
    return;
}
void func_4922062224(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4922064912(depth+1);
        break;
        case 1:
            func_4922063600(depth+1);
        break;
        case 2:
            func_4922063216(depth+1);
        break;
    }
    return;
}
void func_4922062432(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922063472(depth+1);
        break;
        case 1:
            func_4922065440(depth+1);
        break;
    }
    return;
}
void func_4922061888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922065888(depth+1);
        break;
    }
    return;
}
void func_4922063088(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(10);
    switch (branch) {
        case 0:
            func_4922066384(depth+1);
        break;
        case 1:
            func_4922066512(depth+1);
        break;
        case 2:
            func_4922066640(depth+1);
        break;
        case 3:
            func_4922066800(depth+1);
        break;
        case 4:
            func_4922066928(depth+1);
        break;
        case 5:
            func_4922064288(depth+1);
        break;
        case 6:
            func_4922067504(depth+1);
        break;
        case 7:
            func_4922067632(depth+1);
        break;
        case 8:
            func_4922067760(depth+1);
        break;
        case 9:
            func_4922064224(depth+1);
        break;
    }
    return;
}
void func_4922063216(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(5);
    switch (branch) {
        case 0:
            func_4922062768(depth+1);
        break;
        case 1:
            func_4922062016(depth+1);
        break;
        case 2:
            func_4922062992(depth+1);
        break;
        case 3:
            func_4922062432(depth+1);
        break;
        case 4:
            func_4922064480(depth+1);
        break;
    }
    return;
}
void func_4922062992(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(36);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922066080(depth+1);
        break;
    }
    return;
}
void func_4922062768(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922068080(depth+1);
        break;
    }
    return;
}
void func_4922064784(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(90);
        return;
    }
    xor(52);
    switch (branch) {
        case 0:
            func_4922069808(depth+1);
        break;
        case 1:
            func_4922069936(depth+1);
        break;
        case 2:
            func_4922070064(depth+1);
        break;
        case 3:
            func_4922070224(depth+1);
        break;
        case 4:
            func_4922070352(depth+1);
        break;
        case 5:
            func_4922070544(depth+1);
        break;
        case 6:
            func_4922070672(depth+1);
        break;
        case 7:
            func_4922070800(depth+1);
        break;
        case 8:
            func_4922070928(depth+1);
        break;
        case 9:
            func_4922070480(depth+1);
        break;
        case 10:
            func_4922071248(depth+1);
        break;
        case 11:
            func_4922071376(depth+1);
        break;
        case 12:
            func_4922071504(depth+1);
        break;
        case 13:
            func_4922071632(depth+1);
        break;
        case 14:
            func_4922071760(depth+1);
        break;
        case 15:
            func_4922071888(depth+1);
        break;
        case 16:
            func_4922072016(depth+1);
        break;
        case 17:
            func_4922071056(depth+1);
        break;
        case 18:
            func_4922072400(depth+1);
        break;
        case 19:
            func_4922072528(depth+1);
        break;
        case 20:
            func_4922072656(depth+1);
        break;
        case 21:
            func_4922072784(depth+1);
        break;
        case 22:
            func_4922072912(depth+1);
        break;
        case 23:
            func_4922067056(depth+1);
        break;
        case 24:
            func_4922067184(depth+1);
        break;
        case 25:
            func_4922067312(depth+1);
        break;
        case 26:
            func_4922067440(depth+1);
        break;
        case 27:
            func_4922073040(depth+1);
        break;
        case 28:
            func_4922073168(depth+1);
        break;
        case 29:
            func_4922073296(depth+1);
        break;
        case 30:
            func_4922073424(depth+1);
        break;
        case 31:
            func_4922073552(depth+1);
        break;
        case 32:
            func_4922073680(depth+1);
        break;
        case 33:
            func_4922072144(depth+1);
        break;
        case 34:
            func_4922072272(depth+1);
        break;
        case 35:
            func_4922074320(depth+1);
        break;
        case 36:
            func_4922074448(depth+1);
        break;
        case 37:
            func_4922074576(depth+1);
        break;
        case 38:
            func_4922074704(depth+1);
        break;
        case 39:
            func_4922074832(depth+1);
        break;
        case 40:
            func_4922074960(depth+1);
        break;
        case 41:
            func_4922075088(depth+1);
        break;
        case 42:
            func_4922075216(depth+1);
        break;
        case 43:
            func_4922075344(depth+1);
        break;
        case 44:
            func_4922075472(depth+1);
        break;
        case 45:
            func_4922075600(depth+1);
        break;
        case 46:
            func_4922075728(depth+1);
        break;
        case 47:
            func_4922075856(depth+1);
        break;
        case 48:
            func_4922075984(depth+1);
        break;
        case 49:
            func_4922076112(depth+1);
        break;
        case 50:
            func_4922076240(depth+1);
        break;
        case 51:
            func_4922076368(depth+1);
        break;
    }
    return;
}
void func_4922063904(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(125);
        return;
    }
    xor(14);
    switch (branch) {
        case 0:
            func_4922065760(depth+1);
        break;
        case 1:
            func_4922065168(depth+1);
        break;
        case 2:
            func_4922068896(depth+1);
        break;
        case 3:
            func_4922069056(depth+1);
        break;
        case 4:
            func_4922069184(depth+1);
        break;
        case 5:
            func_4922069376(depth+1);
        break;
        case 6:
            func_4922066080(depth+1);
        break;
        case 7:
            func_4922069504(depth+1);
        break;
        case 8:
            func_4922068208(depth+1);
        break;
        case 9:
            func_4922068336(depth+1);
        break;
        case 10:
            func_4922069312(depth+1);
        break;
        case 11:
            func_4922076560(depth+1);
        break;
        case 12:
            func_4922076688(depth+1);
        break;
        case 13:
            func_4922076816(depth+1);
        break;
    }
    return;
}
void func_4922063344(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922068464(depth+1);
        break;
    }
    return;
}
void func_4922063472(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(57);
        return;
    }
    xor(3);
    switch (branch) {
        case 0:
            func_4922064784(depth+1);
        break;
        case 1:
            func_4922063088(depth+1);
        break;
        case 2:
            func_4922065568(depth+1);
        break;
    }
    return;
}
void func_4922063600(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922066288(depth+1);
        break;
    }
    return;
}
void func_4922063728(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922076944(depth+1);
        break;
    }
    return;
}
void func_4922064032(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922077072(depth+1);
        break;
    }
    return;
}
void func_4922062688(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922064032(depth+1);
        break;
        case 1:
            func_4922062432(depth+1);
        break;
    }
    return;
}
void func_4922062832(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922062688(depth+1);
        break;
        case 1:
            func_4922066208(depth+1);
        break;
    }
    return;
}
void func_4922064480(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922063728(depth+1);
        break;
        case 1:
            func_4922063344(depth+1);
        break;
    }
    return;
}
void func_4922064608(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(2);
    switch (branch) {
        case 0:
            func_4922061888(depth+1);
        break;
        case 1:
            func_4922062224(depth+1);
        break;
    }
    return;
}
void func_4922064912(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922077328(depth+1);
        break;
    }
    return;
}
void func_4922065040(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922045504(depth+1);
        break;
    }
    return;
}
void func_4922065568(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(34);
        return;
    }
    xor(11);
    switch (branch) {
        case 0:
            func_4922077984(depth+1);
        break;
        case 1:
            func_4922077200(depth+1);
        break;
        case 2:
            func_4922078128(depth+1);
        break;
        case 3:
            func_4922078288(depth+1);
        break;
        case 4:
            func_4922078416(depth+1);
        break;
        case 5:
            func_4922078608(depth+1);
        break;
        case 6:
            func_4922078736(depth+1);
        break;
        case 7:
            func_4922078864(depth+1);
        break;
        case 8:
            func_4922078992(depth+1);
        break;
        case 9:
            func_4922078544(depth+1);
        break;
        case 10:
            func_4922079312(depth+1);
        break;
    }
    return;
}
void func_4922065248(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    xor(1);
    switch (branch) {
        case 0:
            func_4922077616(depth+1);
        break;
    }
    return;
}
void func_4922065168(unsigned depth) {
    extend(46);
    return;
}
void func_4922065440(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        return;
    }
    func_4922065760(depth+1);
    func_4922063904(depth+1);
    return;
}
void func_4922065760(unsigned depth) {
    extend(92);
    return;
}
void func_4922065888(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(46);
        return;
    }
    func_4922064608(depth+1);
    func_4922062224(depth+1);
    return;
}
void func_4922066384(unsigned depth) {
    extend(48);
    return;
}
void func_4922066512(unsigned depth) {
    extend(49);
    return;
}
void func_4922066640(unsigned depth) {
    extend(50);
    return;
}
void func_4922066800(unsigned depth) {
    extend(51);
    return;
}
void func_4922066928(unsigned depth) {
    extend(52);
    return;
}
void func_4922064288(unsigned depth) {
    extend(53);
    return;
}
void func_4922067504(unsigned depth) {
    extend(54);
    return;
}
void func_4922067632(unsigned depth) {
    extend(55);
    return;
}
void func_4922067760(unsigned depth) {
    extend(56);
    return;
}
void func_4922064224(unsigned depth) {
    extend(57);
    return;
}
void func_4922066080(unsigned depth) {
    extend(36);
    return;
}
void func_4922068080(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(40);
        extend(46);
        extend(41);
        return;
    }
    func_4922068208(depth+1);
    func_4922045504(depth+1);
    func_4922068336(depth+1);
    return;
}
void func_4922068208(unsigned depth) {
    extend(40);
    return;
}
void func_4922068336(unsigned depth) {
    extend(41);
    return;
}
void func_4922069808(unsigned depth) {
    extend(97);
    return;
}
void func_4922069936(unsigned depth) {
    extend(98);
    return;
}
void func_4922070064(unsigned depth) {
    extend(99);
    return;
}
void func_4922070224(unsigned depth) {
    extend(100);
    return;
}
void func_4922070352(unsigned depth) {
    extend(101);
    return;
}
void func_4922070544(unsigned depth) {
    extend(102);
    return;
}
void func_4922070672(unsigned depth) {
    extend(103);
    return;
}
void func_4922070800(unsigned depth) {
    extend(104);
    return;
}
void func_4922070928(unsigned depth) {
    extend(105);
    return;
}
void func_4922070480(unsigned depth) {
    extend(106);
    return;
}
void func_4922071248(unsigned depth) {
    extend(107);
    return;
}
void func_4922071376(unsigned depth) {
    extend(108);
    return;
}
void func_4922071504(unsigned depth) {
    extend(109);
    return;
}
void func_4922071632(unsigned depth) {
    extend(110);
    return;
}
void func_4922071760(unsigned depth) {
    extend(111);
    return;
}
void func_4922071888(unsigned depth) {
    extend(112);
    return;
}
void func_4922072016(unsigned depth) {
    extend(113);
    return;
}
void func_4922071056(unsigned depth) {
    extend(114);
    return;
}
void func_4922072400(unsigned depth) {
    extend(115);
    return;
}
void func_4922072528(unsigned depth) {
    extend(116);
    return;
}
void func_4922072656(unsigned depth) {
    extend(117);
    return;
}
void func_4922072784(unsigned depth) {
    extend(118);
    return;
}
void func_4922072912(unsigned depth) {
    extend(119);
    return;
}
void func_4922067056(unsigned depth) {
    extend(120);
    return;
}
void func_4922067184(unsigned depth) {
    extend(121);
    return;
}
void func_4922067312(unsigned depth) {
    extend(122);
    return;
}
void func_4922067440(unsigned depth) {
    extend(65);
    return;
}
void func_4922073040(unsigned depth) {
    extend(66);
    return;
}
void func_4922073168(unsigned depth) {
    extend(67);
    return;
}
void func_4922073296(unsigned depth) {
    extend(68);
    return;
}
void func_4922073424(unsigned depth) {
    extend(69);
    return;
}
void func_4922073552(unsigned depth) {
    extend(70);
    return;
}
void func_4922073680(unsigned depth) {
    extend(71);
    return;
}
void func_4922072144(unsigned depth) {
    extend(72);
    return;
}
void func_4922072272(unsigned depth) {
    extend(73);
    return;
}
void func_4922074320(unsigned depth) {
    extend(74);
    return;
}
void func_4922074448(unsigned depth) {
    extend(75);
    return;
}
void func_4922074576(unsigned depth) {
    extend(76);
    return;
}
void func_4922074704(unsigned depth) {
    extend(77);
    return;
}
void func_4922074832(unsigned depth) {
    extend(78);
    return;
}
void func_4922074960(unsigned depth) {
    extend(79);
    return;
}
void func_4922075088(unsigned depth) {
    extend(80);
    return;
}
void func_4922075216(unsigned depth) {
    extend(81);
    return;
}
void func_4922075344(unsigned depth) {
    extend(82);
    return;
}
void func_4922075472(unsigned depth) {
    extend(83);
    return;
}
void func_4922075600(unsigned depth) {
    extend(84);
    return;
}
void func_4922075728(unsigned depth) {
    extend(85);
    return;
}
void func_4922075856(unsigned depth) {
    extend(86);
    return;
}
void func_4922075984(unsigned depth) {
    extend(87);
    return;
}
void func_4922076112(unsigned depth) {
    extend(88);
    return;
}
void func_4922076240(unsigned depth) {
    extend(89);
    return;
}
void func_4922076368(unsigned depth) {
    extend(90);
    return;
}
void func_4922068896(unsigned depth) {
    extend(42);
    return;
}
void func_4922069056(unsigned depth) {
    extend(43);
    return;
}
void func_4922069184(unsigned depth) {
    extend(63);
    return;
}
void func_4922069376(unsigned depth) {
    extend(94);
    return;
}
void func_4922069504(unsigned depth) {
    extend(124);
    return;
}
void func_4922069312(unsigned depth) {
    extend(91);
    return;
}
void func_4922076560(unsigned depth) {
    extend(93);
    return;
}
void func_4922076688(unsigned depth) {
    extend(123);
    return;
}
void func_4922076816(unsigned depth) {
    extend(125);
    return;
}
void func_4922068464(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(94);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4922068592(depth+1);
    func_4922062832(depth+1);
    func_4922076560(depth+1);
    return;
}
void func_4922068592(unsigned depth) {
    extend(91);
    extend(94);
    return;
}
void func_4922066288(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(43);
        return;
    }
    func_4922063216(depth+1);
    func_4922069056(depth+1);
    return;
}
void func_4922076944(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(91);
        extend(92);
        extend(125);
        extend(93);
        return;
    }
    func_4922069312(depth+1);
    func_4922062832(depth+1);
    func_4922076560(depth+1);
    return;
}
void func_4922077072(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(45);
        extend(92);
        extend(125);
        return;
    }
    func_4922062432(depth+1);
    func_4922077200(depth+1);
    func_4922062432(depth+1);
    return;
}
void func_4922077200(unsigned depth) {
    extend(45);
    return;
}
void func_4922066208(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(92);
        extend(125);
        extend(92);
        extend(125);
        return;
    }
    func_4922062688(depth+1);
    func_4922062832(depth+1);
    return;
}
void func_4922077328(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(42);
        return;
    }
    func_4922063216(depth+1);
    func_4922068896(depth+1);
    return;
}
void func_4922077984(unsigned depth) {
    extend(95);
    return;
}
void func_4922078128(unsigned depth) {
    extend(64);
    return;
}
void func_4922078288(unsigned depth) {
    extend(35);
    return;
}
void func_4922078416(unsigned depth) {
    extend(37);
    return;
}
void func_4922078608(unsigned depth) {
    extend(38);
    return;
}
void func_4922078736(unsigned depth) {
    extend(61);
    return;
}
void func_4922078864(unsigned depth) {
    extend(126);
    return;
}
void func_4922078992(unsigned depth) {
    extend(96);
    return;
}
void func_4922078544(unsigned depth) {
    extend(39);
    return;
}
void func_4922079312(unsigned depth) {
    extend(34);
    return;
}
void func_4922077616(unsigned depth) {
    if(depth > MAX_DEPTH) {
        extend(46);
        extend(124);
        extend(46);
        return;
    }
    func_4922045504(depth+1);
    func_4922069504(depth+1);
    func_4922064608(depth+1);
    return;
}
int main(void) {
    static unsigned count = 10;
    seed = time(NULL);
    func_4922065040(1);
    FILE *fp = fopen("output.txt", "w");
    fwrite(buffer.data, sizeof(char), buffer.top, fp);
    fclose(fp);
    return 0;
}
