// Find Smallest among 3 numbers

#include <stdio.h>

// int main() {
//     int num1 = 0, num2 = 0, num3 = 0, smallNum = 0;
//     puts("Enter 3 Number to Find The Smallest");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     if(num1 < num2 && num1 < num3)
//         printf("%d is Smallest: ", num1);
//     else if(num2 < num3)
//         printf("%d is Smallest: ", num2);
//     else
//         printf("%d is Smallest: ", num3);
// }



//-------------------------- using ternary operator -----------------------------

int main() {
    int num1 = 0, num2 = 0, num3 = 0, smallNum = 0;
    puts("Enter 3 Number to Find The Smallesr");
    scanf("%d %d %d", &num1, &num2, &num3);
    smallNum = (num1 < num2 && num1 < num3) ? num1 : (num2 < num3) ? num2 :num3;
        printf("is Smallest: %d ", smallNum);
        
}