// Find sum of Even placed digits in a number

#include <stdio.h>

int main() {
    int inputNum = 0;
    int sumOfNum = 0;
    int position = 1;
    int reminderDigit = 0;

    printf("Enter a Number to Find sum of Even placed digits in a number: ");
    scanf("%d", &inputNum);

    while(inputNum !=0)
    {
        reminderDigit = inputNum % 10;
        if (position % 2 ==0){
            sumOfNum += reminderDigit;
        }
        position++;
        inputNum /= 10;
    }
    printf("The sum of Even placed digits in a number: %d", sumOfNum);
}