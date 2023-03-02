#include <iostream>


extern int num_count(int[], int, int);


int main() {
    int array[5] = {1,2,3,4,5};
    
    std::cout << "Parameter count is equal to " << num_count(array, 5, 3)<<std::endl;
    
}