#include<stdio.h>

int Functions(char[]);

int Functions(char name[])
{
    printf("Hello, %s", name);
return 0;
}

int main(){
printf("\n");

    Functions("Anup");

printf("\n\n");
return 0;
}