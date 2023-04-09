#include "Vehicle.h"
#include "Bus.h"
#include <ctime>

Bus::Bus(int _ID)
: Vehicle{time(NULL), _ID}
{};

int Bus::getParkingDuration(){
    return (time(NULL) - getTimeOfEntry())*0.75;
};