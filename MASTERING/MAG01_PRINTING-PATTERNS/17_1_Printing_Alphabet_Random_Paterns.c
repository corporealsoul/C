/*

A
B B
C C C
D D D D
E E E E E

*/


#include<stdio.h>

int main()
{
printf("\n");
    
    int row = 5, colomn = 5;
    int row_loop, colomn_loop;
    int count = 65;

    for (row_loop = 0; row_loop < row; row_loop++)
    {
        for (colomn_loop = 0; colomn_loop < colomn; colomn_loop++)
        {
            if (colomn_loop <= row_loop)
            {
                printf("%c ", count);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        count ++;
    }
    
printf("\n");
return 0;
}