#include <stdio.h>

int c_recursion(int number)
{
    if (number == 0)
    {
        return 0;
    }
    int store = c_recursion(number - 1);
    store += number;
    return store;
}

int main()
{
    int store;
    store = c_recursion(5);
    printf("%d\n", store);
    return 0;
}
