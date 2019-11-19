#include "sample.h"

int main() {
    Sample *s1_p, *s2_p;

    s1_p = new Sample(1);
    s2_p = new Sample();

    delete s1_p;
    delete s2_p;

    return 0;
}