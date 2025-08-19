#include<stdio.h>

int main()
{
    int NUMBER, REMAINDER, STORE = 0;
    int LOOP;

    printf("\n");

    printf("Your Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 1 ; NUMBER != 0 ; LOOP++) {
        REMAINDER = NUMBER % 10;
        STORE = (STORE * 10) + REMAINDER;
        NUMBER = NUMBER / 10;
    }
    printf("No of Digits : %d", STORE);

    printf("\n");
    return 0;
}
