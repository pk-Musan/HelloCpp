#include <iostream>
#include <string>
#include "collection.h"

using std::string;

int main() {
    //int array[] = { 1, 2, 3, 4, 5 };
    //double array[] = {1.1, 2.2, 3.3, 2.18, 0.5};
    string array[] = {"ai", "a", "ue", "ieo", "aiu"};
    std::cout << array << std::endl;
    //Collection<int> *c = new Collection<int>(array, 5);
    //Collection<double> *c = new Collection<double>(array, 5);
    Collection<string> *c = new Collection<string>(array, 5);
    c->showArray();

    std::cout << "最大値：" << c->getMax() << std::endl;
    std::cout << "最小値：" << c->getMin() << std::endl;

    delete c;
    return 0;
}