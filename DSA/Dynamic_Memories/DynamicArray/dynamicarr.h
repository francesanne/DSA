#ifndef dArr_H
#define dArr_H


#define INIT_SIZE 3  
#define GROWTH 1.5

struct DynamicArray{
    int *arr;
    int size;
    int n;
};

typedef struct DynamicArray DynamicArray, *DynamicArrayPtr;


DynamicArrayPtr createDynamicArray();
int isDynamicArrayFull(DynamicArrayPtr dArr);
void upsizeDynamicArray(DynamicArrayPtr dArr);
void trimDynamicArray(DynamicArrayPtr dArr);
void insertToDynamicArray(DynamicArrayPtr dArr, int item);
void displayArrayDetails(DynamicArrayPtr dArr);
void freeDynamicArray(DynamicArrayPtr* dArrPtr);

#endif