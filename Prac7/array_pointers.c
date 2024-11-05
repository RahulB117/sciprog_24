#include <stdio.h>
#include <stdlib.h>

// Allocate memory for an array of integers
int* allocateArray(int size) {
    return (int*)malloc(size * sizeof(int));
}

// Fill an array with ones
void fillWithOnes(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1;
    }
}

// Print the array
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Free the allocated memory
void freeArray(int* array) {
    free(array);  //
}

int main() {
    
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Test allocateArray()
    int* array = allocateArray(size);
    if (array == NULL) {
        printf("Failed to allocated memory\n");
        return 1;
    }

    // Test fillWithOnes()
    fillWithOnes(array, size);

    // Test printArray()
    printf("Array with ones: ");
    printArray(array, size);

    // Test freeArray()
    freeArray(array);

    return 0;
}