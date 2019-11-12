#ifndef _CAR_H_
#define _CAR_H_

class Car {
    private:
        int m_fuel;
        int m_migration;
    
    public:
        Car();
        ~Car();
        void move();
        void supply(int fuel);
};

#endif