#include <iostream>


int is_identity(int array[10][10]){
    //Loop through the array
    for (int i=0; i < 10; i++){
        for (int j=0; j < 10; j++){
            if (i == j){
                //If it is on the diagonal
                if ((array[i][j]) != 1){
                    //and it doesnot equal 1 return 0
                    return 0;
                }
            } else {
                //If the other elements do not equal 0 return 0
                if (array[i][j] != 0){
                    return 0;
                }
            }
        }
    }
    //If all conditions met return 1
    return 1;

}