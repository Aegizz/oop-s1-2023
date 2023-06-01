#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <tuple>
#include "GridUnit.h"
#include "Modifier.h"

class Obstacle:public Modifier: public GridUnit{
    private:
        bool active;
    public:
        Obstacle();
        Obstacle(int x, int y);
        bool isActive();
}
#endif


Obstacle::Obstacle()
{
}
Obstacle::Obstacle(int x, int y)
{
        bool active = 1;
        coordinates = make_tuple(x, y)
}
Obstacle::isActive(){
    return active;
}
Obstacle::apply(GridUnit& unit){
    entity = 'O'
    active = 0;
}