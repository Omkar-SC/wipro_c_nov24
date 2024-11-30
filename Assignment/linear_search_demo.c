#include"linear_search.h"
#include<stdio.h>
#include<stdlib.h>

int main(int argCount, char *args[])
{
    // User gives array size via command line
    int arraySize = atoi(args[1]);

    // create memory in heap to store array-size number of float values
    float *array = (float *)malloc(sizeof(float) * arraySize);

    // read the array elements and the search element
    float searchNumber = readUserData(array, arraySize);

    int index = linearSearch(array, arraySize, searchNumber);
    if (index == -1)
        printf("The Search Element %f not found in the array", searchNumber);
    else
        printf("The Search Element %f was found in the array at index %d", searchNumber, index);
}