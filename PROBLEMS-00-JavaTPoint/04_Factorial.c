#include<stdio.h>

int main()
{
printf("\n");

    int randomNumber = 5, originalNumber = randomNumber, factorials = 1;

    while (randomNumber > 0)
    {
        factorials = factorials * randomNumber; 
        randomNumber --;
    }

    printf("Factorial of %d is : %d", originalNumber, factorials);
    
printf("\n");
return 0;
}