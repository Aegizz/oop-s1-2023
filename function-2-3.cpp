#include <iostream>

void two_five_nine(int array[], int n){
    //initialise the count for 2s 5s and 9s
    int twoCount = 0;
    int fiveCount = 0;
    int nineCount = 0;
    
    for (int i =0; i < n; i++){
        //loop through each element of the array and if they are equal to 2 5 or 9 increase the count by 1.
        switch(array[i]) {
            case 2:
                twoCount++;
                break;
            case 5: 
                fiveCount++;
                break;
            case 9:
                nineCount++;
                break;
        }
    }
    //Print out the message in the correct format
    std::cout << "2:"<<twoCount<<";5:"<<fiveCount<<";9:"<< nineCount <<";" << std::endl;
}