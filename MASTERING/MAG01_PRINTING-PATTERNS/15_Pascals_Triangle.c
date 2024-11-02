/*



*/

#include<stdio.h>

int main()
{
printf("\n");
    
    int row = 5, colomn = 5;
    int row_loop, colomn_loop;
    int count = 1;

    for (row_loop = 0; row_loop < row; row_loop++)
    {
        for (colomn_loop = 0; colomn_loop <= row_loop; colomn_loop++)
        {
            printf("%d ", count);
            count ++;
        }
        printf("\n");
    }
    
printf("\n");
return 0;
}