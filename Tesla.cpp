#include "Car.h"
#include "Tesla.h"
Tesla::Tesla(){

};
Tesla::Tesla(char _model, int _price){
    model = _model;
    price = _price;
    batteryPercentage = 100;
};

void Tesla::drive(int kms){
    int check;
    check = 100 - 0.2*(kms);

    if (check < 0){

        emissions = (batteryPercentage/0.05) *0.074;
        batteryPercentage = 0;
    }else {
        batteryPercentage = batteryPercentage - 0.2*(kms);
        emissions = 0.74 * kms;

    }
};
void Tesla::chargeBattery(int mins){
    if (0.5 * mins + batteryPercentage > 100){
        batteryPercentage = 100;
    } else {
        batteryPercentage = 0.5 * mins + batteryPercentage;
    }
};
float Tesla::get_batteryPercentage(){
    return batteryPercentage;
};

char Tesla::get_model(){
    return model;
};
void Tesla::set_model(char _model){
    model = _model;
};
void Tesla::set_batteryPercentage(float _batteryPercentage){
    batteryPercentage= _batteryPercentage;
};


