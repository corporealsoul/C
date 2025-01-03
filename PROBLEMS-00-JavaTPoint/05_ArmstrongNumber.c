#include<stdio.h>
#include<math.h>


int main()
{
printf("\n");

    int randomNumber = 409, originalNumber = randomNumber, second_originalNumber = randomNumber, lastDigits, second_lastDigits, reverseNumber = 0, armstrongNumber = 0;
    int loop, second_loop;
    
    for (loop = 0; randomNumber > 0; loop++)
    {
        lastDigits = randomNumber % 10;
        printf("%d ", lastDigits);
        reverseNumber = (reverseNumber * 10) + lastDigits;
        randomNumber = randomNumber / 10;
    }
    printf("\n");
    printf("Reversed Number : %d ", reverseNumber);

    printf("\n");
    printf("Number of Digits : %d ", loop);

    printf("\n\n");
    for (second_loop = 0; originalNumber > 0; second_loop++)
    {
        second_lastDigits = originalNumber % 10;
        printf("%d ", second_lastDigits);
        // armstrongNumber = armstrongNumber + (second_lastDigits * second_lastDigits * second_lastDigits);
        armstrongNumber = armstrongNumber + pow(second_lastDigits, loop);
        originalNumber = originalNumber / 10;
    }
    printf("\n");
    if (second_originalNumber == armstrongNumber)
    {
        printf("%d : A armstrong number", second_originalNumber);
    }
    else
    {
        printf("%d : Not A armstrong number", second_originalNumber);
    }
printf("\n");
return 0;
}