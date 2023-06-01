#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>

using namespace std;

class GridUnit{
    private:
        tuple<int, int> coordinates;
        char entity;
    public:
        GridUnit();
        GridUnit(int x, int y, char entity);
        tuple<int, int> getCoordinates();
        char getEntity();
        void setCoordinates(int x, int y);
        void setEntity(char entity);
};

GridUnit::GridUnit(){

};
GridUnit::GridUnit(int _x, int _y, char _entity){
    coordinates = tuple(_x, _y);
    entity = _entity;
};
char GridUnit::getEntity(){
    return entity;
}
tuple<int, int> GridUnit::getCoordinates(){
    return coordinates;
}
void GridUnit::setCoordinates(int x, int y){
    coordinates = tuple(x,y);
}
void GridUnit::setEntity(char _entity){
    entity = _entity;
}

#endif