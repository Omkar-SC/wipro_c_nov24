//Implement Karpekar's constant program. Print the number of times the logic of finding the difference of 2 numbers had to be iterated.

#include <stdio.h>
#include <stdlib.h>

void sortDigits(int num, int descending) {
    int digits[4];
    int i, j, temp;

    for (i = 0; i < 4; i++) {
        digits[i] = num % 10;
        num /= 10;
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if ((descending && digits[i] < digits[j]) || (!descending && digits[i] > digits[j])) {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    num = 0;
    for (i = 0; i < 4; i++) {
        num = num * 10 + digits[i];
    }

    printf("%d ", num);
}

int main() {
    int num, count = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }

    while (num != 6174) {
        
        sortDigits(num, 1);
        int desc = num;

        sortDigits(num, 0);
        int asc = num;

        num = desc - asc;

        printf("%d - %d = %d\n", desc, asc, num);
        count++;
    }

    printf("Kaprekar's constant 6174 reached in %d iterations.\n", count);

    return 0;
}
