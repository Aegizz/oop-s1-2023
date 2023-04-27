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
    check = 100 - 0.05*(kms);

    if (check < 0){

        emissions = (batteryPercentage/0.05) *0.074;
        batteryPercentage = 0;
    }else {
        batteryPercentage = batteryPercentage - 0.05*(kms);
        emissions = 0.074 * kms;

    }
};
void Tesla::chargeBattery(int mins){
    batteryPercentage = 0.5 * mins + batteryPercentage;
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


