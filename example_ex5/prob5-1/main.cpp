#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dictionary;

    dictionary["cat"] =  "猫";
    dictionary["dog"] = "犬";
    dictionary["bird"] =  "鳥";
    dictionary["tiger"] = "虎";

    std::string animal_name;
    while (true) {
        std::cout << "英語で動物の名前を入力してください：";
        getline(std::cin, animal_name);

        if (animal_name.empty()) break;

        auto itr = dictionary.find(animal_name);
        if (itr == dictionary.end()) {
            std::cout << "対応するデータは登録されていません。" << std::endl;
        } else {
            std::cout << "「" << itr->second << "」です。" << std::endl;
        }
    }

    return 0;
}