#include "sample.h"
#include <iostream>

int main()
{
    Sample s;
    s.setNum(4);
    std::cout
        << s.getNum()
        << std::endl;

    return 0;
}