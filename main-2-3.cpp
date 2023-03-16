#include <iostream>

extern int palindrome_sum(int[], int);
using namespace std;
int main(){
    int array[4] = {1,2,0,1};
    int length = 4;
    cout << palindrome_sum(array, length);
}