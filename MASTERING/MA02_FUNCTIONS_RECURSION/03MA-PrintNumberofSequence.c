#include<stdio.h>

void c_func(int number)
{
    if (number == 0)
    {
        return;
    }
    else
    {
        c_func(number - 1);
        printf("%d ", number);
    }
}

int main()
{
printf("\n");

    int number;
    number = 5;
    c_func(number);

printf("\n\n");
return 0;
}