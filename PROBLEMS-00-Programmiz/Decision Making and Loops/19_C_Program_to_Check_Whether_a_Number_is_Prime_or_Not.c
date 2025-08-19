#include<stdio.h>

int main()
{
    int NUMBER;
    int LOOP;
    int HOLD = 0;

    printf("\n");

    printf("Your Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 2 ; LOOP < NUMBER ; LOOP++) {
        if (NUMBER % LOOP == 0) {
            HOLD ++;
            break;
        }
    }
    if (HOLD > 0) {
        printf("Composite");
    }
    else {
        printf("Prime");
    }

    printf("\n");
    return 0;
}
