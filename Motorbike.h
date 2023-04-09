#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string>
#include <ctime>

class Motorbike: public Vehicle{
    public:
        Motorbike(std::time_t _timeOfEntry, int _ID);
        Motorbike(int _ID);
        int getParkingDuration();
};
#endif