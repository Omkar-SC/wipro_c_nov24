// Program to check if a number is Even

#include <stdio.h>
#include <math.h>

int main()
{
    int inputNum = 0;
    puts("Enter a number to check if it is Even");
    scanf("%d", &inputNum);
    if (inputNum % 2 == 0)
        printf("%d is Even number", inputNum);
}


