#include "Car.h"

Car::Car(){
};
Car::Car(int _price){
    price = _price;
    emissions = 0;
};
int Car::get_emissions(){
    return emissions;
};
int Car::get_price(){
    return price;
};
int Car::set_price(int _price){
    price = _price;
};
int Car::set_emissions(int _emissions){
    emissions = _emissions;
};
void Car::drive(int kms){
    emissions = 20 * kms + emissions;
};