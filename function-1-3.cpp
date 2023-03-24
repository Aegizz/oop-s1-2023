#include "Person.h"
PersonList deepCopyPersonList(PersonList listPersons){
    PersonList newList;

    Person* peopleList;
    peopleList = listPersons.people;
    newList.numPeople = listPersons.numPeople;
    newList.people = peopleList;
    
    return newList;
}