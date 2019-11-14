#include "hoge.h"

int main() {
    Hoge *pH;
    pH = new Hoge();
    pH -> foo();
    delete pH;

    return 0;
}