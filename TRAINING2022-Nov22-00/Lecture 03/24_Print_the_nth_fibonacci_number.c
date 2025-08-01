#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER = 10;
    int PAST = 1, PRESENT = 1, FUTURE = 0;

    for (LOOP = 1 ; LOOP <= NUMBER ; LOOP++) {
        PAST = PRESENT;
        PRESENT = FUTURE;
        FUTURE = PAST + PRESENT;
        printf("%d ", FUTURE);
    }

    printf("\n");
    return 0;
}