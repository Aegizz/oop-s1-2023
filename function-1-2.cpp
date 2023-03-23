
#include "Person.h"

PersonList createPersonList(int n){
    Person* array;
    array = new Person[n];
    for (int i = 0; i < n; i++){
        Person Person1;
        Person1.age = 1;
        Person1.name = "Jane Doe";
        array[i] = Person1;
    }
    PersonList listPerson;
    listPerson.people = array;

    listPerson.numPeople = n;
    return listPerson;
}