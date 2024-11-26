//Right Angled Triangle

#include <stdio.h>

int main() {
   int inputNum = 0;
   int i = 0;
   int j = 0;

   puts("Enter the Number of Steps to print Right Angled Triangle: ");
   scanf("%d", &inputNum);

   for(i = 1; i <= inputNum; i++) {
      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }
}