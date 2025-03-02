#include<stdio.h>

int main()
{
printf("\n");
    int a = 5, b = 3;
    int incr;

    incr = (a > b) || (b++);
    printf("%d\n", incr);
    printf("%d\n", b);

printf("\n");
return 0;
}