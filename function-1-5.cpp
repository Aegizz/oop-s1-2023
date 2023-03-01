#include <iostream>

int count_evens(int number){
    if (number < 1){
        return 0;
    }
    else {
        int count =0;
        for (int i = 1; i < number; i=i + 2){
            count = count +1;
        }
        return count;

    }
}