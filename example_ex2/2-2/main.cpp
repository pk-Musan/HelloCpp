#include "sample.h"
#include <iostream>

int main() {
    Sample s;

    std::cout << "定数：" << s.m_cst << std::endl;

    s.setStr("ABC");

    std::cout << s.getStr() << std::endl;

    return 0;
}