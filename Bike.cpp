#include "Bike.h"
#include <string>
#include <iostream>


Bike::Bike(){
    std::string brand = "";
    int code = 0;
};
Bike::Bike(std::string _brand, int _code){
    
    std::string brand = _brand;
    int code = _code;
};
std::string Bike::get_brand(){

    return brand;
};
int Bike::get_code(){
    

    return code;
};



