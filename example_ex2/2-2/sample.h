#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

using namespace std;

class Sample {
    public:
        static const int m_cst = 100;
        // constをつければヘッダでも定数の定義が可能

    private:
        string m_str;

    public:
        Sample();
        void setStr(const string str);
        string getStr() const;
};

#endif