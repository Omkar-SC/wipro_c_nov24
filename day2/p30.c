// Check if an alphabet is upper case

#include <stdio.h>
 
int main()
{
    char ch = 'a';
    printf("Enter a character: ");
    scanf("%c", &ch);
 
    if (ch >= 'A' && ch <= 'Z')
        printf("\nEntered character is Upper case\n");
    else
        printf("\nEntered character is not in Upper case\n");
}