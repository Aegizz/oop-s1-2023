#include <iostream>
using namespace std;
void print_summed(int array1[3][3], int array2[3][3]){
    int sum;
    //init sum

    //loop through the array adding each element together
    for (int i =0; i < 3; i++){
        for (int j=0; j < 3; j++){
            sum = array1[i][j] + array2[i][j];
            //Print each element with a space
            cout << sum << " ";
        }
        //New line to represent array in readable format
        cout << "\n";
    }
    //flush
    cout << endl;
}