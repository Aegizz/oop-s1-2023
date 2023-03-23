#include "person.h"
#include "personlist.h"
#include "function-1-1.cpp"

PersonList createPersonList(int n){
    Person* array = createPersonArray(n);
    PersonList listPerson;
    listPerson.people = array;

    listPerson.numPeople = n;
    return listPerson;
}