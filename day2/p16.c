//Check if a character is an alphanumeric

#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char ch = 'a';
    printf("Enter a character: ");
    scanf("%c", &ch);
 
    // checking is it alphanumeric or not?
    if (isalnum(ch))
        printf("\nEntered character is alphanumeric\n");
    else
        printf("\nEntered character is not alphanumeric\n");
}