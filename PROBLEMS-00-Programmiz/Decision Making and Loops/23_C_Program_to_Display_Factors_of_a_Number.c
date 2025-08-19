#include<stdio.h>

int main()
{
    int NUMBER;
    int LOOP;

    printf("\n");

    printf("Enter Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 1 ; LOOP <= NUMBER ; LOOP ++) {
        if (NUMBER % LOOP == 0) {
            printf("%d ", LOOP);
        }
    }

    printf("\n");
    return 0;
}
