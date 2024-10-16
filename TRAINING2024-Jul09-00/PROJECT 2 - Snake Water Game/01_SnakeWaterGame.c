#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("\n");

    srand(time(0));
    
    int computer = rand() % 3; 
    int player;

    printf("Choose (0) for Snake, Choose (1) for Water, and (2) for Gun : ");
    scanf("%d", &player);
    printf("\n");

    printf("You choose : %d\n", player);
    printf("Computer choose : %d\n", computer);
    printf("\n");

    if(player == 0 && computer == 0)
    {
        printf("It's a draw !\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Player wins !\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Player loose !\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Player loose !\n");
    } 
    else if (player == 1 && computer == 1)
    {
        printf("It's a draw !\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Player win !\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Player win !\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player loose !\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a draw !\n");
    }
    else
    {
        printf("Something went wrong !\n");
    }
    
printf("\n");
return 0;
}
