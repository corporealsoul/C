#include<stdio.h>

int main()
{
    int NUMBER, REMAINDER;
    int NUMBER_TEMP;
    int LOOP;
    int HOLD = 0;

    printf("\n");

    printf("Your Number : ");
    scanf("%d", &NUMBER);

    NUMBER_TEMP = NUMBER;

    for (LOOP = 1 ; NUMBER > 0 ; LOOP++) {
        REMAINDER = NUMBER % 10;
        HOLD = HOLD + (REMAINDER * REMAINDER * REMAINDER);

        NUMBER = NUMBER / 10;
    }

    if (HOLD == NUMBER_TEMP) {
        printf("Armstrong");
    }
    else {
        printf("Not an Armstrong");
    }

    printf("\n");
    return 0;
}
