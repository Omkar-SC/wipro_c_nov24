// Check if a number is 2 digit number

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num>=10 && num<100)
    {
        printf("Two digit positive number");
    }
    else
    {
        printf("Not two digit number");
    }
    
}