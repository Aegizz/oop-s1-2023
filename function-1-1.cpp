#include <iostream>


int array_sum(int array[], int n){
    //Check array size
    if (n >= 1){
        //Init sum
        int sum = 0;
        for (int i =0; i < n; i++){
            //Add up the elements in a loop
            sum = sum + array[i];
        }
        //return the sum
        return sum;
    } else {
        //return 0 if array is empty
        return 0;
    }
}
