#include<stdio.h>

int main()
{
    int NUMBER;
    int LOOP;

    printf("\n");

    printf("Your Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 0 ; NUMBER > 0 ; LOOP++) {
        NUMBER = NUMBER / 10;
    }
    printf("No of Digits : %d", LOOP);

    printf("\n");
    return 0;
}
