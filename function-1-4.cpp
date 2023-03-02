#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    if (n < 1){
        //Check array size and return 0
        return 0;
    } else {
        //init the sum
        int sum = 0;
        for (int i = 0; i < n; i++){

            sum = sum + array[i] + secondarray[i];
        }
        return sum;
    }
}