#include <iostream>
#include "number.h"

int main() {
    Number *pN;
    pN = new Number();
    pN -> setNumbers(1, 2);

    std::cout
        << pN -> getAdd()
        << std::endl;

    delete pN;

    return 0;
}