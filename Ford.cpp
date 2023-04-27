#include "Ford.h"
#include "Car.h"


Ford::Ford(){
};
Ford::Ford(int _badgeNumber, int _price){
    price = _price;
    badgeNumber = _badgeNumber;
    emissions = 0;

};

void Ford::refuel(int litres){
    if (litres <= 60){
    litresOfFuel = litresOfFuel + litres;
    } else {
        litresOfFuel = litresOfFuel+60;
    }
};
void Ford::set_badgeNumber(int number){
    badgeNumber = number;
};
void Ford::set_litresOfFuel(float litres){
    litresOfFuel = litres;
};
void Ford::drive(int kms){
    int driven;
    if (kms/(5*litresOfFuel) > 1){
        driven = 5 * litresOfFuel;
        litresOfFuel = 0;
    }   else {
        driven = kms;
        litresOfFuel = litresOfFuel - (driven/5);
    }
    emissions = 234 * driven;


};
float Ford::get_litresOfFuel(){
    return litresOfFuel;
};
int Ford::get_badgeNumber(){
    return badgeNumber;
};