#include <iostream>


extern bool is_ascending(int[], int);

int main() {
    int array[5] = {5, 3, 2, 1, 0};
    std::cout << "The true or false the array is ascending? " << is_ascending(array, 5) << std::endl;

}