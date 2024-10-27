#include <stdio.h>

int main()
{
printf("\n");
    
    int loop_i, loop_j;
    int range = 20;
    int isPrime;

    for ( loop_i = 2; loop_i <= range; loop_i++)
    {
        isPrime = 1;

        for ( loop_j = 2; loop_j < loop_i; loop_j++)
        {
            if (loop_i % loop_j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1)
        {
            printf("%d ", loop_i);
        }
        
    }
    
printf("\n\n");
return 0;
}



