#include <iostream>

int min_element(int array[], int n){
    if (n < 1){
        return 0;
    } else {
        int smallestNumber = array[1];
        for (int i = 1; i < n; i++){
            if (smallestNumber > array[i]){
                smallestNumber = array[i];
            }
        }
        return smallestNumber;
    }
}