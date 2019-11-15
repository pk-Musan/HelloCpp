#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "airplane.h"

class Fighter : public Airplane {
    public:
        virtual void fly();
        void fight();
};

#endif

/*
親クラスのメソッドを書き換える？場合は親クラス，子クラスともに宣言前に virtual を加える
*/