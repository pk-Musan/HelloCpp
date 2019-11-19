#include "b.h"
#include "a.h"
#include <iostream>

B::B(A *a) {
    a_p = a;
}

void B::hoge() {
    std::cout << "bar" << std::endl;
    a_p->foo();
}