#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    printf("The input number is %d \n", inputNumber);
    int prime = 0;
    int count = 0;
    int num = 1;
        
    for (int i = 3; i <= sqrt(num); i += 2) {
                if (num % i == 0) {
                    count = 0;
        }
        count++;
}
