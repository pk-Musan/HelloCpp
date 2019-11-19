#include <iostream>

bool judge(int);

int main() {
    int n;

    std::cout << "整数を入力：";
    std::cin >> n;

    if (judge(n)) std::cout << "自然数です" << std::endl;
    else std::cout << "負の数です" << std::endl;

    return 0;
}

bool judge(int n) {
    if (n >= 0) return true;
    else return false;
}