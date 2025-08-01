#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER;
    int PAST = 1, PRESENT = 1, FUTURE = 0;

    printf("Enter Range : ");
    scanf("%d", &NUMBER);

    printf("\n");

    for (LOOP = 1 ; LOOP <= NUMBER ; LOOP++) {
        PAST = PRESENT;
        PRESENT = FUTURE;
        FUTURE = PAST + PRESENT;
        printf("Fibonacci at %d is : \t %d \n",LOOP, FUTURE);
    }

    printf("\n");
    printf("The Nth term value : %d", FUTURE);

    printf("\n");
    return 0;
}