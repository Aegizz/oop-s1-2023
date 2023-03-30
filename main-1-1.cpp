#include <string>
#include <iostream>
#include "Bike.h"

using namespace std;

int main(){

    Bike Bike2 = Bike(12345, "Giant");
    cout << Bike2.get_code();

}