#include <iostream>

int main() {
    int a = 7;
    int &n = a; 
    // nをint型aへの参照として定義
    // int &n; n = a; とするとコンパイルエラーになる
    // 宣言時に定義する

    std::cout << "a = " << a << std::endl;
    n += 3;
    std::cout << "a = " << a << std::endl;
}