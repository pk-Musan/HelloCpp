#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int n;

    while(true) {
        std::cout << "正の整数を入力：";
        std::cin >> n;

        if (n == -1 && !numbers.empty()) break;
        if (n > 0) numbers.push_back(n);
    }
    std::cout << std::endl;

    int count;
    for (int i=0; i<10; i++) {
        count = 0;
        std::cout << "一の位が" << i << "：";
        for (int n : numbers) {
            if (n % 10 == i) {
                std::cout << n << " ";
                count++;
            }
        }
        if (count == 0) {
            std::cout << "なし";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}