#include <iostream>

bool is_descending(int array[], int n){
    if (n < 1) {
        //check array size and return 0 if not
        return 0;
    } else {
        for (int i = 1; i < n; i++){
            //loop through each element of the array checking if the last one was larger or not
            if (array[i - 1] < array[i]){
                //return zero if the next element is larger
                return 0;
            }
        }
        //return 1 if all elements are descending
        return 1;
    }
}