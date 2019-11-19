#include <iostream>

void ref(int &);
void print(int);

int main() {
    int n1 = 5;
    int *n2 = new int(6);

    print(n1);
    print(*n2);

    ref(n1);
    ref(*n2);

    print(n1);
    print(*n2);

    delete n2;
    return 0; 
}

void ref(int &n) {
    n += 1;
}

void print(int n) {
    std::cout << "n = " << n << std::endl;
}

/*
    ポインタ渡しと参照渡しの違い

    関数定義
        ポインタ渡し：func(int *a) {}
        参照渡し：  　func(int &a) {}

    関数呼び出し
        ポインタ渡し：
            func(&a);   a：  int型変数
            func(a_p);  a_p：int型ポインタ
        参照渡し：
            func(a);    a：  int型変数
            func(*a_p); a_p：int型ポインタ
*/