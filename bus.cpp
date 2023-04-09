#include "vehicle.h"
#include "bus.h"
#include <ctime>
Bus::Bus(std::time_t _timeOfEntry, int _ID)
: Vehicle{_timeOfEntry, _ID}
{};
Bus::Bus(int _ID)
: Vehicle{0, _ID}
{};

int Bus::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.75;
};