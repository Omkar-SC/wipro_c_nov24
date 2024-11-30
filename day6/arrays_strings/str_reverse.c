#include <stdio.h>
#include <string.h>

int main() {
  char string1[20] = "Maharashtra";

  strrev(string1);

  printf("Reversed string is %s", string1);

  return 0;
}