#include "Vehicle.h"
#include <ctime>


Vehicle::Vehicle(std::time_t _timeOfEntry, int _ID){
    timeOfEntry = _timeOfEntry;
    ID = _ID;
};
std::time_t Vehicle::getParkingDuration(){
    return timeOfEntry;
}
int Vehicle::getID(){
    return ID;
};

