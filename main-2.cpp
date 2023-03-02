#include <iostream>

extern int min_element(int[], int);
extern int max_element(int[], int);
extern void two_five_nine(int[], int);
extern bool is_ascending(int[], int);
extern bool is_descending(int[], int);
int main() {
    int array[5] = {5, 3, 2, 1, 0};
    std::cout << "The smallest number in the array is " << min_element(array, 5) << std::endl;
    std::cout << "The largest number in the array is " << max_element(array, 5) << std::endl;
    two_five_nine(array, 5);
    std::cout << "The true or false the array is ascending? " << is_ascending(array, 5) << std::endl;
    std::cout << "The true or false the array is descending? " << is_descending(array, 5) << std::endl;

}