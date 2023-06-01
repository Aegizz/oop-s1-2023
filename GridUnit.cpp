#include "GridUnit.h"

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