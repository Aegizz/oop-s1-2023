#include <tuple>
#ifndef GRID_H
#define GRID_H

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
        void setEntity();
}


#endif