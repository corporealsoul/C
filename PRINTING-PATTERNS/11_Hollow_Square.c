// /*

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// */

// #include <stdio.h>

// int main()
// {

//     int first_outer_loop;
//     int first_inner_loop_one, first_inner_loop_two, first_inner_loop_three;

//     int second_outer_loop;
//     int second_inner_loop_one, second_inner_loop_two, second_inner_loop_three;

//     int count = 5;

//     for (first_outer_loop = 1; first_outer_loop <= count; first_outer_loop++)
//     {
//         for (first_inner_loop_one = 1; first_inner_loop_one <= count; first_inner_loop_one++)
//         {
//             if (first_outer_loop == 1 || first_outer_loop == count || first_inner_loop_one == 1 || first_inner_loop_one == count)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }




#include <stdio.h>

int main()
{

    int first_outer_loop;
    int first_inner_loop_one, first_inner_loop_two, first_inner_loop_three;

    int second_outer_loop;
    int second_inner_loop_one, second_inner_loop_two, second_inner_loop_three;

    int count = 5;

printf("\n");

    for (first_outer_loop = 1; first_outer_loop <= count; first_outer_loop++)
    {
        for (first_inner_loop_one = 1; first_inner_loop_one <= count; first_inner_loop_one++)
        {
            if (first_outer_loop == 1 || first_outer_loop == count)
                printf("* ");
            else if (first_inner_loop_one == 1 || first_inner_loop_one == count)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

printf("\n");
return 0;
}
