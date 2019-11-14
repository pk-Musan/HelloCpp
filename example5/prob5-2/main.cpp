#include "object.h"
#include <iostream>

using namespace std;

void showObjectNum() {
    cout
        << "オブジェクトの数"
        << Object::getObjectNum()
        << endl;
}

int main() {
    Object *o1, *o2, *o3;

    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    showObjectNum();
    delete o3;
    showObjectNum();
    delete o2;
    delete o1;
    
    return 0;
}