#ifndef CAR_H
#define CAR_H
#include <string>
#include <ctime>

class Car: public Vehicle{
    public:
        Car(std::time_t _timeOfEntry, int _ID);
        Car(int _ID);
        int getParkingDuration();

};
#endif