

#include "string_concatinate.h"

int strLen(const char *userString)
{
    int i = 0;
    for (; userString[i] != '\0'; i++)
        ;
    return i;
}