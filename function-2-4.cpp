#include <iostream>


int array_min(int integers[], int length){
    //check length
    if (length <= 0){
        return -1;
    } else {
        //init min as the first element in the array
        int min = integers[0];
        for (int i=1; i < length; i++){
            //iterate through array and compare the elements to the first to find the smallest
            if (integers[i] < min){
                //if array element is smaller let that element = the min
                min = integers[i];
            }
        }
        //return the smallest
        return min;
    }

}
int array_max(int integers[], int length){
    //check length
    if (length <= 0){
        return -1;
    } else {
        //init the max as first element in the array
        int max = integers[0];
        for (int i=1; i < length; i++){
            //iterate through the array and check the size of each element to the current max
            if (integers[i] > max){
                //if current element is larger than the max redefine the max as the current element
                max = integers[i];
            }
        }
        //return the max
        return max;
    }
}

int sum_min_max(int integers[], int length){
    //check size of array
    if (length  <= 0){
        return -1;
    } else {
        //call upon functions array_max and min and add them together in variable sum
        int max = array_max(integers, length);
        int min = array_min(integers, length);
        int sum = min + max;
        //returnt the sum
        return sum;
    }
    

}