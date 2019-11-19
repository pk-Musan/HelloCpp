#ifndef _A_H_
#define _A_H_

class B;
// 相互参照するときはincludeでBクラスのヘッダを指定せず，クラスBへの参照を用意しておく

class A {
    private:
        B *b_p;
    
    public:
        A();
        void foo();
        void bar();
};

#endif