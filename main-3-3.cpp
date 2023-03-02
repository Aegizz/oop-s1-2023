#include <iostream>


extern double weighted_average(int[], int);


int main() {
    int array[6] = {1,2,1,4,1,3};

    std::cout << "Average of array is " << weighted_average(array,6) << std::endl;
}