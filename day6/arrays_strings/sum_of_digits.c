// Find sum of digits of a number

#include <stdio.h>
#include <stdlib.h>

int sum_of_digit(int num)
{
    if (num == 0)
       return 0;
    return (num % 10 + sum_of_digit(num / 10));  
} 
     
int main(int argCount, char *args[])
{   
    int inputNum = atoi(args[1]);

    int sum = sum_of_digit(inputNum);
    printf("Sum of digits in %d is = %d\n", inputNum, sum );
}