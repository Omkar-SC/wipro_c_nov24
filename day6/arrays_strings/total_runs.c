#include <stdio.h>

int findSumOfRuns(int *ptr, int size)
{
}
void readDetailsOfPlayers(int ptr[11][2])
{
    puts("Enter Jersy Number and the runs scored by the 11 players:");
    for (int i = 0; i < 11; i++)
    {
        printf("Enter Jersy Number of player-%d: ", i + 1);
        scanf("%d", &ptr[i][0]);
        printf("Enter runs scored by player-%d: ", i + 1);
        scanf("%d", &ptr[i][1]);
    }
}

void printDetailsOfPlayers(int players[11][2], int rows, int columns)
{
    puts("Details of the 11 players are\n");

    printf("-----------------------------------------------\n");
    printf("\tJersy Number \t Runs Scored\n");
    printf("-----------------------------------------------\n");
    
    for (int i = 0; i < 11; i++)
    {     
        printf("\t%2d \t" "\t%02d \n", players[i][0], players[i][1]);
        
    }
}

int main()
{
    int playerDetails[11][2] = {{0}}; // 11 rows and 2 columns
    readDetailsOfPlayers(playerDetails);
    printDetailsOfPlayers(playerDetails, 11, 2);
}