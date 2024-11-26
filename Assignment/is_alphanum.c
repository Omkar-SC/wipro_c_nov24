#include <stdio.h>
 
int main()
{
    char ch = 'a';
    printf("Enter a character: ");
    scanf("%c", &ch);
 
    // checking is it alphanumeric or not?
    if (ch >= 'a' && ch <= 'z')
        printf("\nEntered character is small case\n");
    else
        printf("\nEntered character is not in small case\n");
}