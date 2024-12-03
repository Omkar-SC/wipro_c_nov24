#include<stdio.h>
#include<stdlib.h>


int findElement(int array[], int arraySize)
{
    int count = 0;
    int search = 0;

    printf("Choose the Number to Count its frequency: \n");
    scanf("%d", &search);
    printf("The number to Count its frequency is:  %d \n",search);
    for (int i = 0; i <= arraySize; i++)
    {
        if (search == array[i])
            count++;
    }
    printf("Frequency of %d is %d times", search, count);
    return 0;
}
int main(int argCount, char *args[])
{
    int arraySize = atoi(args[1]);
    int array[50] = {0};
    
    printf("Enter Elements of an array: \n");
    for(int i = 1; i <= arraySize; i++)
    {
        scanf("%d", &array[i]);
    }
findElement(array, arraySize);    
}