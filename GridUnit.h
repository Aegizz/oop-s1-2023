#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>


class GridUnit{
    private:
        std::tuple<int, int> coordinates;
        char entity;
    public:
        GridUnit();
        GridUnit(int x, int y, char entity);
        std::tuple<int, int> getCoordinates();
        char getEntity();
        void setCoordinates(int x, int y);
        void setEntity(char entity);
};

GridUnit::GridUnit(){

};
GridUnit::GridUnit(int x, int y, char _entity){
    coordinates = std::tuple(x, y);
    entity = _entity;
};
char GridUnit::getEntity(){
    return entity;
}
std::tuple<int, int> GridUnit::getCoordinates(){
    return coordinates;
}
void GridUnit::setCoordinates(int x, int y){
    coordinates = std::tuple(x,y);
}
void GridUnit::setEntity(char _entity){
    entity = _entity;
}

#endif