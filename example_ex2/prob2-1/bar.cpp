#include "bar.h"
#include "foo.h"

#include <iostream>

void Bar::func1(Foo *f) {
    f->hoge();
}

void Bar::func2() {
    std::cout << "Bar::func2" << std::endl;
}