#include <iostream>
using namespace std;
void count_digits(int array[4][4]){
    int zeros =0, ones =0, twos =0, threes=0, fours=0, fives=0, 
    sixs =0, sevens=0, eights=0, nines=0;

    for (int i=0; i < 4; i++){
        for (int j=0; j <4; j++){
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
    cout << "zeros:"<< zeros << ";ones:" << ones << ";twos:" << twos << ";threes:"<<threes << ";fours:" << fours << ";fives:" << fives
    << ";sixes:" << sixs << ";sevens:" << ";eights:" <<eights << ";nines:" << nines << endl;


}