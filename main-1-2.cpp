#include <string>
#include <iostream>
#include "Bike.h"

using namespace std;

int main(){
    Bike Bike1 = Bike();
    cout << Bike1.get_code();
    Bike Bike2 = Bike("Giant", 12345);
    cout << Bike2.get_brand();

}