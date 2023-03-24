#include "Person.h"
PersonList deepCopyPersonList(PersonList listPersons){
    PersonList newList;

    newList.people = listPersons.people;
    newList.numPeople = listPersons.numPeople;
    
    return newList;
}