#include <iostream>




bool is_palindrome(int integers[], int length){
    //check length
    if (length < 1){
        //return -1 if length
        return -1;
    } else {
        //init backwards iteration
        int backwards = length-1;
        for (int i =0; i <= backwards; i++){
            //Loop through array if backwards iteration != fowards iteration return false
            if (integers[i] != integers[backwards]){
                return false;
            }
            //increment backwards
            backwards = backwards - 1;
        }
    }
    //if all true return true
    return true;

}

int sum_array_elements(int integers[], int length){
    //check length of array
    if (length < 1){
        //if not long enough return -1
        return -1;
    } else {
        //init sum
        int sum = 0;
        //loop through array
        for (int i = 0; i < length; i++){
            //find sum of elements
            sum = sum + integers[i];
        }
        //return the sum
        return sum;
    }

}

int sum_if_palindrome(int integers[], int length){
    //check array size
    if (length < 1){
        return -1;
    } else {
        //call upon is_palindrome and check array
        if (is_palindrome(integers, length) == true) {
            //if true return the sum of the array
            return sum_array_elements(integers, length);
        } else {
            //else return the array is not a palindrome e.g. -2
            return -2;
        }
    }
}
