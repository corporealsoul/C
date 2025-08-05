#include<stdio.h>

int main()
{
    int int_number_one = 11, int_number_two = 20;

    if(int_number_one % 2 == 0)
    {
        printf ("%d : is EVEN", int_number_one);
    }
    else
    {
        printf ("%d : is ODD", int_number_one);
    }
return 0;
}




#include<stdio.h>

int main()
{
    int int_number_one = 11, int_number_two = 20;
    int i, range = 10;

    for(i = 0; i <= range ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
return 0;
}




#include<stdio.h>


int is_even(int range)
{
    int i;
    
    for(i = 0; i <= range ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int int_number_one = 11, int_number_two = 20;
    int i, range = 10;
    
    is_even(range);
    
return 0;
}




#include<stdio.h>

int main()
{
    int int_number_one = 11, int_number_two = 20;
    int i, range = 10;
    
    (int_number_one % 2 == 0) ? printf("%d : is Odd", int_number_one) : printf("%d : is Even", int_number_one);
    
return 0;
}

