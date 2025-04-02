#include <stdio.h>
#include <stdlib.h>

#define INIT_SIZE 3
#define GROWTH 1.5

typedef struct {
    int *arr;
    int size;
    int n;
} DynamicArray;

// Function to create a dynamic array
DynamicArray *createDynamicArray() {
    DynamicArray *da = (DynamicArray *)malloc(sizeof(DynamicArray));
    da->size = INIT_SIZE;
    da->n = 0;
    da->arr = (int *)malloc(da->size * sizeof(int));
    return da;
}

void upsizeDynamicArray(DynamicArray *da) {
    da->size = (int)(da->size * GROWTH);
    da->arr = (int *)realloc(da->arr, da->size * sizeof(int));
}

// Function to check if the array is full and upsize if needed
void isDynamicArrayFull(DynamicArray *da) {
    if (da->n == da->size) {
        upsizeDynamicArray(da);
    }
}

// Function to resize the array (upsize)

// Function to shrink the array to fit exactly n elements
void trimDynamicArray(DynamicArray *da) {
    da->size = da->n;
    da->arr = (int *)realloc(da->arr, da->size * sizeof(int));
}

// Function to insert an element into the dynamic array
void insertToDynamicArray(DynamicArray *da, int value) {
    isDynamicArrayFull(da);  // Check and resize if needed
    da->arr[da->n++] = value;
}

// Function to display the array
void displayDynamicArray(DynamicArray *da) {
    printf("%d/%d: [", da->n, da->size);
    for (int i = 0; i < da->n; i++) {
        printf("%d ", da->arr[i]);
    }
    printf("]\n");
}

// Function to free the allocated memory
void freeDynamicArray(DynamicArray *da) {
    free(da->arr);
    free(da);
}

// Main function to test the implementation
int main() {
    DynamicArray *da = createDynamicArray();
    int value;

    displayDynamicArray(da);

    while (1) {
        printf("Enter a Value: ");
        scanf("%d", &value);

        if (value == 0) {
            trimDynamicArray(da);
            displayDynamicArray(da);
            break;
        }

        insertToDynamicArray(da, value);
        displayDynamicArray(da);
    }

    freeDynamicArray(da);
    return 0;
}