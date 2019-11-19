#ifndef _B_H_
#define _B_H_

class A;

class B {
    private:
        A *a_p;

    public:
        B(A *a);
        void hoge();
};

#endif