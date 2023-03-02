#include <iostream>


extern int count_evens(int);

int main() {
    int array[5] = {1,2,3,4,5};
    std::cout << "Number of even numbers between parameter is " << count_evens(1)<<std::endl;
}