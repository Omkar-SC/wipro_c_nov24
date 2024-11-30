/*2D String Example:
Accept the strings from command line as given:
"karnataka bengaluru" "odhisa bhubaneswar" "sikkim gangtok" "tripura agartala" "goa panjim"

You can take any number of strings as you wish.
Each string is made up of state-capital pair which is seperated by space

Now, create 2 2D char arrays
states[10][32];
capitals[10][32];

Now seperate the states and capitals and store them in the given 2 arrays and print them with proper formatting.
*/

#include <stdio.h>
#include <string.h>

int main(int argCount, char *args[])
{
    char states[10][32] = {""};
    char capitals[10][32] = {""};
    char *addressOfSpace = NULL;
    int countOfChars = 0;

    for (int i = 1; i < argCount; i++)
    {
        addressOfSpace = strchr(args[i], ' ');
        countOfChars = addressOfSpace - args[i];
        strncpy(states[i - 1], args[i], countOfChars);
        strcpy(capitals[i - 1], addressOfSpace + 1);
    }

    printf("%-12s %-12s\n-------------------------\n", "STATE", "CAPITAL");
    for (int i = 0; i < argCount - 1; i++)
        printf("%-13s%s\n", states[i], capitals[i]);
}