#include "sup.h"
#include "sub.h"

int main() {
    Sup *sup_p;
    Sub *sub_p;

    sup_p = new Sup();
    sub_p = new Sub();

    sup_p->func();
    sub_p->func();

    delete sup_p, sub_p;
    return 0;
}