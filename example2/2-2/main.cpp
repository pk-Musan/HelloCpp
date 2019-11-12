#include <iostream>
#include "../2-1/sample.h"

using namespace std;

int main()
{
    Sample obj1, obj2;

    obj1.set(1);
    obj2.set(2);

    cout << obj1.get() << endl;
    cout << obj2.get() << endl;

    return 0;    
}