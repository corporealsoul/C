#include <stdio.h>
int main()
{
    printf("\n");

    int IntNumber;
    printf("Enter Number : ");
    scanf("%d", &IntNumber);

    if (IntNumber % 2 == 0)
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
    }

    printf("\n");
    return 0;
}