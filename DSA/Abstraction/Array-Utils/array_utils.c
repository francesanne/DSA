#include "array_utils.h"
#include <stdio.h>

//function to initialize the array with
//a specific value
void initializeArray(IntArray arr, int value){
    for(int i=0;i<ARRAY_SIZE;i++){
        arr[i]=value;
    }
}


//function to print the array
void printArray(const IntArray arr){
    for(int i=0;i<ARRAY_SIZE;i++){
        printf("%d ", arr[i]);
    }

}