#include <iostream>
#include <vector>

int main() {
    std::vector<int> odd;
    std::vector<int> even;
    int n;

    while (true) {
        std::cout << "正の整数を入力：";
        std::cin >> n;

        if (n == -1) break;
        else if (n > 0 && n%2 == 0) even.push_back(n);
        else if (n > 0 && n%2 == 1) odd.push_back(n); 
    }
    std::cout << std::endl;

    std::cout << "偶数：";
    for (int n : even) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "奇数：";
    for (int n : odd) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}