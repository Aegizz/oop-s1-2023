#include <iostream>

int max_element(int array[], int n){
    if (n < 1){
        return 0;
    } else {
        int largestNumber = array[1];
        for (int i = 1; i < n; i++){
            if (largestNumber < array[i]){
                largestNumber = array[i];
            }
        }
        return largestNumber;
    }
}
