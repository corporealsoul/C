#include<stdio.h>

int main()
{
    int YEAR;
    printf("\n");

    printf("Enter year : ");
    scanf("%d", &YEAR);

    if (((YEAR % 4 == 0) && (YEAR % 100 != 0)) || ((YEAR % 100 == 0) && (YEAR % 400 == 0)))
    {
        printf("leap-year");
    }
    else {
        printf("Not a leap-year");
    }

    printf("\n");
    return 0;
}

