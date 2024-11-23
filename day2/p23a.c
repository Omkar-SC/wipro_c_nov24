// Find Biggest among 3 numbers

#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, num3 = 0, smallNum = 0;
    puts("Enter 3 Number to Find The Biggest");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3)
        printf("%d is Biggest: ", num1);
    else if(num2 > num3)
        printf("%d is Biggest: ", num2);
    else
        printf("%d is Biggest: ", num3);
}



//-------------------------- using ternary operator -----------------------------

// int main() {
//     int num1 = 0, num2 = 0, num3 = 0, bigNum = 0;
//     puts("Enter 3 Number to Find The Biggest");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     bigNum = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 :num3;
//         printf("%d is Biggest: ", bigNum);
        
// }