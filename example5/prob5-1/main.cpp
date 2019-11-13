#include "function.h"
#include <iostream>

int main() {
    int m = 3, n = 1;
    
    std::cout 
        << m << "と" << n
        << "のうち，最大のものは"
        << Function::max(m, n)
        << std::endl;
    
    std::cout
        << m << "と" << n
        << "のうち，最小のものは"
        << Function::min(m, n)
        << std::endl;
    
    return 0;
}