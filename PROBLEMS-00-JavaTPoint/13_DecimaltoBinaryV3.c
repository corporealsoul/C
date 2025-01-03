#include<stdio.h>

int main()
{
printf("\n");
    int decimalNumber = 14, binaryNumber, binaryArray[32];
    int remainderNumber;
    int loop = 0, printLoop;

    while (decimalNumber > 0)
    {
        remainderNumber = decimalNumber % 2;
        binaryArray[loop] = remainderNumber;
        decimalNumber = decimalNumber / 2;
        loop ++;
    }
    printf("\n");

    printf("Binary equivalent: ");
    for (printLoop = loop - 1; printLoop >= 0; printLoop--)
    {
        printf("%d", binaryArray[printLoop]);
    }
printf("\n");
return 0;
} 


