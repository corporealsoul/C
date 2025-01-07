#include<stdio.h>

int main()
{
printf("\n\n");
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
    }
    printf("The reversed number is: %d\n", revNumbers);
printf("\n\n");
return 0;
}