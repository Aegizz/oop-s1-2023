#include <iostream>
#include <cmath>
bool is_fanarray(int array[], int n){

    if (n < 1){
        return 0;
    } else {
        int backwards = n-1;
        //loop through half of array check that it is same array backwards
        for (int i =0; i <= backwards; i++){

            if (array[i] != array[backwards]){
                return 0;
            }
            if (array[i - 1] > array[i]){
                //return zero if the next element is smaller
                return 0;
            }
            //Iterate other end backwards to check is palindrome

            backwards = backwards - 1;

        }
        //return true if no return 0s
        return 1;
        
    }
}