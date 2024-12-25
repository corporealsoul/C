#include<stdio.h>

int main()
{
printf("\n");

    int randomNumber = 23432, originalNumber = randomNumber, lastDigits, reverseNumber = 0;
    int loop;
    
    for (loop = 0; randomNumber > 0; loop++)
    {
        lastDigits = randomNumber % 10;
        printf("%d ", lastDigits);

        reverseNumber = (reverseNumber * 10) + lastDigits;

        randomNumber = randomNumber / 10;
    }
    printf("\n");
    printf("%d ", reverseNumber);

    printf("\n");
    if (reverseNumber == originalNumber)
    {
        printf("Palindrome !");
    }
    else
    {
        printf("Not Palindrome !");
    }
    
printf("\n");
return 0;
}