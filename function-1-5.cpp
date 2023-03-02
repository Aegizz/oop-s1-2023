#include <iostream>

int count_evens(int number){
    if (number < 1){
        //check the number is greater than one as it would create an error in our array
        return 0;
    }
    else {
        int count =0;
        //Loop through till we reach the number increasing the count of evens by jumping up twice
        for (int i = 1; i < number; i=i + 2){
            count = count +1;
        }
        //return the count
        return count;

    }
}