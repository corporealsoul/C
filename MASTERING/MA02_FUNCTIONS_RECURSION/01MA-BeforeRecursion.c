#include<stdio.h>

int c_func()
{
    printf("Bye from c_func ! \n");
return 0;
}

int c_funct()
{
    printf("Hi From c_funct ! \n");
    c_func();
return 0;
}

int main()
{
printf("\n");

    c_func();
    c_funct();
    printf("Hi from main ! \n");
    
printf("\n\n");
return 0;
}