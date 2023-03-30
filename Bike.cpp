#include "Bike.h"
#include <string>
#include <iostream>


Bike::Bike(){
    brand = "";
    code = 0;
};
Bike::Bike(int _code,std::string _brand){
    brand = _brand;
    code = _code;
};
std::string Bike::get_brand(){
    return brand;
};
int Bike::get_code(){
    return code;
};
//I dont know why this wont work it doesnt make sense it should just return the code but it just prints a random int
//and the brand the does not work as it does not init a value to be used \_(0_0)_/ I cant progress further in the pracexam
//I gurantee its a tiny mistake that ive missed but cant double check my work like this is pretty ridiculous



