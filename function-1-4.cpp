#include<iostream>
using namespace std;

int size_of_variable_star_arr(){
    int *arr =  new int[3];
    cout << sizeof(*arr);
}