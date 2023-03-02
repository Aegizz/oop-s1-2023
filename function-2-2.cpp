#include <iostream>

int max_element(int array[], int n){
    if (n < 1){
        //check array size
        return 0;
    } else {
        //define largest number as first number
        int largestNumber = array[1];
        for (int i = 1; i < n; i++){
            //If another number in the array is larger than the first number let the number be the largest number
            if (largestNumber < array[i]){
                largestNumber = array[i];
            }
        }
        //return the largest number
        return largestNumber;
    }
}
