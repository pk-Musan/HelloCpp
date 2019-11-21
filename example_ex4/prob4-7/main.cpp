#include <iostream>
#include <string>
#include <list>

bool checkWordLength(std::string word) {
    return word.length() >= 5;
}

int main() {
    std::list<std::string> words;
    std::string word;

    while (true) {
        std::cout << "文字列を入力：";
        getline(std::cin, word);

        if (word.empty()) break;
        words.push_back(word);
    }
    std::cout << std::endl;

    words.remove_if(checkWordLength);
    std::cout << "5文字未満の単語：";
    for (std::string w : words) {
        std::cout << w << " ";
    }
    std::cout << std::endl;
}