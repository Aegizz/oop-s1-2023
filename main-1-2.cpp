#include <iostream>
#include "person.h"
#include "function-1-1.cpp"
#include "function-1-2.cpp"
#include "personlist.h"
using namespace std;
int main(){
    int n = 3;
    PersonList listPerson;
    listPerson = createPersonList(n);
    for (int i =0; i < n; i++){
        cout << listPerson[i].name;
        cout << listPerson[i].age;
    }
}