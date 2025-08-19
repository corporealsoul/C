#include<stdio.h>

int main()
{
    int PAST = 1, PRESENT = 1, FUTURE = 0;
    int LOOP;
    int RANGE;
    printf("\n");

    printf("Enter RANGE : ");
    scanf("%d", &RANGE);

    for (LOOP = 1 ; LOOP <= RANGE ; LOOP++) {
        PAST = PRESENT;
        PRESENT = FUTURE;
        FUTURE = PAST + PRESENT;
        printf("%d ", PRESENT);
    }

    printf("\n");
    return 0;
}
