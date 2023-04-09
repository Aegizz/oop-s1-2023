#ifndef BUS_H
#define BUS_H
#include <string>
#include <ctime>

class Bus: public Vehicle{
    public:
        Bus(std::time_t _timeOfEntry, int _ID);
        Bus(int _ID);
        int getParkingDuration();  
};
#endif