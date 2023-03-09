#include <iostream>
using namespace std;

extern int sum_if_palindrome(int[], int);

int main(){
    int array[3] = {1,2,1};
    cout << sum_if_palindrome(array, 3);

}