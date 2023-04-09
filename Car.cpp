#include "Vehicle.h"
#include "Car.h"
#include <ctime>
Car::Car(std::time_t _timeOfEntry, int _ID)
: Vehicle{_timeOfEntry, _ID}
{};
Car::Car(int _ID)
: Vehicle{0, _ID}
{};

int Car::getParkingDuration(){
    return Vehicle::getParkingDuration()*0.9;
};