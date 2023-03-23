#include <iostream>
#include "Person.h"

using namespace std;
extern PersonList createPersonList(int);

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
}