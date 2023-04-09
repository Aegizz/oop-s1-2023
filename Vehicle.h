#ifndef VEHICLE_H
#define VEHICLE_H
#include "Vehicle.h"

#include <string>
#include <ctime>


class Vehicle{
    private:
        std::time_t timeOfEntry;
        int ID;
    public:
        Vehicle(std::time_t _timeOfEntry, int _ID);
        int getID();
        time_t getParkingDuration();
};



#endif