#include <stdio.h>
// Program to check if a number is Even or not.

int main()
{
    int inputNum = 0;
    puts("Enter a number to check if it is Even");
    scanf("%d", &inputNum);
    if (inputNum % 2 == 0)
        printf("%d is Even number", inputNum);
    else
        printf("%d is not an Even number", inputNum);
}