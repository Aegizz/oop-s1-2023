#include "Helper.h"
#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;

tuple<int, int> Helper::generateRandomCoordinates(int gridWidth, int gridHeight){
    tuple<int, int> coords = tuple(rand()*gridWidth/RAND_MAX, rand()*gridHeight/RAND_MAX);
    return coords; 
}
double Helper::calculateDistance(tuple<int, int> coords1, tuple<int, int> coords2){
    return sqrt(pow((get<0>(coords1)-get<0>(coords2)),2)+pow((get<1>(coords1) - get<1>(coords2)),2));
}