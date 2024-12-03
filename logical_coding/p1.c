//Find sum of the elements of an Array using a recursive function.

#include <stdio.h>

int findSum(int array[], int size) {
    if (size == 0) {
        return 0;
    }
    return array[size - 1] + findSum(array, size - 1);
}

int main() {
    int inputNum = 0;
    int array[50] = {0};
    printf("Enter the size of the array: ");
    scanf("%d", &inputNum);
    
    printf("Enter %d elements of the array: ", inputNum);
    for (int i = 0; i < inputNum; i++) {
        scanf("%d", &array[i]);
    }
    
int sum = findSum(array, inputNum);
    printf("The sum of elements in the array is: %d\n", sum);
    
    return 0;
}