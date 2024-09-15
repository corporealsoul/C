#include<stdio.h>

int main(){

    int a = 1;
    float b = 2;
    char c = 'A';

    printf("%d \n", a);
    printf("%f \n", b);
    printf("%c \n", c);
    printf("\n");

    printf("Size of Int : %zu bytes \n", sizeof(int));
    printf("Size of Float : %zu bytes \n", sizeof(char));
    printf("Size of Char : %zu bytes \n", sizeof(float));

return 0;
}