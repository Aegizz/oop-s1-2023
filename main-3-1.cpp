#include <iostream>

extern bool is_fanarray(int[], int);


int main() {
    int array[5] = {1,3,4,3,1};

    std::cout << "Fan array bool is " << is_fanarray(array, 5)<< std::endl;
   
}