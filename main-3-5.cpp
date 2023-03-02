#include <iostream>

extern double sum_even(double[], int);

int main() {
    double array[5] = {1.0, 2.0, 3.0};
    std::cout << "Sum of even elements is " << sum_even(array, 5) << std::endl;
}