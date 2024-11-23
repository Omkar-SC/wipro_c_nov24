// Check if the given input is a digit or not

#include <ctype.h>
#include <stdio.h>

int main() {
    char n = 'a';
    
    printf("Enter a character: ");
    scanf("%c", &n);
    
    if (isdigit(n))
        printf("%c is Numeric", n);   
    else
        printf("%c is NOT Numeric", n);
  
    return 0;
}