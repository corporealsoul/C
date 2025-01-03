#include <stdio.h>

int main()
{
printf("\n");

    int inAA = 65, inACopy;
    int loopO, loopI;

    for (loopO = 1; loopO <= 5; loopO++)
    {
        inACopy = inAA;
        int limit = (2 * loopO - 1);

        for (loopI = 1; loopI <= limit; loopI++)
        {
            if (loopI <= limit / 2 + 1)
            {
                printf("%c ", inACopy);
                inACopy ++;
            }
            else
            {
                printf("%c ", inACopy - 2);
                inACopy --; 
            }
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}