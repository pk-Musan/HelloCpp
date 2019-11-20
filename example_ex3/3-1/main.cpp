#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y) {
    return x + y;
}

int main() {
    cout << add<int>(4, 3) << endl;
    cout << add<string>("ABC", "DEF") << endl;

    return 0;
}