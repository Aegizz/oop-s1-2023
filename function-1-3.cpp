#include <iostream>

int num_count(int array[], int n, int number){
    //Check size of n return 0 if no array size
    if (n < 1)
        return 0;
    else {
        int count = 0;
        for (int i =0; i < n; i++){
            //loop through array if element is equal to param +count
            if (array[i] == number){
                count = count + 1;
            }
        }
        return count;
    }
}