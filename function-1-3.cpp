#include "Person.h"
PersonList deepCopyPersonList(PersonList listPersons){
    PersonList newList;

    People* peoplelist;
    peoplelist = listPersons.people;
    newList.numPeople = listPersons.numPeople;
    
    return newList;
}