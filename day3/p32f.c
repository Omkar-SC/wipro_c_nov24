

#include <stdio.h>
#include <math.h>

int reverseNumber(int num) {
    int reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

void checkPalindrome(int inputNum, int reversed) {
    if (inputNum == reversed)
        printf("%d is a palindrome.\n", inputNum);
    else
        printf("%d is not a palindrome.\n", inputNum);
}

int main() {
    // Get the user input
    int inputNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &inputNum);

    // Reverse the number
    int reversed = reverseNumber(inputNum);

    // Check if the number is a palindrome
    checkPalindrome(inputNum, reversed);

    return 0;
}