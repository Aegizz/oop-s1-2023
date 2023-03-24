#include "Person.h"
PersonList deepCopyPersonList(PersonList listPersons){
    PersonList newList;
    int numberPeople;
    Person* peopleList;
    peopleList = listPersons.people;
    numberPeople = listPersons.numPeople;
    newList.numPeople = numberPeople;
    newList.people = peopleList;
    
    return newList;
}