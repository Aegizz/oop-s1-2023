#ifndef BIKE_H
#define BIKE_H
#include <string>
class Bike{
    private:
        std::string brand;
        int code;
    public:
        Bike();
        Bike(std::string brand, int code);
        std::string get_brand();
        int get_code();

};
#endif
