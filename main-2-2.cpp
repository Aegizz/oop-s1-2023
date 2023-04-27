#include "Ford.h"
#include "Car.h"
#include <iostream>
int main(){
    Ford myCar = Ford(123, 3000);
    std::cout << myCar.get_litresOfFuel() << "\n";
    myCar.drive(151);
    std::cout << myCar.get_litresOfFuel();

}
