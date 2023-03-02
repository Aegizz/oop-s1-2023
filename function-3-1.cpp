#include <iostream>
#include <cmath>
bool is_fanarray(int array[], int n){

    if (n < 1){
        return 0;
    } else {
        int backwards = n-1;
        //Loop check if the array is a palindrome
        for (int i =0; i <= backwards; i++){
            if (array[i] != array[backwards]){
                return 0;
            }
            backwards = backwards - 1;
        }
        //Iterate other end backwards to check is ascending from one side
        for (int i =1; i < backwards; i++){
            if (array[i-1] > array[i]){
                    //return zero if the next element is smaller
                    return 0;
            }
        }

        //return true if no return 0s
        return 1;
    }
        
}
