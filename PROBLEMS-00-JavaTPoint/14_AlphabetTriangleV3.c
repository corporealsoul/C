#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("\n");

    int inA = 97, inACopy, inAA = 65, inZ = 122, inZZ = 90;
    int loopO, loopI;

    for (loopO = 1; loopO <= 5; loopO++)
    {
        inACopy = inA;

        for (loopI = 1; loopI <= (2 * loopO - 1); loopI++)
        {
            printf("%c ", inACopy);
            inACopy ++;
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}