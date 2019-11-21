#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words;
    std::string word;
    int max_length, min_length;

    while(true) {
        std::cout << "文字列を入力：";
        getline(std::cin, word);

        if (word.empty()) break;

        words.push_back(word);

        if (words.size() == 1) {
            max_length = words[0].length();
            min_length = words[0].length();
        } else {
            if (max_length < words.back().length()) max_length = words.back().length();
            if (min_length > words.back().length()) min_length = words.back().length();
        }
    }
    std::cout << std::endl;

    std::vector<std::string> longest_words;
    std::vector<std::string> shortest_words;
    for (std::string w : words) {
        if (w.length() == max_length) longest_words.push_back(w);
        if (w.length() == min_length) shortest_words.push_back(w);
    }
    
    std::cout << "最長の単語：";
    for (std::string w : longest_words) {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    std::cout << "最短の単語：";
    for (std::string w : shortest_words) {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}