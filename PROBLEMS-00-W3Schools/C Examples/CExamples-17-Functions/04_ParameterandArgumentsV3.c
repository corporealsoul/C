#include<stdio.h>
#include<string.h>


int Functions(char[]);

int Functions(char name[])
{
    char names[10];
    printf("Enter name : ");
    scanf("%s", &names);

    strcpy(name, names);
return 0;
}

int main(){
printf("\n");
    char name[10]; 

    Functions(name);

    printf("Hi, %s ", name);

printf("\n\n");
return 0;
}