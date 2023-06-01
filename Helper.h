#ifndef HELPER_H
#define HELPER_H
#include "GridUnit.h"

#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;

class Helper{
    private:
    public:
        static tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight);
        static double calculateDistance(tuple<int, int> coords1, tuple<int, int> coords2);
};

tuple<int, int> Helper::generateRandomCoordinates(int gridWidth, int gridHeight){
    tuple<int, int> coords = tuple(rand()*gridWidth/RAND_MAX, rand()*gridHeight/RAND_MAX);
    return coords; 
}
double Helper::calculateDistance(tuple<int, int> coords1, tuple<int, int> coords2){
    return sqrt(pow((get<0>(coords1)-get<0>(coords2)),2)+pow((get<1>(coords1) - get<1>(coords2)),2));
}
#endif