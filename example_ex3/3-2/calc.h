#ifndef _CALC_H_
#define _CALC_H_

template<typename T> class Calc {
    private:
        T m_n1;
        T m_n2;

    public:
        inline void set(const T n1, const T n2) {
            m_n1 = n1; m_n2 = n2;
        };
        inline T add() const {
            return m_n1 + m_n2;
        }
};

#endif

/*
    
    ・テンプレートクラスについてはヘッダファイルで実装を行う
    
    ・テンプレートにかかわらずinline関数も同様にヘッダファイル内で実装を行う

    ・inline関数で宣言されたものは処理の該当箇所に直接埋め込まれるため，関数呼び出しなどのオーバーヘッドが少なくなり，処理速度が向上することがある．
    ・しかし，その分ビルド後のソースコードが大きくなるので頻繁に使わるうえに，関数の処理が長いようなものではかえってデメリットになることも

    ・setterやgetterのようなオーバーヘッドが少なく，頻繁に使用される関数をconstなどと併せてinline関数として定義するとよい

    ・複数のtemplate宣言も可能
        template<typename T, typename S>
        void add(T x, S y) { ~ }
*/