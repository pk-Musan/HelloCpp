#include "car.h"
#include <iostream>

Car::Car() : m_fuel(0), m_migration(0) {
    std::cout
        << "Carオブジェクト生成"
        << std::endl;
}

Car::~Car() {
    std::cout
        << "Carオブジェクト破棄"
        << std::endl;
}

void Car::move() {
    if (m_fuel >= 0) {
        m_migration++;
        m_fuel--;
    }

    std::cout
        << "移動距離"
        << m_migration
        << std::endl;
    
    std::cout
        << "燃料"
        << m_fuel
        << std::endl;
}

void Car::supply(int fuel) {
    if (fuel > 0) {
        m_fuel += fuel;
    }

    std::cout
        << "燃料"
        << m_fuel
        << std::endl;
}