#include <iostream>

double weighted_average(int array[], int n) {
    //Check array size and return 0 if too small
    if (n < 1){
        return 0;
    } else {
        int *weights = new int(n);
        //Init array for weights
        for (int i = 0; i < n; i++){
            weights[i] = 0;
            //Set weight in slot 0 to 0
            for (int j =0; j < n; j++){
                if (array[i] == array[j]){
                    //If another element of the array = element of array increase the weight
                    weights[i] = weights[i] + 1;
                    if (weights[i] > 1){
                        //Excluding itself remove the other elements from the array so its not counted twice
                        array[j] = 0;
                    }

                }
            }
        }
        //Init the average and init the count as a double as an int it was not dividing correctly
        double average = 0;
        double doubleN = n;
        //Loop through and do the math for weight averaged
        for (int i =0; i < n; i++){
            average = average + (array[i] * weights[i])/doubleN;            
        }
        //Return the weighted average
        return average;
    }
}