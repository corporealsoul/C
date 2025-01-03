#include<stdio.h>

int main()
{
printf("\n");

    int randomNumber = 23432, originalNumber = randomNumber, lastDigits, reverseNumber = 0, sumOfDigits = 0;
    int loop;
    
    for (loop = 0; randomNumber > 0; loop++)
    {
        lastDigits = randomNumber % 10;
        sumOfDigits = sumOfDigits + lastDigits;
        randomNumber = randomNumber / 10;
    }
    printf("\n");
    printf("Sum of Digits : %d ", sumOfDigits);
    
printf("\n");
return 0;
}