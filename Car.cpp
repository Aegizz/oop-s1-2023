#include "Vehicle.h"
#include "Car.h"
#include <ctime>

Car::Car(int _ID)
: Vehicle{time(NULL), _ID}
{};

int Car::getParkingDuration(){
    return (time(NULL) - getTimeOfEntry())*0.9;
};