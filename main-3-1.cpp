#include <iostream>

extern bool is_fanarray(int[], int);


int main() {
    int array[6] = {1,3,1};

    std::cout << "Fan array bool is " << is_fanarray(array, 3)<< std::endl;
   
}