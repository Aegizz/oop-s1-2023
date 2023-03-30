#ifndef BIKE_H
#define BIKE_H
#include <string>
class Bike{
    private:
        std::string brand;
        int code;
    public:
        Bike();
        Bike(int _code, std::string _brand);
        std::string get_brand();
        int get_code();

};
#endif
