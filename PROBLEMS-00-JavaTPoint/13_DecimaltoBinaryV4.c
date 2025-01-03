#include<stdio.h>

void decimalToBinary(int);


int main()
{
printf("\n");
    int decimalNumber = 14;

    printf("Binary of %d is: ", decimalNumber);

    if (decimalNumber == 0)
    {
        printf("0");
    }
    else
    {
        decimalToBinary(decimalNumber);
    }
printf("\n");
return 0;
} 


void decimalToBinary(int decimalNumber)
{
    if (decimalNumber == 0)
    {
        return;
    }
    else
    {
        decimalToBinary(decimalNumber / 2);
        printf("%d", decimalNumber % 2);
    }
}

