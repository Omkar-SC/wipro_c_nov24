#include "string_concatinate.h"
#include <stdio.h>

int main()
{
    char string1[32] = "";
    printf("Enter string1: ");
    scanf("%s", string1);
    int length = strLen(string1);
    printf("Length of String is %d", length);
}