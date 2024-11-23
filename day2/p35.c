//Find sum of the digits in a number

#include <stdio.h>
#include <math.h>

int main(){
    int num = 0;
    int sum = 0;
    
    printf("Enter a Number sum of the digits: ");
    scanf("%d", &num);

    while(num>0){
        sum += num % 10;
        num = num/10;
    }
    printf("Sum of digits = %d", sum);
}