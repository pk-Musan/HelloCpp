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

    int max = numbers[0], min = numbers[0];
    for (int n : numbers) {
        if (max < n) max = n;
        if (min > n) min = n;
    }
    std::cout << "最大値：" << max << std::endl;
    std::cout << "最小値：" << min << std::endl;

    return 0;
}