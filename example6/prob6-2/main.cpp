#include "newcalc.h"
#include <iostream>

int main() {
    NewCalc n;

    n.setNumber1(10);
    //n.setNumber2(2);

    std::cout
        << n.getNumber1()
        << " + "
        << n.getNumber2()
        << " = "
        << n.add()
        << std::endl;

    std::cout
        << n.getNumber1()
        << " - "
        << n.getNumber2()
        << " = "
        << n.sub()
        << std::endl;

    std::cout
        << n.getNumber1()
        << " * "
        << n.getNumber2()
        << " = "
        << n.mul()
        << std::endl;

    std::cout
        << n.getNumber1()
        << " * "
        << n.getNumber2()
        << " = "
        << n.div()
        << std::endl;

    return 0;
}