#include<stdio.h>

int main()
{
    int NUMBER;
    int LOOP;
    int STORE = 1;
    printf("\n");

    printf("Enter Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 1 ; LOOP <= 10 ; LOOP++) {
        printf("%d X %d is : %d \n", NUMBER, LOOP, NUMBER * LOOP);
    }

    printf("\n");
    return 0;
}
