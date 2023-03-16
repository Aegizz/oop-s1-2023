#include <iostream>

extern int bin_to_int(int[], int);
using namespace std;
int main(){
    int array[5] = {0,0,1,1,1};
    int length = 5;
    cout << bin_to_int(array, 5);
}