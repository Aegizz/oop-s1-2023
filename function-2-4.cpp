#include <iostream>

bool is_ascending(int array[], int n){
    //Check array size and return 0 if not
    if (n < 1) {
        return 0;
    } else {
        //Check each element with the element below it if it isnt ascending then return 0
        for (int i = 1; i < n; i++){
            if (array[i - 1] > array[i]){
                return 0;
            }
        }
        //if each element is correct return true
        return 1;
    }
}