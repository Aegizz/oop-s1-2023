#include <iostream>
#include <cmath>
using namespace std;

int binary_to_int(int binary_digits[30], int number_of_digits){
    //init sum
    int sum = 0;
    //Iterate through the array starting from the number of digits adding to the sum based on the number in the array and the 2^(position in the array (using the i increment))
    for (int i = (number_of_digits-1); i >= 0; i--){
        sum =  sum + pow(2, (number_of_digits - i - 1)) * binary_digits[i];
    }
    //return the base 10 (decimal) output
    return sum;
}