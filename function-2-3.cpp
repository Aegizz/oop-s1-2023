#include <iostream>




bool is_palindrome(int integers[], int length){
    
    if (length < 1){
        return -1;
    } else {
        int backwards = length-1;
        for (int i =0; i <= backwards; i++){
            if (integers[i] != integers[backwards]){
                return false;
            }
            backwards = backwards - 1;
        }
    }
    return true;

}

int sum_array_elements(int integers[], int length){
    if (length < 1){
        return -1;
    } else {
        int sum = 0;
        for (int i = 0; i < length; i++){
            sum = sum + integers[i];
        }
        return sum;
    }

}

int sum_if_palindrome(int integers[], int length){
    if (length < 1){
        return -1;
    } else {
        if (is_palindrome(integers, length) == true) {
            return sum_array_elements(integers, length);
        } else {
            return -2;
        }
    }
}
