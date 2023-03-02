#include <iostream>


extern int median_array(int[], int);


int main() {
    int array[5] = {1,3,5,5};
    std::cout << "Median of array is " << median_array(array, 4) << std::endl;

}