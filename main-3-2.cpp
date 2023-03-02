#include <iostream>


extern int median_array(int[], int);


int main() {
    int array[15] = {1,3};
    std::cout << "Median of array is " << median_array(array, 0) << std::endl;

}