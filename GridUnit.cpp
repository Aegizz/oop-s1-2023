#include "GridUnit.h"

GridUnit::GridUnit(){

};
GridUnit::GridUnit(int _x, int _y, char _entity){
    coordinates = (_x, _y);
    entity = _entity;
};
char GridUnit::getEntity(){
    return entity;
}
tuple GridUnit::getCoordinates(){
    return coordinates;
}
void GridUnit::setCoordinates(int x, int y){
    coordinates = (x,y);
}
void GridUnit::setEntity(char _entity){
    entity = _entity;
}