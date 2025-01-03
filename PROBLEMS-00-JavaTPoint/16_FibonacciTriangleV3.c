#include <stdio.h>

int main()
{
printf("\n");
    int previousTerm = 0, currentTerm = 1, nextTerm;
    int loopO, loopI;

    for (loopO = 0; loopO < 8; loopO++)
    {
        previousTerm = 0, currentTerm = 1;
        printf("%d ", 1);

        for (loopI = 0; loopI < loopO; loopI++)
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