#include <string>
#include <iostream>
#include "Bike.h"

using namespace std;

int main(){
    Bike Bike1 = Bike();
    Bike Bike2 = Bike(12345, "Giant");
    cout << Bike2.get_code();
    cout << Bike2.get_brand();
    cout << Bike1.get_code();
    cout << Bike1.get_brand();

}