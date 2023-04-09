#ifndef CAR_H
#define CAR_H
#include <string>
#include <ctime>

class Car: public Vehicle{
    public:
        Car(int _ID);
        int getParkingDuration();

};
#endif