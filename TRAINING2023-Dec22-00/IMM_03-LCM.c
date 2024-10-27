// What is the least Number we can devide "by" both

#include <stdio.h>

int main()
{
printf("\n");
    
    int given_number_one = 24, given_number_two = 36;
    int i_loop;

    for (i_loop = 1; i_loop < given_number_one *  given_number_two; i_loop++)
    {
        if (i_loop % given_number_one == 0 && i_loop % given_number_two == 0) 
        {
            printf("%d", i_loop);
            break;
        }
    }
    printf(" \n");
printf("\n\n");
return 0;
}
