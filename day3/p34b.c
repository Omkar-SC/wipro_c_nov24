//Find sum of the series: 1 - n + n2 - n3 + .... m terms

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argCount, char *args[])
{
    int termValue = atoi(args[1]);
    int numberOfTrems = atoi(args[2]);
    long long int sumOfTerms = 0;
    printf("N value = %d, numberOfTrems = %d \n", termValue, numberOfTrems);

    for(int i = 1; i<= numberOfTrems; i++)
    {
        sumOfTerms += pow(termValue, i-1) * pow(-1, i - 1);
    }
    printf("sum of %d terms is %d", numberOfTrems, sumOfTerms);
}