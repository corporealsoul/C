#include<stdio.h>

int main()
{
    int NUMBER, REMAINDER, STORE = 0;
    int LOOP;
    int HOLD;

    printf("\n");

    printf("Your Number : ");
    scanf("%d", &NUMBER);

    HOLD = NUMBER;

    for (LOOP = 1 ; NUMBER != 0 ; LOOP++) {
        REMAINDER = NUMBER % 10;
        STORE = (STORE * 10) + REMAINDER;
        NUMBER = NUMBER / 10;
    }

    printf("Original : %d \n", HOLD);
    printf("Reverse : %d \n", STORE);

    printf("\n");
    if (HOLD == STORE) {
        printf("So, Palindrom");
    }
    else {
        printf("So, Not Palindrom");
    }

    printf("\n\n");
    return 0;
}
