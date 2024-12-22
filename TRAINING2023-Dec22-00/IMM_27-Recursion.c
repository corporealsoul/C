#include<stdio.h>

int recursion_func1();
int recursion_func2();
int recursion_func3();
int recursion_func4();

int main()
{
    printf("\n");
        recursion_func1();
    printf("\n");
return 0;
}

int recursion_func1()
{
    int value = 1 + recursion_func2();
    printf("%d", value);
    return value;

}

int recursion_func2()
{
    int value = 2 + recursion_func3();
    return value;
}

int recursion_func3()
{
    int value = 3 + recursion_func4();
    return value;
}

int recursion_func4()
{
    int value = 4;
    return value;
}

