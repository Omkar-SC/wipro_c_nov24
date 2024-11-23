// Program to check if a character is an alphabet

#include <stdio.h>
#include <ctype.h>
int main() {
    char ch = 'c'  ;
    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // if ((c >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    //     printf("%c is an alphabet.", ch);
    // else
    //     printf("%c is not an alphabet.", ch);

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
        printf("%c is an alphabet.", ch);
    else
        printf("%c is not an alphabet.", ch);
}