#include <iostream>
#include <string>
#include <vector>
#include <list>

int main() {
    std::vector<std::string> v;
    std::list<std::string> l;

    v.push_back("HELLO");
    v.push_back("WORLD");
    
    l.push_back("hello");
    l.push_back("world");
    l.push_back("!");
    l.push_back("hello");

    auto itr1 = v.begin();
    auto itr2 = l.begin();

    for (; itr1 != v.end(); itr1++) {
        std::cout << *itr1 << std::endl;
    }

    //l.remove(*itr2);
    //itr2++;
    l.remove("hello");
    std::cout << *itr2 << std::endl; 
    //itr2 = l.erase(itr2);
    for (itr2=l.begin(); itr2 != l.end(); itr2++) {
        std::cout << *itr2 << std::endl;
    }
}