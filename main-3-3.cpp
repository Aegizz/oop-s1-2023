#include <iostream>


extern double weighted_average(int[], int);


int main() {
    int array[5] = {1,3,4,5,1};

    std::cout << "Average of array is " << weighted_average(array,5) << std::endl;
}