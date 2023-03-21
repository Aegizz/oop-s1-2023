#include <iostream>
using namespace std;

int* readNumbers(){
    int * array;
    array = new int[10];
    for (int i = 0; i < 10; i++){
        cin >> array[i];
    }
    return array;
}

void hexDigits(int* numbers, int length){
    for (int i = 0; i < length; i++){
    switch(numbers[i]){
        case 0:
            cout << i << " " << numbers[i] << " " << 0 << "\n";
            break;
        case 1:
            cout << i << " " << numbers[i] << " " << 1 << "\n";
            break;
        case 2:
            cout << i << " " << numbers[i] << " " << 2 << "\n";
            break;
        case 3:
            cout << i << " " << numbers[i] << " " << 3 << "\n";
            break;
        case 4:
            cout << i << " " << numbers[i] << " " << 4 << "\n";
            break;
        case 5:
            cout << i << " " << numbers[i] << " " << 5 << "\n";
            break;
        case 6:
            cout << i << " " << numbers[i] << " " << 6 << "\n";
            break;
        case 7:
            cout << i << " " << numbers[i] << " " << 7 << "\n";
            break;
        case 8:
            cout << i << " " << numbers[i] << " " << 8 << "\n";
            break;
        case 9:
            cout << i << " " << numbers[i] << " " << 9 << "\n";
            break;
        case 10:
            cout << i << " " << numbers[i] <<" " <<  "A" << "\n";
            break;
        case 11:
            cout << i << " " << numbers[i] << " " << "B" << "\n";
            break;
        case 12:
            cout << i << " " << numbers[i] <<" " <<  "C" << "\n";
            break;
        case 13:
            cout << i << " " << numbers[i] <<" " <<  "D" << "\n";
            break;
        case 14:
            cout << i << " " << numbers[i] <<" " <<  "E" << "\n";
            break;
        case 15:
            cout << i << " " << numbers[i] << " " << "F" << "\n";
            break;       
        case 16:
            cout << i << " " << numbers[i] <<" " <<  "G" << "\n";
            break;             
    }

    }

}