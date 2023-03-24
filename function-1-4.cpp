#include "Person.h"
PersonList shallowCopyPersonList(PersonList listPersons){
    PersonList newList;

    newList.people = listPersons.people;
    newList.numPeople = listPersons.numPeople;
    
    return newList;
}