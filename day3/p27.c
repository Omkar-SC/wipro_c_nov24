#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[]) {
    int number1 = atoi(args[1]);
    int number2 = atoi(args[2]);
    for (int i = 1; i<= 20; i++)
    {
        printf("%d * %02d = %03d \t" "%d * %02d = %03d \n", number1, i , number1 * i, number2, i , number2 * i);
    }
}