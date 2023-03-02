#include <iostream>

extern int max_element(int[], int);

int main() {
    int array[5] = {5, 3, 2, 1, 0};
    std::cout << "The largest number in the array is " << max_element(array, 5) << std::endl;
}