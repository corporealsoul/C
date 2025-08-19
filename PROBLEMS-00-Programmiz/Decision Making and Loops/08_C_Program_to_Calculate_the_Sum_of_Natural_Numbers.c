#include<stdio.h>

int main()
{
    int RANGE;
    int LOOP;
    int STORE = 0;
    printf("\n");

    printf("Enter Range : ");
    scanf("%d", &RANGE);

    for (LOOP = 1 ; LOOP <= RANGE ; LOOP++) {
        STORE = STORE + LOOP;
    }

    printf("Sum of Natural Numbers : %d", STORE);

    printf("\n");
    return 0;
}
