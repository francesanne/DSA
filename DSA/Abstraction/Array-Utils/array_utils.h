#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

//define a new type for an array of 10 integers
#define ARRAY_SIZE 10

typedef int IntArray[ARRAY_SIZE];

//function prototyeps
void initializeArray(IntArray arr, int value);
void printArray(const IntArray arr);

#endif