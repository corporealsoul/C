#include <stdio.h>

int main()
{
printf("\n");

    int inNum = 1, inACopy;
    int loopO, loopI;

    for (loopO = 1; loopO <= 5; loopO++)
    {
        inACopy = inNum;
        int limit = (2 * loopO - 1);

        for (loopI = 1; loopI <= limit; loopI++)
        {
            if (loopI <= limit / 2 + 1)
            {
                printf("%d ", inACopy);
                inACopy ++;
            }
            else
            {
                printf("%d ", inACopy - 2);
                inACopy --; 
            }
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}