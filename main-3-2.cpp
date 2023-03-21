#include <iostream>
using namespace  std;
extern int * readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*, int);
extern int* reverseArray(int*, int);


int main(){
    int *array1;
    int *array2;
    array1 = readNumbers();
    array2 = readNumbers();

    array1 = reverseArray(array1, 10);

    printNumbers(array1, 10);
    cout << equalsArray(array1, array2, 10);
    delete[] array1, array2;

}