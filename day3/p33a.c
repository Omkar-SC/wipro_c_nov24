// Find sum of Odd placed Odd digits in a number


#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);
    while (inputNumber != 0)
    {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;
        if (flip == 0)
        {
            if(remainderDigit % 2 == 1)
            sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if(remainderDigit % 2 == 1)
            sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 1)
        printf("Sum of odd placed odd digits is %d", sumOfDigits1);
    else
        printf("Sum of odd placed odd digits is %d", sumOfDigits2);


}