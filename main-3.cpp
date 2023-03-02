#include <iostream>

extern bool is_fanarray(int[], int);
extern int median_array(int[], int);
int main() {
    int array[5] = {1,3,4,5,1};
    std::cout << "Fan array is " << is_fanarray(array, 5)<< std::endl;
    std::cout << "Median of array is " << median_array(array, 5) << std::endl;

}