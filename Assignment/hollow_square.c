// Hollow Square Pattern

#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int rows = atoi(args[1]);

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows; j++) {
            
            if (i > 0 && i < rows - 1 && j > 0
                && j < rows - 1) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}