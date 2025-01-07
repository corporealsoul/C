#include<stdio.h>

int main()
{
printf("\n\n");
    int dice = 1;

    while (dice <= 6) {
    if (dice < 6) {
        printf("No Yatzy\n");
    } else {
        printf("Yatzy!\n");
    }
    dice = dice + 1;
    }
printf("\n\n");
return 0;
}