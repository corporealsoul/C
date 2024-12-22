#include<stdio.h>

int product(int, int);

int main()
{
printf("\n");   
    int number, power;
    int loop;
    int store;

    printf("Number : ");
    scanf("%d", &number);
    
    printf("Power : ");
    scanf("%d", &power);

    int hold_return =product(number, power);
    printf("The PRODUCT : %d", hold_return);

printf("\n");
return 0;
}


int product(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return number * product(number, power - 1);
    }
}
