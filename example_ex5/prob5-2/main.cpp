#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> numbers;

    numbers["0"] = "〇";
    numbers["1"] = "一";
    numbers["2"] = "二";
    numbers["3"] = "三";
    numbers["4"] = "四";
    numbers["5"] = "五";
    numbers["6"] = "六";
    numbers["7"] = "七";
    numbers["8"] = "八";
    numbers["9"] = "九";

    int num = 0;
    while (num <= 0) {
        std::cout << "正の整数を入力してください：";
        std::cin >> num;
    }
    std::cout << std::endl;

    std::string input_num = std::to_string(num);
    //std::cout << input_num.substr(0) << std::endl;

    int comma = input_num.size() % 3;
    std::cout << "変換結果：";
    for (int i = 0; i < input_num.size(); i++) {
        if (i != 0 && i % 3 == comma) std::cout << ",";
        std::cout << numbers[input_num.substr(i, 1)];
    }
    std::cout << std::endl;
}