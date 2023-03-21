#include <iostream>
using namespace std;
extern int * readNumbers();
extern void printNumbers(int*, int);
extern int secondSmallestSum(int*, int);

int main(){

    int * array = readNumbers();
    cout << secondSmallestSum(array, 10);
    delete array;
}