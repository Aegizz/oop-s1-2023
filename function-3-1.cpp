#include <iostream>
#include <cmath>
bool is_fanarray(int array[], int n){
    if (n < 1){
        return 0;
    } else {
        int backwards = n -1;
        //Only do half of array (only need to check half)
        int b = (n+1)/2;

        for (int i =0; i < b; i++){
            if (array[i] != array[backwards]){
                return 0;
            }
            if (array[i - 1] > array[i]){
                //return zero if the next element is smaller
                return 0;
            }
            backwards = backwards - 1;
        } 
        return 1;
        
    }
}