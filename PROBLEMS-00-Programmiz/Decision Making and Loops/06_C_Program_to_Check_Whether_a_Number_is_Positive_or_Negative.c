#include<stdio.h>

int main()
{
    int NUMBER;
    printf("\n");

    printf("Enter Number : ");
    scanf("%d", &NUMBER);

    if (NUMBER > 0)
    {
        printf("Positive");
    }
    else if (NUMBER < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }

    printf("\n");
    return 0;
}

