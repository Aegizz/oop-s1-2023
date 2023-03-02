#include <iostream>

int median_array(int array[], int n){
    int temporary;
    bool arrayOrder = false;
    while (arrayOrder != true){
        int count = 0;
        for (int i = 1; i < n; i++){
            if (array[i - 1] <= array[i]){
                count = count + 1;
            }
        }
        if (count ==  n -1){
            arrayOrder = true;
        }
        
        for (int i = 0; i < n-1; i++){
            if (array[i] > array[i + 1]){
                temporary = array[i];
                array[i] = array[i+1];
                array[i+1] = temporary;
            }
        }
    }

    int median = ((n+1)/2 -1);
    return array[median];
}