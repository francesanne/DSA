#include <stdio.h>
#include<stdlib.h>
#include "dynamicarr.h"


int main(){
   
    int input;
   
    DynamicArray DynamicArray;
    DynamicArrayPtr dArr = createDynamicArray();
    // DynamicArrayPtr* dArrPtr;
   
    displayArrayDetails(dArr);
   
    do{
        printf("Enter a value: ");
        scanf("%d", &input);
       
        isDynamicArrayFull(dArr);
       
        if(input == 0) {
            trimDynamicArray(dArr);
            displayArrayDetails(dArr);
            break;
        }
       
        insertToDynamicArray(dArr, input);
        displayArrayDetails(dArr);
       
    }while(input != 0);
   
    freeDynamicArray(&dArr);
   
    return 0;
}
