#include<stdio.h>

int main()
{
printf("\n");
    int decimalNumber = 14, binaryNumber;
    int remainderNumber;
    int loop;

    for (loop = 0; decimalNumber > 0; loop++)
    {
        remainderNumber = decimalNumber % 2;

        if (remainderNumber == 1)
        {
            // binaryNumber = (binaryNumber * 10) + 1;

            binaryNumber = 1;
            printf("%d ", binaryNumber);
        }
        else
        {
            // binaryNumber = (binaryNumber * 10) + 0;

            binaryNumber = 0;
            printf("%d ", binaryNumber);
        }
        
        decimalNumber = decimalNumber / 2;
    }
    
printf("\n");
return 0;
} 