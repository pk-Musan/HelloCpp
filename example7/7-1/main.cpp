#include <iostream>
#include "calc.h"

int main() {
    Calc *c1_p, *c2_p;

    c1_p = new Calc();
    c2_p = new Calc(1, 2);

    std::cout
        << 3 << "+" << 4
        << "=" << c1_p->add(3, 4)
        << std::endl;

    std::cout
        << c2_p->getA() << "+" << c2_p->getB()
        << "=" << c2_p->add()
        << std::endl;

    delete c1_p;
    delete c2_p;
}