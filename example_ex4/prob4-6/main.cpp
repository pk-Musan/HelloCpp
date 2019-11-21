#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    auto itr = numbers.begin();
    //std::list<int>::iterator itr = numbers.begin();
    int num;

    while (true) {
        std::cout << "正の整数を入力：";
        std::cin >> num;
        std::cout << std::endl;

        if (num == -1) break;
        else if (num > 0) {
            if (numbers.size() == 0) numbers.push_back(num);
            else {
                for (itr = numbers.begin(); itr != numbers.end(); itr++) {
                    if (num <= *itr) {
                        numbers.insert(itr, num);
                        break;
                    }
                }
                if (itr == numbers.end()) numbers.push_back(num);
            }
        }

        std::cout << "入力された数：";
        for (int n : numbers) {
            std::cout << n << " ";
        }
        std::cout << std::endl << std::endl;
    }

    return 0;
}