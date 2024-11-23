// Find sum of Even placed digits in a number

/*  Read N
    initialize, sumOfDigits1, sumOfDigits2, flip, remainderDigit = 0
    Until N is not equal to 0 do:
        REMAINDER_DIGIT = N % 10  //gives last digit
        N = N / 10  // removes last digit
        if flip is 0
            add to sumOfDigits1
            change value of flip to 1
        else
            add to sumOfDigits2
            change value of flip to 0
    if flip is 0
        print value of sumOfDigits1
    esle 
        print value of sumOfDigits2

------------------ working of flip ----------------
12345678

flip=0

sum1=8+6+4+2
sum2=7+5+3+1

123456789

flip=1
sum1=9+7+5+3+1
sum2=8+6+4+2

*/

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
            sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of even placed digits is %d", sumOfDigits1);
    else
        printf("Sum of even placed digits is %d", sumOfDigits2);
}