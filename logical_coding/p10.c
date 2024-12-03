//Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.

#include <stdio.h>

void convert(int array[], int size) {
    for (int i = 0; i < size; i++) {
        // If the element is odd, add 1 to make it even
        if (array[i] % 2 != 0) {
            array[i] += 1;
        }
        // If the element is even, subtract 1 to make it odd
        else {
            array[i] -= 1;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[50] = {0};
    int size = 0;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array before Converting: ");
    printArray(array, size);

    convert(array, size);

    printf("Array after Converting: ");
    printArray(array, size);

    return 0;
}
