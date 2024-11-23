// Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
// Allow the person to go out only if it is:
// 	1. only sunny
// 	2. sunny and raining

#include <stdio.h>

int main() {
    char weather1 = 'a', weather2 = 'b';
    char r = 'r', s = 's', c = 'c'; 
    puts("tell us how is the day, raining= r sunny= s cloudy= c select any two: ");
    scanf("%c %c", &weather1, &weather2);
    if (((weather1 || weather2) == s ) || ((weather1 == s ) && (weather2 == r )) || 
    ((weather1 == r ) && (weather2 == s )))
        printf("%c you can go out .");
    else
        printf("%c you can not go out.");
}

