#include<stdio.h>

int main (){

printf("\n");

    int arr[3][4] = {{00, 01, 02, 03}, {00, 01, 02, 03}, {00, 01, 02, 03}};

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