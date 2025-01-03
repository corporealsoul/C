#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n");
    int binaryArray[10], decimalNumber, loop;

    system("cls");
    printf("Enter the number to convert : ");
    scanf("%d", &decimalNumber);

    for (loop = 0; decimalNumber > 0; loop++)
    {
        binaryArray[loop] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
    }
    printf("\n");

    printf("Binary of Given Number is : ");
    for (loop = loop - 1; loop >= 0; loop--)
    {
        printf("%d", binaryArray[loop]);
    }
printf("\n");
return 0;
}