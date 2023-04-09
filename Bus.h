#ifndef BUS_H
#define BUS_H
#include <string>
#include <ctime>

class Bus: public Vehicle{
    public:
        Bus(int _ID);
        int getParkingDuration();  
};
#endif