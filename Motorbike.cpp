#include "Vehicle.h"
#include "Motorbike.h"
#include <string>
#include <ctime>


Motorbike::Motorbike(int _ID)
: Vehicle{time(NULL), _ID}
{};

int Motorbike::getParkingDuration(){
    return (time(NULL) - getTimeOfEntry())*0.85;
};