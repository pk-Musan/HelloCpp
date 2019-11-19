#include <iostream>

void swap(int &, int &);

int main() {
    int a = 1, b = 2;

    std::cout
        << "a = " << a << ", b = " << b
        << std::endl;

    swap(a, b);

    std::cout
        << "a = " << a << ", b = " << b
        << std::endl;

    return 0;
}

void swap(int &a, int &b) {
    std::cout << "&a = " << &a << std::endl;
    std::cout << "&b = " << &b << std::endl;
    int tmp = a;
    std::cout << "&tmp = " << &tmp << std::endl;
    a = b;
    std::cout << "&a = " << &a << std::endl;
    b = tmp;
    std::cout << "&b = " << &b << std::endl;
}