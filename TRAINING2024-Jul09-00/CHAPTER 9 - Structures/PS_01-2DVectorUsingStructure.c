#include<stdio.h>

struct vector
{
    int i;
    int j;
};


int main(){
    printf("\n");

    struct vector v = {1, 2};

    printf("Value of %di + %dj", v.i, v.j);

    printf("\n");
return 0;
}