#include "str_cpy.h"

char* strCpy(char* string2, const char* string1)
{
    int i = 0;
    for (; string1[i] != '\0'; i++)
    {
        string2[i] = string1[i];
    }
    string2[i] = '\0';
    return string2;
}