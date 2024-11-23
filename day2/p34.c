//Count digits in a number

#include <stdio.h>
#include <math.h>

int main(){
    int num = 0;
    int count = 0;
    
    printf("Enter a Number to Count Digits: ");
    scanf("%d", &num);

    while(num>0){
        count++;
        num = num/10;
    }
    printf("No. of digits = %d", count);

}