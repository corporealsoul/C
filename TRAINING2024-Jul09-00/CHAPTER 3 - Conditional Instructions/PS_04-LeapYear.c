#include <stdio.h>

int main() {

    int year;

    printf("YEAR : ");
    scanf("%d", &year);

    printf("\n");

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("LeapYEAR");
    }
    else if (year % 400 == 0)
    {
        printf("LeapYEAR");
    }
    else
    {
        printf("Not a LeapYEAR");
    }

    printf("\n");

return 0;
}