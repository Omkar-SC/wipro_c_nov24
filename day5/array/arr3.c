//Find the frequescy of an element of user choice in an raay of size N which is also given user (array is of type int)

#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int arraySize = atoi(args[1]);
    int array[50] = {0};
    int frequency = 0;
    int count = 0;

    printf("Enter %d elements of the array:", arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Choose the Number to Count its frequency: ");
    scanf("%d", &frequency);
    printf("The number to Count its frequency is:  %d \n",frequency);
    for (int i = 1; i < arraySize; i++)
    {
        if (frequency == array[i])
            count++;
    }
    printf("Frequency of %d is %d times", frequency, count);
    return 0;
}