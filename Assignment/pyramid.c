// Pyramid (Equilateral Triangle)

#include <stdio.h>

int main()
{
    int i =0;
    int j = 0; 
    int inputRows = 0;

    printf("Enter number of rows to be Print Pyramid: ");
    scanf("%d", &inputRows);

    for(i=1; i<=inputRows; i++)
    { 
        for(j=i; j<inputRows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    
}


