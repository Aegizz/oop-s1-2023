#include <iostream>


extern bool is_descending(int[], int);
int main() {
    int array[5] = {5, 3, 2, 1, 0};

    std::cout << "The true or false the array is descending? " << is_descending(array, 5) << std::endl;

}