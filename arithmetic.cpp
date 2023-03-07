#include <iostream>
#include <cmath>
using namespace std;

int checkBitSize(int num) {
    int bitRow = 0;
    while ((num - (pow(2,bitRow))) >= 0){
        bitRow++;
    }
    return bitRow;
}

int * num2Bin(int num) {

    int *binarray = new int(16);
    for(int i=0; i <16; i++){
        binarray[i]=0;
    }
    bool bitCheckSize = false;
    int largestBit = 0;
    if (num == 0){
        return 0;
    }
    while (num > 0){
        if (num > 0) {
            binarray[(16 - checkBitSize(num))]++;
            num = num - pow(2, (checkBitSize(num)-1));
        }

    }


    return binarray;
}


int * shiftLeft(int *numArray){


    for (int i = 1; i < 16; i++){
        
        numArray[i - 1] = numArray[i];
        
    }
    numArray[15] = 0;

    return numArray;

}

int main() {
    int num;
    cout << "Please enter a number \n";
    cin >> num;
    int *numArray = num2Bin(num);
    cout << "Binrary Num is: ";
    for (int i=0; i < 16; i++){
        cout << numArray[i];
    }
    cout << endl;

    int *shiftedArray = shiftLeft(numArray);
    cout << "Array shifted left is: ";
    for (int i=0; i < 16; i++){
        cout << shiftedArray[i];
    }
    cout << endl;
    delete[] numArray;
}