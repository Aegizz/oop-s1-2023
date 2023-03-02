#include <iostream>


extern double weighted_average(int[], int);


int main() {
    int array[2] = {1,3};

    std::cout << "Average of array is " << weighted_average(array,2) << std::endl;
}