// Hollow Square Pattern

#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int rows = atoi(args[1]);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows; j++) {
            
            if (i == 1 || i == rows  || j == 1 || j == rows) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}