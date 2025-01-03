#include<stdio.h>

int main()
{
printf("\n");

    int numberOne = 5, numberTwo = 6, bowl;

    printf("NumberOne is NOW : %d \n", numberOne);
    printf("NumberTwo is NOW : %d \n", numberTwo);
    
    numberOne = numberOne * numberTwo;

    numberTwo = numberOne / numberTwo;
    numberOne = numberOne / numberTwo;

    printf("\n");
    printf("NumberOne is NOW : %d \n", numberOne);
    printf("NumberTwo is NOW : %d \n", numberTwo);
printf("\n\n");
return 0;
}