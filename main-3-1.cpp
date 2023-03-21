#include <iostream>
using namespace std;
extern int*readNumbers();

extern bool equalsArray(int*, int*, int);

int main(){
    int *array1;
    int *array2;
    array1 = readNumbers();
    array2 = readNumbers();
    cout << equalsArray(array1, array2, 10);
    delete[] array1, array2;
}
