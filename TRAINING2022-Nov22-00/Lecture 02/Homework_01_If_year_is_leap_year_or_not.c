#include <stdio.h>
int main()
{
    printf("\n");
    int Year;

    printf("Year : ");
    scanf("%d",&Year);

    if(Year%400==0)
    {
        printf("%d : is a leap year\n", Year);
    }
    else if(Year%4==0)
    {
        if(Year%100==0)
        {
            printf("%d : is not a leap year\n", Year);
        }
        else
        {
            printf("%d : is a leap year\n", Year);
        }
    }
    else
    {
        printf("%d : is not a leap year\n", Year);
    }

    printf("\n");
    return 0;
}
