#include <iostream>

// stdっていう名前空間を使いますよ的な宣言
// 名前空間はクラス？とか関数とか変数の名前が他のものと被らないように管理しているもの？
using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}

/*
// こっちでもいい
// この場合using ~ の部分は必要なし
int main() {
    std::cout << "Hello World" << std::endl;
    return 0;
}
*/