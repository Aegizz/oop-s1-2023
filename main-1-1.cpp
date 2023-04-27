#include "Car.h"
#include <iostream>


int main(){
    Car myCar = Car(3000);
    std::cout << myCar.get_price()<< "\n";
    std::cout << myCar.get_emissions() << "\n";
    
    myCar.drive(1000);
    std::cout << myCar.get_emissions();

}