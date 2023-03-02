#include <iostream>

int median_array(int array[], int n){
    if (n < 1){
        return 0;
    } else {
        //init bool for the array order and temporary number to old values of moving positions
        int temporary;
        bool arrayOrder = false;
        //while the array is not in order
        while (arrayOrder != true){
            int count = 0;
            //Init the count of items in order
            for (int i = 1; i < n; i++){
                if (array[i - 1] <= array[i]){
                    count = count + 1;
                    //Increase the count of items in order if an item is next to an item larger than it
                }
            }
            //If all the numbers are in order up break the while loop
            if (count ==  n-1){
                arrayOrder = true;
            }
            //If arrayOrder is just finishing but hasnt ignore else reposition all numbers out of position
            //Note method is looping many times
            if (arrayOrder == false) {
                for (int i = 0; i < n-1; i++){
                    //Reposition out of position numbers
                    if (array[i] > array[i + 1]){
                        temporary = array[i];
                        array[i] = array[i+1];
                        array[i+1] = temporary;
                    }
                }
            }
        }
        int median;
        //Use ordered to find median

        if (n % 2 == 0) {
            int medianPos = ((n)/2) - 1;
            int median = (array[medianPos] + array[medianPos + 1])/2;
            return median;
        } else {
            int medianPos = ((n+1)/2) - 1;
            return array[medianPos];

        }

    }
}