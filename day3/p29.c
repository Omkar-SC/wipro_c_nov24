//Count the number of Even digits in a number

#include <stdio.h>
#include <stdlib.h>
/*
Read N
count = N
until N is not 0 do:
    REMAINDER_DIGIT = N % 10
    
    if REMAINDER_DIGIT % 2 is 0 then:
        count++
    N = N / 10
        
print value of count
*/
int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int even_digit, remainder_digit, count = 0;
    
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (remainder_digit % 2 == 0)
            count++;
        
        input_number = input_number / 10;
    }
    printf("Number of even digit is = %d", count);
}