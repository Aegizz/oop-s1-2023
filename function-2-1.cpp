#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function to checkbitsize
int checkBitSize(int num) {
    int bitRow = 0;
    //init bit row
    //If the number - 2^(bit row) >= 0 e.g. if the binary number = 1 go up one til it equals the bit row
    while ((num - (pow(2,bitRow))) >= 0){
        //iterate the bit row til condition is met
        bitRow++;
    }
    //return bitRow
    return bitRow;
}

void print_binary_str(string decimal_number){
    //Conver string to integer
    int deci_int  = stoi(decimal_number);
    //Init array for the binary number
    int array[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    //Find the largest size in the array
    int deci_max =(16 - checkBitSize(deci_int));
    //Until num <= 0 keep removing the bit sizes using checkBitsize function
    while (deci_int > 0){
        if (deci_int > 0){
            /*Increment array and integer form of decimal_number (It may appear to be added oddly as the checkBitSize is adjusted for the array[0] therefore)
            we -1 from the deci_int mathematics when removing the numbers already added in the array*/
            array[(16 - checkBitSize(deci_int))]++;
            deci_int = deci_int - pow(2, (checkBitSize(deci_int)-1));
        }
    }
    //Print the array starting from the first element that is a 1 in the array e.g. using deci_max
    for (int i= deci_max; i < 16; i++){
        cout << array[i];
    }

}


