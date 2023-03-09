#include <iostream>

int sum_diagonal(int array[4][4]){
    //Init sum
    int sum =0;
    for (int i=0; i < 4; i++){
        for (int j=0; j < 4; j++){
            //Loop through both directions of the array adding each element to the sum
            sum =  sum + array[i][j];
        }
    }
    return sum;
}
