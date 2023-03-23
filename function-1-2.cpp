#include "PersonList.h"
#include "Person.h"
PersonList createPersonList(int n){
    Person* array;
    array = new Person[n];
    for (int i = 0; i < n; i++){
        Person Person1;
        Person1.age = 0;
        Person1.name = "John Doe";
        array[i] = Person1;
    }
    PersonList listPerson;
    listPerson.people = array;

    listPerson.numPeople = n;
    return listPerson;
}