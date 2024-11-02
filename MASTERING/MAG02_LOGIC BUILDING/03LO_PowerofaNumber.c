#include<stdio.h>

int main(){

printf("\n");

    int base, power;
    int loop;
    int store = 1;

    printf("Base : ");
    scanf("%d", &base);

    printf("Power : ");
    scanf("%d", &power);

    for (loop = 1; loop <= power; loop++)
    {
        store = store * base;    
    }
    printf("%d ",store);
printf("\n");
return 0;
}