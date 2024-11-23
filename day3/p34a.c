// Find sum of the series: n + n2 + n3 + .... 10 terms

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argCount, char *args[])
{
    int termValue = atoi(args[1]);
    long long int sumOfTerms = 0;
    printf("N value = %d \n", termValue);

    for(int i = 1; i<= 10; i++)
    {
        sumOfTerms += pow(termValue, i-1)* pow(-1, i - 1);
    }
    printf("sum of %d", sumOfTerms);
}