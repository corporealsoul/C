// What is the heighst Number can devide the both

#include <stdio.h>

int main()
{
printf("\n");
    
    int given_number_one = 24, given_number_two = 36;
    int i_loop;

    for (i_loop =  given_number_one *  given_number_two; i_loop > 0; i_loop--)
    {
        if (given_number_one % i_loop == 0 && given_number_two % i_loop == 0) 
        {
            printf("%d", i_loop);
            break;
        }
    }
    printf(" \n");
printf("\n\n");
return 0;
}
