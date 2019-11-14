#include <iostream>

int main() {
    int *num = new int[4];
    int *num2[4];

    for (int i=0; i<4; i++) {
        num[i] = i;
        num2[i] = new int(i);
    }

    for (int i=0; i<4; i++) {
        std::cout
            << "num["
            << i
            << "] = "
            << num2[i] // num[i]
            << " ";
    }

    for (int i=0; i<4; i++) {
        std::cout
            << "num["
            << i
            << "] = "
            << *num2[i] // num
            << " ";

        delete num2[i];
    }

    std::cout << std::endl;

    delete [] num;
    return 0;
}