#include<stdio.h>

int fact(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * fact(number - 1);
    }
    
    
return 0;
}

int main()
{
printf("\n");

    int result;
    result = fact(5);

    printf("%d ", result);
    
printf("\n\n");
return 0;
}