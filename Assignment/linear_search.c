
#include"linear_search.h"
#include<stdio.h>

int linearSearch(float *array, int arraySize, float searchNumber)
{
    int i = 0;
    for (; i < arraySize; i++)
    {
        if (array[i] == searchNumber)
            return i; // return index of 1st occurance of search ele
    }
    return -1; // search failed
}

float readUserData(float *ptr, int size)
{
    float searchElement = 0.0f;
    printf("Enter %d numbers of the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &ptr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%f", &searchElement);
    return searchElement;
}