#include<stdio.h>

int main()
{
    int NUMBER;
    int LOOP;
    int STORE = 1;
    printf("\n");

    printf("Enter Number : ");
    scanf("%d", &NUMBER);

    for (LOOP = 1 ; LOOP <= NUMBER ; LOOP++) {
        STORE = STORE * LOOP;
    }

    printf("Factorial of %d is : %d", NUMBER, STORE);

    printf("\n");
    return 0;
}
