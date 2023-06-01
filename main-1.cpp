#include "Helper.h"
#include "GridUnit.h"
#include "Modifier.h"
#include <iostream>
using namespace std;
int main(){
    GridUnit gridUnit = GridUnit(2,1,'a');
    gridUnit.setCoordinates(5,3);
    cout << get<0>(gridUnit.getCoordinates());
}