// Convert a upper case letter to small case

#include <stdio.h>
#include <ctype.h>

// int main() {
//     char ch = '\0';

//     puts("Enter a Charecter to convert to Upper Case: ");
//     scanf("%c", &ch);

//     ch = tolower(ch);

//     printf("%c", ch);
// }


// Convert a small case string to upper case

int main() {
    char str[]= "\0";
    char ch;
    int i = 0;

    puts("Enter a Charecter to convert to Upper Case: ");
    scanf("%s", &str);

    while (str[i]) {
        ch = str[i];
        putchar(tolower(ch));
        i++;

    }
        printf("%s", ch);
}