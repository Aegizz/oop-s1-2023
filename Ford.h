#ifndef FORD_H
#define FORD_H
#include "Car.h"

class Ford:public Car{
    private:
        int badgeNumber;
        float litresOfFuel;
    public:
        Ford();
        Ford(int badgenumber, int price);
        void refuel(int litres);
        void drive(int kms);
        void set_badgeNumber(int number);
        void set_litresOfFuel(float litres);
        int get_badgeNumber();
        float get_litresOfFuel();
};
#endif