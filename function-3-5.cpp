#include <iostream>


double sum_even(double array[], int n){
    if (n < 1){
        //check the size of the array
        return 0;
    } else {
        int sum = 0;
        //iterate through each even element of the array adding it to the sum each time
        for (int i = 0; i < n; i = i + 2){
            sum = sum + array[i];
        }
        // return the sum of each element
        return sum;
    }
}