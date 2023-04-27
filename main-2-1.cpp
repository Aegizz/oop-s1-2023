#include "Tesla.h"
#include "Car.h"
#include <iostream>
int main(){
    Tesla myCar = Tesla('X', 3000);
    std::cout << myCar.get_price();
}