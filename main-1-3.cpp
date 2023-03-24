#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);
int main(){
    int n = 3;
    PersonList listPerson;
    listPerson = createPersonList(n);
    for (int i =0; i < n; i++){
        Person person1;
        person1 = listPerson.people[i];
        cout << person1.age;
        cout << person1.name;
    }
    PersonList newList = deepCopyPersonList(listPerson);
        for (int i =0; i < n; i++){
        Person person2;
        person2 = newList.people[i];
        cout << person2.age;
        cout << person2.name;
    }

}