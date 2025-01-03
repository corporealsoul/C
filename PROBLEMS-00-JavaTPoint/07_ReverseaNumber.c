#include<stdio.h>

int main()
{
printf("\n");

    int randomNumber = 23435, originalNumber = randomNumber, lastDigits, reverseNumber = 0;
    int loop;
    
    for (loop = 0; randomNumber > 0; loop++)
    {
        lastDigits = randomNumber % 10;
        reverseNumber = (reverseNumber * 10) + lastDigits;
        randomNumber = randomNumber / 10;
    }
    printf("\n");
    printf("The reversed Number : %d ", reverseNumber);
    
printf("\n\n");
return 0;
}