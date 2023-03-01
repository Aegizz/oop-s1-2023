#include <iostream>

double array_mean(int array[], int n){
    if (n >= 1){
        //init sum
        int sum = 0;
        for (int i =0; i < n; i++){
            //loop through summing the numbers in the array
            sum = array[i] + sum;
        }
        //average the numbers and return them by using the number of elements
        double average = sum/n;
        return average;

    }   else {
        //return 0.0 if there is an empty array
        return 0.0;
    }
}