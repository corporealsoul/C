#include<stdio.h>

int main(){
printf("\n");

    int name[30];

    printf("Enter your name : ");
    scanf("%s", name);
    printf("\n");

    printf("Address of Array, %d \n", &name);
    printf("Address of Array[0], %d \n", &name[0]);
    printf("Address of Array[1], %d \n", &name[1]);
    
printf("\n");
return 0;
}