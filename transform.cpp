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

int main() {
    int num;
    int binarray[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout << "Please enter a number: ";
    cin >> num;
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
    for (int i=0; i < 16; i++){
        cout << binarray[i];
    }
    cout << endl;
    
    return 0;
}
