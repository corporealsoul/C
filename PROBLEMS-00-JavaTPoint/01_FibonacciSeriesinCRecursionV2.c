#include<stdio.h>

int fibonacci_function(int);

int main()
{
    int totalTerms;
    int loop;

    printf("Enter the number of terms: ");
    scanf("%d", &totalTerms);

    printf("Fibonacci Series: ");
    for (loop = 0; loop < totalTerms; loop++)
    {
        printf("%d ", fibonacci_function(loop));
    }
return 0;
}


int fibonacci_function(int remainingTerms)
{
    if (remainingTerms == 0) return 0;
    if (remainingTerms == 1) return 1;

    return fibonacci_function(remainingTerms - 1) + fibonacci_function(remainingTerms - 2);
}