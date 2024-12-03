// Swap consecutive elements of an Array using a for loop.

#include <stdio.h>

void swapElements(int arr[], int size)
{
    for (int i = 0; i < size -1; i+= 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr [ i + 1] = temp;
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

    swapElements(array, size); 

    printf("Array after swapping consecutive elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}