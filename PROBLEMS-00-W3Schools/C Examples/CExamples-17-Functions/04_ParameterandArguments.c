#include<stdio.h>

int Functions(int, int);

int Functions(int a, int b)
{
    int add;
    add = a + b;
return add;
}


int main(){
printf("\n");

    int hold;
    int a = 4, b = 5;

    hold = Functions(a, b);
    printf("%d ", hold);

printf("\n\n");
return 0;
}