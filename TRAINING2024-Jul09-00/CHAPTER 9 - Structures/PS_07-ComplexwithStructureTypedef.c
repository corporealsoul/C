#include<stdio.h>

typedef struct vector
{
    int real;
    int imaginary;
}Complex;


int main(){
    printf("\n");

    Complex c = {1, 2};

    printf("Value is :  %d + %di", c.real, c.imaginary);

    printf("\n");
return 0;
}