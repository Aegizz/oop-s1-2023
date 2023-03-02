#include <iostream>

extern bool is_fanarray(int[], int);


int main() {
    int array[5] = {2,4, 1,4,2};

    std::cout << "Fan array bool is " << is_fanarray(array, 4)<< std::endl;
   
}