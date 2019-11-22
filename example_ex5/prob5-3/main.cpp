#include <iostream>
#include <random>
#include <set>

int main() {
    std::set<int> numbers;
    std::mt19937 mt{ std::random_device{}() };
    std::uniform_int_distribution<int> dist(1, 10);

    std::cout << "乱数：";
    int num;
    for (int i = 0; i < 10; i++) {
        num = dist(mt);
        std::cout << num << " ";
        numbers.insert(num);
    }
    std::cout << std::endl;

    std::cout << "出現した数値：";
    //auto itr = numbers.begin();
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}