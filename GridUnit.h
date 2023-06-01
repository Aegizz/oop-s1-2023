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


#endif