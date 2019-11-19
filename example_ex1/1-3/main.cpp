#include <iostream>

struct data {
    int n;
    double d;
};

int main() {
    data dt1;
    data dt2;

    dt1.n = 100;
    dt1.d = 12.34;
    dt2.n = 50;
    dt2.d = 23.45;

    std::cout
        << "dt1.n = " << dt1.n << std::endl
        << "dt1.d = " << dt1.d << std::endl;
    
    std::cout
        << "dt2.n = " << dt2.n << std::endl
        << "dt2.d = " << dt2.d << std::endl;

    return 0;
}