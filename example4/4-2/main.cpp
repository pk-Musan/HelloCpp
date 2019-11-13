#include "../4-1/car.h"
#include <iostream>

int main() {
    Car* car_pointer[3] = {0, 0, 0};
    for (int i=0; i<3; i++) {
        // car_pointer[i] = new Car(); と同じ
        *(car_pointer+i) = new Car();
        car_pointer[i] -> supply(10);
        car_pointer[i] -> move();
        delete car_pointer[i];
    }


    Car* car_pointer2 = 0;
    car_pointer2 = new Car[3];
    for (int i=0; i<3; i++) {
        car_pointer2[i].supply(10);
        (car_pointer2+i) -> supply(10);
        car_pointer2[i].move();
    }
    delete[] car_pointer2;

    return 0;
}

/*
前者は任意のタイミングでCarオブジェクトを生成するのでオブジェクトを破棄する際は1つ1つ破棄する必要がある
    Car_1 | Car_2 | Car_3
部屋を分けられてる的なイメージ？

後者は始めにまとめて3つ分のCarオブジェクト配列を生成しており，破棄する際はまとめて破棄する
    | Car_1, Car_2, Car3 |
区別はつくけど部屋は一緒的なイメージ？
*/