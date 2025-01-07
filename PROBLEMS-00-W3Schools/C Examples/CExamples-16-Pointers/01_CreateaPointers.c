#include<stdio.h>

int main(){
printf("\n");

    int name = 3;
    int *point_name = &name;

    printf("Value : %d \n", name);
    printf("\n");
    
    printf("Value : %d \n", &name);
    printf("Value : %d \n", point_name);
    printf("\n");

    printf("Value : %p \n", &name);
    printf("Value : %p \n", point_name);

printf("\n");
return 0;
}