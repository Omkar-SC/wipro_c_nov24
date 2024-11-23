// Check if a character is a digit or alphabet or a symbol

#include<stdio.h>
#include<ctype.h>

// int main() {
//     char ch;
//     printf("Enter A Character: ");
//     scanf("%c", &ch);

//     if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//         printf("It is an Alphabet");
//     else if (ch >= '0' && ch <= '9')
//         printf("it is a number");
//     else 
//         printf("it is a Symbol");

// }   

//---------------------------------------------------------------

int main() {
    char ch;
    printf("Enter A Character: ");
    scanf("%c", &ch);

    if(isalpha(ch))
        printf("It is an Alphabet");
    else if (isalnum(ch))
        printf("it is a number");
    else 
        printf("it is a Symbol");

} 