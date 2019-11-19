#include "bar.h"
#include "foo.h"

int main() {
    Foo *foo_p;
    Bar *bar_p;

    foo_p = new Foo();
    bar_p = new Bar();

    bar_p->func1(foo_p);
    bar_p->func2();
    foo_p->fuga(bar_p);
    foo_p->hoge();

    delete foo_p, bar_p;
    return 0;
}
