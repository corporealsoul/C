#include<stdio.h>

int main (){

printf("\n");

    int arr[3][4];

    arr[0][0] = 0;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[0][3] = 3;

    arr[1][0] = 10;
    arr[1][1] = 11;
    arr[1][2] = 12;
    arr[1][3] = 13;

    arr[2][0] = 20;
    arr[2][1] = 21;
    arr[2][2] = 22;
    arr[2][3] = 23;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");   
    }

printf("\n");
return 0;
}