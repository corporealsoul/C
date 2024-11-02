/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

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
//                 printf("%d ", colomn_loop + 1);
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

                count ++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        count = 1;
    }
    
printf("\n");
return 0;
}