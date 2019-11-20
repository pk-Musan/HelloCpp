#include <iostream>
#include <string>

#include "calc.h"

using namespace std;

int main() {
    Calc<int> c1;
    Calc<string> c2;

    c1.set(1, 2);
    c2.set("ABC", "DEF");

    cout << c1.add() << endl << c2.add() << endl;

    return 0;
}