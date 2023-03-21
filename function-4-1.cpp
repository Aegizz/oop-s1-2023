#include <iostream>

using namespace std;
int* readNumbers(){
    int * array;
    array = new int[10];
    for (int i = 0; i < 10; i++){
        cin >> array[i];
    }
    return array;
}
void printNumbers(int *numbers, int length){
    for (int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << "\n";
    }
}




int secondSmallestSum(int* numbers, int length){
    int smallestNumber = numbers[0];
    for (int i=1; i < length; i++){
        if (numbers[i] < smallestNumber){
            smallestNumber = numbers[i];
        }

    }
    int secondSmallest = numbers[0];
    for (int i = 1; i < length; i++){
        if ((smallestNumber < numbers[i]) && (numbers[i] < secondSmallest)){
            secondSmallest = numbers[i];
        }
    }
    return secondSmallest;
}