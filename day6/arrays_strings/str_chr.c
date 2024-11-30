#include <stdio.h>
#include <string.h>

int main() {
    char string1[20] = "123@gmail.com";
    char ch = '\0';
    char charNum = ""; 

    puts("Enter a character to search: ");
    scanf("%c", ch);

    charNum = strchr(string1, ch);

    printf("Reversed string is %s", charNum);

  return 0;
}