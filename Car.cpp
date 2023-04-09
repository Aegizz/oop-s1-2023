#include "Vehicle.h"
#include "Car.h"
#include <ctime>

Car::Car(int _ID)
: Vehicle{0, _ID}
{};

int Car::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.9;
};