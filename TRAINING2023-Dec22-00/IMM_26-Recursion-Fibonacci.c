#include<stdio.h>

int recursion_func1(int);

int main()
{
    printf("\n");
        int range = 4;
        recursion_func1(range);
    printf("\n");
return 0;
}

int recursion_func1(int range)
{
    int value = 1;

    if (range == 1)
    {
        printf("1 ");
        return 1;
    }
    else
    {
        value = range * recursion_func1(range - 1);
        printf("%d ", value);
        return value;
    }
}
