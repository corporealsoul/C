#include<stdio.h>

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

    store = number;
    
    for (loop = 1; loop < power; loop++)
    {
        store = store * number;
    }
    printf("The PRODUCT : %d", store);
printf("\n");
return 0;
}
