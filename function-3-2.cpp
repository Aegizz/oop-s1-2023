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

bool equalsArray(int* numbers1, int* numbers2, int length){
    if (length < 1){
        return false;
    } else{
        for (int i = 0; i < length; i++){
            if (numbers1[i] != numbers2[i]){
                return false;
            }
        }
        return true;
    }
}

int *reverseArray(int* array1, int length){
    int* array2;
    array2 = new int[length];
    for (int i = 0; i < length; i++){
        array2[i] = array1[length - 1 - i];
    }
    return array2;
}