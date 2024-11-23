// Check if a letter is small case

#include <stdio.h>
 
int main()
{
    char ch = 'a';
    printf("Enter a character: ");
    scanf("%c", &ch);
 
    if (ch >= 'a' && ch <= 'z')
        printf("\nEntered character is small case\n");
    else
        printf("\nEntered character is not in small case\n");
}