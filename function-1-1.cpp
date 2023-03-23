#include "person.h"

Person* createPersonArray(int n){
    Person* array;
    array = new Person[n];
    for (int i = 0; i < n; i++){
        Person Person1;
        Person1.age = 0;
        Person1.name = "John Doe";
        array[i] = Person1;
    }
    return array;
}