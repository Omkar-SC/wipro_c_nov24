#include"nthPrime.h"
#include<math.h>
#include<stdio.h>

int checkPrime(int number) {
    int root = ceil(sqrt(number));
    int count = 0;
    int prime = 0;

    prime++;
    for(int i = 2; count <= number; i++)
    {
        if(number % i ==0 )
            count++;
    }   
    return prime;
} 