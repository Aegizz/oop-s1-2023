#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
ParkingLot::ParkingLot(int _capacity){
    capacity = _capacity
    count = 0;
    vehicles = new Vehicle[capacity];
};
int ParkingLot::getCount(){
    return count;
};
void ParkingLot::parkVehicle(Vehicle* Mobile){
    if (count + 1 > capacity){
        vehicles[count++]= &Mobile;
    } else {
        cout << "The lot is full";
    }
};
void ParkingLot::unparkVehicle(int ID){
    bool unparked = false;
    int i = 0;
    while (unparked == false && i < capacity){
        if (vehicles[i]->getID() == ID){
            vehicles[i] == NULL;
        }
        for (int j = i; j < capacity; j++){
            vehicle[j]=vehicle[j+1]
        }
    }
}