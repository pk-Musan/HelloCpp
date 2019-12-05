#include "flag.h"
#include <iostream>

enum FlagList{
    FLAG0 = (1 << 0),
    FLAG1 = (1 << 1),
    FLAG2 = (1 << 2),
    FLAG3 = (1 << 3),
    FLAG4 = (1 << 4),
    FLAG5 = (1 << 5),
    FLAG6 = (1 << 6),
    FLAG7 = (1 << 7),
};

int main() {
    Flag flag;
    //unsigned char m = (1 << 7);
    //printf("%hhu", m);
    //std::cout << m << std::endl;

    if (flag.check(FLAG0 | FLAG1)) flag.set(FLAG2);
    flag.set(FLAG3);
    if (flag.check(FLAG3)) flag.set(FLAG6 | FLAG7);
    printf("%hhu\n", flag.get());

    flag.reset(FLAG3 | FLAG7);
    printf("%hhu\n", flag.get());

    return 0;
}