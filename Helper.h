#ifndef HELPER_H
#define HELPER_H
#include <tuple>

using namespace std;

class Helper{
    private:
    public:
    static tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight);
    static double calculateDistance(tuple<int, int> coords1, tuple<int, int> coords2);
}