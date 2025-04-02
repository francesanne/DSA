#include<stdlib.h>
#include<stdio.h>
#include"dynamicarr.h"

DynamicArrayPtr createDynamicArray(){
    DynamicArrayPtr dArr = (DynamicArrayPtr)malloc(sizeof(DynamicArray));
    dArr->size= INIT_SIZE;
    dArr->n=0;
    dArr->arr = (int*)malloc(dArr->size*sizeof(int));
    return dArr;
}

void upsizeDynamicArray(DynamicArrayPtr dArr){
    dArr->size=dArr->size*GROWTH;
    dArr->arr = (int*)realloc(dArr->arr, dArr->size*sizeof(int));
}

int isDynamicArrayFull(DynamicArrayPtr dArr){
    if(dArr!=NULL && dArr->size==dArr->n){
        upsizeDynamicArray(dArr);
        return 1;
    }
    return 0;
}


void trimDynamicArray(DynamicArrayPtr dArr){
    dArr->size=dArr->n;
    dArr->arr = (int*)realloc(dArr->arr, dArr->size*sizeof(int));
}

void insertToDynamicArray(DynamicArrayPtr dArr, int item){
    dArr->arr[dArr->n++]=item;
}

void displayArrayDetails(DynamicArrayPtr dArr){
    printf("%d/%d: [", dArr->n, dArr->size);
    for(int i=0;i<dArr->n;i++){
        printf("%d ", dArr->arr[i]);
    }
    printf("]\n");
}

void freeDynamicArray(DynamicArrayPtr* dArrPtr){
    if(dArrPtr != NULL && *dArrPtr != NULL) {
        return;
    }
    free((*dArrPtr)->arr);
    free(*dArrPtr);
    *dArrPtr = NULL;
}
