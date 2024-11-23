// basic Switch Program

#include <stdio.h>

int main() {
    int dayNumber = 0;
    puts("Enter the Day Number to Print the Event: ");
    scanf("%d", dayNumber);

    switch(dayNumber){
        case 1: puts("Monday Sports Day"); break;
        case 2: puts("Tuesday Technical Day"); break;
        case 3: puts("Wednesday Cultural Day"); break;
        case 4: puts("Monday Ethnic Day"); break;
        case 5: puts("Monday Food Feast Day"); break;
        case 6: puts("Monday Charity Day"); break; 
    }
}