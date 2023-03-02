#include <iostream>

extern bool is_fanarray(int[], int);


int main() {
    int array[6] = {1,2,2,1};

    std::cout << "Fan array bool is " << is_fanarray(array, 4)<< std::endl;
   
}