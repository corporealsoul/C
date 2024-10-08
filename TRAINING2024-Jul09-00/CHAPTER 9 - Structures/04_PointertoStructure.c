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

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    // printf("%d", (*ptr).code);
    printf("%d", ptr -> code);  // Same as above

    printf("\n");

printf("\n");
return 0;
}