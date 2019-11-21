#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    int num;

    while (true) {
        std::cout << "正の整数を入力：";
        std::cin >> num;

        if (num == -1) break;
        else if (num > 0) numbers.push_back(num);
    }
    std::cout << std::endl;

    numbers.remove(2);
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}