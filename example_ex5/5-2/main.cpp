#include <iostream>
#include <string>
#include <set>

template<typename T, std::size_t S>
std::size_t array_length(const T (&)[S]) {
    return S;
}

int main() {
    std::set<std::string> names;

    names.insert("Tom");
    names.insert("Mike");
    names.insert("Mike");
    names.insert("Bob");

    std::set<std::string>::iterator itr = names.begin();
    for (; itr != names.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    std::string check_names[] = {"Bob", "Steve"};
    for (int i = 0; i < array_length(check_names); i++) {
        itr = names.find(check_names[i]);

        if (itr == names.end()) {
            std::cout << check_names[i] << " is not in a set." << std::endl;
        } else {
            std::cout << check_names[i] << " is in a set." << std::endl;
        }
    }

    return 0;
}