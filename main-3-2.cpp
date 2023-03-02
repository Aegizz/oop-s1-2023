#include <iostream>


extern int median_array(int[], int);


int main() {
    int array[15] = {1,2,4,5};
    std::cout << "Median of array is " << median_array(array, 4) << std::endl;

}