#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <tuple>
#include "GridUnit.h"
#include "Modifier.h"

class Obstacle:public Modifier{
    private:
        bool active;
    public:
        Obstacle(){};
        Obstacle(int x, int y){
            bool active = 1;
            this->setCoordinates(x, y);
        };
        bool isActive(){
            return active;
        };
        void setActive(bool _active){
            active = _active;
        }
        void apply(GridUnit& unit){
            this->setEntity('O');
            this->setActive(1);
        };
};

#endif
