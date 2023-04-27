#ifndef CAR_H
#define CAR_H

class Car{
    private:
        int price;
        int emissions;
    public:
        Car();
        Car(int price);
        int get_price();
        int set_price(int price);
        int set_emissions(int emissions);
        int get_emissions();

        void drive(int kms);
};
#endif