#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER;
    int PAST = 1, PRESENT = 1, FUTURE = 0;

    printf("Enter Range : ");
    scanf("%d", &NUMBER);

    for (LOOP = 1 ; LOOP <= NUMBER ; LOOP++) {
        PAST = PRESENT;
        PRESENT = FUTURE;
        FUTURE = PAST + PRESENT;
        printf("%d ", FUTURE);
    }

    printf("\n");
    printf("The Nth term : %d", FUTURE);

    printf("\n");
    return 0;
}