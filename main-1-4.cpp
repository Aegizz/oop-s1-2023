#include <iostream>


extern int sum_two_arrays(int[], int[], int);


int main() {
    int array[5] = {1,2,3,4,5};
    int array2[5] = {5,4,3,2,1};
    std::cout << "Sum of both arrays is: " << sum_two_arrays(array,array2, 5)<< std::endl;
}