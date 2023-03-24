#include "Person.h"
PersonList deepCopyPersonList(PersonList listPersons){
    PersonList newList;
    int n = listPersons.numPeople;
    Person* array;
    newList.people = new Person[n];
    for (int i = 0; i < n; i++){
        array[i] = listPersons.people[i];
    }

    newList.numPeople = n;
    
    return newList;
}