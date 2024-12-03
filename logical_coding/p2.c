//Reverse the elements of an Array using a while loop.

#include <stdio.h>

int main() {
    int array[10] = {0};  
    int size = 0;
    int temp;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    int start = 0;
    int end = size - 1;

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    while (start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
