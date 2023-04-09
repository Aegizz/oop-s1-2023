#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include <iostream>
#include <ctime>
#include "ParkingLot.h"
using namespace std;
int main(){
    ParkingLot Lot = ParkingLot(10);
    int nCars;
    int nBuses;
    int nMotorbikes;
    cout << "How many cars would you like to enter? \n";
    cin >> nCars;
    cout << "How many buses would you like to enter? \n";
    cin >> nBuses;
    cout << "How many motorbikes would you like to enter? \n";
    cin >> nMotorbikes;
    int sumVehicles = nCars + nBuses + nMotorbikes;
    Vehicle* vehicles[sumVehicles];
    int IDcount;

    for (int i =0; i < nCars; i++){
        vehicles[i] = new Car(IDcount++);
    }
    for (int i =nCars; i < nCars + nBuses; i++){
        vehicles[i] = new Bus(IDcount++);
    }
    for (int i =nCars+nBuses; i < nCars+nBuses+nMotorbikes; i++){
        vehicles[i] = new Motorbike(IDcount++);
    }
    int removeVecID;
    cout << "What vehicle ID would you like to remove? ";
    cin >> removeVecID;
    unparkVehicle(removeVecID);
}


