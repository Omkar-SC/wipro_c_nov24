//Swap the 1st half of an Array with the 2nd half elements.

#include <stdio.h>

void swapHalf(int array[], int size) {
    int mid = size / 2; 

    for (int i = 0; i < mid; i++) {
        int temp = array[i];
        array[i] = array[mid + i];
        array[mid + i] = temp;
    }
}

int main() {
    int array[50] = {0};  
    int size = 0;

    printf("Enter the even number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array before swapping in half: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    swapHalf(array, size);

    printf("\nArray after swapping in half: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
