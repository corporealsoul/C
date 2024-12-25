#include<stdio.h>

int findFactorial(int);

int main()
{
printf("\n");

    int randomNumber = 5;

    int holdIt = findFactorial(randomNumber);
    printf("Factorial of %d is: %d", randomNumber, holdIt);
    
printf("\n");
return 0;
}

int findFactorial(int randomNumber)
{
    if (randomNumber == 0)
    {
        return 1; 
    }
    else
    {
        return randomNumber * findFactorial(randomNumber - 1);
    }

}