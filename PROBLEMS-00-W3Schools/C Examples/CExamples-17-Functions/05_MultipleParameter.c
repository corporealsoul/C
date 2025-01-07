#include<stdio.h>
#include<string.h>

int Functions(char[], int*);


int Functions(char name[], int *age)
{
    char names[10];
    printf("Enter name : ");
    scanf("%s", &names);
    strcpy(name, names);

    printf("Enter Age : ");
    scanf("%d", age);

return 0;
}


int main(){
printf("\n");
    char name[10];
    int age; 

    Functions(name, &age);

    printf("Hi, %s - Your age is : %d", name, age);

printf("\n\n");
return 0;
}