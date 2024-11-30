#include "str_cpy.h"
#include <stdio.h>

int main() {
  char string1[20] = "Maharashtra";
  char string2[20];

  strCpy(string2, string1);

  printf("String 1 is %s and copied string is %s", string1, string2);

  return 0;
}