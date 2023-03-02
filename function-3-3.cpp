#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1){
        return 0;
    } else {
        int *weights = new int(n);
        for (int i = 0; i < n; i++){
            weights[i] = 0;
            for (int j =0; j < n; j++){
                if (array[i] == array[j]){
                    weights[i] = weights[i] + 1;
                }
            }
        }
        double sum = 0;
        double normalAverage = 0;
        for (int i =0; i < n; i++){
            normalAverage = normalAverage + array[i];

            sum = sum + (array[i] * weights[i])/n;
            
            std::cout << "\narray[i] is "<<array[i]<<" weights[i] is " << weights[i] << " sum is "<< sum << std::endl;
        }
        normalAverage = normalAverage/n;
        std::cout << normalAverage << std::endl;
        return sum;
    }
}