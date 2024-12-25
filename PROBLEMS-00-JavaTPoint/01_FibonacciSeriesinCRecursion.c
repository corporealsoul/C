#include<stdio.h>

int fibonacci_function(int);

int main()
{
printf("\n");
    int totalTerms = 10;

    if (totalTerms <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series : ");

    if (totalTerms >= 1) printf ("%d ", 0);
    if (totalTerms >= 2) printf ("%d ", 1);

    fibonacci_function(totalTerms - 2);
return 0;
}

int fibonacci_function(int remainingTerms)
{
    static int previousTerm = 0, currentTerm = 1, nextTerm;

    if (remainingTerms > 0)
    {
        nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;
        printf("%d ", nextTerm);

        fibonacci_function(remainingTerms - 1);
    }
    else
return 0;
}