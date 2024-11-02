#include<stdio.h>

int main(){

printf("\n");

    int range, fibbo;
    int zero = 0, one = 1;
    int loop;

    printf("Range : ");
    scanf("%d",&range);

    printf("%d ", zero);
    printf("%d ", one );

    for (loop = 1; loop <= range; loop++)
    {
        fibbo = zero + one;
        printf("%d ",fibbo);    

        zero = one;
        one = fibbo;
    }
printf("\n");
return 0;
}