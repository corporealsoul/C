#include<stdio.h>

int main(){

printf("\n");

    int range, facto = 1;
    int loop;

    printf("Range : ");
    scanf("%d",&range);

    for (loop = 1; loop <= range; loop++)
    {
        
        facto = facto * loop;    
    }
    printf("%d ",facto);
printf("\n");
return 0;
}