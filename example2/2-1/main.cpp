#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
    Sample sample_obj;
    int num;

    cout << "整数を入力：" << endl;
    cin >> num;

    sample_obj.set(num);
    cout << sample_obj.get() << endl;

    return 0;
}

/*
コンパイル時は，
 g++ -c main.cpp -o main.o
で，オブジェクトファイル main.o を生成し，
ヘッダファイルの中身を実装したファイルについても
 g++ -c sample.cpp -o sample.o
のようにオブジェクトファイル sample.o を生成する

最後に
 g++ main.o sample.o
のようにプログラムで使用するすべてのオブジェクトファイルを一括でコンパイルする？
*/