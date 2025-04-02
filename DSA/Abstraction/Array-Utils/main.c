#include <stdio.h>
#include "array_utils.h"
#include "array_utils.c"
int main(){
    
    //initialize the array with the value 5
    IntArray arr; //no need to specify size
    int value=5;
    initializeArray(arr,value);

    //print array
    printArray(arr);

    return 0;

}