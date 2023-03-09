#include <iostream>
using namespace std;
void count_digits(int array[4][4]){
    //Init counters
    int zeros =0, ones =0, twos =0, threes=0, fours=0, fives=0, 
    sixs =0, sevens=0, eights=0, nines=0;
    //Loop through each elements of the array
    for (int i=0; i < 4; i++){
        for (int j=0; j <4; j++){
            //For each case increment the counter and break the switch loop
            switch(array[i][j]){
                case 0:
                    zeros++;
                    break;
                case 1:
                    ones++;
                    break;
                case 2:
                    twos++;
                    break;
                case 3:
                    threes++;
                    break;
                case 4:
                    fours++;
                    break;
                case 5:
                    fives++;
                    break;
                case 6:
                    sixs++;
                    break;
                case 7:
                    sevens++;
                    break;
                case 8:
                    eights++;
                    break;
                case 9:
                    nines++;
                    break;
            }
        }
        
    }
    //Print out the result
    cout << "0:"<< zeros << ";1:" << ones << ";2:" << twos << ";3:"<<threes << ";4:" << fours << ";5:" << fives
    << ";6:" << sixs << ";7:"<< sevens << ";8:" <<eights << ";9:" << nines << ";"<< endl;


}