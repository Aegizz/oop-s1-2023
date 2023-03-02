#include <iostream>

bool is_descending(int array[], int n){
    if (n < 1) {
        return 0;
    } else {
        for (int i = 1; i < n; i++){
            if (array[i - 1] < array[i]){
                return 0;
            }
        }
        return 1;
    }
}