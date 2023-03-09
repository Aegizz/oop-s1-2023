#include <iostream>

using namespace std;
void print_scaled(int array[3][3], int scale){
    //Loop through each element of the array replacing it wtih a scaled varient
    for (int i = 0; i < 3; i++){
        for (int j =0; j < 3; j++){
            array[i][j] = array[i][j] * scale;
            //Print each scaled element with a space between
            cout << array[i][j] << " ";
        }
        //Each time a line is over create a new line for the output
        cout << "\n";
    }
    //flush
    cout << endl;
}