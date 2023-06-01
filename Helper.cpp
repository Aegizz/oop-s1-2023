#include "Helper.h"
#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;
#define RAND_MAX = 1;
tuple<int, int> Helper::generateRandomCoordinates(int gridWidth, int gridHeight){
    tuple<int, int> coords = (rand()*gridWidth, rand()*gridHeight);
    return coords; 
}
double Helper::calculateDistance(tuple<int, int> coords1, tuple<int, int> coords2){
    return sqrt(pow((coords1[0]-coords2[0]),2)+pow((coords1[1]-coords2[1]),2))
}