// Remove duplicate elements from the Array and shift the elements (If n duplicate elements are removed then n zeroes should trail in the array)


#include <stdio.h>

void removeDuplicate(int array[], int size) {
    int uniqueIndex = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        //  // Check if the current element is a duplicate
        for (int j = 0; j < uniqueIndex; j++) {
            if (array[i] == array[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, shif element
        if (!isDuplicate) {
            array[uniqueIndex] = array[i];
            uniqueIndex++;
        }
    }

    // Fill the Empty positions with 0
    for (int i = uniqueIndex; i < size; i++) {
        array[i] = 0;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    removeDuplicate(array, size);

    printf("Array after removing duplicates and shifting elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}