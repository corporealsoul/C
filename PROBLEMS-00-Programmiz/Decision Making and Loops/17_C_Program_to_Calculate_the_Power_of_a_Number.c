#include<stdio.h>

int main()
{
    int BASE, POWER;
    int LOOP;
    int NUMBER = 1;

    printf("\n");

    printf("Base : ");
    scanf("%d", &BASE);

    printf("Power : ");
    scanf("%d", &POWER);

    for (LOOP = 1 ; LOOP <= POWER ; LOOP++) {
        NUMBER = NUMBER * BASE;
    }
    printf("%d to the power %d is : %d", BASE, POWER, NUMBER);

    printf("\n");
    return 0;
}
