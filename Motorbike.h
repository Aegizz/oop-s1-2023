#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string>
#include <ctime>

class Motorbike: public Vehicle{
    public:
        Motorbike(int _ID);
        int getParkingDuration();
};
#endif