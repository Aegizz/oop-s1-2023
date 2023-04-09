#include "vehicle.h"
#include "motorbike.h"
#include <string>
#include <ctime>

Motorbike::Motorbike(std::time_t _timeOfEntry, int _ID)
: Vehicle{_timeOfEntry, _ID}
{};
Motorbike::Motorbike(int _ID)
: Vehicle{0, _ID}
{};

int Motorbike::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.85;
};