#include "car.h"
#include "ambulance.h"

int main() {
    Car c;
    c.supply(10);
    c.move();
    c.move();

    Car *c2 = new Car();
    c2 -> supply(10);
    c2 -> move();
    delete c2;

    Ambulance ac;
    ac.supply(10);
    ac.move();
    ac.savePeople();

    return 0;
}