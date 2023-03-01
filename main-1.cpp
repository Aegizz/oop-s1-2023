#include <iostream>

extern int array_sum(int[], int);
extern double array_mean(int[], int);
extern int num_count(int[], int, int);
extern int sum_two_arrays(int[], int[], int);
int main() {
    int array[5] = {1,2,3,4,5};
    int array2[5] = {5,4,3,2,1};
    std::cout << "Sum of the array is: " << array_sum(array, 5)<< std::endl;
    std::cout << "The average of the array is " << array_mean(array,5)<<std::endl;
    std::cout << "Parameter count is equal to " << num_count(array, 5, 3)<<std::endl;
    std::cout << "Sum of both arrays is: " << sum_two_arrays(array,array2, 5)<< std::endl;

}