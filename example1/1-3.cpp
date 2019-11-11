#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    t = "入力された文字列：";
    cout << "文字列を入力してください：";
    cin >> s;
    cout << t + s + "!" + "!" << endl;
    return 0;
}

/*
stringをincludeすれば文字列を+演算子でつなげることが可能
*/