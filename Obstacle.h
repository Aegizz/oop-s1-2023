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
            coordinates = make_tuple(x, y);
        };
        bool isActive(){
            return active;
        };
        void apply(GridUnit& unit){
            entity = 'O';
            active = 0;
        };
};

#endif
