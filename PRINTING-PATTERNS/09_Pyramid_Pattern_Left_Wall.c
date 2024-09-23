/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/


#include <stdio.h>

int main() {

    int first_outer_loop, first_inner_loop_one, first_inner_loop_two, first_inner_loop_three;
    int second_outer_loop, second_inner_loop_one, second_inner_loop_two, second_inner_loop_three;

    int count = 5;

printf("\n");

    for (size_t first_outer_loop = 0; first_outer_loop < count ; first_outer_loop++)
    {
        for (size_t first_inner_loop_one = 0; first_inner_loop_one < first_outer_loop + 1; first_inner_loop_one++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (size_t second_outer_loop = 0; second_outer_loop < count; second_outer_loop++)
    {
        for (size_t second_inner_loop_one = count - second_outer_loop; second_inner_loop_one > 1; second_inner_loop_one--)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    
printf("\n");
return 0;
}