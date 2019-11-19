#include "foo.h"
#include "bar.h"

#include <iostream>

void Foo::hoge() {
    std::cout << "Foo::hoge()" << std::endl;
}

void Foo::fuga(Bar *b) {
    std::cout << "Foo::fuga()" << std::endl;
    b->func2();
}