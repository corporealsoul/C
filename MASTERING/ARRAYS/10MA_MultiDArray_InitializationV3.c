#include<stdio.h>

int main (){

printf("\n");

    int arr[3][4];
    int arr1[3][4];
    int arr_add[3][4];


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter Numbers for first Matrix [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter Numbers for second Matrix [%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr_add[i][j] = arr[i][j] + arr1[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr_add[i][j]);
        }
        printf("\n");
    }

printf("\n");
return 0;
}