#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class Ambulance : public Car {
    private:
        int m_number;

    public:
        Ambulance();
        virtual ~Ambulance();
        void savePeople();
};

#endif