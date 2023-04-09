#include "Vehicle.h"
#include "Bus.h"
#include <ctime>

Bus::Bus(int _ID)
: Vehicle{0, _ID}
{};

int Bus::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.75;
};