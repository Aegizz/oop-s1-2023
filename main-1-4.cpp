#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern PersonList shallowCopyPersonList(PersonList);
int main(){
    int n = 3;
    PersonList listPerson;   
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

    for (int i =0; i < n; i++){
        Person person1;
        person1 = listPerson.people[i];
        cout << person1.age;
        cout << person1.name;
    }
    PersonList newList = shallowCopyPersonList(listPerson);
        for (int i =0; i < n; i++){
        Person person2;
        person2 = newList.people[i];
        cout << person2.age;
        cout << person2.name;
    }

}