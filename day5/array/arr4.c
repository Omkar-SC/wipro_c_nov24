//Reverse an array of size N of type float

#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int arraySize = atoi(args[1]);
    float array[] = {0.0};
    // float reverse[] = 0;
    
    printf("Enter %d elements of the array:", arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        scanf("%f", &array[i]);
    }
    // for(int i = 0; i < arraySize; i++)
    // {
    //     reverse[i] = array[i];
    //     array[i] = array[arraySize - i - 1];
    //     array[arraySize - i - 1] = reverse[i];
    // }
    for(int i = 0; i < arraySize; i++)
    {
    printf("%f ", array[i]);
    }
    
    return 0;
}