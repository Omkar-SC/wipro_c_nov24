// Find factorial of a number using recursion. (Bad Idea)

#include <stdio.h>
#include <stdlib.h>

int findFact(int num)
{
    if (num >= 1)
        return num * findFact(num - 1);
    return 1;
    
} 

int main(int argCount, char *args[])
{   
    int fact = atoi(args[1]);

    int sum = findFact(fact);
    printf("Factorial of %d is = %d\n", fact, sum );
}