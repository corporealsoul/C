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

    struct employee e1, e2, e3;

    e1.code = 007;
    strcpy(e1.name, "Anup");
    e1.salary = 80.55;

    printf("Code : ");
    scanf("%d", &e2.code);
    printf("Name : ");
    scanf("%s", &e2.name);
    printf("Salary : ");
    scanf("%f", &e2.salary);
    printf("\n");

    printf("%d %f %s ", e1.code, e1.salary, e1.name);
    printf("\n");

    printf("%d %f %s ", e2.code, e2.salary, e2.name);
    printf("\n");

printf("\n");
return 0;
}