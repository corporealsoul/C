#include<stdio.h>

int main()
{
printf("\n");    
    int random_number;

    printf("Number : ");
    scanf("%d", &random_number);

    if(random_number < 0)
    {
        printf("Negative");
    }
    else if (random_number > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("You've entered 0");
    }
        
printf("\n");
return 0;
}