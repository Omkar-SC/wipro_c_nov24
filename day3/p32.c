// Check if a number is Palindrome

#include <stdio.h>
int main() {
  int num, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    // reversed integer is stored in reversed variable
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        // printf("%d \n", reversed);
        num /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}