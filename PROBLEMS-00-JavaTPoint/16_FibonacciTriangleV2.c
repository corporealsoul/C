#include <stdio.h>

int main()
{
printf("\n");
    int previousTerm = 0, currentTerm = 1, nextTerm;
    int loopO, loopI;

    for (loopO = 0; loopO <= 5; loopO++)
    {
        for (loopI = 0; loopI <= loopO; loopI++)
        {
            nextTerm = previousTerm + currentTerm;
            printf("%d ", nextTerm);
            previousTerm = currentTerm;
            currentTerm = nextTerm;
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}