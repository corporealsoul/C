#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
printf("\n");

    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee anup = {100, 71.22, "Anup"};
    printf("%d %f %s ", anup.code, anup.salary, anup.name);

    printf("\n");

    printf("%d ", &anup.code);
    printf("%d ", &anup.salary);
    printf("%d ", &anup.name);

    printf("\n");

printf("\n");
return 0;
}