#include<stdio.h>

int main()
{
    int NUMBER;
    printf("\n");

    printf("Number : ");
    scanf("%d", &NUMBER);

    if (NUMBER % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }

    printf("\n");
    return 0;
}

