#include <iostream>

extern int min_element(int[], int);

int main() {
    int array[5] = {5, 3, 2, 1, 0};
    std::cout << "The smallest number in the array is " << min_element(array, 5) << std::endl;

}