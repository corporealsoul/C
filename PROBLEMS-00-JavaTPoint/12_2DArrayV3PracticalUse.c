#include<stdio.h>

int main()
{
printf("\n");
    int array2DOne[2][2] = {{1, 2}, {3, 4}};
    int array2Dtwo[2][2] = {{5, 6}, {7, 8}};
    int array2DStore[2][2];

    int row_loop, column_loop;

    for (row_loop = 0; row_loop < 2; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            array2DStore[row_loop][column_loop] = (array2DOne[row_loop][column_loop] * array2Dtwo[row_loop][column_loop]);
        }
        printf("\n");
    }

    printf("Array multiplication :\n");
    for (row_loop = 0; row_loop < 2; row_loop++)
    {
        for (column_loop = 0; column_loop < 2; column_loop++)
        {
            printf("%d ", array2DStore[row_loop][column_loop]);
        }
        printf("\n");
    }
    printf("\n");
    
printf("\n");
return 0;
}