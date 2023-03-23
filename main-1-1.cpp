#include <iostream>
#include "Person.h"
using namespace std;
extern Person* createPersonArray(int);

int main(){
    Person* array;
    array = createPersonArray(3);
    for (int i=0; i < 3; i++){
        cout << array[i].age;
        cout << array[i].name;
    }
}