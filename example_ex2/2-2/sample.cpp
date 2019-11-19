#include "sample.h"

Sample::Sample() {
    m_str = "";
}

void Sample::setStr(const string str) {
    m_str = str;
    // str = ""; これはconstで定義された引数を変更することになるのでコンパイルエラー
}

string Sample::getStr() const {
    // m_str = ""; constで定義された返り値を変更することになるのでコンパイルエラー
    return m_str;
}