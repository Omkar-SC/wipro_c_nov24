// Check if the person can travel with following conditions:
// If it is raining, he cannot travel
// If it is sunny, he cannot travel if temperature is more than 35 Deg
// If it is cloudy and he cannot travel if it is lightning

#include <stdio.h>

int main() {
    char weather = 'a';
    char r = 'r', s = 's', c = 'c'; 
    int tempereature = 0; 
    int lightning = 0;
    puts("tell us how is the day, raining= r sunny= s cloudy= c select any two: ");
    scanf("%c", &weather);
    if (weather == s )
    {
        if(weather == s )
            printf("is tempereature more than 35 Deg \n choose 1.Yes 2.No: " );
            scanf("%d", &tempereature);
            if(tempereature == 1)
                printf("you can not travel");
            else
            printf("%c you can travel.");
    }
    else if(weather == c){
        printf("Are there lightning. \n choose 1.Yes 2.No: ");
        scanf("%d", &lightning);
            if(lightning == 1)
                printf("you can not travel");
            else
            printf("%c you can travel.");
        }
    else if(weather == r){
        printf("you can not travel");
    }
    else
        printf("Don't You Know the Weather Outside");
    }

