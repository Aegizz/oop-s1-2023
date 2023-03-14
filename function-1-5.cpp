

#include <iostream>
using namespace std;

int size_of_array_arr(){
    int *arr =  new int[3];
    cout << sizeof(*arr) * 3;
    return sizeof(arr);
}