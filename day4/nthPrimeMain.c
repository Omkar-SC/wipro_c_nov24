#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    printf("The input number to check nth prime Number is %d \n", inputNumber);
    // printf("The input number is %s \n", args[1]);
    if (checkPrime(inputNumber) == 0)
    {
        printf("%d", prime);
    }
        
    
}