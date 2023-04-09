#include "Vehicle.h"
#include "Motorbike.h"
#include <string>
#include <ctime>


Motorbike::Motorbike(int _ID)
: Vehicle{0, _ID}
{};

int Motorbike::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.85;
};