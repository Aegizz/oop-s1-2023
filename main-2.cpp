#include <iostream>

extern int min_element(int[], int);
extern int max_element(int[], int);
extern void two_five_nine(int[], int);
int main() {
    int array[5] = {3, 2, 4, 5, 6};
    std::cout << "The smallest number in the array is " << min_element(array, 5) << std::endl;
    std::cout << "The largest number in the array is " << max_element(array, 5) << std::endl;
    two_five_nine(array, 5);
}