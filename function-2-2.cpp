#include <iostream>
#include <cmath>
using namespace std;

int binary_to_int(int binary_digits[30], int number_of_digits){
    int sum = 0;
    for (int i = (number_of_digits-1); i >= 0; i--){
        sum =  sum + pow(2, (number_of_digits - i - 1)) * binary_digits[i];
    }
    return sum;
}