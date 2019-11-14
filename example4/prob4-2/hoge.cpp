#include "hoge.h"
#include <iostream>

Hoge::Hoge() {
    std::cout
        << "コンストラクタ"
        << std::endl;
}

Hoge::~Hoge() {
    std::cout
        << "デストラクタ"
        << std::endl;
}

void Hoge::foo() {
    std::cout
        << "foo"
        << std::endl;
}