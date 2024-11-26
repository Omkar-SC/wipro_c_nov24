// Find Biggest among 2 distinct numbers

#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, bigNum = 0;
    puts("Enter 2 Number to Find The Biggest");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
        printf("%d is Biggest: ", num1);
    else if(num2 > num1)
        printf("%d is Biggest: ", num2);
    else
        printf("Both Numbers Are Same");
}

// ------------------------ Using ternary operator ------------------------------------

// int main() {
//     int num1 = 0, num2 = 0, bigNum = 0;
//     puts("Enter 2 Number to Find The Biggest");
//     scanf("%d %d", &num1, &num2);
//     bigNum = (num1 > num2) ? num1 : num2;
//         printf("%d is Biggest: ", bigNum);
// }