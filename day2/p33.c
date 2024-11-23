// Check if a number is Prime number. Discuss the need of setting the condition to root of input number and not n/2

#include <stdio.h>
#include <math.h>  

int main() {
    int num, i, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    // check for numbers less than 2
    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
    }
    else{
        
        // Loop only up to the square root of n to find factors of n
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                count++;  // Factor found
                break;
                }
            }
           
        if (count == 0) {
            printf("%d is a Prime number.\n", num);  
        }   else {
            printf("%d is not a Prime number.\n", num); 
        }
    }
}