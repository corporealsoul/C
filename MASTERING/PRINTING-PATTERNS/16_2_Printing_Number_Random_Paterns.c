/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

// #include<stdio.h>

// int main()
// {
// printf("\n");
    
//     int row = 5, colomn = 5;
//     int row_loop, colomn_loop;

//     for (row_loop = 0; row_loop < row; row_loop++)
//     {
//         for (colomn_loop = 0; colomn_loop < colomn; colomn_loop++)
//         {
//             if (colomn_loop <= row_loop)
//             {
//                 printf("%d ", row_loop + 1);
//             }    
//         }
//         printf("\n");
//     }
    
// printf("\n");
// return 0;
// }










#include<stdio.h>

int main()
{
printf("\n");
    
    int row = 5, colomn = 5;
    int row_loop, colomn_loop;
    int count = 1;

    for (row_loop = 0; row_loop < row; row_loop++)
    {
        for (colomn_loop = 0; colomn_loop < colomn; colomn_loop++)
        {
            if (colomn_loop <= row_loop)
            {
                printf("%d ", count);
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