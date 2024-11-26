
/*Check if an alphabet is small case*/
#include <stdio.h>

int main() {
    char ch = 'c'  ;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("%c is an Lower Case.", ch);
    else 
        printf("%c is not an Lower Case.", ch);
}

