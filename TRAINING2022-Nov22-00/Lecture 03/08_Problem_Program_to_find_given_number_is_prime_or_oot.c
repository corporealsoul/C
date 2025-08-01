#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER;
    int FLAG = 0;
    int LOOP;

    printf("Number : ");
    scanf("%d", &NUMBER);

    if (NUMBER < 2) {
        printf("NOT PRIME\n");
        return 0;
    }

    for (LOOP = 2; LOOP < NUMBER; LOOP = LOOP + 1) {
        if (NUMBER % LOOP == 0) {
            FLAG ++;
            break;
        }
    }

    if (FLAG == 0) {
        printf("PRIME");
    }
    else {
        printf("NOT PRIME");
    }

    printf("\n");
    return 0;
}