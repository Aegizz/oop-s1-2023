#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int checkBitSize(int num) {
    int bitRow = 0;
    while ((num - (pow(2,bitRow))) >= 0){
        bitRow++;
    }
    return bitRow;
}

void print_binary_str(string decimal_number){
    int deci_int  = stoi(decimal_number);

    int array[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int deci_max =(16 - checkBitSize(deci_int));
    while (deci_int > 0){
        if (deci_int > 0){
            array[(16 - checkBitSize(deci_int))]++;
            deci_int = deci_int - pow(2, (checkBitSize(deci_int)-1));
        }
    }
    for (int i= deci_max; i < 16; i++){
        cout << array[i];
    }

}


