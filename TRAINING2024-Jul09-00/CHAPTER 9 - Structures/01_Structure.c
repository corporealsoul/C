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

    struct employee e1, e2;

    e1.code = 007;
    strcpy(e1.name, "Anup");
    e1.salary = 80.55;    

    printf("%d %f %s ", e1.code, e1.salary, e1.name);

printf("\n");
return 0;
}