#include <iostream>

int min_element(int array[], int n){
    if (n < 1){
        //check the size of the array and return
        return 0;
    } else {
        //define the smallest number as the first element
        int smallestNumber = array[1];
        for (int i = 1; i < n; i++){
            //iterate through array and check that the next number is not smaller
            if (smallestNumber > array[i]){
                //if true new number is smallest number
                smallestNumber = array[i];
            }
        }
        //return smallest number
        return smallestNumber;
    }
}