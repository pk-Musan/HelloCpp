#include <iostream>
#include <list>

int main() {
    std::list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_front(3);

    //std::list<int>::iterator itr = li.begin();
    auto itr = li.begin();
    li.insert(itr, 4);
    itr++;
    li.insert(itr, 10);
    li.insert(itr, 20);

    for (itr=li.begin(); itr!=li.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}