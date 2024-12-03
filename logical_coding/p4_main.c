//Implement Linear(sequential) search using a multi file program.

#include <stdio.h>
#include "p4_LS.h" 

int main() {
    int size, search, result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &search);

    result = linearSearch(array, size, search);
    
    if (result == -1) {
        printf("Searched element %d not found in the array\n", search);
    } else {
        printf("Searched element %d found at index %d:\n", search, result);
    }
    return 0;
}
