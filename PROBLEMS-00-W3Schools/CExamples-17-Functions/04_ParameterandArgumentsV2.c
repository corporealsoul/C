#include<stdio.h>
#include<string.h>


int Functions(char[]);

int Functions(char name[])
{
    strcpy(name, "Anup");
return 0;
}

int main(){
printf("\n");
    char name[10]; 

    Functions(name);

    printf("%s ", name);

printf("\n\n");
return 0;
}