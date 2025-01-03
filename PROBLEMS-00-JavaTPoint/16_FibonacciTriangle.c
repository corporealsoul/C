#include <stdio.h>

int main()
{
printf("\n");
    int randomRange = 10, fibonacciNumber;
    int previousTerm = 0, currentTerm = 1, nextTerm;
    int loop, loopO, loopI;

    for (loop = 0; loop < randomRange; loop++)
    {
        nextTerm = previousTerm + currentTerm;

        for (loopO = 0; loopO < 5; loopO++)
        {
            for (loopI = 0; loopI < loopO; loopI++)
            {
                printf("%d ", nextTerm);
            }
            printf("\n");
        }
        previousTerm = currentTerm;
        currentTerm = nextTerm;
    }
    
printf("\n");
return 0;
}