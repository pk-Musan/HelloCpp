#include <iostream>
#include <string>

using std::string;

template <typename T>
T m_max(T x, T y) {
    return x > y ? x : y;
}

int main() {
    std::cout << m_max<int>(1, 2) << std::endl;
    std::cout << m_max<double>(1.75, 3.12) << std::endl;

    string s1 = "aiu" , s2 = "eo";
    std::cout << m_max<string>(s1, s2) << std::endl;

    return 0;
}