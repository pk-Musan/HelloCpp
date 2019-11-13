#include "rat.h"
#include <iostream>

int Rat::m_count = 0;

Rat::Rat() : m_id(0) {
    m_id = m_count;
    m_count++;
}

Rat::~Rat() {
    std::cout
        << "ネズミ："
        << m_id
        << "消去"
        << std::endl;
    m_count--;
}

void Rat::showNum() {
    std::cout
        << "現在のネズミの数は，"
        << m_count
        << "匹です"
        << std::endl;
}

void Rat::squeak() {
    std::cout
        << m_id
        << "："
        << "チューチュー"
        << std::endl;
}