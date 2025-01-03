#include<stdio.h>

int main()
{
printf("\n");
    int array2DOne[3][3], array2DTwo[3][3], array2DThree[3][3];
    int arrayAddition[3][3];
    int row_loop, column_loop;

    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            array2DOne[row_loop][column_loop] = row_loop;
        }
    }
    printf("\n");


    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            array2DTwo[row_loop][column_loop] = (row_loop + 1);
        }
    }
    printf("\n");


    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            array2DThree[row_loop][column_loop] = (row_loop + 2);
        }
    }
    printf("\n");


    printf("array2DOne Array:\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            printf("%d ", array2DOne[row_loop][column_loop]);
        }
        printf("\n");
    }
    printf("\n");

    printf("array2DTwo Array:\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            printf("%d ", array2DTwo[row_loop][column_loop]);
        }
        printf("\n");
    }
    printf("\n");

    printf("array2DThree Array:\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            printf("%d ", array2DThree[row_loop][column_loop]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            arrayAddition[row_loop][column_loop] = array2DOne[row_loop][column_loop] + array2DTwo[row_loop][column_loop] + array2DThree[row_loop][column_loop];
        }
        printf("\n");
    }
    printf("\n");

    printf("Array addition :\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            printf("%d ", arrayAddition[row_loop][column_loop]);
        }
        printf("\n");
    }
    printf("\n");



printf("\n");
return 0;
}