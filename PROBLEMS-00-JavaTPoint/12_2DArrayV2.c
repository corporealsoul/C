#include<stdio.h>

int main()
{
printf("\n");
    int array2D[3][3];
    int row_loop, column_loop;

    printf("Enter 6 elements:\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            scanf("%d", &array2D[row_loop][column_loop]);
        }
    }
    printf("\n");
    printf("2D Array:\n");
    for (row_loop = 0; row_loop < 3; row_loop++)
    {
        for (column_loop = 0; column_loop < 3; column_loop++)
        {
            printf("%d ", array2D[row_loop][column_loop]);
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}