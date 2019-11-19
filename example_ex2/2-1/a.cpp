#include "a.h"
#include "b.h"
#include <iostream>

A::A() {
    b_p = new B(this); 
    // thisで渡されるのは生成されたAオブジェクトのポインタ
}

void A::foo() {
    std::cout << "foo" << std::endl;
}

void A::bar() {
    b_p->hoge();
}